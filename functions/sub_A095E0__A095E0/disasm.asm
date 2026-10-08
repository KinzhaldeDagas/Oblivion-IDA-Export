0xA095E0: push    offset stru_B3EB8C; parent
0xA095E5: push    offset aNibsplineinter; "NiBSplineInterpolator"
0xA095EA: mov     ecx, offset stru_B3EF9C; this
0xA095EF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA095F4: retn
