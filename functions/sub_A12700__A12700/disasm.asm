0xA12700: push    offset stru_B3FD44; parent
0xA12705: push    offset aBhkextradata; "bhkExtraData"
0xA1270A: mov     ecx, offset stru_BA8044; this
0xA1270F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12714: retn
