0xA09E50: push    offset stru_B3F68C; parent
0xA09E55: push    offset aNialphapropert; "NiAlphaProperty"
0xA09E5A: mov     ecx, offset stru_B3FCE8; this
0xA09E5F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09E64: retn
