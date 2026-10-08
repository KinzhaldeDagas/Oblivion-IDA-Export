0xA09B60: push    offset stru_B3F68C; parent
0xA09B65: push    offset aNizbufferprope; "NiZBufferProperty"
0xA09B6A: mov     ecx, offset stru_B3F990; this
0xA09B6F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09B74: retn
