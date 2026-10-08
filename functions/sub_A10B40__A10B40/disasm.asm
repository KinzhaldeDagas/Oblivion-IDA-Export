0xA10B40: push    offset stru_B4263C; parent
0xA10B45: push    offset aNidx9swapcha_0; "NiDX9SwapChainDepthStencilBufferData"
0xA10B4A: mov     ecx, offset stru_B42644; this
0xA10B4F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA10B54: retn
