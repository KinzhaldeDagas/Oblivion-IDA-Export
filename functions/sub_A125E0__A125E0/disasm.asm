0xA125E0: push    offset stru_BA7D2C; parent
0xA125E5: push    offset aBhkspcollision; "bhkSPCollisionObject"
0xA125EA: mov     ecx, offset stru_BA7FE0; this
0xA125EF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA125F4: retn
