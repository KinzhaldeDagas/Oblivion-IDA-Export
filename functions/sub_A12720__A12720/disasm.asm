0xA12720: push    offset stru_BA7F6C; parent
0xA12725: push    offset aBhkcachingshap; "bhkCachingShapePhantom"
0xA1272A: mov     ecx, offset stru_BA8050; this
0xA1272F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12734: retn
