0x9FAC40: push    offset NiRTTI_BSTempEffect; parent
0x9FAC45: push    offset aBstempeffectpa; "BSTempEffectParticle"
0x9FAC4A: mov     ecx, offset NiRTTI_BSTempEffectParticle; this
0x9FAC4F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9FAC54: retn
