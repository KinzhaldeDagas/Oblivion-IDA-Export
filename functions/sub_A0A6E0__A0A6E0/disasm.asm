0xA0A6E0: push    offset stru_B3F68C; parent
0xA0A6E5: push    offset aNirendererspec; "NiRendererSpecificProperty"
0xA0A6EA: mov     ecx, offset stru_B401D0; this
0xA0A6EF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A6F4: retn
