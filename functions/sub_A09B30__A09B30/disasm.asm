0xA09B30: push    offset stru_B3F68C; parent
0xA09B35: push    offset aNiwireframepro; "NiWireframeProperty"
0xA09B3A: mov     ecx, offset stru_B3F988; this
0xA09B3F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09B44: retn
