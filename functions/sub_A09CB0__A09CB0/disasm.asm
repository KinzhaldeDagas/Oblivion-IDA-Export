0xA09CB0: push    offset stru_B3FFC0; parent
0xA09CB5: push    offset aNidepthstencil; "NiDepthStencilBuffer"
0xA09CBA: mov     ecx, offset stru_B3FAC0; this
0xA09CBF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09CC4: retn
