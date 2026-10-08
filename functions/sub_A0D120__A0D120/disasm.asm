0xA0D120: push    offset stru_B41F8C; parent
0xA0D125: push    offset aNipsysinitia_1; "NiPSysInitialRotSpeedCtlr"
0xA0D12A: mov     ecx, offset stru_B4116C; this
0xA0D12F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0D134: retn
