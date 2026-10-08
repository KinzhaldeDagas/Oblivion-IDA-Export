0xA0A300: push    offset stru_B3FD44; parent
0xA0A305: push    offset aNifloatsextr_1; "NiFloatsExtraData"
0xA0A30A: mov     ecx, offset stru_B3FF90; this
0xA0A30F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A314: retn
