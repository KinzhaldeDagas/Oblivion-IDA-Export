0xA06120: push    offset stru_B3EF5C; parent
0xA06125: push    offset aNifloatsextr_0; "NiFloatsExtraDataPoint3Controller"
0xA0612A: mov     ecx, offset stru_B3E128; this
0xA0612F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA06134: retn
