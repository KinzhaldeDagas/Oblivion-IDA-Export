0xA08820: push    offset stru_B3F684; parent
0xA08825: push    offset aNiinterpolator; "NiInterpolator"
0xA0882A: mov     ecx, offset stru_B3EB8C; this
0xA0882F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA08834: retn
