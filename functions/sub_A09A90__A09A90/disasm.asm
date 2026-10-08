0xA09A90: push    offset stru_B3F70C; parent
0xA09A95: push    offset aNisourcetextur; "NiSourceTexture"
0xA09A9A: mov     ecx, offset stru_B3F95C; this
0xA09A9F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09AA4: retn
