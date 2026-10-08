0xA0AD30: push    offset stru_B40B50; parent
0xA0AD35: push    offset aNipsysmeshemit; "NiPSysMeshEmitter"
0xA0AD3A: mov     ecx, offset stru_B408C8; this
0xA0AD3F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0AD44: retn
