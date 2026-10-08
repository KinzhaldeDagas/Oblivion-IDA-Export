0xA12400: push    offset stru_B3FC98; ODismemberment: initializes BSFixedString 'bhkBlendController' for class-chain checks.
0xA12405: push    offset aBhkblendcontro; "bhkBlendController"
0xA1240A: mov     ecx, 0BA7F3Ch; this
0xA1240F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12414: retn
