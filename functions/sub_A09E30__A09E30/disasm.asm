0xA09E30: push    offset stru_B3FD5C; parent
0xA09E35: push    offset aNilines; "NiLines"
0xA09E3A: mov     ecx, offset stru_B3FCDC; this
0xA09E3F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09E44: retn
