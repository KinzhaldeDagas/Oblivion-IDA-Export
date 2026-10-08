0xA11F80: push    offset NiRTTI_BSShaderPPLightingProperty; Initialize exact Lighting30ShaderProperty NiRTTI using parent NiRTTI_BSShaderPPLightingProperty.
0xA11F85: push    offset aLighting30sh_0; "Lighting30ShaderProperty"
0xA11F8A: mov     ecx, offset NiRTTI_Lighting30ShaderProperty; Target NiRTTI_Lighting30ShaderProperty B47860; no other initializer references it as a parent.
0xA11F8F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11F94: retn
