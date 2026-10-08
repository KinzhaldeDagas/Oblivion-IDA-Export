0xA0BB40: push    offset stru_B40D08; parent
0xA0BB45: push    offset aNipsysgravitym; "NiPSysGravityModifier"
0xA0BB4A: mov     ecx, offset stru_B40C3C; this
0xA0BB4F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0BB54: retn
