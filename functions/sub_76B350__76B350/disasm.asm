0x76B350: push    esi
0x76B351: mov     esi, [esp+4+arg_0]
0x76B355: mov     eax, [esi]
0x76B357: mov     edx, [eax+60h]
0x76B35A: push    edi
0x76B35B: mov     edi, ecx
0x76B35D: mov     ecx, esi
0x76B35F: call    edx
0x76B361: push    0; a2
0x76B363: mov     ecx, esi; this
0x76B365: call    NiD3DShaderInterface__SetDX9Renderer
0x76B36A: lea     eax, [esp+8+arg_0]
0x76B36E: push    eax
0x76B36F: lea     ecx, [edi+904h]
0x76B375: call    sub_776690
0x76B37A: pop     edi
0x76B37B: pop     esi
0x76B37C: retn    4
