0x4B80A0: push    ebx
0x4B80A1: push    esi
0x4B80A2: push    edi
0x4B80A3: mov     edi, [esp+0Ch+arg_0]
0x4B80A7: xor     bl, bl
0x4B80A9: test    edi, edi
0x4B80AB: mov     esi, ecx
0x4B80AD: jz      short loc_4B80CE
0x4B80AF: push    edi
0x4B80B0: call    sub_4B7930
0x4B80B5: add     esp, 4
0x4B80B8: test    al, al
0x4B80BA: jz      short loc_4B80CE
0x4B80BC: lea     eax, [esi+68h]
0x4B80BF: test    eax, eax
0x4B80C1: jz      short loc_4B80CE
0x4B80C3: cmp     [eax], edi
0x4B80C5: jz      short loc_4B80D6
0x4B80C7: mov     eax, [eax+4]
0x4B80CA: test    eax, eax
0x4B80CC: jnz     short loc_4B80C3
0x4B80CE: pop     edi
0x4B80CF: pop     esi
0x4B80D0: mov     al, bl
0x4B80D2: pop     ebx
0x4B80D3: retn    4
0x4B80D6: pop     edi
0x4B80D7: pop     esi
0x4B80D8: mov     al, 1
0x4B80DA: pop     ebx
0x4B80DB: retn    4
