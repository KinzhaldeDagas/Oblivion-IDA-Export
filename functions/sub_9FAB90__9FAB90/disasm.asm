0x9FAB90: push    offset stru_B3FF14; parent
0x9FAB95: push    offset aBstecreatetask; "BSTECreateTask"
0x9FAB9A: mov     ecx, offset stru_B3A580; this
0x9FAB9F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9FABA4: retn
