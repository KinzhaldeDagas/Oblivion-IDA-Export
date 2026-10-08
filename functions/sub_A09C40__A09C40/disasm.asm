0xA09C40: push    offset stru_B3F68C; parent
0xA09C45: push    offset aNimaterialprop; "NiMaterialProperty"
0xA09C4A: mov     ecx, offset stru_B3FA9C; this
0xA09C4F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09C54: retn
