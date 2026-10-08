0xA12440: push    offset stru_BA7F48; parent
0xA12445: push    offset aBhkconvexshape; "bhkConvexShape"
0xA1244A: mov     ecx, offset stru_BA7F54; this
0xA1244F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12454: retn
