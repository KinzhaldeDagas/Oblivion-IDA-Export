0xA0E570: push    offset stru_B41F8C; parent
0xA0E575: push    offset aNipsysemitteri; "NiPSysEmitterInitialRadiusCtlr"
0xA0E57A: mov     ecx, offset stru_B41658; this
0xA0E57F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0E584: retn
