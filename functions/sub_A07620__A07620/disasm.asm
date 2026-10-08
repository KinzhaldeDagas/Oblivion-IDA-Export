0xA07620: push    offset stru_B3EF9C; parent
0xA07625: push    offset aNibsplinecolor; "NiBSplineColorInterpolator"
0xA0762A: mov     ecx, offset stru_B3E668; this
0xA0762F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA07634: retn
