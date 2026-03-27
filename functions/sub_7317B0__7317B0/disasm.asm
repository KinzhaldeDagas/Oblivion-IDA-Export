0x7317B0: mov     eax, ds:0B3FCE4h
0x7317B5: push    ebx
0x7317B6: push    ebp
0x7317B7: mov     ebp, ds:0A2807Ch
0x7317BD: push    esi
0x7317BE: mov     esi, ecx
0x7317C0: push    edi
0x7317C1: mov     edi, [esi+8]
0x7317C4: cmp     edi, eax
0x7317C6: mov     ebx, eax
0x7317C8: jz      short loc_7317F7
0x7317CA: test    edi, edi
0x7317CC: jz      short loc_7317E6
0x7317CE: lea     eax, [edi+4]
0x7317D1: push    eax; lpAddend
0x7317D2: call    ebp ; InterlockedDecrement
0x7317D4: test    eax, eax
0x7317D6: jnz     short loc_7317E6
0x7317D8: test    edi, edi
0x7317DA: jz      short loc_7317E6
0x7317DC: mov     edx, [edi]
0x7317DE: mov     eax, [edx]
0x7317E0: push    1
0x7317E2: mov     ecx, edi
0x7317E4: call    eax
0x7317E6: test    ebx, ebx
0x7317E8: mov     [esi+8], ebx
0x7317EB: jz      short loc_7317F7
0x7317ED: add     ebx, 4
0x7317F0: push    ebx; lpAddend
0x7317F1: call    dword ptr ds:0A28078h
0x7317F7: mov     eax, ds:0B3FAA4h
0x7317FC: mov     edi, [esi+10h]
0x7317FF: cmp     edi, eax
0x731801: mov     ebx, eax
0x731803: jz      short loc_731832
0x731805: test    edi, edi
0x731807: jz      short loc_731821
0x731809: lea     ecx, [edi+4]
0x73180C: push    ecx; lpAddend
0x73180D: call    ebp ; InterlockedDecrement
0x73180F: test    eax, eax
0x731811: jnz     short loc_731821
0x731813: test    edi, edi
0x731815: jz      short loc_731821
0x731817: mov     edx, [edi]
0x731819: mov     eax, [edx]
0x73181B: push    1
0x73181D: mov     ecx, edi
0x73181F: call    eax
0x731821: test    ebx, ebx
0x731823: mov     [esi+10h], ebx
0x731826: jz      short loc_731832
0x731828: add     ebx, 4
0x73182B: push    ebx; lpAddend
0x73182C: call    dword ptr ds:0A28078h
0x731832: mov     eax, ds:0B401D8h
0x731837: mov     edi, [esi+14h]
0x73183A: cmp     edi, eax
0x73183C: mov     ebx, eax
0x73183E: jz      short loc_73186D
0x731840: test    edi, edi
0x731842: jz      short loc_73185C
0x731844: lea     ecx, [edi+4]
0x731847: push    ecx; lpAddend
0x731848: call    ebp ; InterlockedDecrement
0x73184A: test    eax, eax
0x73184C: jnz     short loc_73185C
0x73184E: test    edi, edi
0x731850: jz      short loc_73185C
0x731852: mov     edx, [edi]
0x731854: mov     eax, [edx]
0x731856: push    1
0x731858: mov     ecx, edi
0x73185A: call    eax
0x73185C: test    ebx, ebx
0x73185E: mov     [esi+14h], ebx
0x731861: jz      short loc_73186D
0x731863: add     ebx, 4
0x731866: push    ebx; lpAddend
0x731867: call    dword ptr ds:0A28078h
0x73186D: mov     eax, ds:0B401ACh
0x731872: mov     edi, [esi+18h]
0x731875: cmp     edi, eax
0x731877: mov     ebx, eax
0x731879: jz      short loc_7318A8
0x73187B: test    edi, edi
0x73187D: jz      short loc_731897
0x73187F: lea     ecx, [edi+4]
0x731882: push    ecx; lpAddend
0x731883: call    ebp ; InterlockedDecrement
0x731885: test    eax, eax
0x731887: jnz     short loc_731897
0x731889: test    edi, edi
0x73188B: jz      short loc_731897
0x73188D: mov     edx, [edi]
0x73188F: mov     eax, [edx]
0x731891: push    1
0x731893: mov     ecx, edi
0x731895: call    eax
0x731897: test    ebx, ebx
0x731899: mov     [esi+18h], ebx
0x73189C: jz      short loc_7318A8
0x73189E: add     ebx, 4
0x7318A1: push    ebx; lpAddend
0x7318A2: call    dword ptr ds:0A28078h
0x7318A8: mov     eax, ds:0B3FCF8h
0x7318AD: mov     edi, [esi+1Ch]
0x7318B0: cmp     edi, eax
0x7318B2: mov     ebx, eax
0x7318B4: jz      short loc_7318E3
0x7318B6: test    edi, edi
0x7318B8: jz      short loc_7318D2
0x7318BA: lea     ecx, [edi+4]
0x7318BD: push    ecx; lpAddend
0x7318BE: call    ebp ; InterlockedDecrement
0x7318C0: test    eax, eax
0x7318C2: jnz     short loc_7318D2
0x7318C4: test    edi, edi
0x7318C6: jz      short loc_7318D2
0x7318C8: mov     edx, [edi]
0x7318CA: mov     eax, [edx]
0x7318CC: push    1
0x7318CE: mov     ecx, edi
0x7318D0: call    eax
0x7318D2: test    ebx, ebx
0x7318D4: mov     [esi+1Ch], ebx
0x7318D7: jz      short loc_7318E3
0x7318D9: add     ebx, 4
0x7318DC: push    ebx; lpAddend
0x7318DD: call    dword ptr ds:0A28078h
0x7318E3: mov     eax, ds:0B3F974h
0x7318E8: mov     edi, [esi+20h]
0x7318EB: cmp     edi, eax
0x7318ED: mov     ebx, eax
0x7318EF: jz      short loc_73191E
0x7318F1: test    edi, edi
0x7318F3: jz      short loc_73190D
0x7318F5: lea     ecx, [edi+4]
0x7318F8: push    ecx; lpAddend
0x7318F9: call    ebp ; InterlockedDecrement
0x7318FB: test    eax, eax
0x7318FD: jnz     short loc_73190D
0x7318FF: test    edi, edi
0x731901: jz      short loc_73190D
0x731903: mov     edx, [edi]
0x731905: mov     eax, [edx]
0x731907: push    1
0x731909: mov     ecx, edi
0x73190B: call    eax
0x73190D: test    ebx, ebx
0x73190F: mov     [esi+20h], ebx
0x731912: jz      short loc_73191E
0x731914: add     ebx, 4
0x731917: push    ebx; lpAddend
0x731918: call    dword ptr ds:0A28078h
0x73191E: mov     eax, ds:0B3F980h
0x731923: mov     edi, [esi+24h]
0x731926: cmp     edi, eax
0x731928: mov     ebx, eax
0x73192A: jz      short loc_731959
0x73192C: test    edi, edi
0x73192E: jz      short loc_731948
0x731930: lea     ecx, [edi+4]
0x731933: push    ecx; lpAddend
0x731934: call    ebp ; InterlockedDecrement
0x731936: test    eax, eax
0x731938: jnz     short loc_731948
0x73193A: test    edi, edi
0x73193C: jz      short loc_731948
0x73193E: mov     edx, [edi]
0x731940: mov     eax, [edx]
0x731942: push    1
0x731944: mov     ecx, edi
0x731946: call    eax
0x731948: test    ebx, ebx
0x73194A: mov     [esi+24h], ebx
0x73194D: jz      short loc_731959
0x73194F: add     ebx, 4
0x731952: push    ebx; lpAddend
0x731953: call    dword ptr ds:0A28078h
0x731959: mov     eax, ds:0B3F984h
0x73195E: mov     edi, [esi+28h]
0x731961: cmp     edi, eax
0x731963: mov     ebx, eax
0x731965: jz      short loc_731994
0x731967: test    edi, edi
0x731969: jz      short loc_731983
0x73196B: lea     ecx, [edi+4]
0x73196E: push    ecx; lpAddend
0x73196F: call    ebp ; InterlockedDecrement
0x731971: test    eax, eax
0x731973: jnz     short loc_731983
0x731975: test    edi, edi
0x731977: jz      short loc_731983
0x731979: mov     edx, [edi]
0x73197B: mov     eax, [edx]
0x73197D: push    1
0x73197F: mov     ecx, edi
0x731981: call    eax
0x731983: test    ebx, ebx
0x731985: mov     [esi+28h], ebx
0x731988: jz      short loc_731994
0x73198A: add     ebx, 4
0x73198D: push    ebx; lpAddend
0x73198E: call    dword ptr ds:0A28078h
0x731994: mov     eax, ds:0B3F998h
0x731999: mov     edi, [esi+2Ch]
0x73199C: cmp     edi, eax
0x73199E: mov     ebx, eax
0x7319A0: jz      short loc_7319CF
0x7319A2: test    edi, edi
0x7319A4: jz      short loc_7319BE
0x7319A6: lea     ecx, [edi+4]
0x7319A9: push    ecx; lpAddend
0x7319AA: call    ebp ; InterlockedDecrement
0x7319AC: test    eax, eax
0x7319AE: jnz     short loc_7319BE
0x7319B0: test    edi, edi
0x7319B2: jz      short loc_7319BE
0x7319B4: mov     edx, [edi]
0x7319B6: mov     eax, [edx]
0x7319B8: push    1
0x7319BA: mov     ecx, edi
0x7319BC: call    eax
0x7319BE: test    ebx, ebx
0x7319C0: mov     [esi+2Ch], ebx
0x7319C3: jz      short loc_7319CF
0x7319C5: add     ebx, 4
0x7319C8: push    ebx; lpAddend
0x7319C9: call    dword ptr ds:0A28078h
0x7319CF: pop     edi
0x7319D0: pop     esi
0x7319D1: pop     ebp
0x7319D2: pop     ebx
0x7319D3: retn
