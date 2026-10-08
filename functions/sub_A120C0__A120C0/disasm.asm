0xA120C0: push    0BA7D24h; ODismemberment: initializes BSFixedString 'bhkBlendCollisionObject' for class-chain checks.
0xA120C5: push    offset aBhkblendcollis; "bhkBlendCollisionObject"
0xA120CA: mov     ecx, 0BA7A20h; this
0xA120CF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA120D4: retn
