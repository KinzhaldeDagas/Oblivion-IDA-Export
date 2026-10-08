0xA06D20: push    offset stru_B3EF9C; parent
0xA06D25: push    offset aNibsplinepoint; "NiBSplinePoint3Interpolator"
0xA06D2A: mov     ecx, offset stru_B3E428; this
0xA06D2F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA06D34: retn
