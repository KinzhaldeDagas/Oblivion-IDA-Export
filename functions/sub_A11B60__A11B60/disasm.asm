0xA11B60: push    offset NiRTTI_BSShaderProperty; parent
0xA11B65: push    offset aBoltshaderprop; "BoltShaderProperty"
0xA11B6A: mov     ecx, offset stru_B468EC; this
0xA11B6F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11B74: retn
