0xA09880: push    offset stru_B3F684; parent
0xA09885: push    offset aBsreference; "BSReference"
0xA0988A: mov     ecx, offset stru_B3F534; this
0xA0988F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09894: retn
