0xA11F60: push    offset NiRTTI_BSShaderProperty; parent
0xA11F65: push    offset aWatershaderpro; "WaterShaderProperty"
0xA11F6A: mov     ecx, offset stru_B47848; this
0xA11F6F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11F74: retn
