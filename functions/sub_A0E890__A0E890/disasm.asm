0xA0E890: push    offset stru_B41F8C; parent
0xA0E895: push    offset aNipsysemitterd; "NiPSysEmitterDeclinationCtlr"
0xA0E89A: mov     ecx, offset stru_B41708; this
0xA0E89F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0E8A4: retn
