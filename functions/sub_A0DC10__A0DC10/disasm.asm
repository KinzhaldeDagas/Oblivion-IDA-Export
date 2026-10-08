0xA0DC10: push    offset stru_B41F8C; parent
0xA0DC15: push    offset aNipsysfieldmag; "NiPSysFieldMagnitudeCtlr"
0xA0DC1A: mov     ecx, offset stru_B4140C; this
0xA0DC1F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0DC24: retn
