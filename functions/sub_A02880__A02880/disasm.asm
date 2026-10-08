0xA02880: push    offset stru_B3CC5C; parent
0xA02885: push    offset aNiblendtrans_0; "NiBlendTransformInterpolator"
0xA0288A: mov     ecx, offset stru_B3CBF8; this
0xA0288F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA02894: retn
