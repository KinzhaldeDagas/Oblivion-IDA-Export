0xA09F30: push    offset stru_B40110; parent
0xA09F35: push    offset aNialphaaccumul; "NiAlphaAccumulator"
0xA09F3A: mov     ecx, offset stru_B3FD1C; this
0xA09F3F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09F44: retn
