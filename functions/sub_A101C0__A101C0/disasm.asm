0xA101C0: push    offset stru_B3CCB0; parent
0xA101C5: push    offset aNipsysmodifi_1; "NiPSysModifierCtlr"
0xA101CA: mov     ecx, offset stru_B41E14; this
0xA101CF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA101D4: retn
