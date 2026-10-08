0xA12460: push    offset stru_BA7D38; parent
0xA12465: push    offset aBhkphantom; "bhkPhantom"
0xA1246A: mov     ecx, offset stru_BA7F60; this
0xA1246F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12474: retn
