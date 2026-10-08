0xA09F10: push    offset stru_B3FA88; parent
0xA09F15: push    offset aNilight; "NiLight"
0xA09F1A: mov     ecx, offset stru_B3FD14; this
0xA09F1F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09F24: retn
