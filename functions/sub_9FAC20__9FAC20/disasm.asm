0x9FAC20: push    offset NiRTTI_BSTempEffect; parent
0x9FAC25: push    offset aBstempeffectge; "BSTempEffectGeometryDecal"
0x9FAC2A: mov     ecx, offset NiRTTI_BSTempEffectGeometryDecal; this
0x9FAC2F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9FAC34: retn
