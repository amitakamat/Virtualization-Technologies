# Assignment - 2  
Modify processor instruction behaviour inside the KVM hypervisor. 
  
Assignment is to modify the CPUID emulation code in KVM to report back a fictitious processor brand string (CPUID leaf 0x0)
1. You also need to create a new CPUID leaf function (0x4FFFFFFF) that disables/enables (toggles) the functionality above
2. The functionality should initially start in the ‘disabled’ state•The functionality is applied hypervisor-wide
 
 ## At a high level, you will need to perform the following:
 1. Configure a Linux machine, either VM based or on real hardware.   
 2. You may use any Linux distribution you wish, but it must support the KVM hypervisor.  
 3. Download and build the Linux kernel source code•Modify the kernel code with the assignment functionality◦Intercept CPUID leaf 0x0  
 4. Report ‘CMPE_283CMPE’ as the processor brand string in EBX...EDX if the functionality is enabled, 
 or the default value from the underlying CPU if the functionality is disabled at the time of the call  
 5. Set EAX to the same value as returned by the underlying CPU  
 6. Create a user-mode program that performs various CPUID instructions required to test your assignment  
 7. Verify proper output
