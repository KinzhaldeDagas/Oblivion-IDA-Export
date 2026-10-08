0xA05220: push    offset stru_B3ED80; parent
0xA05225: push    offset aNipathinterpol; "NiPathInterpolator"
0xA0522A: mov     ecx, offset stru_B3DD4C; this
0xA0522F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA05234: retn
