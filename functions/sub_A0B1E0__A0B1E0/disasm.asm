0xA0B1E0: push    offset stru_B40D60; parent
0xA0B1E5: push    offset aNipsysboxemitt; "NiPSysBoxEmitter"
0xA0B1EA: mov     ecx, offset stru_B409EC; this
0xA0B1EF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0B1F4: retn
