0xA0E0C0: push    offset stru_B41F8C; parent
0xA0E0C5: push    offset aNipsysemitte_2; "NiPSysEmitterPlanarAngleVarCtlr"
0xA0E0CA: mov     ecx, offset stru_B41528; this
0xA0E0CF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0E0D4: retn
