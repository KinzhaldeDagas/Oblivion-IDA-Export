0xA11500: push    0B4257Ch; parent
0xA11505: push    offset aShadowlightsha; "ShadowLightShader"
0xA1150A: mov     ecx, offset stru_B44F90; this
0xA1150F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11514: retn
