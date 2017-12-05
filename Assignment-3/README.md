# Assignment - 3  
 Learn how to place instrumentation in the KVM hypervisor. This will be used to determine the frequency of each type of exit, and how long is spent processing the exits.   
   
##  Instrumenting KVM  
 Add counters into the KVM that track the following information:  
 • Total number of exits (for each type of exit KVM enables)  
 • Max/Min/Average number of CPU cycles for each exit type  
 • Total amount of cycles spent processing all exits
