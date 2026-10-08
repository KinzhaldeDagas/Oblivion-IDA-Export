0xA12220: push    offset stru_BA7B80; parent
0xA12225: push    offset aBhkpcollisiono; "bhkPCollisionObject"
0xA1222A: mov     ecx, offset stru_BA7D2C; this
0xA1222F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12234: retn
