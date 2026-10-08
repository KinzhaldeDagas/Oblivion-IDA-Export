0xA0A200: push    offset stru_B3F684; parent
0xA0A205: push    offset aNiskindata; "NiSkinData"
0xA0A20A: mov     ecx, offset stru_B3FF2C; this
0xA0A20F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A214: retn
