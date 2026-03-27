0x8517F0: push    0FFFFFFFFh
0x8517F2: push    offset SEH_8517F0
0x8517F7: mov     eax, large fs:0
0x8517FD: push    eax
0x8517FE: sub     esp, 0Ch
0x851801: push    ebx
0x851802: push    ebp
0x851803: push    esi
0x851804: push    edi
0x851805: mov     eax, ds:0B30AACh
0x85180A: xor     eax, esp
0x85180C: push    eax
0x85180D: lea     eax, [esp+2Ch+var_C]
0x851811: mov     large fs:0, eax
0x851817: mov     [esp+2Ch+var_10], ecx
0x85181B: mov     eax, ds:0B42EB8h
0x851820: movzx   eax, byte ptr [eax+9]
0x851824: mov     edi, ds:0B45B40h
0x85182A: mov     ecx, [edi+24h]
0x85182D: mov     ebx, [esp+2Ch+arg_C]
0x851831: mov     esi, [ecx]
0x851833: mov     edx, [ebx]
0x851835: mov     [esp+2Ch+var_14], eax
0x851839: push    eax
0x85183A: mov     eax, [edx+88h]
0x851840: mov     ecx, ebx
0x851842: mov     [esp+30h+var_18], esi
0x851846: call    eax
0x851848: mov     esi, [esi+4]
0x85184B: mov     ebp, eax
0x85184D: cmp     esi, ebp
0x85184F: jz      short loc_851888
0x851851: test    esi, esi
0x851853: jz      short loc_851871
0x851855: lea     ecx, [esi+4]
0x851858: push    ecx; lpAddend
0x851859: call    dword ptr ds:0A2807Ch
0x85185F: test    eax, eax
0x851861: jnz     short loc_851871
0x851863: test    esi, esi
0x851865: jz      short loc_851871
0x851867: mov     edx, [esi]
0x851869: mov     eax, [edx]
0x85186B: push    1
0x85186D: mov     ecx, esi
0x85186F: call    eax
0x851871: test    ebp, ebp
0x851873: mov     esi, [esp+2Ch+var_18]
0x851877: mov     [esi+4], ebp
0x85187A: jz      short loc_85188C
0x85187C: add     ebp, 4
0x85187F: push    ebp; lpAddend
0x851880: call    dword ptr ds:0A28078h
0x851886: jmp     short loc_85188C
0x851888: mov     esi, [esp+2Ch+var_18]
0x85188C: test    esi, esi
0x85188E: jz      short loc_8518AA
0x851890: cmp     byte ptr ds:0B42CDDh, 0
0x851897: jz      short loc_8518AA
0x851899: mov     edx, [ebx]
0x85189B: mov     eax, [edx+78h]
0x85189E: mov     ecx, ebx
0x8518A0: call    eax
0x8518A2: push    eax
0x8518A3: mov     ecx, esi
0x8518A5: call    sub_7715E0
0x8518AA: mov     ecx, [edi+24h]
0x8518AD: mov     esi, [ecx+4]
0x8518B0: mov     edx, [ebx]
0x8518B2: mov     ebp, [esp+2Ch+var_14]
0x8518B6: mov     eax, [edx+8Ch]
0x8518BC: push    ebp
0x8518BD: mov     ecx, ebx
0x8518BF: mov     [esp+30h+var_18], esi
0x8518C3: call    eax
0x8518C5: test    eax, eax
0x8518C7: jz      short loc_8518DA
0x8518C9: mov     edx, [ebx]
0x8518CB: mov     eax, [edx+8Ch]
0x8518D1: push    ebp
0x8518D2: mov     ecx, ebx
0x8518D4: call    eax
0x8518D6: mov     ebp, eax
0x8518D8: jmp     short loc_8518EF
0x8518DA: test    dword ptr [ebx+1Ch], 80h
0x8518E1: mov     ebp, ds:0B430F0h
0x8518E7: ja      short loc_8518EF
0x8518E9: mov     ebp, ds:0B430DCh
0x8518EF: mov     esi, [esi+4]
0x8518F2: cmp     esi, ebp
0x8518F4: jz      short loc_85192D
0x8518F6: test    esi, esi
0x8518F8: jz      short loc_851916
0x8518FA: lea     ecx, [esi+4]
0x8518FD: push    ecx; lpAddend
0x8518FE: call    dword ptr ds:0A2807Ch
0x851904: test    eax, eax
0x851906: jnz     short loc_851916
0x851908: test    esi, esi
0x85190A: jz      short loc_851916
0x85190C: mov     edx, [esi]
0x85190E: mov     eax, [edx]
0x851910: push    1
0x851912: mov     ecx, esi
0x851914: call    eax
0x851916: test    ebp, ebp
0x851918: mov     esi, [esp+2Ch+var_18]
0x85191C: mov     [esi+4], ebp
0x85191F: jz      short loc_851931
0x851921: add     ebp, 4
0x851924: push    ebp; lpAddend
0x851925: call    dword ptr ds:0A28078h
0x85192B: jmp     short loc_851931
0x85192D: mov     esi, [esp+2Ch+var_18]
0x851931: test    esi, esi
0x851933: jz      short loc_85194F
0x851935: cmp     byte ptr ds:0B42CDDh, 0
0x85193C: jz      short loc_85194F
0x85193E: mov     edx, [ebx]
0x851940: mov     eax, [edx+78h]
0x851943: mov     ecx, ebx
0x851945: call    eax
0x851947: push    eax
0x851948: mov     ecx, esi
0x85194A: call    sub_7715E0
0x85194F: cmp     byte ptr [esp+2Ch+arg_10], 0
0x851954: jz      short loc_851995
0x851956: mov     ebx, 1
0x85195B: add     [edi+60h], ebx
0x85195E: mov     [esp+2Ch+arg_10], edi
0x851962: mov     esi, [esp+2Ch+var_10]
0x851966: mov     edx, [esi+38h]
0x851969: lea     ecx, [esp+2Ch+arg_10]
0x85196D: push    ecx
0x85196E: push    edx
0x85196F: lea     ecx, [esi+40h]
0x851972: mov     [esp+34h+var_4], 0
0x85197A: call    sub_76CE40
0x85197F: or      eax, 0FFFFFFFFh
0x851982: add     [edi+60h], eax
0x851985: mov     [esp+2Ch+var_4], eax
0x851989: jnz     short loc_851992
0x85198B: mov     ecx, edi
0x85198D: call    sub_7604D0
0x851992: add     [esi+38h], ebx
0x851995: mov     ecx, [esp+2Ch+var_C]
0x851999: mov     large fs:0, ecx
0x8519A0: pop     ecx
0x8519A1: pop     edi
0x8519A2: pop     esi
0x8519A3: pop     ebp
0x8519A4: pop     ebx
0x8519A5: add     esp, 18h
0x8519A8: retn    14h
