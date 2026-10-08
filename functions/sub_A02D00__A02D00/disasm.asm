0xA02D00: push    offset stru_B3CC5C; parent
0xA02D05: push    offset aNiblendaccumtr; "NiBlendAccumTransformInterpolator"
0xA02D0A: mov     ecx, offset stru_B3CD1C; this
0xA02D0F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA02D14: retn
