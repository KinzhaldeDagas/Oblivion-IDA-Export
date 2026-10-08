0xA09840: push    offset stru_B3FD44; parent
0xA09845: push    offset aBsbound; "BSBound"
0xA0984A: mov     ecx, offset stru_B3F4BC; this
0xA0984F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09854: retn
