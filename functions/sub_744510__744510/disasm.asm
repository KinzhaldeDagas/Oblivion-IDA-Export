0x744510: push    ebx
0x744511: push    ebp
0x744512: push    esi
0x744513: mov     esi, [esp+0Ch+arg_0]
0x744517: push    edi
0x744518: xor     ebx, ebx
0x74451A: lea     ebx, [ebx+0]
0x744520: mov     eax, [esi+6Ch]
0x744523: cmp     eax, 106h
0x744528: jnb     short loc_74454D
0x74452A: call    sub_7441E0
0x74452F: mov     eax, [esi+6Ch]
0x744532: cmp     eax, 106h
0x744537: mov     edi, [esp+10h+arg_4]
0x74453B: jnb     short loc_744545
0x74453D: test    edi, edi
0x74453F: jz      loc_74480B
0x744545: test    eax, eax
0x744547: jz      loc_744812
0x74454D: cmp     eax, 3
0x744550: jb      short loc_74459B
0x744552: mov     eax, [esi+40h]
0x744555: mov     ecx, [esi+50h]
0x744558: mov     edx, [esi+64h]
0x74455B: mov     edi, [esi+2Ch]
0x74455E: shl     eax, cl
0x744560: mov     ecx, [esi+30h]
0x744563: movzx   ecx, byte ptr [ecx+edx+2]
0x744568: xor     eax, ecx
0x74456A: and     eax, [esi+4Ch]
0x74456D: mov     ecx, [esi+3Ch]
0x744570: mov     [esi+40h], eax
0x744573: mov     ax, [ecx+eax*2]
0x744577: and     edi, edx
0x744579: mov     edx, [esi+38h]
0x74457C: mov     [edx+edi*2], ax
0x744580: mov     ecx, [esi+64h]
0x744583: and     ecx, [esi+2Ch]
0x744586: mov     edx, [esi+38h]
0x744589: movzx   ebx, word ptr [edx+ecx*2]
0x74458D: mov     eax, [esi+40h]
0x744590: mov     ecx, [esi+3Ch]
0x744593: mov     dx, [esi+64h]
0x744597: mov     [ecx+eax*2], dx
0x74459B: test    ebx, ebx
0x74459D: jz      short loc_7445CC
0x74459F: mov     eax, [esi+64h]
0x7445A2: mov     ecx, [esi+24h]
0x7445A5: sub     eax, ebx
0x7445A7: sub     ecx, 106h
0x7445AD: cmp     eax, ecx
0x7445AF: ja      short loc_7445CC
0x7445B1: mov     ecx, [esi+80h]
0x7445B7: cmp     ecx, 2
0x7445BA: jge     loc_744642
0x7445C0: mov     eax, ebx
0x7445C2: mov     edi, esi
0x7445C4: call    sub_743F90
0x7445C9: mov     [esi+58h], eax
0x7445CC: mov     ebp, 1
0x7445D1: cmp     dword ptr [esi+58h], 3
0x7445D5: jb      loc_744727
0x7445DB: mov     dx, [esi+64h]
0x7445DF: sub     dx, [esi+68h]
0x7445E3: mov     al, [esi+58h]
0x7445E6: mov     edi, [esi+169Ch]
0x7445EC: movzx   ecx, dx
0x7445EF: mov     edx, [esi+1698h]
0x7445F5: mov     [edi+edx*2], cx
0x7445F9: mov     edx, [esi+1690h]
0x7445FF: mov     edi, [esi+1698h]
0x744605: sub     al, 3
0x744607: mov     [edx+edi], al
0x74460A: add     [esi+1698h], ebp
0x744610: movzx   eax, al
0x744613: movzx   edx, ds:byte_A851D0[eax]
0x74461A: add     [esi+edx*4+490h], bp
0x744622: lea     eax, [esi+edx*4+490h]
0x744629: add     ecx, 0FFFFh
0x74462F: cmp     cx, 100h
0x744634: jnb     short loc_744661
0x744636: movzx   eax, cx
0x744639: movzx   eax, ds:byte_A84FD0[eax]
0x744640: jmp     short loc_74466E
0x744642: cmp     ecx, 3
0x744645: jnz     short loc_7445CC
0x744647: mov     ebp, 1
0x74464C: cmp     eax, ebp
0x74464E: jnz     short loc_7445D1
0x744650: push    ebx
0x744651: call    sub_744110
0x744656: add     esp, 4
0x744659: mov     [esi+58h], eax
0x74465C: jmp     loc_7445D1
0x744661: movzx   ecx, cx
0x744664: shr     ecx, 7
0x744667: movzx   eax, ds:byte_A850D0[ecx]
0x74466E: add     [esi+eax*4+980h], bp
0x744676: mov     edx, [esi+1694h]
0x74467C: xor     eax, eax
0x74467E: sub     edx, ebp
0x744680: cmp     [esi+1698h], edx
0x744686: setz    al
0x744689: mov     edi, eax
0x74468B: mov     eax, [esi+58h]
0x74468E: sub     [esi+6Ch], eax
0x744691: cmp     eax, [esi+78h]
0x744694: mov     ecx, [esi+6Ch]
0x744697: ja      short loc_7446FB
0x744699: cmp     ecx, 3
0x74469C: jb      short loc_7446FB
0x74469E: add     eax, 0FFFFFFFFh
0x7446A1: mov     [esi+58h], eax
0x7446A4: add     [esi+64h], ebp
0x7446A7: mov     edx, [esi+64h]
0x7446AA: mov     ecx, [esi+30h]
0x7446AD: movzx   eax, byte ptr [edx+ecx+2]
0x7446B2: mov     ebx, [esi+40h]
0x7446B5: mov     ecx, [esi+50h]
0x7446B8: shl     ebx, cl
0x7446BA: mov     ecx, [esi+3Ch]
0x7446BD: xor     eax, ebx
0x7446BF: and     eax, [esi+4Ch]
0x7446C2: mov     ebx, [esi+2Ch]
0x7446C5: and     ebx, edx
0x7446C7: mov     edx, [esi+38h]
0x7446CA: mov     [esi+40h], eax
0x7446CD: mov     ax, [ecx+eax*2]
0x7446D1: mov     [edx+ebx*2], ax
0x7446D5: mov     ecx, [esi+64h]
0x7446D8: and     ecx, [esi+2Ch]
0x7446DB: mov     edx, [esi+38h]
0x7446DE: movzx   ebx, word ptr [edx+ecx*2]
0x7446E2: mov     eax, [esi+40h]
0x7446E5: mov     ecx, [esi+3Ch]
0x7446E8: mov     dx, [esi+64h]
0x7446EC: mov     [ecx+eax*2], dx
0x7446F0: add     dword ptr [esi+58h], 0FFFFFFFFh
0x7446F4: jnz     short loc_7446A4
0x7446F6: jmp     loc_744782
0x7446FB: add     [esi+64h], eax
0x7446FE: mov     eax, [esi+64h]
0x744701: mov     ecx, [esi+30h]
0x744704: lea     edx, [eax+ecx]
0x744707: mov     ecx, [esi+50h]
0x74470A: mov     dword ptr [esi+58h], 0
0x744711: movzx   eax, byte ptr [edx]
0x744714: mov     [esi+40h], eax
0x744717: movzx   edx, byte ptr [edx+1]
0x74471B: shl     eax, cl
0x74471D: xor     eax, edx
0x74471F: and     eax, [esi+4Ch]
0x744722: mov     [esi+40h], eax
0x744725: jmp     short loc_744785
0x744727: mov     eax, [esi+64h]
0x74472A: mov     ecx, [esi+30h]
0x74472D: mov     al, [eax+ecx]
0x744730: mov     edx, [esi+1698h]
0x744736: mov     ecx, [esi+169Ch]
0x74473C: mov     word ptr [ecx+edx*2], 0
0x744742: mov     ecx, [esi+1698h]
0x744748: mov     edx, [esi+1690h]
0x74474E: mov     [edx+ecx], al
0x744751: add     [esi+1698h], ebp
0x744757: movzx   edx, al
0x74475A: add     [esi+edx*4+8Ch], bp
0x744762: lea     eax, [esi+edx*4+8Ch]
0x744769: mov     eax, [esi+1694h]
0x74476F: xor     ecx, ecx
0x744771: sub     eax, ebp
0x744773: cmp     [esi+1698h], eax
0x744779: setz    cl
0x74477C: add     dword ptr [esi+6Ch], 0FFFFFFFFh
0x744780: mov     edi, ecx
0x744782: add     [esi+64h], ebp
0x744785: test    edi, edi
0x744787: jz      loc_744520
0x74478D: mov     ecx, [esi+54h]
0x744790: test    ecx, ecx
0x744792: jl      short loc_74479B
0x744794: mov     eax, [esi+30h]
0x744797: add     eax, ecx
0x744799: jmp     short loc_74479D
0x74479B: xor     eax, eax
0x74479D: mov     edx, [esi+64h]
0x7447A0: push    0
0x7447A2: sub     edx, ecx
0x7447A4: push    edx
0x7447A5: push    eax
0x7447A6: push    esi
0x7447A7: call    sub_747610
0x7447AC: mov     eax, [esi+64h]
0x7447AF: mov     edi, [esi]
0x7447B1: mov     [esi+54h], eax
0x7447B4: mov     eax, [edi+1Ch]
0x7447B7: mov     ebp, [eax+14h]
0x7447BA: mov     ecx, [edi+10h]
0x7447BD: add     esp, 10h
0x7447C0: cmp     ebp, ecx
0x7447C2: jbe     short loc_7447C6
0x7447C4: mov     ebp, ecx
0x7447C6: test    ebp, ebp
0x7447C8: jz      short loc_7447FF
0x7447CA: mov     ecx, [eax+10h]
0x7447CD: mov     edx, [edi+0Ch]
0x7447D0: push    ebp; Size
0x7447D1: push    ecx; Src
0x7447D2: push    edx; Dst
0x7447D3: call    _memcpy
0x7447D8: mov     eax, [edi+1Ch]
0x7447DB: add     [edi+0Ch], ebp
0x7447DE: add     [eax+10h], ebp
0x7447E1: add     [edi+14h], ebp
0x7447E4: sub     [edi+10h], ebp
0x7447E7: mov     eax, [edi+1Ch]
0x7447EA: sub     [eax+14h], ebp
0x7447ED: mov     edi, [edi+1Ch]
0x7447F0: add     esp, 0Ch
0x7447F3: cmp     dword ptr [edi+14h], 0
0x7447F7: jnz     short loc_7447FF
0x7447F9: mov     eax, [edi+8]
0x7447FC: mov     [edi+10h], eax
0x7447FF: mov     ecx, [esi]
0x744801: cmp     dword ptr [ecx+10h], 0
0x744805: jnz     loc_744520
0x74480B: pop     edi
0x74480C: pop     esi
0x74480D: pop     ebp
0x74480E: xor     eax, eax
0x744810: pop     ebx
0x744811: retn
0x744812: mov     ecx, [esi+54h]
0x744815: test    ecx, ecx
0x744817: jl      short loc_744820
0x744819: mov     eax, [esi+30h]
0x74481C: add     eax, ecx
0x74481E: jmp     short loc_744822
0x744820: xor     eax, eax
0x744822: xor     edx, edx
0x744824: cmp     edi, 4
0x744827: setz    dl
0x74482A: push    edx
0x74482B: mov     edx, [esi+64h]
0x74482E: sub     edx, ecx
0x744830: push    edx
0x744831: push    eax
0x744832: push    esi
0x744833: call    sub_747610
0x744838: mov     eax, [esi+64h]
0x74483B: mov     [esi+54h], eax
0x74483E: mov     eax, [esi]
0x744840: add     esp, 10h
0x744843: call    sub_7439F0
0x744848: mov     ecx, [esi]
0x74484A: xor     eax, eax
0x74484C: cmp     [ecx+10h], eax
0x74484F: jnz     short loc_744862
0x744851: cmp     edi, 4
0x744854: setnz   al
0x744857: pop     edi
0x744858: pop     esi
0x744859: pop     ebp
0x74485A: pop     ebx
0x74485B: sub     eax, 1
0x74485E: and     eax, 2
0x744861: retn
0x744862: cmp     edi, 4
0x744865: setz    al
0x744868: pop     edi
0x744869: pop     esi
0x74486A: pop     ebp
0x74486B: pop     ebx
0x74486C: lea     eax, [eax+eax+1]
0x744870: retn
