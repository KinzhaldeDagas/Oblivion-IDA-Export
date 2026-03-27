0x72D480: push    ebx
0x72D481: push    ebp
0x72D482: mov     ebp, [esp+8+arg_4]
0x72D486: mov     eax, [ebp+8]
0x72D489: push    esi
0x72D48A: mov     esi, ecx
0x72D48C: movzx   ecx, byte ptr [esp+0Ch+arg_18]
0x72D491: cmp     eax, ecx
0x72D493: push    edi
0x72D494: jg      short loc_72D498
0x72D496: mov     eax, ecx
0x72D498: mov     edi, [esp+10h+arg_0]
0x72D49C: mov     [esi+20h], ax
0x72D4A0: mov     cx, [edi+8]
0x72D4A4: mov     [esi+1Eh], cx
0x72D4A8: movzx   eax, ax
0x72D4AB: xor     ecx, ecx
0x72D4AD: mov     edx, 2
0x72D4B2: mul     edx
0x72D4B4: seto    cl
0x72D4B7: neg     ecx
0x72D4B9: or      ecx, eax
0x72D4BB: push    ecx; Size
0x72D4BC: call    FormHeapAlloc
0x72D4C1: mov     [esi+4], eax
0x72D4C4: xor     eax, eax
0x72D4C6: add     esp, 4
0x72D4C9: cmp     [esi+20h], ax
0x72D4CD: jbe     short loc_72D4F2
0x72D4CF: nop
0x72D4D0: cmp     eax, [ebp+8]
0x72D4D3: jnb     short loc_72D4DE
0x72D4D5: mov     ecx, [ebp+0]
0x72D4D8: movzx   ecx, word ptr [ecx+eax*2]
0x72D4DC: jmp     short loc_72D4E0
0x72D4DE: xor     ecx, ecx
0x72D4E0: mov     edx, [esi+4]
0x72D4E3: mov     [edx+eax*2], cx
0x72D4E7: movzx   ecx, word ptr [esi+20h]
0x72D4EB: add     eax, 1
0x72D4EE: cmp     eax, ecx
0x72D4F0: jb      short loc_72D4D0
0x72D4F2: mov     ebx, [esp+10h+arg_8]
0x72D4F6: push    ebx
0x72D4F7: push    edi
0x72D4F8: mov     ecx, esi
0x72D4FA: call    sub_72CF50
0x72D4FF: mov     edx, [esp+10h+arg_0]
0x72D503: mov     edi, eax
0x72D505: push    edi
0x72D506: push    ebx
0x72D507: push    edx
0x72D508: mov     ecx, esi
0x72D50A: call    sub_72D090
0x72D50F: push    edi
0x72D510: call    FormHeapFree
0x72D515: movzx   edi, word ptr [esi+1Ch]
0x72D519: xor     ecx, ecx
0x72D51B: add     esp, 4
0x72D51E: cmp     byte ptr [esp+10h+arg_10], cl
0x72D522: mov     edx, 4
0x72D527: jz      loc_72D70D
0x72D52D: movzx   ax, byte ptr [esp+10h+arg_18]
0x72D533: mov     [esi+24h], ax
0x72D537: movzx   eax, ax
0x72D53A: imul    edi, eax
0x72D53D: mov     eax, edi
0x72D53F: mul     edx
0x72D541: seto    cl
0x72D544: neg     ecx
0x72D546: or      ecx, eax
0x72D548: push    ecx; Size
0x72D549: call    FormHeapAlloc
0x72D54E: push    edi; Size
0x72D54F: mov     [esi+8], eax
0x72D552: call    FormHeapAlloc
0x72D557: mov     [esi+10h], eax
0x72D55A: mov     eax, [esp+18h+arg_1C]
0x72D55E: xor     ecx, ecx
0x72D560: mov     edx, 4
0x72D565: mul     edx
0x72D567: seto    cl
0x72D56A: neg     ecx
0x72D56C: or      ecx, eax
0x72D56E: push    ecx; Size
0x72D56F: call    FormHeapAlloc
0x72D574: mov     ebx, eax
0x72D576: xor     eax, eax
0x72D578: add     esp, 0Ch
0x72D57B: cmp     [ebp+8], eax
0x72D57E: mov     [esp+10h+arg_8], ebx
0x72D582: jbe     short loc_72D596
0x72D584: mov     ecx, [esi+4]
0x72D587: movzx   edx, word ptr [ecx+eax*2]
0x72D58B: mov     [ebx+edx*4], eax
0x72D58E: add     eax, 1
0x72D591: cmp     eax, [ebp+8]
0x72D594: jb      short loc_72D584
0x72D596: mov     eax, [esi+8]
0x72D599: mov     ecx, [esi+10h]
0x72D59C: mov     [esp+10h+arg_4], eax
0x72D5A0: movzx   eax, word ptr [esi+24h]
0x72D5A4: mov     [esp+10h+arg_0], ecx
0x72D5A8: xor     ecx, ecx
0x72D5AA: mov     edx, 4
0x72D5AF: mul     edx
0x72D5B1: seto    cl
0x72D5B4: neg     ecx
0x72D5B6: or      ecx, eax
0x72D5B8: push    ecx; Size
0x72D5B9: call    FormHeapAlloc
0x72D5BE: mov     ebp, eax
0x72D5C0: movzx   eax, word ptr [esi+24h]
0x72D5C4: push    eax; Size
0x72D5C5: call    FormHeapAlloc
0x72D5CA: add     esp, 8
0x72D5CD: cmp     word ptr [esi+1Ch], 0
0x72D5D2: mov     [esp+10h+arg_10], eax
0x72D5D6: mov     [esp+10h+arg_18], 0
0x72D5DE: jbe     loc_72D6ED
0x72D5E4: fldz
0x72D5E6: fld     dword ptr ds:0A3B888h
0x72D5EC: mov     ecx, [esi+0Ch]
0x72D5EF: mov     edx, [esp+10h+arg_18]
0x72D5F3: movzx   eax, word ptr [ecx+edx*2]
0x72D5F7: mov     ecx, [esp+10h+arg_C]
0x72D5FB: mov     edi, [esp+10h+arg_10]
0x72D5FF: lea     eax, [eax+eax*2]
0x72D602: lea     edx, [ecx+eax*4]
0x72D605: xor     eax, eax
0x72D607: cmp     [edx+8], eax
0x72D60A: mov     [esp+10h+arg_14], edx
0x72D60E: mov     ecx, ebp
0x72D610: jbe     short loc_72D636
0x72D612: mov     edx, [edx]
0x72D614: fld     dword ptr [edx+eax*8+4]
0x72D618: lea     edx, [edx+eax*8]
0x72D61B: fstp    dword ptr [ecx]
0x72D61D: mov     edx, [edx]
0x72D61F: mov     dl, [ebx+edx*4]
0x72D622: mov     [edi], dl
0x72D624: mov     edx, [esp+10h+arg_14]
0x72D628: add     eax, 1
0x72D62B: add     ecx, 4
0x72D62E: add     edi, 1
0x72D631: cmp     eax, [edx+8]
0x72D634: jb      short loc_72D612
0x72D636: movzx   edx, word ptr [esi+24h]
0x72D63A: cmp     eax, edx
0x72D63C: jnb     short loc_72D658
0x72D63E: fxch    st(1)
0x72D640: add     eax, 1
0x72D643: fst     dword ptr [ecx]
0x72D645: mov     byte ptr [edi], 0
0x72D648: movzx   edx, word ptr [esi+24h]
0x72D64C: fxch    st(1)
0x72D64E: add     ecx, 4
0x72D651: add     edi, 1
0x72D654: cmp     eax, edx
0x72D656: jb      short loc_72D63E
0x72D658: xor     ebx, ebx
0x72D65A: cmp     [esi+24h], bx
0x72D65E: jbe     short loc_72D6CE
0x72D660: movzx   edi, word ptr [esi+24h]
0x72D664: fld     dword ptr [ebp+0]
0x72D667: mov     edx, 1
0x72D66C: xor     ecx, ecx
0x72D66E: fstp    [esp+10h+arg_14]
0x72D672: cmp     [esi+24h], dx
0x72D676: jbe     short loc_72D69A
0x72D678: fld     dword ptr [ebp+edx*4+0]
0x72D67C: fld     [esp+10h+arg_14]
0x72D680: fcompp
0x72D682: fnstsw  ax
0x72D684: test    ah, 5
0x72D687: jp      short loc_72D693
0x72D689: fld     dword ptr [ebp+edx*4+0]
0x72D68D: mov     ecx, edx
0x72D68F: fstp    [esp+10h+arg_14]
0x72D693: add     edx, 1
0x72D696: cmp     edx, edi
0x72D698: jb      short loc_72D678
0x72D69A: fld     dword ptr [ebp+ecx*4+0]
0x72D69E: mov     eax, [esp+10h+arg_4]
0x72D6A2: mov     edi, [esp+10h+arg_0]
0x72D6A6: fstp    dword ptr [eax]
0x72D6A8: add     eax, 4
0x72D6AB: mov     [esp+10h+arg_4], eax
0x72D6AF: mov     eax, [esp+10h+arg_10]
0x72D6B3: mov     dl, [ecx+eax]
0x72D6B6: mov     [edi], dl
0x72D6B8: fst     dword ptr [ebp+ecx*4+0]
0x72D6BC: add     edi, 1
0x72D6BF: mov     [esp+10h+arg_0], edi
0x72D6C3: movzx   edi, word ptr [esi+24h]
0x72D6C7: add     ebx, 1
0x72D6CA: cmp     ebx, edi
0x72D6CC: jb      short loc_72D664
0x72D6CE: mov     eax, [esp+10h+arg_18]
0x72D6D2: movzx   ecx, word ptr [esi+1Ch]
0x72D6D6: mov     ebx, [esp+10h+arg_8]
0x72D6DA: add     eax, 1
0x72D6DD: cmp     eax, ecx
0x72D6DF: mov     [esp+10h+arg_18], eax
0x72D6E3: jb      loc_72D5EC
0x72D6E9: fstp    st(1)
0x72D6EB: fstp    st
0x72D6ED: push    ebp
0x72D6EE: call    FormHeapFree
0x72D6F3: mov     edx, [esp+14h+arg_10]
0x72D6F7: push    edx
0x72D6F8: call    FormHeapFree
0x72D6FD: push    ebx
0x72D6FE: call    FormHeapFree
0x72D703: add     esp, 0Ch
0x72D706: pop     edi
0x72D707: pop     esi
0x72D708: pop     ebp
0x72D709: pop     ebx
0x72D70A: retn    20h ; ' '
0x72D70D: movzx   eax, word ptr [esi+20h]
0x72D711: mov     [esi+24h], ax
0x72D715: movzx   eax, ax
0x72D718: imul    edi, eax
0x72D71B: mov     eax, edi
0x72D71D: mul     edx
0x72D71F: seto    cl
0x72D722: mov     [esp+10h+arg_1C], edi
0x72D726: neg     ecx
0x72D728: or      ecx, eax
0x72D72A: push    ecx; Size
0x72D72B: call    FormHeapAlloc
0x72D730: xor     ecx, ecx
0x72D732: add     esp, 4
0x72D735: cmp     [esi+1Ch], cx
0x72D739: mov     edx, eax
0x72D73B: mov     [esi+8], eax
0x72D73E: mov     [esp+10h+arg_10], edx
0x72D742: mov     [esp+10h+arg_18], ecx
0x72D746: jbe     loc_72D7F1
0x72D74C: fldz
0x72D74E: mov     eax, [esi+0Ch]
0x72D751: movzx   eax, word ptr [eax+ecx*2]
0x72D755: mov     ebx, [esp+10h+arg_C]
0x72D759: lea     eax, [eax+eax*2]
0x72D75C: lea     ebx, [ebx+eax*4]
0x72D75F: xor     eax, eax
0x72D761: cmp     [ebp+8], eax
0x72D764: mov     [esp+10h+arg_8], ebx
0x72D768: jbe     short loc_72D7C0
0x72D76A: jmp     short loc_72D770
0x72D76C: mov     ebx, [esp+10h+arg_8]
0x72D770: mov     edi, [ebx+8]
0x72D773: xor     ecx, ecx
0x72D775: test    edi, edi
0x72D777: jbe     short loc_72D79E
0x72D779: mov     edx, [ebp+0]
0x72D77C: mov     ebx, [ebx]
0x72D77E: movzx   ebp, word ptr [edx+eax*2]
0x72D782: mov     edx, ebx
0x72D784: cmp     [edx], ebp
0x72D786: jz      loc_72D842
0x72D78C: add     ecx, 1
0x72D78F: add     edx, 8
0x72D792: cmp     ecx, edi
0x72D794: jb      short loc_72D784
0x72D796: mov     ebp, [esp+10h+arg_4]
0x72D79A: mov     edx, [esp+10h+arg_10]
0x72D79E: fst     [esp+10h+arg_0]
0x72D7A2: fld     [esp+10h+arg_0]
0x72D7A6: add     edx, 4
0x72D7A9: fstp    dword ptr [edx-4]
0x72D7AC: add     eax, 1
0x72D7AF: cmp     eax, [ebp+8]
0x72D7B2: mov     [esp+10h+arg_10], edx
0x72D7B6: jb      short loc_72D76C
0x72D7B8: mov     ecx, [esp+10h+arg_18]
0x72D7BC: mov     edi, [esp+10h+arg_1C]
0x72D7C0: movzx   ebx, word ptr [esi+20h]
0x72D7C4: cmp     eax, ebx
0x72D7C6: jnb     short loc_72D7DC
0x72D7C8: fst     dword ptr [edx]
0x72D7CA: movzx   ebx, word ptr [esi+20h]
0x72D7CE: add     eax, 1
0x72D7D1: add     edx, 4
0x72D7D4: cmp     eax, ebx
0x72D7D6: jb      short loc_72D7C8
0x72D7D8: mov     [esp+10h+arg_10], edx
0x72D7DC: movzx   eax, word ptr [esi+1Ch]
0x72D7E0: add     ecx, 1
0x72D7E3: cmp     ecx, eax
0x72D7E5: mov     [esp+10h+arg_18], ecx
0x72D7E9: jb      loc_72D74E
0x72D7EF: fstp    st
0x72D7F1: cmp     byte ptr [esp+10h+arg_14], 0
0x72D7F6: jz      short loc_72D83B
0x72D7F8: push    edi; Size
0x72D7F9: call    FormHeapAlloc
0x72D7FE: xor     edx, edx
0x72D800: add     esp, 4
0x72D803: cmp     [esi+1Ch], dx
0x72D807: mov     [esi+10h], eax
0x72D80A: mov     ecx, eax
0x72D80C: jbe     short loc_72D83B
0x72D80E: mov     edi, edi
0x72D810: xor     eax, eax
0x72D812: cmp     [esi+20h], ax
0x72D816: jbe     short loc_72D830
0x72D818: jmp     short loc_72D820
0x72D81A: align 10h
0x72D820: mov     [ecx], al
0x72D822: movzx   edi, word ptr [esi+20h]
0x72D826: add     eax, 1
0x72D829: add     ecx, 1
0x72D82C: cmp     eax, edi
0x72D82E: jb      short loc_72D820
0x72D830: movzx   eax, word ptr [esi+1Ch]
0x72D834: add     edx, 1
0x72D837: cmp     edx, eax
0x72D839: jb      short loc_72D810
0x72D83B: pop     edi
0x72D83C: pop     esi
0x72D83D: pop     ebp
0x72D83E: pop     ebx
0x72D83F: retn    20h ; ' '
0x72D842: fld     dword ptr [ebx+ecx*8+4]
0x72D846: mov     ebp, [esp+10h+arg_4]
0x72D84A: mov     edx, [esp+10h+arg_10]
0x72D84E: fstp    [esp+10h+arg_0]
0x72D852: jmp     loc_72D7A2
