0xA0CF90: push    offset stru_B41F8C; parent
0xA0CF95: push    offset aNipsysinitia_2; "NiPSysInitialRotSpeedVarCtlr"
0xA0CF9A: mov     ecx, offset stru_B41108; this
0xA0CF9F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0CFA4: retn
