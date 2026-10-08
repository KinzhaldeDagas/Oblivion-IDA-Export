0xA09C70: push    offset stru_B3FCD4; parent
0xA09C75: push    offset aNiscreenelemen; "NiScreenElements"
0xA09C7A: mov     ecx, offset stru_B3FAA8; this
0xA09C7F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09C84: retn
