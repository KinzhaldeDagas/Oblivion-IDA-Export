0xA0E700: push    offset stru_B41F8C; parent
0xA0E705: push    offset aNipsysemitte_1; "NiPSysEmitterDeclinationVarCtlr"
0xA0E70A: mov     ecx, offset stru_B416CC; this
0xA0E70F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0E714: retn
