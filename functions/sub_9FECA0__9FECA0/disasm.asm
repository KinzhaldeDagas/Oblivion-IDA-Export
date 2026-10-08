0x9FECA0: push    offset NiRTTI_MagicHitEffect; Verified (Oblivion RTTI): initializes NiRTTI_MagicModelHitEffect with parent NiRTTI_MagicHitEffect.
0x9FECA5: push    offset aMagicmodelhite; "MagicModelHitEffect"
0x9FECAA: mov     ecx, offset NiRTTI_MagicModelHitEffect; this
0x9FECAF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9FECB4: retn
