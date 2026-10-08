0xA0C7C0: push    offset stru_B3FC98; parent
0xA0C7C5: push    offset aNipsysresetonl; "NiPSysResetOnLoopCtlr"
0xA0C7CA: mov     ecx, offset stru_B40F30; this
0xA0C7CF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0C7D4: retn
