0x65A780: push    ebx
0x65A781: mov     ebx, [esp+4+arg_4]
0x65A785: push    esi
0x65A786: push    edi
0x65A787: mov     edi, [esp+0Ch+arg_0]
0x65A78B: push    ebx
0x65A78C: push    edi
0x65A78D: mov     esi, ecx
0x65A78F: call    TESObjectREFR_LinkModifiedForm
0x65A794: cmp     dword ptr [esi+58h], 0
0x65A798: jz      short loc_65A7AA
0x65A79A: mov     ecx, [esi+58h]
0x65A79D: mov     eax, [ecx]
0x65A79F: mov     edx, [eax+3FCh]
0x65A7A5: push    esi
0x65A7A6: push    ebx
0x65A7A7: push    edi
0x65A7A8: call    edx
0x65A7AA: test    edi, 40000000h
0x65A7B0: jnz     short loc_65A7BA
0x65A7B2: test    ebx, 40000000h
0x65A7B8: jz      short loc_65A7DC
0x65A7BA: mov     eax, [esi+8]
0x65A7BD: mov     ecx, eax
0x65A7BF: shr     ecx, 0Bh
0x65A7C2: test    cl, 1
0x65A7C5: jnz     short loc_65A7CE
0x65A7C7: shr     eax, 5
0x65A7CA: test    al, 1
0x65A7CC: jz      short loc_65A7DC
0x65A7CE: mov     edx, [esi]
0x65A7D0: mov     eax, [edx+150h]
0x65A7D6: push    0
0x65A7D8: mov     ecx, esi
0x65A7DA: call    eax
0x65A7DC: pop     edi
0x65A7DD: pop     esi
0x65A7DE: pop     ebx
0x65A7DF: retn    8
