0xA080A0: push    offset stru_B3CC5C; parent
0xA080A5: push    offset aNiblendquatern; "NiBlendQuaternionInterpolator"
0xA080AA: mov     ecx, offset stru_B3E910; this
0xA080AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA080B4: retn
