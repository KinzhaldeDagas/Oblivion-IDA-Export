0xA11E20: push    offset stru_B44F90; parent
0xA11E25: push    offset aParallaxshader; "ParallaxShader"
0xA11E2A: mov     ecx, offset stru_B47614; this
0xA11E2F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11E34: retn
