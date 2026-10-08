0xA12A10: push    offset stru_BA7F54; parent
0xA12A15: push    offset aBhkconvexsweep; "bhkConvexSweepShape"
0xA12A1A: mov     ecx, offset stru_BA8164; this
0xA12A1F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12A24: retn
