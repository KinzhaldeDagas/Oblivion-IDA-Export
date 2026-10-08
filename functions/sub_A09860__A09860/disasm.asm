0xA09860: push    offset stru_B3FC98; parent
0xA09865: push    offset aNibsbonelodcon; "NiBSBoneLODController"
0xA0986A: mov     ecx, offset stru_B3F52C; this
0xA0986F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09874: retn
