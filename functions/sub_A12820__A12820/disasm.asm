0xA12820: push    0BA7D50h; parent
0xA12825: push    offset aBhkstiffspring; "bhkStiffSpringConstraint"
0xA1282A: mov     ecx, offset stru_BA80B0; this
0xA1282F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12834: retn
