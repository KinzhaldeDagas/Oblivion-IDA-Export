0xA12500: push    offset stru_BA7D78; parent
0xA12505: push    offset aBhkbvtreeshape; "bhkBvTreeShape"
0xA1250A: mov     ecx, offset stru_BA7F9C; this
0xA1250F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12514: retn
