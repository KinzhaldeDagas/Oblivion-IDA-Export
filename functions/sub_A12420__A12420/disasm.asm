0xA12420: push    offset stru_BA7D78; parent
0xA12425: push    offset aBhksphererepsh; "bhkSphereRepShape"
0xA1242A: mov     ecx, offset stru_BA7F48; this
0xA1242F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12434: retn
