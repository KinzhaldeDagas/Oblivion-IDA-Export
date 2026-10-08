0xA11AE0: push    offset NiRTTI_SpeedTreeShaderLightingProperty; Construct separate SpeedTreeLeafShaderProperty RTTI using lighting parent.
0xA11AE5: push    offset aSpeedtreelea_0; "SpeedTreeLeafShaderProperty"
0xA11AEA: mov     ecx, offset NiRTTI_SpeedTreeLeafShaderProperty; this
0xA11AEF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11AF4: retn
