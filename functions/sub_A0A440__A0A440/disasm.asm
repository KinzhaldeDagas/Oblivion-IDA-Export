0xA0A440: push    offset stru_B40118; parent
0xA0A445: push    offset aNibacktofronta; "NiBackToFrontAccumulator"
0xA0A44A: mov     ecx, offset stru_B40110; this
0xA0A44F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A454: retn
