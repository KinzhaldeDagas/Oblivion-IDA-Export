0x61D9B0: push    ebx
0x61D9B1: push    esi
0x61D9B2: mov     esi, [esp+8+arg_0]
0x61D9B6: xor     bl, bl
0x61D9B8: test    esi, esi
0x61D9BA: push    edi
0x61D9BB: mov     edi, ecx
0x61D9BD: jz      short loc_61DA07
0x61D9BF: mov     ecx, [esi]
0x61D9C1: call    sub_419CF0
0x61D9C6: test    al, al
0x61D9C8: jz      short loc_61DA07
0x61D9CA: mov     ecx, [esi]
0x61D9CC: mov     eax, [edi+3Ch]
0x61D9CF: push    ecx
0x61D9D0: lea     ecx, [eax+68h]
0x61D9D3: call    MagicTarget_HasMagicItem
0x61D9D8: test    al, al
0x61D9DA: jnz     short loc_61DA07
0x61D9DC: mov     eax, [edi+3Ch]
0x61D9DF: mov     edx, [eax+5Ch]
0x61D9E2: mov     edx, [edx+1Ch]
0x61D9E5: push    0
0x61D9E7: lea     ecx, [eax+5Ch]
0x61D9EA: mov     eax, [esi]
0x61D9EC: push    0
0x61D9EE: push    0
0x61D9F0: push    eax
0x61D9F1: call    edx
0x61D9F3: test    al, al
0x61D9F5: jz      short loc_61DA07
0x61D9F7: push    esi
0x61D9F8: mov     ecx, edi
0x61D9FA: call    sub_61D6B0
0x61D9FF: pop     edi
0x61DA00: pop     esi
0x61DA01: mov     al, 1
0x61DA03: pop     ebx
0x61DA04: retn    4
0x61DA07: pop     edi
0x61DA08: pop     esi
0x61DA09: mov     al, bl
0x61DA0B: pop     ebx
0x61DA0C: retn    4
