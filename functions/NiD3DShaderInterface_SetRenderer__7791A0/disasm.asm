0x7791A0: mov     eax, [esp+a2]
0x7791A4: push    esi
0x7791A5: push    eax; a2
0x7791A6: mov     esi, ecx
0x7791A8: call    NiD3DShaderInterface__SetDX9Renderer
0x7791AD: mov     al, 1
0x7791AF: mov     [esi+1Ch], al
0x7791B2: pop     esi
0x7791B3: retn    4
