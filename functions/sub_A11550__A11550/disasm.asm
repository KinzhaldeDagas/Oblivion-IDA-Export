0xA11550: push    offset NiRTTI_BSShaderLightingProperty; Initialize BSShaderPPLightingProperty NiRTTI using parent NiRTTI_BSShaderLightingProperty.
0xA11555: push    offset aBsshaderppligh; "BSShaderPPLightingProperty"
0xA1155A: mov     ecx, offset NiRTTI_BSShaderPPLightingProperty; this
0xA1155F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11564: retn
