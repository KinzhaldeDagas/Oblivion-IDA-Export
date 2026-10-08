0x862AD0: cmp     [esp+arg_4], 147h
0x862AD8: jge     short loc_862B23
0x862ADA: fld     dword ptr ds:0B46FDCh
0x862AE0: fadd    dword ptr ds:0B46FD8h
0x862AE6: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x862AEB: cmp     eax, ds:0B2DD00h
0x862AF1: jg      short loc_862B0B
0x862AF3: mov     eax, [esp+arg_8]
0x862AF7: mov     ecx, ds:0B46C20h[eax*4]
0x862AFE: push    ecx; shader
0x862AFF: mov     ecx, [esp+4+arg_0]; this
0x862B03: call    NiD3DPass_SetPixelShader; Reference-counted NiD3DPass pixel-shader setter. Replaces pass+0x44 and AddRefs the new NiD3DPixelShader.
0x862B08: retn    0Ch
0x862B0B: mov     edx, [esp+arg_8]
0x862B0F: mov     eax, ds:0B46ED8h[edx*4]
0x862B16: mov     ecx, [esp+arg_0]; this
0x862B1A: push    eax; shader
0x862B1B: call    NiD3DPass_SetPixelShader; Reference-counted NiD3DPass pixel-shader setter. Replaces pass+0x44 and AddRefs the new NiD3DPixelShader.
0x862B20: retn    0Ch
0x862B23: mov     ecx, [esp+arg_8]
0x862B27: mov     edx, ds:0B46ED8h[ecx*4]
0x862B2E: mov     ecx, [esp+arg_0]; this
0x862B32: push    edx; shader
0x862B33: call    NiD3DPass_SetPixelShader; Reference-counted NiD3DPass pixel-shader setter. Replaces pass+0x44 and AddRefs the new NiD3DPixelShader.
0x862B38: retn    0Ch
