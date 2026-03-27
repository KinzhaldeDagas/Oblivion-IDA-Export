0x716530: sub     esp, 8
0x716533: push    esi
0x716534: push    edi
0x716535: mov     edi, [esp+10h+a2]
0x716539: push    edi; a2
0x71653A: mov     esi, ecx
0x71653C: call    sub_731E80
0x716541: test    al, al
0x716543: jnz     short loc_71654F
0x716545: pop     edi
0x716546: xor     al, al
0x716548: pop     esi
0x716549: add     esp, 8
0x71654C: retn    4
0x71654F: mov     eax, [esi+14h]
0x716552: cmp     [edi+14h], eax
0x716555: jnz     short loc_716545
0x716557: test    eax, eax
0x716559: jz      short loc_71659F
0x71655B: add     esi, 8
0x71655E: mov     ecx, esi
0x716560: call    sub_6A9030
0x716565: test    eax, eax
0x716567: mov     [esp+10h+a2], eax
0x71656B: jz      short loc_71659F
0x71656D: lea     ecx, [ecx+0]
0x716570: lea     eax, [esp+10h+var_4]
0x716574: push    eax
0x716575: lea     ecx, [esp+14h+var_8]
0x716579: push    ecx
0x71657A: lea     edx, [esp+18h+a2]
0x71657E: push    edx
0x71657F: mov     ecx, esi
0x716581: call    sub_452600
0x716586: mov     ecx, [esp+10h+var_8]
0x71658A: mov     eax, [edi]
0x71658C: mov     edx, [eax+4Ch]
0x71658F: push    ecx
0x716590: mov     ecx, edi
0x716592: call    edx
0x716594: test    eax, eax
0x716596: jz      short loc_716545
0x716598: cmp     [esp+10h+a2], 0
0x71659D: jnz     short loc_716570
0x71659F: pop     edi
0x7165A0: mov     al, 1
0x7165A2: pop     esi
0x7165A3: add     esp, 8
0x7165A6: retn    4
