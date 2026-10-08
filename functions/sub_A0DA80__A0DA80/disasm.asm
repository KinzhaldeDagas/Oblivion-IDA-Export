0xA0DA80: push    offset stru_B41F8C; parent
0xA0DA85: push    offset aNipsysfieldmax; "NiPSysFieldMaxDistanceCtlr"
0xA0DA8A: mov     ecx, offset stru_B413D0; this
0xA0DA8F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0DA94: retn
