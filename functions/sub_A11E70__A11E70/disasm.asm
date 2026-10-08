0xA11E70: push    offset stru_B44F90; parent
0xA11E75: push    offset aSkinshader; "SkinShader"
0xA11E7A: mov     ecx, offset stru_B47768; this
0xA11E7F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11E84: retn
