# Assignment - 1  
Discover VMX features present in your processor by writing a Linux kernel module that queries these features.

## Discovering VMX Features  
  
1. Determine if your CPU supports VMX true controls  
2. Based on the above, read various MSRs to ascertain support capabilities/features  
   Entry / Exit / Procbased / Secondary Procbased / Pinbased controls  
3. For each group of controls above, interpret and output the values read from the MSR to the systemvia printk(..), 
   including if the value can be set or cleared.
