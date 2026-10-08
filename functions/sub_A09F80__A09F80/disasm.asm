0xA09F80: push    offset stru_B3F95C; parent
0xA09F85: push    offset aNisourcecubema; "NiSourceCubeMap"
0xA09F8A: mov     ecx, offset stru_B3FD34; this
0xA09F8F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09F94: retn
