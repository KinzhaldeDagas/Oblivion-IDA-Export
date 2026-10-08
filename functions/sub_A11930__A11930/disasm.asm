0xA11930: push    offset NiRTTI_BSShaderProperty; Initialize BSShaderLightingProperty NiRTTI using parent NiRTTI_BSShaderProperty.
0xA11935: push    offset aBsshaderlighti; "BSShaderLightingProperty"
0xA1193A: mov     ecx, offset NiRTTI_BSShaderLightingProperty; this
0xA1193F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11944: retn
