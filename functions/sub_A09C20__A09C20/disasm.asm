0xA09C20: push    offset stru_B3FA80; parent
0xA09C25: push    offset aNidynamiceffec; "NiDynamicEffect"
0xA09C2A: mov     ecx, offset stru_B3FA88; this
0xA09C2F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09C34: retn
