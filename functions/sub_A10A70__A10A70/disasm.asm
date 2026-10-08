0xA10A70: push    offset stru_B4263C; parent
0xA10A75: push    offset aNidx9implicitd; "NiDX9ImplicitDepthStencilBufferData"
0xA10A7A: mov     ecx, offset stru_B4262C; this
0xA10A7F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA10A84: retn
