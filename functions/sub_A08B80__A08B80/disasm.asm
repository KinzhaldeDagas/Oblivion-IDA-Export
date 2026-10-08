0xA08B80: push    offset stru_B3CCB0; parent
0xA08B85: push    offset aNifloatinterpc; "NiFloatInterpController"
0xA08B8A: mov     ecx, offset stru_B3ED14; this
0xA08B8F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA08B94: retn
