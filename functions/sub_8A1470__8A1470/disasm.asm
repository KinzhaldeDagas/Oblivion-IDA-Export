0x8A1470: mov     eax, [esp+arg_0]
0x8A1474: push    ebx
0x8A1475: push    edi
0x8A1476: push    eax
0x8A1477: mov     edi, ecx
0x8A1479: call    sub_8A2760
0x8A147E: mov     bl, al
0x8A1480: test    bl, bl
0x8A1482: jz      short loc_8A14E5
0x8A1484: test    edi, edi
0x8A1486: push    ebp
0x8A1487: jz      short loc_8A149B
0x8A1489: mov     ecx, [edi+8]
0x8A148C: test    ecx, ecx
0x8A148E: jz      short loc_8A149B
0x8A1490: mov     edx, [ecx]
0x8A1492: mov     eax, [edx+1Ch]
0x8A1495: call    eax
0x8A1497: mov     ebp, eax
0x8A1499: jmp     short loc_8A149D
0x8A149B: xor     ebp, ebp
0x8A149D: push    esi
0x8A149E: xor     esi, esi
0x8A14A0: cmp     esi, ebp
0x8A14A2: jge     short loc_8A14DC
0x8A14A4: test    edi, edi
0x8A14A6: jz      short loc_8A14BE
0x8A14A8: mov     eax, [edi+8]
0x8A14AB: test    eax, eax
0x8A14AD: jz      short loc_8A14BE
0x8A14AF: mov     ecx, [eax+10h]
0x8A14B2: mov     eax, [ecx+esi*8]
0x8A14B5: test    eax, eax
0x8A14B7: jz      short loc_8A14BE
0x8A14B9: mov     ecx, [eax+8]
0x8A14BC: jmp     short loc_8A14C0
0x8A14BE: xor     ecx, ecx
0x8A14C0: test    ecx, ecx
0x8A14C2: jz      short loc_8A14D5
0x8A14C4: mov     edx, [ecx]
0x8A14C6: mov     eax, [esp+10h+arg_0]
0x8A14CA: mov     edx, [edx+8Ch]
0x8A14D0: push    eax
0x8A14D1: call    edx
0x8A14D3: and     bl, al
0x8A14D5: add     esi, 1
0x8A14D8: test    bl, bl
0x8A14DA: jnz     short loc_8A14A0
0x8A14DC: pop     esi
0x8A14DD: pop     ebp
0x8A14DE: pop     edi
0x8A14DF: mov     al, bl
0x8A14E1: pop     ebx
0x8A14E2: retn    4
0x8A14E5: pop     edi
0x8A14E6: mov     al, bl
0x8A14E8: pop     ebx
0x8A14E9: retn    4
