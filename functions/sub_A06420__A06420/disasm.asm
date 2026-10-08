0xA06420: push    offset stru_B3EF5C; parent
0xA06425: push    offset aNifloatextrada; "NiFloatExtraDataController"
0xA0642A: mov     ecx, offset stru_B3E1E8; this
0xA0642F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA06434: retn
