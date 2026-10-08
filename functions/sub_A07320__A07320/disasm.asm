0xA07320: push    offset stru_B3E49C; parent
0xA07325: push    offset aNibsplinecompf; "NiBSplineCompFloatInterpolator"
0xA0732A: mov     ecx, offset stru_B3E5B4; this
0xA0732F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA07334: retn
