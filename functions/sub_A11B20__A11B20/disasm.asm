0xA11B20: push    offset NiRTTI_BSShaderPPLightingProperty; Construct exact SpeedTreeShaderPPLightingProperty RTTI.
0xA11B25: push    offset aSpeedtreeshade; "SpeedTreeShaderPPLightingProperty"
0xA11B2A: mov     ecx, offset NiRTTI_SpeedTreeShaderPPLightingProperty; this
0xA11B2F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11B34: retn
