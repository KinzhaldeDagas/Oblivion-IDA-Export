0x431B60: push    ecx
0x431B61: push    esi
0x431B62: mov     esi, [esp+8+arg_0]
0x431B66: test    esi, esi
0x431B68: mov     [esp+8+var_4], ecx
0x431B6C: jz      loc_431C09
0x431B72: mov     eax, esi
0x431B74: lea     edx, [eax+1]
0x431B77: mov     cl, [eax]
0x431B79: add     eax, 1
0x431B7C: test    cl, cl
0x431B7E: jnz     short loc_431B77
0x431B80: push    ebx
0x431B81: sub     eax, edx
0x431B83: push    ebp
0x431B84: mov     ebp, eax
0x431B86: cmp     byte ptr [esi+ebp-1], 5Ch ; '\'
0x431B8B: mov     eax, esi
0x431B8D: push    edi
0x431B8E: setnz   bl
0x431B91: lea     ecx, [eax+1]
0x431B94: mov     dl, [eax]
0x431B96: add     eax, 1
0x431B99: test    dl, dl
0x431B9B: jnz     short loc_431B94
0x431B9D: sub     eax, ecx
0x431B9F: movzx   ecx, bl
0x431BA2: lea     edx, [ecx+eax+1]
0x431BA6: push    edx; Size
0x431BA7: call    FormHeapAlloc
0x431BAC: mov     edi, eax
0x431BAE: add     esp, 4
0x431BB1: mov     [esp+14h+arg_0], eax
0x431BB5: mov     ecx, esi
0x431BB7: sub     edi, esi
0x431BB9: lea     esp, [esp+0]
0x431BC0: mov     dl, [ecx]
0x431BC2: mov     [edi+ecx], dl
0x431BC5: add     ecx, 1
0x431BC8: test    dl, dl
0x431BCA: jnz     short loc_431BC0
0x431BCC: test    bl, bl
0x431BCE: jz      short loc_431BD8
0x431BD0: mov     byte ptr [eax+ebp], 5Ch ; '\'
0x431BD4: mov     [eax+ebp+1], dl
0x431BD8: mov     esi, [esp+14h+var_4]
0x431BDC: movzx   edi, word ptr [esi+0Eh]
0x431BE0: movzx   eax, word ptr [esi+0Ch]
0x431BE4: add     esi, 4
0x431BE7: cmp     edi, eax
0x431BE9: jb      short loc_431BF9
0x431BEB: movzx   ecx, word ptr [esi+0Eh]
0x431BEF: add     ecx, edi
0x431BF1: push    ecx
0x431BF2: mov     ecx, esi
0x431BF4: call    NiTArray_SetSize
0x431BF9: lea     edx, [esp+14h+arg_0]
0x431BFD: push    edx
0x431BFE: push    edi
0x431BFF: mov     ecx, esi
0x431C01: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x431C06: pop     edi
0x431C07: pop     ebp
0x431C08: pop     ebx
0x431C09: pop     esi
0x431C0A: pop     ecx
0x431C0B: retn    4
