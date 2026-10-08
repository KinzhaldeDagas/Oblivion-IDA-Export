0xA11B40: push    offset NiRTTI_BSShaderLightingProperty; Construct SpeedTreeShaderLightingProperty RTTI.
0xA11B45: push    offset aSpeedtreesha_0; "SpeedTreeShaderLightingProperty"
0xA11B4A: mov     ecx, offset NiRTTI_SpeedTreeShaderLightingProperty; this
0xA11B4F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11B54: retn
