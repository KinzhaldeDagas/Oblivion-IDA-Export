0x4035D0: push    ebx
0x4035D1: push    esi
0x4035D2: push    edi
0x4035D3: mov     edi, [esp+0Ch+arg_0]
0x4035D7: add     edi, 4
0x4035DA: mov     edx, 10h
0x4035DF: mov     eax, offset CLSID_GUID_XAxis
0x4035E4: mov     ecx, edi
0x4035E6: mov     esi, [ecx]
0x4035E8: cmp     esi, [eax]
0x4035EA: jnz     short loc_4035FE
0x4035EC: sub     edx, 4
0x4035EF: add     eax, 4
0x4035F2: add     ecx, 4
0x4035F5: cmp     edx, 4
0x4035F8: jnb     short loc_4035E6
0x4035FA: test    edx, edx
0x4035FC: jz      short loc_40365B
0x4035FE: movzx   ebx, byte ptr [eax]
0x403601: movzx   esi, byte ptr [ecx]
0x403604: sub     esi, ebx
0x403606: jnz     short loc_40364D
0x403608: sub     edx, 1
0x40360B: add     eax, 1
0x40360E: add     ecx, 1
0x403611: test    edx, edx
0x403613: jz      short loc_40365B
0x403615: movzx   ebx, byte ptr [eax]
0x403618: movzx   esi, byte ptr [ecx]
0x40361B: sub     esi, ebx
0x40361D: jnz     short loc_40364D
0x40361F: sub     edx, 1
0x403622: add     eax, 1
0x403625: add     ecx, 1
0x403628: test    edx, edx
0x40362A: jz      short loc_40365B
0x40362C: movzx   ebx, byte ptr [eax]
0x40362F: movzx   esi, byte ptr [ecx]
0x403632: sub     esi, ebx
0x403634: jnz     short loc_40364D
0x403636: sub     edx, 1
0x403639: add     eax, 1
0x40363C: add     ecx, 1
0x40363F: test    edx, edx
0x403641: jz      short loc_40365B
0x403643: movzx   eax, byte ptr [eax]
0x403646: movzx   esi, byte ptr [ecx]
0x403649: sub     esi, eax
0x40364B: jz      short loc_40365B
0x40364D: test    esi, esi
0x40364F: mov     eax, 1
0x403654: jg      short loc_40365D
0x403656: or      eax, 0FFFFFFFFh
0x403659: jmp     short loc_40365D
0x40365B: xor     eax, eax
0x40365D: test    eax, eax
0x40365F: mov     ebx, [esp+0Ch+arg_4]
0x403663: jnz     short loc_403668
0x403665: or      dword ptr [ebx], 1
0x403668: mov     eax, 10h
0x40366D: mov     ecx, offset CLSID_GUID_YAxis
0x403672: mov     edx, edi
0x403674: push    ebp
0x403675: mov     esi, [edx]
0x403677: cmp     esi, [ecx]
0x403679: jnz     short loc_40368D
0x40367B: sub     eax, 4
0x40367E: add     ecx, 4
0x403681: add     edx, 4
0x403684: cmp     eax, 4
0x403687: jnb     short loc_403675
0x403689: test    eax, eax
0x40368B: jz      short loc_4036EA
0x40368D: movzx   esi, byte ptr [edx]
0x403690: movzx   ebp, byte ptr [ecx]
0x403693: sub     esi, ebp
0x403695: jnz     short loc_4036DC
0x403697: sub     eax, 1
0x40369A: add     ecx, 1
0x40369D: add     edx, 1
0x4036A0: test    eax, eax
0x4036A2: jz      short loc_4036EA
0x4036A4: movzx   esi, byte ptr [edx]
0x4036A7: movzx   ebp, byte ptr [ecx]
0x4036AA: sub     esi, ebp
0x4036AC: jnz     short loc_4036DC
0x4036AE: sub     eax, 1
0x4036B1: add     ecx, 1
0x4036B4: add     edx, 1
0x4036B7: test    eax, eax
0x4036B9: jz      short loc_4036EA
0x4036BB: movzx   esi, byte ptr [edx]
0x4036BE: movzx   ebp, byte ptr [ecx]
0x4036C1: sub     esi, ebp
0x4036C3: jnz     short loc_4036DC
0x4036C5: sub     eax, 1
0x4036C8: add     ecx, 1
0x4036CB: add     edx, 1
0x4036CE: test    eax, eax
0x4036D0: jz      short loc_4036EA
0x4036D2: movzx   esi, byte ptr [edx]
0x4036D5: movzx   ecx, byte ptr [ecx]
0x4036D8: sub     esi, ecx
0x4036DA: jz      short loc_4036EA
0x4036DC: test    esi, esi
0x4036DE: mov     eax, 1
0x4036E3: jg      short loc_4036EC
0x4036E5: or      eax, 0FFFFFFFFh
0x4036E8: jmp     short loc_4036EC
0x4036EA: xor     eax, eax
0x4036EC: test    eax, eax
0x4036EE: jnz     short loc_4036F3
0x4036F0: or      dword ptr [ebx], 2
0x4036F3: mov     eax, 10h
0x4036F8: mov     ecx, offset CLSID_GUID_ZAxis
0x4036FD: mov     edx, edi
0x4036FF: nop
0x403700: mov     esi, [edx]
0x403702: cmp     esi, [ecx]
0x403704: jnz     short loc_403718
0x403706: sub     eax, 4
0x403709: add     ecx, 4
0x40370C: add     edx, 4
0x40370F: cmp     eax, 4
0x403712: jnb     short loc_403700
0x403714: test    eax, eax
0x403716: jz      short loc_403775
0x403718: movzx   ebp, byte ptr [ecx]
0x40371B: movzx   esi, byte ptr [edx]
0x40371E: sub     esi, ebp
0x403720: jnz     short loc_403767
0x403722: sub     eax, 1
0x403725: add     ecx, 1
0x403728: add     edx, 1
0x40372B: test    eax, eax
0x40372D: jz      short loc_403775
0x40372F: movzx   ebp, byte ptr [ecx]
0x403732: movzx   esi, byte ptr [edx]
0x403735: sub     esi, ebp
0x403737: jnz     short loc_403767
0x403739: sub     eax, 1
0x40373C: add     ecx, 1
0x40373F: add     edx, 1
0x403742: test    eax, eax
0x403744: jz      short loc_403775
0x403746: movzx   ebp, byte ptr [ecx]
0x403749: movzx   esi, byte ptr [edx]
0x40374C: sub     esi, ebp
0x40374E: jnz     short loc_403767
0x403750: sub     eax, 1
0x403753: add     ecx, 1
0x403756: add     edx, 1
0x403759: test    eax, eax
0x40375B: jz      short loc_403775
0x40375D: movzx   eax, byte ptr [ecx]
0x403760: movzx   esi, byte ptr [edx]
0x403763: sub     esi, eax
0x403765: jz      short loc_403775
0x403767: test    esi, esi
0x403769: mov     eax, 1
0x40376E: jg      short loc_403777
0x403770: or      eax, 0FFFFFFFFh
0x403773: jmp     short loc_403777
0x403775: xor     eax, eax
0x403777: test    eax, eax
0x403779: jnz     short loc_40377E
0x40377B: or      dword ptr [ebx], 4
0x40377E: mov     eax, 10h
0x403783: mov     ecx, offset CLSID_GUID_RxAxis
0x403788: mov     edx, edi
0x40378A: lea     ebx, [ebx+0]
0x403790: mov     esi, [edx]
0x403792: cmp     esi, [ecx]
0x403794: jnz     short loc_4037A8
0x403796: sub     eax, 4
0x403799: add     ecx, 4
0x40379C: add     edx, 4
0x40379F: cmp     eax, 4
0x4037A2: jnb     short loc_403790
0x4037A4: test    eax, eax
0x4037A6: jz      short loc_403805
0x4037A8: movzx   esi, byte ptr [edx]
0x4037AB: movzx   ebp, byte ptr [ecx]
0x4037AE: sub     esi, ebp
0x4037B0: jnz     short loc_4037F7
0x4037B2: sub     eax, 1
0x4037B5: add     ecx, 1
0x4037B8: add     edx, 1
0x4037BB: test    eax, eax
0x4037BD: jz      short loc_403805
0x4037BF: movzx   esi, byte ptr [edx]
0x4037C2: movzx   ebp, byte ptr [ecx]
0x4037C5: sub     esi, ebp
0x4037C7: jnz     short loc_4037F7
0x4037C9: sub     eax, 1
0x4037CC: add     ecx, 1
0x4037CF: add     edx, 1
0x4037D2: test    eax, eax
0x4037D4: jz      short loc_403805
0x4037D6: movzx   esi, byte ptr [edx]
0x4037D9: movzx   ebp, byte ptr [ecx]
0x4037DC: sub     esi, ebp
0x4037DE: jnz     short loc_4037F7
0x4037E0: sub     eax, 1
0x4037E3: add     ecx, 1
0x4037E6: add     edx, 1
0x4037E9: test    eax, eax
0x4037EB: jz      short loc_403805
0x4037ED: movzx   esi, byte ptr [edx]
0x4037F0: movzx   ecx, byte ptr [ecx]
0x4037F3: sub     esi, ecx
0x4037F5: jz      short loc_403805
0x4037F7: test    esi, esi
0x4037F9: mov     eax, 1
0x4037FE: jg      short loc_403807
0x403800: or      eax, 0FFFFFFFFh
0x403803: jmp     short loc_403807
0x403805: xor     eax, eax
0x403807: test    eax, eax
0x403809: jnz     short loc_40380E
0x40380B: or      dword ptr [ebx], 8
0x40380E: mov     eax, 10h
0x403813: mov     ecx, offset CLSID_GUID_RyAxis
0x403818: mov     edx, edi
0x40381A: lea     ebx, [ebx+0]
0x403820: mov     esi, [edx]
0x403822: cmp     esi, [ecx]
0x403824: jnz     short loc_403838
0x403826: sub     eax, 4
0x403829: add     ecx, 4
0x40382C: add     edx, 4
0x40382F: cmp     eax, 4
0x403832: jnb     short loc_403820
0x403834: test    eax, eax
0x403836: jz      short loc_403895
0x403838: movzx   ebp, byte ptr [ecx]
0x40383B: movzx   esi, byte ptr [edx]
0x40383E: sub     esi, ebp
0x403840: jnz     short loc_403887
0x403842: sub     eax, 1
0x403845: add     ecx, 1
0x403848: add     edx, 1
0x40384B: test    eax, eax
0x40384D: jz      short loc_403895
0x40384F: movzx   ebp, byte ptr [ecx]
0x403852: movzx   esi, byte ptr [edx]
0x403855: sub     esi, ebp
0x403857: jnz     short loc_403887
0x403859: sub     eax, 1
0x40385C: add     ecx, 1
0x40385F: add     edx, 1
0x403862: test    eax, eax
0x403864: jz      short loc_403895
0x403866: movzx   ebp, byte ptr [ecx]
0x403869: movzx   esi, byte ptr [edx]
0x40386C: sub     esi, ebp
0x40386E: jnz     short loc_403887
0x403870: sub     eax, 1
0x403873: add     ecx, 1
0x403876: add     edx, 1
0x403879: test    eax, eax
0x40387B: jz      short loc_403895
0x40387D: movzx   eax, byte ptr [ecx]
0x403880: movzx   esi, byte ptr [edx]
0x403883: sub     esi, eax
0x403885: jz      short loc_403895
0x403887: test    esi, esi
0x403889: mov     eax, 1
0x40388E: jg      short loc_403897
0x403890: or      eax, 0FFFFFFFFh
0x403893: jmp     short loc_403897
0x403895: xor     eax, eax
0x403897: test    eax, eax
0x403899: pop     ebp
0x40389A: jnz     short loc_40389F
0x40389C: or      dword ptr [ebx], 10h
0x40389F: mov     eax, 10h
0x4038A4: mov     ecx, offset CLSID_GUID_RzAxis
0x4038A9: mov     edx, edi
0x4038AB: jmp     short loc_4038B0
0x4038AD: align 10h
0x4038B0: mov     esi, [edx]
0x4038B2: cmp     esi, [ecx]
0x4038B4: jnz     short loc_4038C8
0x4038B6: sub     eax, 4
0x4038B9: add     ecx, 4
0x4038BC: add     edx, 4
0x4038BF: cmp     eax, 4
0x4038C2: jnb     short loc_4038B0
0x4038C4: test    eax, eax
0x4038C6: jz      short loc_403925
0x4038C8: movzx   esi, byte ptr [edx]
0x4038CB: movzx   edi, byte ptr [ecx]
0x4038CE: sub     esi, edi
0x4038D0: jnz     short loc_403917
0x4038D2: sub     eax, 1
0x4038D5: add     ecx, 1
0x4038D8: add     edx, 1
0x4038DB: test    eax, eax
0x4038DD: jz      short loc_403925
0x4038DF: movzx   esi, byte ptr [edx]
0x4038E2: movzx   edi, byte ptr [ecx]
0x4038E5: sub     esi, edi
0x4038E7: jnz     short loc_403917
0x4038E9: sub     eax, 1
0x4038EC: add     ecx, 1
0x4038EF: add     edx, 1
0x4038F2: test    eax, eax
0x4038F4: jz      short loc_403925
0x4038F6: movzx   esi, byte ptr [edx]
0x4038F9: movzx   edi, byte ptr [ecx]
0x4038FC: sub     esi, edi
0x4038FE: jnz     short loc_403917
0x403900: sub     eax, 1
0x403903: add     ecx, 1
0x403906: add     edx, 1
0x403909: test    eax, eax
0x40390B: jz      short loc_403925
0x40390D: movzx   esi, byte ptr [edx]
0x403910: movzx   ecx, byte ptr [ecx]
0x403913: sub     esi, ecx
0x403915: jz      short loc_403925
0x403917: test    esi, esi
0x403919: mov     eax, 1
0x40391E: jg      short loc_403927
0x403920: or      eax, 0FFFFFFFFh
0x403923: jmp     short loc_403927
0x403925: xor     eax, eax
0x403927: test    eax, eax
0x403929: jnz     short loc_40392E
0x40392B: or      dword ptr [ebx], 20h
0x40392E: mov     eax, [esp+0Ch+arg_0]
0x403932: test    byte ptr [eax+18h], 0Ch
0x403936: jz      short loc_403948
0x403938: mov     ecx, [eax+18h]
0x40393B: shr     ecx, 8
0x40393E: mov     edx, 1
0x403943: shl     edx, cl
0x403945: or      [ebx+4], edx
0x403948: pop     edi
0x403949: pop     esi
0x40394A: mov     eax, 1
0x40394F: pop     ebx
0x403950: retn    8
