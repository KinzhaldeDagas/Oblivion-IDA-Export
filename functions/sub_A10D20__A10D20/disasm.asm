0xA10D20: push    offset stru_B3FD1C; parent
0xA10D25: push    offset aBsshaderaccumu; "BSShaderAccumulator"
0xA10D2A: mov     ecx, offset stru_B42CEC; this
0xA10D2F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA10D34: retn
