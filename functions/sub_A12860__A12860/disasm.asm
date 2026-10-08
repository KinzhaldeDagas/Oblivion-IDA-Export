0xA12860: push    0BA7D50h; parent
0xA12865: push    offset aBhkprismaticco; "bhkPrismaticConstraint"
0xA1286A: mov     ecx, offset stru_BA80C8; this
0xA1286F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12874: retn
