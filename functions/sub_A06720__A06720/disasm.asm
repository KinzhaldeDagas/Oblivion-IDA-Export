0xA06720: push    offset stru_B3ED80; parent
0xA06725: push    offset aNicolorinterpo; "NiColorInterpolator"
0xA0672A: mov     ecx, offset stru_B3E2D0; this
0xA0672F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA06734: retn
