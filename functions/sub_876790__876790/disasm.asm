0x876790: push    0FFFFFFFFh
0x876792: push    offset SEH_880560
0x876797: mov     eax, large fs:0
0x87679D: push    eax
0x87679E: push    ebx
0x87679F: push    ebp
0x8767A0: push    esi
0x8767A1: push    edi
0x8767A2: mov     eax, ds:0B30AACh
0x8767A7: xor     eax, esp
0x8767A9: push    eax
0x8767AA: lea     eax, [esp+20h+var_C]
0x8767AE: mov     large fs:0, eax
0x8767B4: mov     esi, ecx
0x8767B6: mov     ebx, [esp+20h+arg_8]
0x8767BA: mov     eax, [ebx+10h]
0x8767BD: mov     edi, ds:0B47680h
0x8767C3: push    eax
0x8767C4: call    sub_848C40
0x8767C9: mov     ebx, [ebx+0Ch]
0x8767CC: push    ebx
0x8767CD: mov     ecx, esi
0x8767CF: call    sub_848E50
0x8767D4: mov     ecx, [esp+20h+arg_0]
0x8767D8: mov     eax, [esi]
0x8767DA: mov     edx, [eax+0BCh]
0x8767E0: push    0
0x8767E2: push    ebx
0x8767E3: push    ecx
0x8767E4: mov     ecx, esi
0x8767E6: call    edx
0x8767E8: mov     eax, [edi+24h]
0x8767EB: mov     ecx, [esp+20h+arg_C]
0x8767EF: mov     ebx, [eax]
0x8767F1: mov     edx, [ecx]
0x8767F3: mov     eax, [edx+88h]
0x8767F9: push    0
0x8767FB: mov     [esp+24h+arg_8], ebx
0x8767FF: call    eax
0x876801: mov     ebx, [ebx+4]
0x876804: mov     ebp, eax
0x876806: cmp     ebx, ebp
0x876808: jz      short loc_87683F
0x87680A: test    ebx, ebx
0x87680C: jz      short loc_87682A
0x87680E: lea     ecx, [ebx+4]
0x876811: push    ecx; lpAddend
0x876812: call    dword ptr ds:0A2807Ch
0x876818: test    eax, eax
0x87681A: jnz     short loc_87682A
0x87681C: test    ebx, ebx
0x87681E: jz      short loc_87682A
0x876820: mov     edx, [ebx]
0x876822: mov     eax, [edx]
0x876824: push    1
0x876826: mov     ecx, ebx
0x876828: call    eax
0x87682A: test    ebp, ebp
0x87682C: mov     ecx, [esp+20h+arg_8]
0x876830: mov     [ecx+4], ebp
0x876833: jz      short loc_87683F
0x876835: add     ebp, 4
0x876838: push    ebp; lpAddend
0x876839: call    dword ptr ds:0A28078h
0x87683F: mov     edx, [edi+24h]
0x876842: mov     eax, [esp+20h+arg_C]
0x876846: mov     ebx, [edx+4]
0x876849: push    0
0x87684B: push    eax
0x87684C: mov     ecx, esi
0x87684E: mov     [esp+28h+arg_8], ebx
0x876852: call    sub_848FD0
0x876857: mov     ebx, [ebx+4]
0x87685A: mov     ebp, eax
0x87685C: cmp     ebx, ebp
0x87685E: jz      short loc_876895
0x876860: test    ebx, ebx
0x876862: jz      short loc_876880
0x876864: lea     ecx, [ebx+4]
0x876867: push    ecx; lpAddend
0x876868: call    dword ptr ds:0A2807Ch
0x87686E: test    eax, eax
0x876870: jnz     short loc_876880
0x876872: test    ebx, ebx
0x876874: jz      short loc_876880
0x876876: mov     edx, [ebx]
0x876878: mov     eax, [edx]
0x87687A: push    1
0x87687C: mov     ecx, ebx
0x87687E: call    eax
0x876880: test    ebp, ebp
0x876882: mov     ecx, [esp+20h+arg_8]
0x876886: mov     [ecx+4], ebp
0x876889: jz      short loc_876895
0x87688B: add     ebp, 4
0x87688E: push    ebp; lpAddend
0x87688F: call    dword ptr ds:0A28078h
0x876895: mov     edx, [edi+24h]
0x876898: mov     ebp, [edx+14h]
0x87689B: mov     eax, ds:0B43110h
0x8768A0: mov     ebx, [ebp+4]
0x8768A3: cmp     ebx, eax
0x8768A5: mov     ecx, eax
0x8768A7: mov     [esp+20h+arg_C], ecx
0x8768AB: jz      short loc_8768E2
0x8768AD: test    ebx, ebx
0x8768AF: jz      short loc_8768D1
0x8768B1: lea     eax, [ebx+4]
0x8768B4: push    eax; lpAddend
0x8768B5: call    dword ptr ds:0A2807Ch
0x8768BB: test    eax, eax
0x8768BD: jnz     short loc_8768CD
0x8768BF: test    ebx, ebx
0x8768C1: jz      short loc_8768CD
0x8768C3: mov     edx, [ebx]
0x8768C5: mov     eax, [edx]
0x8768C7: push    1
0x8768C9: mov     ecx, ebx
0x8768CB: call    eax
0x8768CD: mov     ecx, [esp+20h+arg_C]
0x8768D1: test    ecx, ecx
0x8768D3: mov     [ebp+4], ecx
0x8768D6: jz      short loc_8768E2
0x8768D8: add     ecx, 4
0x8768DB: push    ecx; lpAddend
0x8768DC: call    dword ptr ds:0A28078h
0x8768E2: mov     ebx, 1
0x8768E7: add     [edi+60h], ebx
0x8768EA: mov     [esp+20h+arg_C], edi
0x8768EE: mov     edx, [esi+38h]
0x8768F1: lea     ecx, [esp+20h+arg_C]
0x8768F5: push    ecx
0x8768F6: push    edx
0x8768F7: lea     ecx, [esi+40h]
0x8768FA: mov     [esp+28h+var_4], 0
0x876902: call    sub_76CE40
0x876907: or      eax, 0FFFFFFFFh
0x87690A: add     [edi+60h], eax
0x87690D: mov     [esp+20h+var_4], eax
0x876911: jnz     short loc_87691A
0x876913: mov     ecx, edi
0x876915: call    sub_7604D0
0x87691A: add     [esi+38h], ebx
0x87691D: mov     ecx, [esp+20h+var_C]
0x876921: mov     large fs:0, ecx
0x876928: pop     ecx
0x876929: pop     edi
0x87692A: pop     esi
0x87692B: pop     ebp
0x87692C: pop     ebx
0x87692D: add     esp, 0Ch
0x876930: retn    10h
