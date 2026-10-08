0xA07020: push    offset stru_B3E3D8; parent
0xA07025: push    offset aNibsplinecompt; "NiBSplineCompTransformInterpolator"
0xA0702A: mov     ecx, offset stru_B3E4E8; this
0xA0702F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA07034: retn
