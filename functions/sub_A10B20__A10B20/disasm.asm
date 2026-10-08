0xA10B20: push    offset stru_B4265C; parent
0xA10B25: push    offset aNidx9swapchain; "NiDX9SwapChainBufferData"
0xA10B2A: mov     ecx, offset NiDX9SwapChainBufferData_RTTI; this
0xA10B2F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA10B34: retn
