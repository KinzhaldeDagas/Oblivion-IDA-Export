0xA0D760: push    offset stru_B41F8C; parent
0xA0D765: push    offset aNipsysgravitys; "NiPSysGravityStrengthCtlr"
0xA0D76A: mov     ecx, offset stru_B412EC; this
0xA0D76F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0D774: retn
