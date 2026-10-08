0xA0A180: push    offset stru_B3FD2C; parent
0xA0A185: push    offset aNitrishapedyna; "NiTriShapeDynamicData"
0xA0A18A: mov     ecx, offset stru_B3FF0C; this
0xA0A18F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A194: retn
