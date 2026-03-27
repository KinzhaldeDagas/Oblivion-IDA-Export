0x625850: push    ebx
0x625851: push    esi
0x625852: mov     esi, [esp+8+arg_0]
0x625856: xor     bl, bl
0x625858: test    esi, esi
0x62585A: push    edi
0x62585B: mov     edi, ecx
0x62585D: jnz     short loc_625867
0x62585F: pop     edi
0x625860: pop     esi
0x625861: xor     al, al
0x625863: pop     ebx
0x625864: retn    4
0x625867: push    esi
0x625868: call    sub_4A05E0
0x62586D: add     dword ptr ds:0B3B918h, 1
0x625874: add     esp, 4
0x625877: test    eax, eax
0x625879: jz      short loc_62588C
0x62587B: sub     dword ptr ds:0B3B918h, 1
0x625882: pop     edi
0x625883: mov     bl, 1
0x625885: pop     esi
0x625886: mov     al, bl
0x625888: pop     ebx
0x625889: retn    4
0x62588C: cmp     dword ptr ds:0B3B918h, 4
0x625893: jge     short loc_6258B5
0x625895: mov     eax, [esi]
0x625897: mov     edx, [eax+8]
0x62589A: mov     ecx, esi
0x62589C: call    edx
0x62589E: test    eax, eax
0x6258A0: jz      short loc_6258B5
0x6258A2: push    0
0x6258A4: mov     ecx, eax
0x6258A6: call    sub_405790
0x6258AB: push    eax
0x6258AC: mov     ecx, edi
0x6258AE: call    sub_625850
0x6258B3: mov     bl, al
0x6258B5: sub     dword ptr ds:0B3B918h, 1
0x6258BC: pop     edi
0x6258BD: pop     esi
0x6258BE: mov     al, bl
0x6258C0: pop     ebx
0x6258C1: retn    4
