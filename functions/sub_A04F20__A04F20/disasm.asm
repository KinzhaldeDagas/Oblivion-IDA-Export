0xA04F20: push    offset stru_B3F684; parent
0xA04F25: push    offset aNiposdata; "NiPosData"
0xA04F2A: mov     ecx, offset stru_B3DC80; this
0xA04F2F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA04F34: retn
