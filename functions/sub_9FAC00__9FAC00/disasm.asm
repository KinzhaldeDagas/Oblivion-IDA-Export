0x9FAC00: push    offset NiRTTI_BSTempEffect; parent
0x9FAC05: push    offset aBstempeffectde; "BSTempEffectDecal"
0x9FAC0A: mov     ecx, offset NiRTTI_BSTempEffectDecal; this
0x9FAC0F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9FAC14: retn
