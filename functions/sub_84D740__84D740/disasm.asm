0x84D740: push    0FFFFFFFFh
0x84D742: push    offset SEH_879360
0x84D747: mov     eax, large fs:0
0x84D74D: push    eax
0x84D74E: push    ecx
0x84D74F: push    ebx
0x84D750: push    ebp
0x84D751: push    esi
0x84D752: push    edi
0x84D753: mov     eax, ds:0B30AACh
0x84D758: xor     eax, esp
0x84D75A: push    eax
0x84D75B: lea     eax, [esp+24h+var_C]
0x84D75F: mov     large fs:0, eax
0x84D765: mov     [esp+24h+var_10], ecx
0x84D769: mov     eax, [esp+24h+arg_8]
0x84D76D: mov     eax, [eax+10h]
0x84D770: mov     edi, ds:0B45648h
0x84D776: push    eax
0x84D777: call    sub_848C40
0x84D77C: mov     ecx, [edi+24h]
0x84D77F: mov     ebx, [esp+24h+arg_C]
0x84D783: mov     esi, [ecx]
0x84D785: mov     edx, [ebx]
0x84D787: mov     eax, [edx+88h]
0x84D78D: push    0
0x84D78F: mov     ecx, ebx
0x84D791: mov     [esp+28h+arg_8], esi
0x84D795: call    eax
0x84D797: mov     esi, [esi+4]
0x84D79A: mov     ebp, eax
0x84D79C: cmp     esi, ebp
0x84D79E: jz      short loc_84D7D7
0x84D7A0: test    esi, esi
0x84D7A2: jz      short loc_84D7C0
0x84D7A4: lea     ecx, [esi+4]
0x84D7A7: push    ecx; lpAddend
0x84D7A8: call    dword ptr ds:0A2807Ch
0x84D7AE: test    eax, eax
0x84D7B0: jnz     short loc_84D7C0
0x84D7B2: test    esi, esi
0x84D7B4: jz      short loc_84D7C0
0x84D7B6: mov     edx, [esi]
0x84D7B8: mov     eax, [edx]
0x84D7BA: push    1
0x84D7BC: mov     ecx, esi
0x84D7BE: call    eax
0x84D7C0: test    ebp, ebp
0x84D7C2: mov     esi, [esp+24h+arg_8]
0x84D7C6: mov     [esi+4], ebp
0x84D7C9: jz      short loc_84D7DB
0x84D7CB: add     ebp, 4
0x84D7CE: push    ebp; lpAddend
0x84D7CF: call    dword ptr ds:0A28078h
0x84D7D5: jmp     short loc_84D7DB
0x84D7D7: mov     esi, [esp+24h+arg_8]
0x84D7DB: test    esi, esi
0x84D7DD: jz      short loc_84D7F9
0x84D7DF: cmp     byte ptr ds:0B42CDDh, 0
0x84D7E6: jz      short loc_84D7F9
0x84D7E8: mov     edx, [ebx]
0x84D7EA: mov     eax, [edx+78h]
0x84D7ED: mov     ecx, ebx
0x84D7EF: call    eax
0x84D7F1: push    eax
0x84D7F2: mov     ecx, esi
0x84D7F4: call    sub_7715E0
0x84D7F9: mov     ecx, [edi+24h]
0x84D7FC: mov     esi, [ecx+4]
0x84D7FF: mov     edx, [ebx]
0x84D801: mov     eax, [edx+8Ch]
0x84D807: push    0
0x84D809: mov     ecx, ebx
0x84D80B: mov     [esp+28h+arg_8], esi
0x84D80F: call    eax
0x84D811: test    eax, eax
0x84D813: jz      short loc_84D827
0x84D815: mov     edx, [ebx]
0x84D817: mov     eax, [edx+8Ch]
0x84D81D: push    0
0x84D81F: mov     ecx, ebx
0x84D821: call    eax
0x84D823: mov     ebp, eax
0x84D825: jmp     short loc_84D83C
0x84D827: test    dword ptr [ebx+1Ch], 80h
0x84D82E: mov     ebp, ds:0B430F0h
0x84D834: ja      short loc_84D83C
0x84D836: mov     ebp, ds:0B430DCh
0x84D83C: mov     esi, [esi+4]
0x84D83F: cmp     esi, ebp
0x84D841: jz      short loc_84D87A
0x84D843: test    esi, esi
0x84D845: jz      short loc_84D863
0x84D847: lea     ecx, [esi+4]
0x84D84A: push    ecx; lpAddend
0x84D84B: call    dword ptr ds:0A2807Ch
0x84D851: test    eax, eax
0x84D853: jnz     short loc_84D863
0x84D855: test    esi, esi
0x84D857: jz      short loc_84D863
0x84D859: mov     edx, [esi]
0x84D85B: mov     eax, [edx]
0x84D85D: push    1
0x84D85F: mov     ecx, esi
0x84D861: call    eax
0x84D863: test    ebp, ebp
0x84D865: mov     esi, [esp+24h+arg_8]
0x84D869: mov     [esi+4], ebp
0x84D86C: jz      short loc_84D87E
0x84D86E: add     ebp, 4
0x84D871: push    ebp; lpAddend
0x84D872: call    dword ptr ds:0A28078h
0x84D878: jmp     short loc_84D87E
0x84D87A: mov     esi, [esp+24h+arg_8]
0x84D87E: test    esi, esi
0x84D880: jz      short loc_84D89C
0x84D882: cmp     byte ptr ds:0B42CDDh, 0
0x84D889: jz      short loc_84D89C
0x84D88B: mov     edx, [ebx]
0x84D88D: mov     eax, [edx+78h]
0x84D890: mov     ecx, ebx
0x84D892: call    eax
0x84D894: push    eax
0x84D895: mov     ecx, esi
0x84D897: call    sub_7715E0
0x84D89C: mov     ebx, 1
0x84D8A1: add     [edi+60h], ebx
0x84D8A4: mov     [esp+24h+arg_8], edi
0x84D8A8: mov     esi, [esp+24h+var_10]
0x84D8AC: mov     edx, [esi+38h]
0x84D8AF: lea     ecx, [esp+24h+arg_8]
0x84D8B3: push    ecx
0x84D8B4: push    edx
0x84D8B5: lea     ecx, [esi+40h]
0x84D8B8: mov     [esp+2Ch+var_4], 0
0x84D8C0: call    sub_76CE40
0x84D8C5: or      eax, 0FFFFFFFFh
0x84D8C8: add     [edi+60h], eax
0x84D8CB: mov     [esp+24h+var_4], eax
0x84D8CF: jnz     short loc_84D8D8
0x84D8D1: mov     ecx, edi
0x84D8D3: call    sub_7604D0
0x84D8D8: add     [esi+38h], ebx
0x84D8DB: mov     ecx, [esp+24h+var_C]
0x84D8DF: mov     large fs:0, ecx
0x84D8E6: pop     ecx
0x84D8E7: pop     edi
0x84D8E8: pop     esi
0x84D8E9: pop     ebp
0x84D8EA: pop     ebx
0x84D8EB: add     esp, 10h
0x84D8EE: retn    10h
