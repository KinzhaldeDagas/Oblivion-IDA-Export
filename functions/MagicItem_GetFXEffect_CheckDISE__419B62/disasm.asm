0x419B62: mov     eax, [esi]
0x419B64: mov     edx, [eax+18h]
0x419B67: mov     ecx, esi
0x419B69: call    edx
0x419B6B: cmp     eax, 1
0x419B6E: jnz     short loc_419B82
0x419B82: cmp     dword ptr [esi+14h], 0
0x419B86: push    edi
0x419B87: lea     edi, [esi+0Ch]
0x419B8A: mov     [esp+4+arg_0], 0
0x419B92: jnz     short MagicItem_GetFXEffect___FindStrongestEffect
0x419B94: cmp     dword ptr [edi+4], 0
0x419B98: jnz     short MagicItem_GetFXEffect___FindStrongestEffect
0x419B9A: pop     edi
0x419B9B: xor     eax, eax
0x419B9D: pop     esi
0x419B9E: pop     ecx
0x419B9F: retn    4
