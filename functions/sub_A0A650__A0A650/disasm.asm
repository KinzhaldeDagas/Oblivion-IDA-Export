0xA0A650: push    offset stru_B3F68C; Initialize NiShadeProperty NiRTTI using its native NiProperty parent.
0xA0A655: push    offset aNishadepropert; "NiShadeProperty"
0xA0A65A: mov     ecx, offset NiRTTI_NiShadeProperty; this
0xA0A65F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A664: retn
