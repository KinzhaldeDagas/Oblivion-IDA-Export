0x497500: push    ecx
0x497501: push    ebp
0x497502: mov     ebp, [esp+8+arg_0]
0x497506: test    ebp, ebp
0x497508: push    esi
0x497509: push    edi
0x49750A: mov     edi, ecx
0x49750C: mov     [esp+10h+var_1], 1
0x497511: jz      loc_49760B
0x497517: movzx   eax, byte ptr [edi]
0x49751A: mov     esi, [esp+10h+arg_4]
0x49751E: cmp     [esi], eax
0x497520: jnb     loc_49760B
0x497526: push    ebp
0x497527: call    sub_497420
0x49752C: add     esp, 4
0x49752F: test    eax, eax
0x497531: jz      short loc_4975AF
0x497533: lea     ecx, [esp+10h+arg_0]
0x497537: push    ecx
0x497538: mov     ecx, [eax+10h]
0x49753B: call    sub_497340
0x497540: cmp     byte ptr [esp+10h+arg_8], 0
0x497545: jz      loc_497616
0x49754B: mov     edx, [eax]
0x49754D: mov     eax, [esi]
0x49754F: shr     edx, 8
0x497552: lea     ecx, ds:0[eax*8]
0x497559: and     dl, 1Fh
0x49755C: sub     ecx, eax
0x49755E: mov     eax, [edi+4]
0x497561: mov     [eax+ecx*4], dl
0x497564: mov     eax, [esi]
0x497566: mov     edx, [edi+4]
0x497569: lea     ecx, ds:0[eax*8]
0x497570: sub     ecx, eax
0x497572: lea     eax, [edx+ecx*4+4]
0x497576: mov     ecx, [ebp+54h]
0x497579: mov     [eax], ecx
0x49757B: mov     edx, [ebp+58h]
0x49757E: mov     [eax+4], edx
0x497581: mov     ecx, [ebp+5Ch]
0x497584: mov     [eax+8], ecx
0x497587: mov     eax, [esi]
0x497589: lea     edx, ds:0[eax*8]
0x497590: sub     edx, eax
0x497592: mov     eax, [edi+4]
0x497595: lea     eax, [eax+edx*4]
0x497598: lea     ecx, [eax+18h]
0x49759B: push    ecx
0x49759C: lea     edx, [eax+14h]
0x49759F: push    edx
0x4975A0: add     eax, 10h
0x4975A3: push    eax
0x4975A4: lea     ecx, [ebp+30h]
0x4975A7: call    sub_711300
0x4975AC: add     dword ptr [esi], 1
0x4975AF: movzx   eax, word ptr [ebp+0B6h]
0x4975B6: push    ebx
0x4975B7: xor     ebx, ebx
0x4975B9: test    eax, eax
0x4975BB: mov     [esp+14h+arg_0], eax
0x4975BF: jbe     short loc_49760A
0x4975C1: movzx   eax, word ptr [ebp+0B6h]
0x4975C8: cmp     eax, ebx
0x4975CA: jbe     short loc_4975FA
0x4975CC: mov     ecx, [ebp+0B0h]
0x4975D2: mov     ecx, [ecx+ebx*4]
0x4975D5: test    ecx, ecx
0x4975D7: jz      short loc_4975FA
0x4975D9: mov     edx, [ecx]
0x4975DB: mov     eax, [edx+8]
0x4975DE: call    eax
0x4975E0: test    eax, eax
0x4975E2: jz      short loc_4975FA
0x4975E4: mov     ecx, [esp+14h+arg_8]
0x4975E8: push    ecx
0x4975E9: push    esi
0x4975EA: push    eax
0x4975EB: mov     ecx, edi
0x4975ED: call    sub_497500
0x4975F2: test    al, al
0x4975F4: jnz     short loc_4975FA
0x4975F6: mov     [esp+14h+var_1], al
0x4975FA: movzx   edx, byte ptr [edi]
0x4975FD: cmp     [esi], edx
0x4975FF: jnb     short loc_49760A
0x497601: add     ebx, 1
0x497604: cmp     ebx, [esp+14h+arg_0]
0x497608: jb      short loc_4975C1
0x49760A: pop     ebx
0x49760B: mov     al, [esp+10h+var_1]
0x49760F: pop     edi
0x497610: pop     esi
0x497611: pop     ebp
0x497612: pop     ecx
0x497613: retn    0Ch
0x497616: mov     ecx, [esi]
0x497618: mov     eax, [eax]
0x49761A: lea     edx, ds:0[ecx*8]
0x497621: shr     eax, 8
0x497624: sub     edx, ecx
0x497626: mov     ecx, [edi+4]
0x497629: and     eax, 1Fh
0x49762C: cmp     [ecx+edx*4], al
0x49762F: jz      loc_497564
0x497635: pop     edi
0x497636: pop     esi
0x497637: xor     al, al
0x497639: pop     ebp
0x49763A: pop     ecx
0x49763B: retn    0Ch
