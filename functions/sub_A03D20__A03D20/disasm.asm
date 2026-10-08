0xA03D20: push    offset stru_B3EDD4; parent
0xA03D25: push    offset aNiviscontrolle; "NiVisController"
0xA03D2A: mov     ecx, offset stru_B3D80C; this
0xA03D2F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA03D34: retn
