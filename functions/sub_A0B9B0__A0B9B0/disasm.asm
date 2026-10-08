0xA0B9B0: push    offset stru_B41E14; parent
0xA0B9B5: push    offset aNipsysemitterc; "NiPSysEmitterCtlr"
0xA0B9BA: mov     ecx, offset stru_B40BCC; this
0xA0B9BF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0B9C4: retn
