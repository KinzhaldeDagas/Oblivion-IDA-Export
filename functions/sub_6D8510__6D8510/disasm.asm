0x6D8510: push    ecx
0x6D8511: push    ebx
0x6D8512: mov     ebx, [esp+8+a2]
0x6D8516: push    esi
0x6D8517: push    edi
0x6D8518: push    ebx; a2
0x6D8519: mov     esi, ecx
0x6D851B: call    sub_7008A0
0x6D8520: lea     eax, [esi+8]
0x6D8523: push    eax
0x6D8524: mov     ecx, ebx
0x6D8526: mov     dword ptr [eax], 0
0x6D852C: call    sub_713620
0x6D8531: mov     eax, [ebx+21Ch]
0x6D8537: push    1
0x6D8539: lea     ecx, [esp+14h+a2]
0x6D853D: push    ecx
0x6D853E: mov     edi, 4
0x6D8543: push    edi
0x6D8544: lea     edx, [esi+30h]
0x6D8547: push    edx
0x6D8548: push    eax
0x6D8549: mov     eax, [eax+4]
0x6D854C: mov     [esp+24h+a2], edi
0x6D8550: call    eax
0x6D8552: add     esp, 14h
0x6D8555: mov     ecx, ebx
0x6D8557: call    sub_712A20
0x6D855C: mov     eax, [ebx+21Ch]
0x6D8562: push    1
0x6D8564: lea     ecx, [esp+14h+a2]
0x6D8568: push    ecx
0x6D8569: push    edi
0x6D856A: lea     edx, [esp+1Ch+var_4]
0x6D856E: push    edx
0x6D856F: push    eax
0x6D8570: mov     eax, [eax+4]
0x6D8573: mov     [esp+24h+a2], edi
0x6D8577: call    eax
0x6D8579: mov     ecx, [esp+24h+var_4]
0x6D857D: add     esp, 14h
0x6D8580: add     esi, 0Ch
0x6D8583: push    ecx
0x6D8584: mov     ecx, esi
0x6D8586: call    NiTArray_SetSize
0x6D858B: xor     edi, edi
0x6D858D: cmp     [esp+10h+var_4], edi
0x6D8591: jbe     short loc_6D85FE
0x6D8593: lea     edx, [esp+10h+a2]
0x6D8597: push    edx
0x6D8598: mov     ecx, ebx
0x6D859A: mov     [esp+14h+a2], 0
0x6D85A2: call    sub_713620
0x6D85A7: movzx   eax, word ptr [esi+0Ah]
0x6D85AB: cmp     edi, eax
0x6D85AD: mov     eax, [esp+10h+a2]
0x6D85B1: jb      short loc_6D85C5
0x6D85B3: test    eax, eax
0x6D85B5: lea     ecx, [edi+1]
0x6D85B8: mov     [esi+0Ah], cx
0x6D85BC: jz      short loc_6D85E8
0x6D85BE: add     word ptr [esi+0Ch], 1
0x6D85C3: jmp     short loc_6D85E8
0x6D85C5: test    eax, eax
0x6D85C7: jz      short loc_6D85D9
0x6D85C9: mov     edx, [esi+4]
0x6D85CC: cmp     dword ptr [edx+edi*4], 0
0x6D85D0: jnz     short loc_6D85E8
0x6D85D2: add     word ptr [esi+0Ch], 1
0x6D85D7: jmp     short loc_6D85E8
0x6D85D9: mov     ecx, [esi+4]
0x6D85DC: cmp     dword ptr [ecx+edi*4], 0
0x6D85E0: jz      short loc_6D85E8
0x6D85E2: add     word ptr [esi+0Ch], 0FFFFh
0x6D85E8: mov     edx, [esi+4]
0x6D85EB: mov     ecx, ebx
0x6D85ED: mov     [edx+edi*4], eax
0x6D85F0: call    sub_712A20
0x6D85F5: add     edi, 1
0x6D85F8: cmp     edi, [esp+10h+var_4]
0x6D85FC: jb      short loc_6D8593
0x6D85FE: pop     edi
0x6D85FF: pop     esi
0x6D8600: pop     ebx
0x6D8601: pop     ecx
0x6D8602: retn    4
