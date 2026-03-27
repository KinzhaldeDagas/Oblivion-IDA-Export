0x471B80: push    ebx
0x471B81: mov     ebx, [esp+4+arg_0]
0x471B85: test    ebx, ebx
0x471B87: jnz     short loc_471B8D
0x471B89: xor     al, al
0x471B8B: pop     ebx
0x471B8C: retn
0x471B8D: movzx   eax, word ptr [ebx+0B6h]
0x471B94: push    esi
0x471B95: push    edi
0x471B96: xor     edi, edi
0x471B98: test    eax, eax
0x471B9A: jbe     short loc_471BED
0x471B9C: cmp     eax, edi
0x471B9E: jbe     short loc_471BDF
0x471BA0: mov     eax, [ebx+0B0h]
0x471BA6: mov     esi, [eax+edi*4]
0x471BA9: test    esi, esi
0x471BAB: jz      short loc_471BDF
0x471BAD: mov     edx, [esi]
0x471BAF: mov     eax, [edx+8]
0x471BB2: mov     ecx, esi
0x471BB4: call    eax
0x471BB6: test    eax, eax
0x471BB8: jz      short loc_471BC9
0x471BBA: push    eax
0x471BBB: call    sub_471B80
0x471BC0: add     esp, 4
0x471BC3: test    al, al
0x471BC5: jnz     short loc_471BEF
0x471BC7: jmp     short loc_471BDF
0x471BC9: mov     edx, [esi]
0x471BCB: mov     eax, [edx+0Ch]
0x471BCE: mov     ecx, esi
0x471BD0: call    eax
0x471BD2: test    eax, eax
0x471BD4: jz      short loc_471BDF
0x471BD6: cmp     dword ptr [eax+0B8h], 0
0x471BDD: jnz     short loc_471BF3
0x471BDF: movzx   eax, word ptr [ebx+0B6h]
0x471BE6: add     edi, 1
0x471BE9: cmp     eax, edi
0x471BEB: ja      short loc_471BA0
0x471BED: xor     al, al
0x471BEF: pop     edi
0x471BF0: pop     esi
0x471BF1: pop     ebx
0x471BF2: retn
0x471BF3: pop     edi
0x471BF4: pop     esi
0x471BF5: mov     al, 1
0x471BF7: pop     ebx
0x471BF8: retn
