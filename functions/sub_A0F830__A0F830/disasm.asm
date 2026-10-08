0xA0F830: push    offset stru_B41F8C; parent
0xA0F835: push    offset aNipsysairfie_2; "NiPSysAirFieldSpreadCtlr"
0xA0F83A: mov     ecx, offset stru_B41AC4; this
0xA0F83F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0F844: retn
