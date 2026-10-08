0xA12780: push    offset stru_BA7D44; parent
0xA12785: push    offset aBhkdashpotacti; "bhkDashpotAction"
0xA1278A: mov     ecx, offset stru_BA8074; this
0xA1278F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12794: retn
