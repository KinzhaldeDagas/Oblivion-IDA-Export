0xA09FC0: push    offset stru_B3F684; parent
0xA09FC5: push    offset aNiextradata; "NiExtraData"
0xA09FCA: mov     ecx, offset stru_B3FD44; this
0xA09FCF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09FD4: retn
