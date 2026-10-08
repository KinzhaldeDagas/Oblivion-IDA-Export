0xA09460: push    offset stru_B3CCB0; parent
0xA09465: push    offset aNiextradatacon; "NiExtraDataController"
0xA0946A: mov     ecx, offset stru_B3EF5C; this
0xA0946F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09474: retn
