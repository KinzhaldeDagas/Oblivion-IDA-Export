0xA06A20: push    offset stru_B3F684; parent
0xA06A25: push    offset aNicolordata; "NiColorData"
0xA06A2A: mov     ecx, offset stru_B3E350; this
0xA06A2F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA06A34: retn
