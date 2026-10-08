0xA0A160: push    offset stru_B3F70C; parent
0xA0A165: push    offset aNirenderedtext; "NiRenderedTexture"
0xA0A16A: mov     ecx, offset stru_B3FF04; this
0xA0A16F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A174: retn
