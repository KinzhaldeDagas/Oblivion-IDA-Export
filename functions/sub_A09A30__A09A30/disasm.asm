0xA09A30: push    offset stru_B3F684; parent
0xA09A35: push    offset aNirenderer; "NiRenderer"
0xA09A3A: mov     ecx, offset stru_B3F938; this
0xA09A3F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09A44: retn
