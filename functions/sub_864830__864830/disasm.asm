0x864830: push    0FFFFFFFFh
0x864832: push    offset SEH_864830
0x864837: mov     eax, large fs:0
0x86483D: push    eax
0x86483E: push    esi
0x86483F: push    edi
0x864840: mov     eax, ds:0B30AACh
0x864845: xor     eax, esp
0x864847: push    eax
0x864848: lea     eax, [esp+18h+var_C]
0x86484C: mov     large fs:0, eax
0x864852: mov     esi, ecx
0x864854: cmp     word ptr ds:0B42EACh, 5
0x86485C: jnz     short loc_864874
0x86485E: xor     eax, eax
0x864860: mov     ecx, [esp+18h+var_C]
0x864864: mov     large fs:0, ecx
0x86486B: pop     ecx
0x86486C: pop     edi
0x86486D: pop     esi
0x86486E: add     esp, 0Ch
0x864871: retn    10h
0x864874: mov     edi, [esp+18h+arg_4]
0x864878: cmp     [esi+24h], edi
0x86487B: jz      short loc_8648E1
0x86487D: call    sub_7E24C0
0x864882: push    10h; Size
0x864884: call    FormHeapAlloc
0x864889: add     esp, 4
0x86488C: mov     [esp+18h+arg_4], eax
0x864890: test    eax, eax
0x864892: mov     [esp+18h+var_4], 0
0x86489A: jz      short loc_8648B7
0x86489C: mov     ecx, [esp+18h+arg_0]
0x8648A0: push    0
0x8648A2: push    0
0x8648A4: push    1
0x8648A6: push    188h
0x8648AB: push    ecx
0x8648AC: push    eax
0x8648AD: call    sub_7E2370
0x8648B2: add     esp, 18h
0x8648B5: jmp     short loc_8648B9
0x8648B7: xor     eax, eax
0x8648B9: lea     edx, [esp+18h+arg_4]
0x8648BD: push    edx
0x8648BE: lea     ecx, [esi+28h]
0x8648C1: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x8648C9: mov     [esp+1Ch+arg_4], eax
0x8648CD: call    sub_6AA320
0x8648D2: movzx   eax, word ptr ds:0B42EACh
0x8648D9: shl     eax, 8
0x8648DC: or      eax, edi
0x8648DE: mov     [esi+24h], eax
0x8648E1: lea     eax, [esi+28h]
0x8648E4: mov     ecx, [esp+18h+var_C]
0x8648E8: mov     large fs:0, ecx
0x8648EF: pop     ecx
0x8648F0: pop     edi
0x8648F1: pop     esi
0x8648F2: add     esp, 0Ch
0x8648F5: retn    10h
