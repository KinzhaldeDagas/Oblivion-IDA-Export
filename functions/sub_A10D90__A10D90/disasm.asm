0xA10D90: push    offset NiRTTI_BSShaderLightingProperty; parent
0xA10D95: push    offset aDistantlodshad; "DistantLODShaderProperty"
0xA10D9A: mov     ecx, offset stru_B42D68; this
0xA10D9F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA10DA4: retn
