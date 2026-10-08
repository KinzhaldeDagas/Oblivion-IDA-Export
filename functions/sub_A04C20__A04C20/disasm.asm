0xA04C20: push    offset stru_B3EEA8; parent
0xA04C25: push    offset aNirollcontroll; "NiRollController"
0xA04C2A: mov     ecx, offset stru_B3DBDC; this
0xA04C2F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA04C34: retn
