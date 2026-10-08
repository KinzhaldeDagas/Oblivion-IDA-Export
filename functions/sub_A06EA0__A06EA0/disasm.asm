0xA06EA0: push    offset stru_B3EF9C; parent
0xA06EA5: push    offset aNibsplinefloat; "NiBSplineFloatInterpolator"
0xA06EAA: mov     ecx, offset stru_B3E49C; this
0xA06EAF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA06EB4: retn
