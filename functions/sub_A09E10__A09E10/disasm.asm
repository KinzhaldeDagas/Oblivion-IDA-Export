0xA09E10: push    offset stru_B3FD54; parent
0xA09E15: push    offset aNitrishape; "NiTriShape"
0xA09E1A: mov     ecx, offset stru_B3FCD4; this
0xA09E1F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09E24: retn
