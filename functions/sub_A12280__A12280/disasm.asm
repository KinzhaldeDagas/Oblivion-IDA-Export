0xA12280: push    offset stru_BA7C00; ODismemberment: initializes BSFixedString 'bhkConstraint' for class-chain checks.
0xA12285: push    offset aBhkconstraint; "bhkConstraint"
0xA1228A: mov     ecx, 0BA7D50h; this
0xA1228F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12294: retn
