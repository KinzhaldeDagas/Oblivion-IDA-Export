0x9A32B0: cmp     g_D3DXParameterDispatchInitialized, 0
0x9A32B7: push    esi
0x9A32B8: mov     esi, [ecx+14h]
0x9A32BB: jnz     short loc_9A32C2
0x9A32BD: call    NiD3DHLSLShader__InitializeParameterClassTables; Initializes the HLSL/D3DX parameter-class dispatch lookup once (observed identity mapping for supported class codes) and sets the ready flag.
0x9A32C2: and     esi, 0FFh
0x9A32C8: xor     eax, eax
0x9A32CA: cmp     g_D3DXParameterClassDispatch[esi*4], 0Bh
0x9A32D2: pop     esi
0x9A32D3: setz    al
0x9A32D6: retn
