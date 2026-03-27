0x716760: sub     esp, 0Ch
0x716763: push    esi
0x716764: push    edi
0x716765: mov     edi, [esp+14h+arg_0]
0x716769: push    edi
0x71676A: mov     esi, ecx
0x71676C: call    j_nullsub_3
0x716771: mov     ecx, [esi+1Ch]
0x716774: mov     eax, [edi]
0x716776: mov     edx, [eax+2Ch]
0x716779: push    ecx
0x71677A: mov     ecx, edi
0x71677C: call    edx
0x71677E: mov     eax, [esi+14h]
0x716781: push    1
0x716783: lea     ecx, [esp+18h+arg_0]
0x716787: push    ecx
0x716788: mov     [esp+1Ch+var_C], eax
0x71678C: mov     eax, [edi+220h]
0x716792: push    4
0x716794: lea     edx, [esp+20h+var_C]
0x716798: push    edx
0x716799: push    eax
0x71679A: mov     eax, [eax+8]
0x71679D: mov     [esp+28h+arg_0], 4
0x7167A5: call    eax
0x7167A7: add     esp, 14h
0x7167AA: cmp     dword ptr [esi+14h], 0
0x7167AE: jz      short loc_716817
0x7167B0: mov     edx, [esi+0Ch]
0x7167B3: add     esi, 8
0x7167B6: xor     eax, eax
0x7167B8: test    edx, edx
0x7167BA: push    ebx
0x7167BB: jbe     short loc_7167D1
0x7167BD: mov     ebx, [esi+8]
0x7167C0: mov     ecx, ebx
0x7167C2: cmp     dword ptr [ecx], 0
0x7167C5: jnz     short loc_71681F
0x7167C7: add     eax, 1
0x7167CA: add     ecx, 4
0x7167CD: cmp     eax, edx
0x7167CF: jb      short loc_7167C2
0x7167D1: xor     eax, eax
0x7167D3: test    eax, eax
0x7167D5: mov     [esp+18h+arg_0], eax
0x7167D9: pop     ebx
0x7167DA: jz      short loc_716817
0x7167DC: lea     esp, [esp+0]
0x7167E0: lea     ecx, [esp+14h+var_4]
0x7167E4: push    ecx
0x7167E5: lea     edx, [esp+18h+var_8]
0x7167E9: push    edx
0x7167EA: lea     eax, [esp+1Ch+arg_0]
0x7167EE: push    eax
0x7167EF: mov     ecx, esi
0x7167F1: call    sub_452600
0x7167F6: mov     ecx, [esp+14h+var_8]
0x7167FA: push    ecx
0x7167FB: mov     ecx, edi
0x7167FD: call    sub_713720
0x716802: mov     edx, [edi]
0x716804: mov     eax, [esp+14h+var_4]
0x716808: mov     edx, [edx+2Ch]
0x71680B: push    eax
0x71680C: mov     ecx, edi
0x71680E: call    edx
0x716810: cmp     [esp+14h+arg_0], 0
0x716815: jnz     short loc_7167E0
0x716817: pop     edi
0x716818: pop     esi
0x716819: add     esp, 0Ch
0x71681C: retn    4
0x71681F: mov     eax, [ebx+eax*4]
0x716822: jmp     short loc_7167D3
