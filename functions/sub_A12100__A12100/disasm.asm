0xA12100: push    offset stru_B3FB00; parent
0xA12105: push    offset aBhknicollision; "bhkNiCollisionObject"
0xA1210A: mov     ecx, offset stru_BA7B80; this
0xA1210F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12114: retn
