0xA074A0: push    offset stru_B3E668; parent
0xA074A5: push    offset aNibsplinecompc; "NiBSplineCompColorInterpolator"
0xA074AA: mov     ecx, offset stru_B3E5F0; this
0xA074AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA074B4: retn
