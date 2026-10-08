0xA0DF30: push    offset stru_B41F8C; parent
0xA0DF35: push    offset aNipsysemitters; "NiPSysEmitterSpeedCtlr"
0xA0DF3A: mov     ecx, offset stru_B414CC; this
0xA0DF3F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0DF44: retn
