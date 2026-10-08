0x9FECC0: push    offset NiRTTI_MagicHitEffect; Verified (Oblivion RTTI): initializes NiRTTI_MagicShaderHitEffect with parent NiRTTI_MagicHitEffect.
0x9FECC5: push    offset aMagicshaderhit; "MagicShaderHitEffect"
0x9FECCA: mov     ecx, offset NiRTTI_MagicShaderHitEffect; this
0x9FECCF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9FECD4: retn
