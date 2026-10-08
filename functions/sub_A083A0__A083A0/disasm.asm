0xA083A0: push    offset stru_B3CC5C; parent
0xA083A5: push    offset aNiblendcolorin; "NiBlendColorInterpolator"
0xA083AA: mov     ecx, offset stru_B3E9C4; this
0xA083AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA083B4: retn
