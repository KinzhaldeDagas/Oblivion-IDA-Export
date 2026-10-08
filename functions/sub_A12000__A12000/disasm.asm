0xA12000: push    offset NiRTTI_BSShaderPPLightingProperty; parent
0xA12005: push    offset aHairshaderprop; "HairShaderProperty"
0xA1200A: mov     ecx, offset stru_B478A0; this
0xA1200F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12014: retn
