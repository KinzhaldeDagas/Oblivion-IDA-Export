0xA09990: push    offset stru_B3F584; parent
0xA09995: push    offset aNiproperty; "NiProperty"
0xA0999A: mov     ecx, offset stru_B3F68C; this
0xA0999F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA099A4: retn
