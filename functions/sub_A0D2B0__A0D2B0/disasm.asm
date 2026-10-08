0xA0D2B0: push    offset stru_B41F8C; parent
0xA0D2B5: push    offset aNipsysinitia_0; "NiPSysInitialRotAngleVarCtlr"
0xA0D2BA: mov     ecx, offset stru_B411AC; this
0xA0D2BF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0D2C4: retn
