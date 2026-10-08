0xA09DF0: push    offset stru_B3FD44; parent
0xA09DF5: push    offset aNistringextrad; "NiStringExtraData"
0xA09DFA: mov     ecx, offset stru_B3FCC0; this
0xA09DFF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09E04: retn
