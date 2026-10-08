0xA122E0: push    offset stru_BA7C00; parent
0xA122E5: push    offset aBhkshape; "bhkShape"
0xA122EA: mov     ecx, offset stru_BA7D78; this
0xA122EF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA122F4: retn
