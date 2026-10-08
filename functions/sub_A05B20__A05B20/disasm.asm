0xA05B20: push    offset stru_B3ED14; parent
0xA05B25: push    offset aNilightdimmerc; "NiLightDimmerController"
0xA05B2A: mov     ecx, offset stru_B3DFA4; this
0xA05B2F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA05B34: retn
