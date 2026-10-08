0xA0F060: push    offset stru_B40D08; parent
0xA0F065: push    offset aNipsyscolormod; "NiPSysColorModifier"
0xA0F06A: mov     ecx, offset stru_B418EC; this
0xA0F06F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0F074: retn
