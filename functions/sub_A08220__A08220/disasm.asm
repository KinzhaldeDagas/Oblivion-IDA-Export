0xA08220: push    offset stru_B3CC5C; parent
0xA08225: push    offset aNiblendpoint3i; "NiBlendPoint3Interpolator"
0xA0822A: mov     ecx, offset stru_B3E980; this
0xA0822F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA08234: retn
