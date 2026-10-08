0xA10800: push    offset stru_B41E14; parent
0xA10805: push    offset aNipsysmodifi_3; "NiPSysModifierFloatCtlr"
0xA1080A: mov     ecx, offset stru_B41F8C; this
0xA1080F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA10814: retn
