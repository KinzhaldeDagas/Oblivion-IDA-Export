0xA09EF0: push    offset stru_B40108; parent
0xA09EF5: push    offset aNitristripsdat; "NiTriStripsData"
0xA09EFA: mov     ecx, offset stru_B3FD0C; this
0xA09EFF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09F04: retn
