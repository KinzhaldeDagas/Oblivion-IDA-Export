0xA05820: push    offset stru_B3EB8C; parent
0xA05825: push    offset aNilookatinterp; "NiLookAtInterpolator"
0xA0582A: mov     ecx, offset stru_B3DF08; this
0xA0582F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA05834: retn
