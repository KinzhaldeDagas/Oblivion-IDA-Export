0xA10670: push    offset stru_B41E14; parent
0xA10675: push    offset aNipsysmodifi_2; "NiPSysModifierBoolCtlr"
0xA1067A: mov     ecx, offset stru_B41F2C; this
0xA1067F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA10684: retn
