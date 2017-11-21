#include <cpuid.h>
#include <iostream>
#include <map>
#include <string>
#include <stdint.h>

using namespace std;

struct CPUVendorID {
    uint32_t ebx;
    uint32_t edx;
    uint32_t ecx;

    string toString() const {
        return string(reinterpret_cast<const char *>(this), 12);
    }
};

int main() {	
    uint32_t eax, ebx, ecx, edx;

    //Call CPUID(0)
    __cpuid(0x0, eax, ebx, ecx, edx);
    CPUVendorID vendorID { .ebx = ebx, .edx = edx, .ecx = ecx };
    string vendorIDString = vendorID.toString();
    cout << "CPUID (0x0) Brand String = " << vendorIDString << endl;

    //Call CPUID(0x4FFFFFFF) - Enable false cpu name
    __cpuid(0x4FFFFFFF, eax, ebx, ecx, edx);
    cout << "CPUID (0x4FFFFFFF)" << endl;

    //Call CPUID(0)
    __cpuid(0x0, eax, ebx, ecx, edx);
    CPUVendorID vendorID1 { .ebx = ebx, .edx = edx, .ecx = ecx };
    vendorIDString = vendorID1.toString();
    cout << "CPUID (0x0) Brand String = " << vendorIDString << endl;

    //Call CPUID(0x4FFFFFFF) - Disable false cpu name
    __cpuid(0x4FFFFFFF, eax, ebx, ecx, edx);
    cout << "CPUID (0x4FFFFFFF)" << endl;

    //Call CPUID(0)
    __cpuid(0x0, eax, ebx, ecx, edx);
    CPUVendorID vendorID2 { .ebx = ebx, .edx = edx, .ecx = ecx };
    vendorIDString = vendorID2.toString();
    cout << "CPUID (0x0) Brand String = " << vendorIDString << endl;

}
