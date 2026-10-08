0xA08520: push    offset stru_B3CC5C; parent
0xA08525: push    offset aNiblendboolint; "NiBlendBoolInterpolator"
0xA0852A: mov     ecx, offset stru_B3EA50; this
0xA0852F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA08534: retn
