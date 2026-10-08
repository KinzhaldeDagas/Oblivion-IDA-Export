0xA03600: push    offset stru_B3CC5C; parent
0xA03605: push    offset aNiblendfloatin; "NiBlendFloatInterpolator"
0xA0360A: mov     ecx, offset stru_B3CF5C; this
0xA0360F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA03614: retn
