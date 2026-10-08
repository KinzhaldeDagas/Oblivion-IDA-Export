0xA06BA0: push    offset stru_B3EF9C; parent
0xA06BA5: push    offset aNibsplinetrans; "NiBSplineTransformInterpolator"
0xA06BAA: mov     ecx, offset stru_B3E3D8; this
0xA06BAF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA06BB4: retn
