0xA0E250: push    offset stru_B41F8C; parent
0xA0E255: push    offset aNipsysemitterp; "NiPSysEmitterPlanarAngleCtlr"
0xA0E25A: mov     ecx, offset stru_B41578; this
0xA0E25F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0E264: retn
