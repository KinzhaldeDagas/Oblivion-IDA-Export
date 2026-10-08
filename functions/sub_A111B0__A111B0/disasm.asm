0xA111B0: push    offset NiRTTI_BSShaderLightingProperty; parent
0xA111B5: push    offset aTallgrassshade; "TallGrassShaderProperty"
0xA111BA: mov     ecx, offset stru_B43350; this
0xA111BF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA111C4: retn
