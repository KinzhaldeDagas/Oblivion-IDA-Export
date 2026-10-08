0xA02B80: push    offset stru_B3CDF8; parent
0xA02B85: push    offset aNisingleinterp; "NiSingleInterpController"
0xA02B8A: mov     ecx, offset stru_B3CCB0; this
0xA02B8F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA02B94: retn
