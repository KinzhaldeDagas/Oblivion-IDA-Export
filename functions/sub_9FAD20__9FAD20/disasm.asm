0x9FAD20: push    offset stru_B3FD44; parent
0x9FAD25: push    offset aDebugtextextra; "DebugTextExtraData"
0x9FAD2A: mov     ecx, offset stru_B3A6A8; this
0x9FAD2F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9FAD34: retn
