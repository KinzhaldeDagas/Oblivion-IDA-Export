0x9FEC80: push    offset NiRTTI_BSTempEffect; Verified (Oblivion RTTI): initializes NiRTTI_MagicHitEffect with parent NiRTTI_BSTempEffect.
0x9FEC85: push    offset aMagichiteffect; "MagicHitEffect"
0x9FEC8A: mov     ecx, offset NiRTTI_MagicHitEffect; this
0x9FEC8F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9FEC94: retn
