0xA071A0: push    offset stru_B3E428; parent
0xA071A5: push    offset aNibsplinecompp; "NiBSplineCompPoint3Interpolator"
0xA071AA: mov     ecx, offset stru_B3E548; this
0xA071AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA071B4: retn
