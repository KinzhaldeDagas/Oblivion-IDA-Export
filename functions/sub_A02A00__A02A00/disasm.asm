0xA02A00: push    offset stru_B3EB8C; parent
0xA02A05: push    offset aNiblendinterpo; "NiBlendInterpolator"
0xA02A0A: mov     ecx, offset stru_B3CC5C; this
0xA02A0F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA02A14: retn
