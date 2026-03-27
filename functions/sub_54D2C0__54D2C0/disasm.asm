0x54D2C0: push    0FFFFFFFFh
0x54D2C2: push    offset SEH_54D2C0
0x54D2C7: mov     eax, large fs:0
0x54D2CD: push    eax
0x54D2CE: sub     esp, 0Ch
0x54D2D1: push    ebx
0x54D2D2: push    ebp
0x54D2D3: push    esi
0x54D2D4: push    edi
0x54D2D5: mov     eax, ds:0B30AACh
0x54D2DA: xor     eax, esp
0x54D2DC: push    eax
0x54D2DD: lea     eax, [esp+2Ch+var_C]
0x54D2E1: mov     large fs:0, eax
0x54D2E7: mov     esi, ecx
0x54D2E9: mov     [esp+2Ch+var_18], esi
0x54D2ED: push    1E0h; Size
0x54D2F2: call    FormHeapAlloc
0x54D2F7: add     esp, 4
0x54D2FA: mov     [esp+2Ch+var_14], eax
0x54D2FE: xor     edi, edi
0x54D300: cmp     eax, edi
0x54D302: mov     [esp+2Ch+var_4], edi
0x54D306: jz      short loc_54D317
0x54D308: mov     ecx, eax; this
0x54D30A: call    ??0BSFaceGenAnimationData@@QAE@XZ; BSFaceGenAnimationData::BSFaceGenAnimationData(void)
0x54D30F: mov     ebp, eax
0x54D311: mov     [esp+2Ch+var_14], eax
0x54D315: jmp     short loc_54D31D
0x54D317: xor     ebp, ebp
0x54D319: mov     [esp+2Ch+var_14], ebp
0x54D31D: lea     eax, [esi+10h]
0x54D320: or      ebx, 0FFFFFFFFh
0x54D323: push    eax
0x54D324: lea     ecx, [ebp+10h]
0x54D327: mov     [esp+30h+var_4], ebx
0x54D32B: call    sub_54E8E0
0x54D330: lea     ecx, [esi+34h]
0x54D333: push    ecx
0x54D334: lea     ecx, [ebp+34h]
0x54D337: call    sub_54E8E0
0x54D33C: lea     edx, [esi+48h]
0x54D33F: push    edx
0x54D340: lea     ecx, [ebp+48h]
0x54D343: call    sub_54E8E0
0x54D348: lea     eax, [esi+6Ch]
0x54D34B: push    eax
0x54D34C: lea     ecx, [ebp+6Ch]
0x54D34F: call    sub_54E8E0
0x54D354: lea     ecx, [esi+90h]
0x54D35A: push    ecx
0x54D35B: lea     ecx, [ebp+90h]
0x54D361: call    sub_54E8E0
0x54D366: lea     edx, [esi+0A4h]
0x54D36C: push    edx
0x54D36D: lea     ecx, [ebp+0A4h]
0x54D373: call    sub_54E8E0
0x54D378: lea     eax, [esi+0C8h]
0x54D37E: push    eax
0x54D37F: lea     ecx, [ebp+0C8h]
0x54D385: call    sub_54E8E0
0x54D38A: lea     ecx, [esi+0ECh]
0x54D390: push    ecx
0x54D391: lea     ecx, [ebp+0ECh]
0x54D397: call    sub_54E8E0
0x54D39C: lea     edx, [esi+100h]
0x54D3A2: push    edx
0x54D3A3: lea     ecx, [ebp+100h]
0x54D3A9: call    sub_54E8E0
0x54D3AE: lea     eax, [esi+124h]
0x54D3B4: push    eax
0x54D3B5: lea     ecx, [ebp+124h]
0x54D3BB: call    sub_54E8E0
0x54D3C0: lea     ecx, [esi+148h]
0x54D3C6: push    ecx
0x54D3C7: lea     ecx, [ebp+148h]
0x54D3CD: call    sub_54E8E0
0x54D3D2: lea     edx, [esi+15Ch]
0x54D3D8: push    edx
0x54D3D9: lea     ecx, [ebp+15Ch]
0x54D3DF: call    sub_54E8E0
0x54D3E4: mov     eax, [esi+170h]
0x54D3EA: mov     [ebp+170h], eax
0x54D3F0: mov     ecx, [esi+174h]
0x54D3F6: mov     [ebp+174h], ecx
0x54D3FC: mov     edx, [esi+178h]
0x54D402: mov     [ebp+178h], edx
0x54D408: mov     al, [esi+1D7h]
0x54D40E: mov     [ebp+1D7h], al
0x54D414: mov     cl, [esi+1D4h]
0x54D41A: mov     [ebp+1D4h], cl
0x54D420: mov     dl, [esi+1D8h]
0x54D426: mov     [ebp+1D8h], dl
0x54D42C: cmp     [esi+0Ch], edi
0x54D42F: jz      short loc_54D46A
0x54D431: push    14h; Size
0x54D433: call    FormHeapAlloc
0x54D438: add     esp, 4
0x54D43B: mov     [esp+2Ch+var_10], eax
0x54D43F: cmp     eax, edi
0x54D441: mov     [esp+2Ch+var_4], 1
0x54D449: jz      short loc_54D45F
0x54D44B: mov     ecx, [esi+0Ch]
0x54D44E: push    ecx
0x54D44F: mov     ecx, eax
0x54D451: call    sub_54EAA0
0x54D456: mov     [esp+2Ch+var_4], ebx
0x54D45A: mov     [ebp+0Ch], eax
0x54D45D: jmp     short loc_54D46D
0x54D45F: xor     eax, eax
0x54D461: mov     [esp+2Ch+var_4], ebx
0x54D465: mov     [ebp+0Ch], eax
0x54D468: jmp     short loc_54D46D
0x54D46A: mov     [ebp+0Ch], edi
0x54D46D: mov     ebx, [esi+28h]
0x54D470: cmp     ebx, edi
0x54D472: jz      loc_54D50B
0x54D478: lea     esi, [ebp+24h]
0x54D47B: jmp     short loc_54D480
0x54D47D: align 10h
0x54D480: mov     edi, [ebx+8]
0x54D483: mov     edx, [edi]
0x54D485: mov     eax, [edx+40h]
0x54D488: mov     ecx, edi
0x54D48A: call    eax
0x54D48C: neg     al
0x54D48E: sbb     eax, eax
0x54D490: and     eax, edi
0x54D492: mov     edi, eax
0x54D494: jz      short loc_54D4D2
0x54D496: push    14h; Size
0x54D498: call    FormHeapAlloc
0x54D49D: add     esp, 4
0x54D4A0: mov     [esp+2Ch+var_10], eax
0x54D4A4: test    eax, eax
0x54D4A6: mov     [esp+2Ch+var_4], 2
0x54D4AE: jz      short loc_54D4C4
0x54D4B0: push    edi
0x54D4B1: mov     ecx, eax
0x54D4B3: call    sub_54EAA0
0x54D4B8: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x54D4C0: mov     edi, eax
0x54D4C2: jmp     short loc_54D4D4
0x54D4C4: xor     eax, eax
0x54D4C6: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x54D4CE: mov     edi, eax
0x54D4D0: jmp     short loc_54D4D4
0x54D4D2: xor     edi, edi
0x54D4D4: mov     edx, [esi]
0x54D4D6: mov     eax, [edx+4]
0x54D4D9: mov     ecx, esi
0x54D4DB: call    eax
0x54D4DD: mov     [eax+8], edi
0x54D4E0: mov     dword ptr [eax], 0
0x54D4E6: mov     ecx, [esi+8]
0x54D4E9: mov     [eax+4], ecx
0x54D4EC: mov     ecx, [esi+8]
0x54D4EF: test    ecx, ecx
0x54D4F1: jz      short loc_54D4F7
0x54D4F3: mov     [ecx], eax
0x54D4F5: jmp     short loc_54D4FA
0x54D4F7: mov     [esi+4], eax
0x54D4FA: add     dword ptr [esi+0Ch], 1
0x54D4FE: mov     [esi+8], eax
0x54D501: mov     ebx, [ebx]
0x54D503: test    ebx, ebx
0x54D505: jnz     loc_54D480
0x54D50B: mov     edx, [esp+2Ch+var_18]
0x54D50F: mov     ebx, [edx+60h]
0x54D512: test    ebx, ebx
0x54D514: jz      loc_54D5AB
0x54D51A: lea     esi, [ebp+5Ch]
0x54D51D: lea     ecx, [ecx+0]
0x54D520: mov     edi, [ebx+8]
0x54D523: mov     eax, [edi]
0x54D525: mov     edx, [eax+40h]
0x54D528: mov     ecx, edi
0x54D52A: call    edx
0x54D52C: neg     al
0x54D52E: sbb     eax, eax
0x54D530: and     eax, edi
0x54D532: mov     edi, eax
0x54D534: jz      short loc_54D572
0x54D536: push    14h; Size
0x54D538: call    FormHeapAlloc
0x54D53D: add     esp, 4
0x54D540: mov     [esp+2Ch+var_10], eax
0x54D544: test    eax, eax
0x54D546: mov     [esp+2Ch+var_4], 3
0x54D54E: jz      short loc_54D564
0x54D550: push    edi
0x54D551: mov     ecx, eax
0x54D553: call    sub_54EAA0
0x54D558: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x54D560: mov     edi, eax
0x54D562: jmp     short loc_54D574
0x54D564: xor     eax, eax
0x54D566: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x54D56E: mov     edi, eax
0x54D570: jmp     short loc_54D574
0x54D572: xor     edi, edi
0x54D574: mov     eax, [esi]
0x54D576: mov     edx, [eax+4]
0x54D579: mov     ecx, esi
0x54D57B: call    edx
0x54D57D: mov     [eax+8], edi
0x54D580: mov     dword ptr [eax], 0
0x54D586: mov     ecx, [esi+8]
0x54D589: mov     [eax+4], ecx
0x54D58C: mov     ecx, [esi+8]
0x54D58F: test    ecx, ecx
0x54D591: jz      short loc_54D597
0x54D593: mov     [ecx], eax
0x54D595: jmp     short loc_54D59A
0x54D597: mov     [esi+4], eax
0x54D59A: add     dword ptr [esi+0Ch], 1
0x54D59E: mov     [esi+8], eax
0x54D5A1: mov     ebx, [ebx]
0x54D5A3: test    ebx, ebx
0x54D5A5: jnz     loc_54D520
0x54D5AB: mov     edx, [esp+2Ch+var_18]
0x54D5AF: mov     ebx, [edx+84h]
0x54D5B5: test    ebx, ebx
0x54D5B7: jz      loc_54D64E
0x54D5BD: lea     esi, [ebp+80h]
0x54D5C3: mov     edi, [ebx+8]
0x54D5C6: mov     eax, [edi]
0x54D5C8: mov     edx, [eax+40h]
0x54D5CB: mov     ecx, edi
0x54D5CD: call    edx
0x54D5CF: neg     al
0x54D5D1: sbb     eax, eax
0x54D5D3: and     eax, edi
0x54D5D5: mov     edi, eax
0x54D5D7: jz      short loc_54D615
0x54D5D9: push    14h; Size
0x54D5DB: call    FormHeapAlloc
0x54D5E0: add     esp, 4
0x54D5E3: mov     [esp+2Ch+var_10], eax
0x54D5E7: test    eax, eax
0x54D5E9: mov     [esp+2Ch+var_4], 4
0x54D5F1: jz      short loc_54D607
0x54D5F3: push    edi
0x54D5F4: mov     ecx, eax
0x54D5F6: call    sub_54EAA0
0x54D5FB: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x54D603: mov     edi, eax
0x54D605: jmp     short loc_54D617
0x54D607: xor     eax, eax
0x54D609: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x54D611: mov     edi, eax
0x54D613: jmp     short loc_54D617
0x54D615: xor     edi, edi
0x54D617: mov     eax, [esi]
0x54D619: mov     edx, [eax+4]
0x54D61C: mov     ecx, esi
0x54D61E: call    edx
0x54D620: mov     [eax+8], edi
0x54D623: mov     dword ptr [eax], 0
0x54D629: mov     ecx, [esi+8]
0x54D62C: mov     [eax+4], ecx
0x54D62F: mov     ecx, [esi+8]
0x54D632: test    ecx, ecx
0x54D634: jz      short loc_54D63A
0x54D636: mov     [ecx], eax
0x54D638: jmp     short loc_54D63D
0x54D63A: mov     [esi+4], eax
0x54D63D: add     dword ptr [esi+0Ch], 1
0x54D641: mov     [esi+8], eax
0x54D644: mov     ebx, [ebx]
0x54D646: test    ebx, ebx
0x54D648: jnz     loc_54D5C3
0x54D64E: mov     edx, [esp+2Ch+var_18]
0x54D652: mov     ebx, [edx+0BCh]
0x54D658: test    ebx, ebx
0x54D65A: jz      loc_54D6F1
0x54D660: lea     esi, [ebp+0B8h]
0x54D666: mov     edi, [ebx+8]
0x54D669: mov     eax, [edi]
0x54D66B: mov     edx, [eax+40h]
0x54D66E: mov     ecx, edi
0x54D670: call    edx
0x54D672: neg     al
0x54D674: sbb     eax, eax
0x54D676: and     eax, edi
0x54D678: mov     edi, eax
0x54D67A: jz      short loc_54D6B8
0x54D67C: push    14h; Size
0x54D67E: call    FormHeapAlloc
0x54D683: add     esp, 4
0x54D686: mov     [esp+2Ch+var_10], eax
0x54D68A: test    eax, eax
0x54D68C: mov     [esp+2Ch+var_4], 5
0x54D694: jz      short loc_54D6AA
0x54D696: push    edi
0x54D697: mov     ecx, eax
0x54D699: call    sub_54EAA0
0x54D69E: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x54D6A6: mov     edi, eax
0x54D6A8: jmp     short loc_54D6BA
0x54D6AA: xor     eax, eax
0x54D6AC: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x54D6B4: mov     edi, eax
0x54D6B6: jmp     short loc_54D6BA
0x54D6B8: xor     edi, edi
0x54D6BA: mov     eax, [esi]
0x54D6BC: mov     edx, [eax+4]
0x54D6BF: mov     ecx, esi
0x54D6C1: call    edx
0x54D6C3: mov     [eax+8], edi
0x54D6C6: mov     dword ptr [eax], 0
0x54D6CC: mov     ecx, [esi+8]
0x54D6CF: mov     [eax+4], ecx
0x54D6D2: mov     ecx, [esi+8]
0x54D6D5: test    ecx, ecx
0x54D6D7: jz      short loc_54D6DD
0x54D6D9: mov     [ecx], eax
0x54D6DB: jmp     short loc_54D6E0
0x54D6DD: mov     [esi+4], eax
0x54D6E0: add     dword ptr [esi+0Ch], 1
0x54D6E4: mov     [esi+8], eax
0x54D6E7: mov     ebx, [ebx]
0x54D6E9: test    ebx, ebx
0x54D6EB: jnz     loc_54D666
0x54D6F1: mov     edx, [esp+2Ch+var_18]
0x54D6F5: mov     ebx, [edx+0E0h]
0x54D6FB: test    ebx, ebx
0x54D6FD: jz      loc_54D79A
0x54D703: lea     esi, [ebp+0DCh]
0x54D709: mov     ebp, 1
0x54D70E: mov     edi, edi
0x54D710: mov     edi, [ebx+8]
0x54D713: mov     eax, [edi]
0x54D715: mov     edx, [eax+40h]
0x54D718: mov     ecx, edi
0x54D71A: call    edx
0x54D71C: neg     al
0x54D71E: sbb     eax, eax
0x54D720: and     eax, edi
0x54D722: mov     edi, eax
0x54D724: jz      short loc_54D762
0x54D726: push    14h; Size
0x54D728: call    FormHeapAlloc
0x54D72D: add     esp, 4
0x54D730: mov     [esp+2Ch+var_10], eax
0x54D734: test    eax, eax
0x54D736: mov     [esp+2Ch+var_4], 6
0x54D73E: jz      short loc_54D754
0x54D740: push    edi
0x54D741: mov     ecx, eax
0x54D743: call    sub_54EAA0
0x54D748: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x54D750: mov     edi, eax
0x54D752: jmp     short loc_54D764
0x54D754: xor     eax, eax
0x54D756: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x54D75E: mov     edi, eax
0x54D760: jmp     short loc_54D764
0x54D762: xor     edi, edi
0x54D764: mov     eax, [esi]
0x54D766: mov     edx, [eax+4]
0x54D769: mov     ecx, esi
0x54D76B: call    edx
0x54D76D: mov     [eax+8], edi
0x54D770: mov     dword ptr [eax], 0
0x54D776: mov     ecx, [esi+8]
0x54D779: mov     [eax+4], ecx
0x54D77C: mov     ecx, [esi+8]
0x54D77F: test    ecx, ecx
0x54D781: jz      short loc_54D787
0x54D783: mov     [ecx], eax
0x54D785: jmp     short loc_54D78A
0x54D787: mov     [esi+4], eax
0x54D78A: add     [esi+0Ch], ebp
0x54D78D: mov     [esi+8], eax
0x54D790: mov     ebx, [ebx]
0x54D792: test    ebx, ebx
0x54D794: jnz     loc_54D710
0x54D79A: mov     edx, [esp+2Ch+var_18]
0x54D79E: mov     ebx, [edx+118h]
0x54D7A4: test    ebx, ebx
0x54D7A6: jz      loc_54D847
0x54D7AC: mov     esi, [esp+2Ch+var_14]
0x54D7B0: add     esi, 114h
0x54D7B6: mov     ebp, 7
0x54D7BB: jmp     short loc_54D7C0
0x54D7BD: align 10h
0x54D7C0: mov     edi, [ebx+8]
0x54D7C3: mov     eax, [edi]
0x54D7C5: mov     edx, [eax+40h]
0x54D7C8: mov     ecx, edi
0x54D7CA: call    edx
0x54D7CC: neg     al
0x54D7CE: sbb     eax, eax
0x54D7D0: and     eax, edi
0x54D7D2: mov     edi, eax
0x54D7D4: jz      short loc_54D80E
0x54D7D6: push    14h; Size
0x54D7D8: call    FormHeapAlloc
0x54D7DD: add     esp, 4
0x54D7E0: mov     [esp+2Ch+var_10], eax
0x54D7E4: test    eax, eax
0x54D7E6: mov     [esp+2Ch+var_4], ebp
0x54D7EA: jz      short loc_54D800
0x54D7EC: push    edi
0x54D7ED: mov     ecx, eax
0x54D7EF: call    sub_54EAA0
0x54D7F4: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x54D7FC: mov     edi, eax
0x54D7FE: jmp     short loc_54D810
0x54D800: xor     eax, eax
0x54D802: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x54D80A: mov     edi, eax
0x54D80C: jmp     short loc_54D810
0x54D80E: xor     edi, edi
0x54D810: mov     eax, [esi]
0x54D812: mov     edx, [eax+4]
0x54D815: mov     ecx, esi
0x54D817: call    edx
0x54D819: mov     [eax+8], edi
0x54D81C: mov     dword ptr [eax], 0
0x54D822: mov     ecx, [esi+8]
0x54D825: mov     [eax+4], ecx
0x54D828: mov     ecx, [esi+8]
0x54D82B: test    ecx, ecx
0x54D82D: jz      short loc_54D833
0x54D82F: mov     [ecx], eax
0x54D831: jmp     short loc_54D836
0x54D833: mov     [esi+4], eax
0x54D836: add     dword ptr [esi+0Ch], 1
0x54D83A: mov     [esi+8], eax
0x54D83D: mov     ebx, [ebx]
0x54D83F: test    ebx, ebx
0x54D841: jnz     loc_54D7C0
0x54D847: mov     edx, [esp+2Ch+var_18]
0x54D84B: mov     ebx, [edx+13Ch]
0x54D851: test    ebx, ebx
0x54D853: jz      loc_54D8EF
0x54D859: mov     esi, [esp+2Ch+var_14]
0x54D85D: add     esi, 138h
0x54D863: mov     ebp, 8
0x54D868: mov     edi, [ebx+8]
0x54D86B: mov     eax, [edi]
0x54D86D: mov     edx, [eax+40h]
0x54D870: mov     ecx, edi
0x54D872: call    edx
0x54D874: neg     al
0x54D876: sbb     eax, eax
0x54D878: and     eax, edi
0x54D87A: mov     edi, eax
0x54D87C: jz      short loc_54D8B6
0x54D87E: push    14h; Size
0x54D880: call    FormHeapAlloc
0x54D885: add     esp, 4
0x54D888: mov     [esp+2Ch+var_10], eax
0x54D88C: test    eax, eax
0x54D88E: mov     [esp+2Ch+var_4], ebp
0x54D892: jz      short loc_54D8A8
0x54D894: push    edi
0x54D895: mov     ecx, eax
0x54D897: call    sub_54EAA0
0x54D89C: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x54D8A4: mov     edi, eax
0x54D8A6: jmp     short loc_54D8B8
0x54D8A8: xor     eax, eax
0x54D8AA: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x54D8B2: mov     edi, eax
0x54D8B4: jmp     short loc_54D8B8
0x54D8B6: xor     edi, edi
0x54D8B8: mov     eax, [esi]
0x54D8BA: mov     edx, [eax+4]
0x54D8BD: mov     ecx, esi
0x54D8BF: call    edx
0x54D8C1: mov     [eax+8], edi
0x54D8C4: mov     dword ptr [eax], 0
0x54D8CA: mov     ecx, [esi+8]
0x54D8CD: mov     [eax+4], ecx
0x54D8D0: mov     ecx, [esi+8]
0x54D8D3: test    ecx, ecx
0x54D8D5: jz      short loc_54D8DB
0x54D8D7: mov     [ecx], eax
0x54D8D9: jmp     short loc_54D8DE
0x54D8DB: mov     [esi+4], eax
0x54D8DE: add     dword ptr [esi+0Ch], 1
0x54D8E2: mov     [esi+8], eax
0x54D8E5: mov     ebx, [ebx]
0x54D8E7: test    ebx, ebx
0x54D8E9: jnz     loc_54D868
0x54D8EF: mov     eax, [esp+2Ch+var_14]
0x54D8F3: mov     ecx, [esp+2Ch+var_C]
0x54D8F7: mov     large fs:0, ecx
0x54D8FE: pop     ecx
0x54D8FF: pop     edi
0x54D900: pop     esi
0x54D901: pop     ebp
0x54D902: pop     ebx
0x54D903: add     esp, 18h
0x54D906: retn
