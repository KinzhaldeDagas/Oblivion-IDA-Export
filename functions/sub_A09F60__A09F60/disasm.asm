0xA09F60: push    offset stru_B40108; parent
0xA09F65: push    offset aNitrishapedata; "NiTriShapeData"
0xA09F6A: mov     ecx, offset stru_B3FD2C; this
0xA09F6F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09F74: retn
