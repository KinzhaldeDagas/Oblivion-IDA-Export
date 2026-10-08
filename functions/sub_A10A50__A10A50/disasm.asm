0xA10A50: push    offset stru_B42654; parent
0xA10A55: push    offset aNidx9depthsten; "NiDX9DepthStencilBufferData"
0xA10A5A: mov     ecx, offset stru_B4263C; this
0xA10A5F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA10A64: retn
