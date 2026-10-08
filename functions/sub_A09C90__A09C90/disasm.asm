0xA09C90: push    offset stru_B3FA80; parent
0xA09C95: push    offset aNinode; "NiNode"
0xA09C9A: mov     ecx, offset parent; this
0xA09C9F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09CA4: retn
