0x732810: sub     esp, 8
0x732813: push    esi
0x732814: push    edi
0x732815: mov     edi, [esp+10h+a2]
0x732819: push    edi; a2
0x73281A: mov     esi, ecx
0x73281C: call    sub_7008A0
0x732821: mov     eax, [edi+21Ch]
0x732827: push    1
0x732829: lea     ecx, [esp+14h+var_4]
0x73282D: push    ecx
0x73282E: push    1
0x732830: lea     edx, [esp+1Ch+a2]
0x732834: push    edx
0x732835: push    eax
0x732836: mov     eax, [eax+4]
0x732839: mov     [esp+24h+var_4], 1
0x732841: call    eax
0x732843: cmp     byte ptr [esp+24h+a2], 0
0x732848: push    1
0x73284A: setnz   cl
0x73284D: lea     edx, [esp+28h+var_4]
0x732851: push    edx
0x732852: mov     [esi+8], cl
0x732855: mov     eax, [edi+21Ch]
0x73285B: mov     edx, [eax+4]
0x73285E: push    4
0x732860: lea     ecx, [esp+30h+var_8]
0x732864: push    ecx
0x732865: push    eax
0x732866: mov     [esp+38h+var_4], 4
0x73286E: call    edx
0x732870: mov     eax, [esp+38h+var_8]
0x732874: add     esp, 28h
0x732877: cmp     eax, [esi+0Ch]
0x73287A: jz      short loc_7328A8
0x73287C: mov     ecx, [esi+14h]
0x73287F: push    ecx
0x732880: call    FormHeapFree
0x732885: mov     eax, [esp+14h+var_8]
0x732889: xor     ecx, ecx
0x73288B: mov     [esi+0Ch], eax
0x73288E: mov     edx, 4
0x732893: mul     edx
0x732895: seto    cl
0x732898: neg     ecx
0x73289A: or      ecx, eax
0x73289C: push    ecx; Size
0x73289D: call    FormHeapAlloc
0x7328A2: add     esp, 8
0x7328A5: mov     [esi+14h], eax
0x7328A8: mov     ecx, [esi+0Ch]
0x7328AB: mov     edx, [esi+14h]
0x7328AE: mov     edi, [edi+21Ch]
0x7328B4: push    1
0x7328B6: lea     eax, [esp+14h+var_4]
0x7328BA: push    eax
0x7328BB: mov     eax, [edi+4]
0x7328BE: add     ecx, ecx
0x7328C0: add     ecx, ecx
0x7328C2: push    ecx
0x7328C3: push    edx
0x7328C4: push    edi
0x7328C5: mov     [esp+24h+var_4], 1
0x7328CD: call    eax
0x7328CF: mov     ecx, ds:0B3F928h
0x7328D5: add     esp, 14h
0x7328D8: test    ecx, ecx
0x7328DA: jz      short loc_7328E7
0x7328DC: mov     edx, [ecx]
0x7328DE: mov     eax, [edx+118h]
0x7328E4: push    esi
0x7328E5: call    eax
0x7328E7: pop     edi
0x7328E8: pop     esi
0x7328E9: add     esp, 8
0x7328EC: retn    4
