0xA16380: push    offset stru_BAA944; parent
0xA16385: push    offset aNid3dscm_pixel; "NiD3DSCM_Pixel"
0xA1638A: mov     ecx, offset stru_BAA8D8; this
0xA1638F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA16394: retn
