0xA12020: push    offset NiRTTI_SpeedTreeShaderLightingProperty; parent
0xA12025: push    offset aSpeedtreefro_0; "SpeedTreeFrondShaderProperty"
0xA1202A: mov     ecx, offset stru_B478B0; this
0xA1202F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12034: retn
