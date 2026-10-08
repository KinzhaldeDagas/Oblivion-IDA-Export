0xA07F20: push    offset stru_B3FC98; parent
0xA07F25: push    offset aNibonelodcontr; "NiBoneLODController"
0xA07F2A: mov     ecx, offset stru_B3E8B0; this
0xA07F2F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA07F34: retn
