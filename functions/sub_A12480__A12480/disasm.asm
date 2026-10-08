0xA12480: push    offset stru_BA7F60; parent
0xA12485: push    offset aBhkshapephanto; "bhkShapePhantom"
0xA1248A: mov     ecx, offset stru_BA7F6C; this
0xA1248F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12494: retn
