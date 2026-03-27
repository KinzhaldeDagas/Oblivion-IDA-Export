0x85D500: push    0FFFFFFFFh
0x85D502: push    offset SEH_85E160
0x85D507: mov     eax, large fs:0
0x85D50D: push    eax
0x85D50E: push    ebx
0x85D50F: push    ebp
0x85D510: push    esi
0x85D511: push    edi
0x85D512: mov     eax, ds:0B30AACh
0x85D517: xor     eax, esp
0x85D519: push    eax
0x85D51A: lea     eax, [esp+20h+var_C]
0x85D51E: mov     large fs:0, eax
0x85D524: mov     esi, ecx
0x85D526: mov     eax, [esp+20h+arg_8]
0x85D52A: mov     ebx, [eax+0Ch]
0x85D52D: mov     edi, ds:0B477BCh
0x85D533: push    ebx
0x85D534: call    sub_848E50
0x85D539: mov     edx, [esi]
0x85D53B: mov     eax, [esp+20h+arg_0]
0x85D53F: mov     edx, [edx+0BCh]
0x85D545: push    0
0x85D547: push    ebx
0x85D548: push    eax
0x85D549: mov     ecx, esi
0x85D54B: call    edx
0x85D54D: mov     eax, [edi+24h]
0x85D550: mov     ebx, [esp+20h+arg_C]
0x85D554: mov     ebp, [eax]
0x85D556: mov     edx, [ebx]
0x85D558: mov     eax, [edx+88h]
0x85D55E: push    0
0x85D560: mov     ecx, ebx
0x85D562: mov     [esp+24h+arg_8], ebp
0x85D566: call    eax
0x85D568: mov     ebp, [ebp+4]
0x85D56B: cmp     ebp, eax
0x85D56D: mov     [esp+20h+arg_0], eax
0x85D571: jz      short loc_85D5AD
0x85D573: test    ebp, ebp
0x85D575: jz      short loc_85D598
0x85D577: lea     ecx, [ebp+4]
0x85D57A: push    ecx; lpAddend
0x85D57B: call    dword ptr ds:0A2807Ch
0x85D581: test    eax, eax
0x85D583: jnz     short loc_85D594
0x85D585: test    ebp, ebp
0x85D587: jz      short loc_85D594
0x85D589: mov     edx, [ebp+0]
0x85D58C: mov     eax, [edx]
0x85D58E: push    1
0x85D590: mov     ecx, ebp
0x85D592: call    eax
0x85D594: mov     eax, [esp+20h+arg_0]
0x85D598: test    eax, eax
0x85D59A: mov     ecx, [esp+20h+arg_8]
0x85D59E: mov     [ecx+4], eax
0x85D5A1: jz      short loc_85D5AD
0x85D5A3: add     eax, 4
0x85D5A6: push    eax; lpAddend
0x85D5A7: call    dword ptr ds:0A28078h
0x85D5AD: mov     edx, [esp+20h+arg_8]
0x85D5B1: push    ebx
0x85D5B2: push    edx
0x85D5B3: mov     ecx, esi
0x85D5B5: call    sub_848FA0
0x85D5BA: mov     eax, [edi+24h]
0x85D5BD: mov     ebp, [eax+4]
0x85D5C0: push    0
0x85D5C2: push    ebx
0x85D5C3: mov     ecx, esi
0x85D5C5: mov     [esp+28h+arg_8], ebp
0x85D5C9: call    sub_848FD0
0x85D5CE: mov     ebp, [ebp+4]
0x85D5D1: cmp     ebp, eax
0x85D5D3: mov     [esp+20h+arg_0], eax
0x85D5D7: jz      short loc_85D613
0x85D5D9: test    ebp, ebp
0x85D5DB: jz      short loc_85D5FE
0x85D5DD: lea     ecx, [ebp+4]
0x85D5E0: push    ecx; lpAddend
0x85D5E1: call    dword ptr ds:0A2807Ch
0x85D5E7: test    eax, eax
0x85D5E9: jnz     short loc_85D5FA
0x85D5EB: test    ebp, ebp
0x85D5ED: jz      short loc_85D5FA
0x85D5EF: mov     edx, [ebp+0]
0x85D5F2: mov     eax, [edx]
0x85D5F4: push    1
0x85D5F6: mov     ecx, ebp
0x85D5F8: call    eax
0x85D5FA: mov     eax, [esp+20h+arg_0]
0x85D5FE: test    eax, eax
0x85D600: mov     ecx, [esp+20h+arg_8]
0x85D604: mov     [ecx+4], eax
0x85D607: jz      short loc_85D613
0x85D609: add     eax, 4
0x85D60C: push    eax; lpAddend
0x85D60D: call    dword ptr ds:0A28078h
0x85D613: mov     edx, [esp+20h+arg_8]
0x85D617: push    ebx
0x85D618: push    edx
0x85D619: mov     ecx, esi
0x85D61B: call    sub_848FA0
0x85D620: mov     ecx, [edi+24h]
0x85D623: mov     ebx, [ecx+14h]
0x85D626: mov     eax, ds:0B43108h
0x85D62B: mov     ebp, [ebx+4]
0x85D62E: add     ebx, 4
0x85D631: cmp     ebp, eax
0x85D633: mov     [esp+20h+arg_8], eax
0x85D637: jz      short loc_85D66E
0x85D639: test    ebp, ebp
0x85D63B: jz      short loc_85D65E
0x85D63D: lea     edx, [ebp+4]
0x85D640: push    edx; lpAddend
0x85D641: call    dword ptr ds:0A2807Ch
0x85D647: test    eax, eax
0x85D649: jnz     short loc_85D65A
0x85D64B: test    ebp, ebp
0x85D64D: jz      short loc_85D65A
0x85D64F: mov     eax, [ebp+0]
0x85D652: mov     edx, [eax]
0x85D654: push    1
0x85D656: mov     ecx, ebp
0x85D658: call    edx
0x85D65A: mov     eax, [esp+20h+arg_8]
0x85D65E: test    eax, eax
0x85D660: mov     [ebx], eax
0x85D662: jz      short loc_85D66E
0x85D664: add     eax, 4
0x85D667: push    eax; lpAddend
0x85D668: call    dword ptr ds:0A28078h
0x85D66E: mov     eax, [edi+24h]
0x85D671: mov     ebp, [eax+18h]
0x85D674: mov     eax, ds:0B4310Ch
0x85D679: mov     ebx, [ebp+4]
0x85D67C: cmp     ebx, eax
0x85D67E: mov     ecx, eax
0x85D680: mov     [esp+20h+arg_8], ecx
0x85D684: jz      short loc_85D6BB
0x85D686: test    ebx, ebx
0x85D688: jz      short loc_85D6AA
0x85D68A: lea     ecx, [ebx+4]
0x85D68D: push    ecx; lpAddend
0x85D68E: call    dword ptr ds:0A2807Ch
0x85D694: test    eax, eax
0x85D696: jnz     short loc_85D6A6
0x85D698: test    ebx, ebx
0x85D69A: jz      short loc_85D6A6
0x85D69C: mov     edx, [ebx]
0x85D69E: mov     eax, [edx]
0x85D6A0: push    1
0x85D6A2: mov     ecx, ebx
0x85D6A4: call    eax
0x85D6A6: mov     ecx, [esp+20h+arg_8]
0x85D6AA: test    ecx, ecx
0x85D6AC: mov     [ebp+4], ecx
0x85D6AF: jz      short loc_85D6BB
0x85D6B1: add     ecx, 4
0x85D6B4: push    ecx; lpAddend
0x85D6B5: call    dword ptr ds:0A28078h
0x85D6BB: cmp     byte ptr [esp+20h+arg_10], 0
0x85D6C0: jnz     short loc_85D6FD
0x85D6C2: mov     ebx, 1
0x85D6C7: add     [edi+60h], ebx
0x85D6CA: mov     [esp+20h+arg_10], edi
0x85D6CE: mov     edx, [esi+38h]
0x85D6D1: lea     ecx, [esp+20h+arg_10]
0x85D6D5: push    ecx
0x85D6D6: push    edx
0x85D6D7: lea     ecx, [esi+40h]
0x85D6DA: mov     [esp+28h+var_4], 0
0x85D6E2: call    sub_76CE40
0x85D6E7: or      eax, 0FFFFFFFFh
0x85D6EA: add     [edi+60h], eax
0x85D6ED: mov     [esp+20h+var_4], eax
0x85D6F1: jnz     short loc_85D6FA
0x85D6F3: mov     ecx, edi
0x85D6F5: call    sub_7604D0
0x85D6FA: add     [esi+38h], ebx
0x85D6FD: mov     ecx, [esp+20h+var_C]
0x85D701: mov     large fs:0, ecx
0x85D708: pop     ecx
0x85D709: pop     edi
0x85D70A: pop     esi
0x85D70B: pop     ebp
0x85D70C: pop     ebx
0x85D70D: add     esp, 0Ch
0x85D710: retn    14h
