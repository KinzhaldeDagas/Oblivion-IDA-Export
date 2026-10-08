0xA10A90: push    offset stru_B4263C; parent
0xA10A95: push    offset aNidx9additio_1; "NiDX9AdditionalDepthStencilBufferData"
0xA10A9A: mov     ecx, offset stru_B42624; this
0xA10A9F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA10AA4: retn
