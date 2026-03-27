0x56A4B0: push    esi
0x56A4B1: push    edi
0x56A4B2: mov     edi, [esp+8+arg_0]
0x56A4B6: test    edi, edi
0x56A4B8: mov     esi, ecx
0x56A4BA: jz      short loc_56A4F2
0x56A4BC: lea     esp, [esp+0]
0x56A4C0: cmp     dword ptr [edi+4], 0
0x56A4C4: jnz     short loc_56A4CB
0x56A4C6: cmp     dword ptr [edi], 0
0x56A4C9: jz      short loc_56A4F2
0x56A4CB: test    esi, esi
0x56A4CD: jz      short loc_56A508
0x56A4CF: cmp     dword ptr [esi+4], 0
0x56A4D3: jnz     short loc_56A4DA
0x56A4D5: cmp     dword ptr [esi], 0
0x56A4D8: jz      short loc_56A508
0x56A4DA: mov     eax, [edi]
0x56A4DC: mov     ecx, [esi]
0x56A4DE: push    eax
0x56A4DF: call    sub_56ABB0
0x56A4E4: test    al, al
0x56A4E6: jnz     short loc_56A508
0x56A4E8: mov     edi, [edi+4]
0x56A4EB: test    edi, edi
0x56A4ED: mov     esi, [esi+4]
0x56A4F0: jnz     short loc_56A4C0
0x56A4F2: test    esi, esi
0x56A4F4: jz      short loc_56A501
0x56A4F6: cmp     dword ptr [esi+4], 0
0x56A4FA: jnz     short loc_56A508
0x56A4FC: cmp     dword ptr [esi], 0
0x56A4FF: jnz     short loc_56A508
0x56A501: pop     edi
0x56A502: xor     al, al
0x56A504: pop     esi
0x56A505: retn    4
0x56A508: pop     edi
0x56A509: mov     al, 1
0x56A50B: pop     esi
0x56A50C: retn    4
