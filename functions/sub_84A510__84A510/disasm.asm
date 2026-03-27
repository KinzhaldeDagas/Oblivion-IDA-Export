0x84A510: push    0FFFFFFFFh
0x84A512: push    offset SEH_879360
0x84A517: mov     eax, large fs:0
0x84A51D: push    eax
0x84A51E: push    ecx
0x84A51F: push    ebx
0x84A520: push    ebp
0x84A521: push    esi
0x84A522: push    edi
0x84A523: mov     eax, ds:0B30AACh
0x84A528: xor     eax, esp
0x84A52A: push    eax
0x84A52B: lea     eax, [esp+24h+var_C]
0x84A52F: mov     large fs:0, eax
0x84A535: mov     [esp+24h+var_10], ecx
0x84A539: mov     eax, [esp+24h+arg_8]
0x84A53D: mov     eax, [eax+10h]
0x84A540: mov     ebx, ds:0B45610h
0x84A546: push    eax
0x84A547: call    sub_848DA0
0x84A54C: mov     ecx, [ebx+24h]
0x84A54F: mov     esi, [esp+24h+arg_C]
0x84A553: mov     edi, [ecx]
0x84A555: mov     edx, [esi]
0x84A557: mov     eax, [edx+88h]
0x84A55D: push    0
0x84A55F: mov     ecx, esi
0x84A561: mov     [esp+28h+arg_8], edi
0x84A565: call    eax
0x84A567: mov     edi, [edi+4]
0x84A56A: mov     ebp, eax
0x84A56C: cmp     edi, ebp
0x84A56E: jz      short loc_84A5A7
0x84A570: test    edi, edi
0x84A572: jz      short loc_84A590
0x84A574: lea     ecx, [edi+4]
0x84A577: push    ecx; lpAddend
0x84A578: call    dword ptr ds:0A2807Ch
0x84A57E: test    eax, eax
0x84A580: jnz     short loc_84A590
0x84A582: test    edi, edi
0x84A584: jz      short loc_84A590
0x84A586: mov     edx, [edi]
0x84A588: mov     eax, [edx]
0x84A58A: push    1
0x84A58C: mov     ecx, edi
0x84A58E: call    eax
0x84A590: test    ebp, ebp
0x84A592: mov     edi, [esp+24h+arg_8]
0x84A596: mov     [edi+4], ebp
0x84A599: jz      short loc_84A5AB
0x84A59B: add     ebp, 4
0x84A59E: push    ebp; lpAddend
0x84A59F: call    dword ptr ds:0A28078h
0x84A5A5: jmp     short loc_84A5AB
0x84A5A7: mov     edi, [esp+24h+arg_8]
0x84A5AB: test    edi, edi
0x84A5AD: jz      short loc_84A5C9
0x84A5AF: cmp     byte ptr ds:0B42CDDh, 0
0x84A5B6: jz      short loc_84A5C9
0x84A5B8: mov     edx, [esi]
0x84A5BA: mov     eax, [edx+78h]
0x84A5BD: mov     ecx, esi
0x84A5BF: call    eax
0x84A5C1: push    eax
0x84A5C2: mov     ecx, edi
0x84A5C4: call    sub_7715E0
0x84A5C9: mov     ecx, [ebx+24h]
0x84A5CC: mov     edi, [ecx+4]
0x84A5CF: mov     edx, [esi]
0x84A5D1: mov     eax, [edx+8Ch]
0x84A5D7: push    0
0x84A5D9: mov     ecx, esi
0x84A5DB: mov     [esp+28h+arg_8], edi
0x84A5DF: call    eax
0x84A5E1: test    eax, eax
0x84A5E3: jz      short loc_84A5F7
0x84A5E5: mov     edx, [esi]
0x84A5E7: mov     eax, [edx+8Ch]
0x84A5ED: push    0
0x84A5EF: mov     ecx, esi
0x84A5F1: call    eax
0x84A5F3: mov     ebp, eax
0x84A5F5: jmp     short loc_84A60C
0x84A5F7: test    dword ptr [esi+1Ch], 80h
0x84A5FE: mov     ebp, ds:0B430F0h
0x84A604: ja      short loc_84A60C
0x84A606: mov     ebp, ds:0B430DCh
0x84A60C: mov     edi, [edi+4]
0x84A60F: cmp     edi, ebp
0x84A611: jz      short loc_84A64A
0x84A613: test    edi, edi
0x84A615: jz      short loc_84A633
0x84A617: lea     ecx, [edi+4]
0x84A61A: push    ecx; lpAddend
0x84A61B: call    dword ptr ds:0A2807Ch
0x84A621: test    eax, eax
0x84A623: jnz     short loc_84A633
0x84A625: test    edi, edi
0x84A627: jz      short loc_84A633
0x84A629: mov     edx, [edi]
0x84A62B: mov     eax, [edx]
0x84A62D: push    1
0x84A62F: mov     ecx, edi
0x84A631: call    eax
0x84A633: test    ebp, ebp
0x84A635: mov     edi, [esp+24h+arg_8]
0x84A639: mov     [edi+4], ebp
0x84A63C: jz      short loc_84A64E
0x84A63E: add     ebp, 4
0x84A641: push    ebp; lpAddend
0x84A642: call    dword ptr ds:0A28078h
0x84A648: jmp     short loc_84A64E
0x84A64A: mov     edi, [esp+24h+arg_8]
0x84A64E: test    edi, edi
0x84A650: jz      short loc_84A66C
0x84A652: cmp     byte ptr ds:0B42CDDh, 0
0x84A659: jz      short loc_84A66C
0x84A65B: mov     edx, [esi]
0x84A65D: mov     eax, [edx+78h]
0x84A660: mov     ecx, esi
0x84A662: call    eax
0x84A664: push    eax
0x84A665: mov     ecx, edi
0x84A667: call    sub_7715E0
0x84A66C: mov     ecx, [ebx+24h]
0x84A66F: mov     edi, [ecx+8]
0x84A672: mov     edx, [esi]
0x84A674: mov     eax, [edx+90h]
0x84A67A: push    0
0x84A67C: mov     ecx, esi
0x84A67E: mov     [esp+28h+arg_8], edi
0x84A682: call    eax
0x84A684: mov     edi, [edi+4]
0x84A687: mov     ebp, eax
0x84A689: cmp     edi, ebp
0x84A68B: jz      short loc_84A6C4
0x84A68D: test    edi, edi
0x84A68F: jz      short loc_84A6AD
0x84A691: lea     ecx, [edi+4]
0x84A694: push    ecx; lpAddend
0x84A695: call    dword ptr ds:0A2807Ch
0x84A69B: test    eax, eax
0x84A69D: jnz     short loc_84A6AD
0x84A69F: test    edi, edi
0x84A6A1: jz      short loc_84A6AD
0x84A6A3: mov     edx, [edi]
0x84A6A5: mov     eax, [edx]
0x84A6A7: push    1
0x84A6A9: mov     ecx, edi
0x84A6AB: call    eax
0x84A6AD: test    ebp, ebp
0x84A6AF: mov     edi, [esp+24h+arg_8]
0x84A6B3: mov     [edi+4], ebp
0x84A6B6: jz      short loc_84A6C8
0x84A6B8: add     ebp, 4
0x84A6BB: push    ebp; lpAddend
0x84A6BC: call    dword ptr ds:0A28078h
0x84A6C2: jmp     short loc_84A6C8
0x84A6C4: mov     edi, [esp+24h+arg_8]
0x84A6C8: test    edi, edi
0x84A6CA: jz      short loc_84A6E6
0x84A6CC: cmp     byte ptr ds:0B42CDDh, 0
0x84A6D3: jz      short loc_84A6E6
0x84A6D5: mov     edx, [esi]
0x84A6D7: mov     eax, [edx+78h]
0x84A6DA: mov     ecx, esi
0x84A6DC: call    eax
0x84A6DE: push    eax
0x84A6DF: mov     ecx, edi
0x84A6E1: call    sub_7715E0
0x84A6E6: mov     edi, 1
0x84A6EB: add     [ebx+60h], edi
0x84A6EE: mov     [esp+24h+arg_8], ebx
0x84A6F2: mov     esi, [esp+24h+var_10]
0x84A6F6: mov     edx, [esi+38h]
0x84A6F9: lea     ecx, [esp+24h+arg_8]
0x84A6FD: push    ecx
0x84A6FE: push    edx
0x84A6FF: lea     ecx, [esi+40h]
0x84A702: mov     [esp+2Ch+var_4], 0
0x84A70A: call    sub_76CE40
0x84A70F: or      eax, 0FFFFFFFFh
0x84A712: add     [ebx+60h], eax
0x84A715: mov     [esp+24h+var_4], eax
0x84A719: jnz     short loc_84A722
0x84A71B: mov     ecx, ebx
0x84A71D: call    sub_7604D0
0x84A722: add     [esi+38h], edi
0x84A725: mov     ecx, dword ptr [esp+24h+var_C]
0x84A729: mov     large fs:0, ecx
0x84A730: pop     ecx
0x84A731: pop     edi
0x84A732: pop     esi
0x84A733: pop     ebp
0x84A734: pop     ebx
0x84A735: add     esp, 10h
0x84A738: retn    10h
