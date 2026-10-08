0xA0E3E0: push    offset stru_B41F8C; parent
0xA0E3E5: push    offset aNipsysemitterl; "NiPSysEmitterLifeSpanCtlr"
0xA0E3EA: mov     ecx, offset stru_B415F4; this
0xA0E3EF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0E3F4: retn
