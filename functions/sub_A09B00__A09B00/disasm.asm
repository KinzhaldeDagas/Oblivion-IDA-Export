0xA09B00: push    offset stru_B3F68C; parent
0xA09B05: push    offset aNivertexcolorp; "NiVertexColorProperty"
0xA09B0A: mov     ecx, offset stru_B3F978; this
0xA09B0F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09B14: retn
