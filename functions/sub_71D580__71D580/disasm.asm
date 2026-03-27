0x71D580: sub     esp, 434h
0x71D586: push    ebx
0x71D587: push    ebp
0x71D588: push    esi
0x71D589: push    edi
0x71D58A: mov     eax, [esp+444h+arg_10]
0x71D591: mov     ebp, [eax+14h]
0x71D594: mov     eax, [esp+444h+arg_14]
0x71D59B: movzx   ecx, byte ptr [eax+17h]
0x71D59F: mov     [esp+444h+var_420], ecx
0x71D5A3: movzx   ecx, byte ptr [eax+13h]
0x71D5A7: mov     [esp+444h+var_42C], ecx
0x71D5AB: mov     ecx, [eax+0Ch]
0x71D5AE: mov     [esp+444h+var_41C], ecx
0x71D5B2: movzx   ecx, byte ptr [eax+16h]
0x71D5B6: mov     [esp+444h+var_434], ecx
0x71D5BA: movzx   ecx, byte ptr [eax+12h]
0x71D5BE: movzx   edx, byte ptr [eax+14h]
0x71D5C2: mov     [esp+444h+var_430], ecx
0x71D5C6: mov     ecx, [eax+8]
0x71D5C9: mov     [esp+444h+var_428], ecx
0x71D5CD: movzx   ecx, byte ptr [eax+15h]
0x71D5D1: mov     [esp+444h+var_424], ecx
0x71D5D5: movzx   ecx, byte ptr [eax+11h]
0x71D5D9: mov     [esp+444h+var_414], ecx
0x71D5DD: lea     ecx, [esp+444h+var_3FE]
0x71D5E1: sub     ecx, ebp
0x71D5E3: mov     [esp+444h+var_404], ecx
0x71D5E7: lea     ecx, [esp+444h+var_3FA]
0x71D5EB: sub     ecx, ebp
0x71D5ED: movzx   esi, byte ptr [eax+10h]
0x71D5F1: mov     [esp+444h+var_40C], ecx
0x71D5F5: mov     edi, [eax]
0x71D5F7: mov     eax, [eax+4]
0x71D5FA: lea     ecx, [esp+444h+var_3F6]
0x71D5FE: sub     ecx, ebp
0x71D600: mov     [esp+444h+var_418], eax
0x71D604: mov     [esp+444h+var_410], 0
0x71D60C: lea     eax, [ebp+2]
0x71D60F: mov     [esp+444h+var_408], ecx
0x71D613: movzx   ecx, byte ptr [esp+444h+var_420]
0x71D618: movzx   ebx, byte ptr [eax+1]
0x71D61C: shr     ebx, cl
0x71D61E: mov     ecx, [esp+444h+var_42C]
0x71D622: movzx   ebp, byte ptr [eax-2]
0x71D626: shl     ebx, cl
0x71D628: mov     cl, dl
0x71D62A: shr     ebp, cl
0x71D62C: mov     ecx, esi
0x71D62E: and     ebx, [esp+444h+var_41C]
0x71D632: shl     ebp, cl
0x71D634: movzx   ecx, byte ptr [esp+444h+var_424]
0x71D639: and     ebp, edi
0x71D63B: or      ebx, ebp
0x71D63D: movzx   ebp, byte ptr [eax-1]
0x71D641: shr     ebp, cl
0x71D643: mov     ecx, [esp+444h+var_414]
0x71D647: shl     ebp, cl
0x71D649: movzx   ecx, byte ptr [esp+444h+var_434]
0x71D64E: and     ebp, [esp+444h+var_418]
0x71D652: or      ebx, ebp
0x71D654: movzx   ebp, byte ptr [eax]
0x71D657: shr     ebp, cl
0x71D659: mov     ecx, [esp+444h+var_430]
0x71D65D: shl     ebp, cl
0x71D65F: mov     ecx, [esp+444h+var_410]
0x71D663: and     ebp, [esp+444h+var_428]
0x71D667: or      ebx, ebp
0x71D669: mov     [esp+ecx*4+44h], ebx
0x71D66D: movzx   ecx, byte ptr [esp+444h+var_420]
0x71D672: movzx   ebx, byte ptr [eax+5]
0x71D676: movzx   ebp, byte ptr [eax+2]
0x71D67A: shr     ebx, cl
0x71D67C: mov     ecx, [esp+444h+var_42C]
0x71D680: shl     ebx, cl
0x71D682: mov     cl, dl
0x71D684: shr     ebp, cl
0x71D686: mov     ecx, esi
0x71D688: and     ebx, [esp+444h+var_41C]
0x71D68C: shl     ebp, cl
0x71D68E: movzx   ecx, byte ptr [esp+444h+var_424]
0x71D693: and     ebp, edi
0x71D695: or      ebx, ebp
0x71D697: movzx   ebp, byte ptr [eax+3]
0x71D69B: shr     ebp, cl
0x71D69D: mov     ecx, [esp+444h+var_414]
0x71D6A1: shl     ebp, cl
0x71D6A3: movzx   ecx, byte ptr [esp+444h+var_434]
0x71D6A8: and     ebp, [esp+444h+var_418]
0x71D6AC: or      ebx, ebp
0x71D6AE: movzx   ebp, byte ptr [eax+4]
0x71D6B2: shr     ebp, cl
0x71D6B4: mov     ecx, [esp+444h+var_430]
0x71D6B8: shl     ebp, cl
0x71D6BA: mov     ecx, [esp+444h+var_404]
0x71D6BE: and     ebp, [esp+444h+var_428]
0x71D6C2: or      ebx, ebp
0x71D6C4: movzx   ebp, byte ptr [eax+6]
0x71D6C8: mov     [ecx+eax], ebx
0x71D6CB: movzx   ecx, byte ptr [esp+444h+var_420]
0x71D6D0: movzx   ebx, byte ptr [eax+9]
0x71D6D4: shr     ebx, cl
0x71D6D6: mov     ecx, [esp+444h+var_42C]
0x71D6DA: shl     ebx, cl
0x71D6DC: mov     cl, dl
0x71D6DE: shr     ebp, cl
0x71D6E0: mov     ecx, esi
0x71D6E2: and     ebx, [esp+444h+var_41C]
0x71D6E6: shl     ebp, cl
0x71D6E8: movzx   ecx, byte ptr [esp+444h+var_424]
0x71D6ED: and     ebp, edi
0x71D6EF: or      ebx, ebp
0x71D6F1: movzx   ebp, byte ptr [eax+7]
0x71D6F5: shr     ebp, cl
0x71D6F7: mov     ecx, [esp+444h+var_414]
0x71D6FB: shl     ebp, cl
0x71D6FD: movzx   ecx, byte ptr [esp+444h+var_434]
0x71D702: and     ebp, [esp+444h+var_418]
0x71D706: or      ebx, ebp
0x71D708: movzx   ebp, byte ptr [eax+8]
0x71D70C: shr     ebp, cl
0x71D70E: mov     ecx, [esp+444h+var_430]
0x71D712: shl     ebp, cl
0x71D714: mov     ecx, [esp+444h+var_40C]
0x71D718: add     eax, 10h
0x71D71B: and     ebp, [esp+444h+var_428]
0x71D71F: or      ebx, ebp
0x71D721: movzx   ebp, byte ptr [eax-6]
0x71D725: mov     [ecx+eax-10h], ebx
0x71D729: movzx   ebx, byte ptr [eax-3]
0x71D72D: movzx   ecx, byte ptr [esp+444h+var_420]
0x71D732: shr     ebx, cl
0x71D734: mov     ecx, [esp+444h+var_42C]
0x71D738: shl     ebx, cl
0x71D73A: mov     cl, dl
0x71D73C: shr     ebp, cl
0x71D73E: mov     ecx, esi
0x71D740: and     ebx, [esp+444h+var_41C]
0x71D744: shl     ebp, cl
0x71D746: movzx   ecx, byte ptr [esp+444h+var_424]
0x71D74B: and     ebp, edi
0x71D74D: or      ebx, ebp
0x71D74F: movzx   ebp, byte ptr [eax-5]
0x71D753: shr     ebp, cl
0x71D755: mov     ecx, [esp+444h+var_414]
0x71D759: shl     ebp, cl
0x71D75B: movzx   ecx, byte ptr [esp+444h+var_434]
0x71D760: and     ebp, [esp+444h+var_418]
0x71D764: or      ebx, ebp
0x71D766: movzx   ebp, byte ptr [eax-4]
0x71D76A: shr     ebp, cl
0x71D76C: mov     ecx, [esp+444h+var_430]
0x71D770: shl     ebp, cl
0x71D772: mov     ecx, [esp+444h+var_408]
0x71D776: and     ebp, [esp+444h+var_428]
0x71D77A: or      ebx, ebp
0x71D77C: mov     [ecx+eax-10h], ebx
0x71D780: mov     ecx, [esp+444h+var_410]
0x71D784: add     ecx, 4
0x71D787: cmp     ecx, 100h
0x71D78D: mov     [esp+444h+var_410], ecx
0x71D791: jb      loc_71D613
0x71D797: mov     ecx, [esp+444h+arg_4]
0x71D79E: test    ecx, ecx
0x71D7A0: mov     eax, [esp+444h+arg_C]
0x71D7A7: jbe     short loc_71D7DF
0x71D7A9: mov     esi, [esp+444h+arg_0]
0x71D7B0: mov     edi, ecx
0x71D7B2: mov     ecx, [esp+444h+arg_18]
0x71D7B9: lea     esp, [esp+0]
0x71D7C0: test    esi, esi
0x71D7C2: jbe     short loc_71D7DA
0x71D7C4: mov     edx, esi
0x71D7C6: movzx   ebx, byte ptr [ecx]
0x71D7C9: mov     ebx, [esp+ebx*4+44h]
0x71D7CD: mov     [eax], ebx
0x71D7CF: add     eax, 4
0x71D7D2: add     ecx, 1
0x71D7D5: sub     edx, 1
0x71D7D8: jnz     short loc_71D7C6
0x71D7DA: sub     edi, 1
0x71D7DD: jnz     short loc_71D7C0
0x71D7DF: pop     edi
0x71D7E0: pop     esi
0x71D7E1: pop     ebp
0x71D7E2: pop     ebx
0x71D7E3: add     esp, 434h
0x71D7E9: retn
