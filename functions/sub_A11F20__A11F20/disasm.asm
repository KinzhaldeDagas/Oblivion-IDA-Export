0xA11F20: push    0B4257Ch; parent
0xA11F25: push    offset aDistantlodsh_0; "DistantLODShader"
0xA11F2A: mov     ecx, offset stru_B4780C; this
0xA11F2F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11F34: retn
