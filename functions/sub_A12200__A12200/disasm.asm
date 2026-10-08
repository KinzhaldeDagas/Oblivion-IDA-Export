0xA12200: push    offset stru_BA7B80; ODismemberment: initializes BSFixedString 'bhkCollisionObject' for class-chain checks.
0xA12205: push    offset aBhkcollisionob; "bhkCollisionObject"
0xA1220A: mov     ecx, 0BA7D24h; this
0xA1220F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12214: retn
