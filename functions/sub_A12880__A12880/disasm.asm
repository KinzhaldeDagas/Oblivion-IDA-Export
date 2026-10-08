0xA12880: push    offset stru_BA8358; parent
0xA12885: push    offset aBhkfixedconstr; "bhkFixedConstraint"
0xA1288A: mov     ecx, offset stru_BA80D4; this
0xA1288F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12894: retn
