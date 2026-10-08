0x9FD3B0: push    offset stru_B3FC98; parent
0x9FD3B5: push    offset aBsdoorhavokcon; "BSDoorHavokController"
0x9FD3BA: mov     ecx, offset stru_B3B808; this
0x9FD3BF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9FD3C4: retn
