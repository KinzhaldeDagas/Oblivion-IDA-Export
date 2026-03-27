0x84A740: push    0FFFFFFFFh
0x84A742: push    offset SEH_879360
0x84A747: mov     eax, large fs:0
0x84A74D: push    eax
0x84A74E: push    ecx
0x84A74F: push    ebx
0x84A750: push    ebp
0x84A751: push    esi
0x84A752: push    edi
0x84A753: mov     eax, ds:0B30AACh
0x84A758: xor     eax, esp
0x84A75A: push    eax
0x84A75B: lea     eax, [esp+24h+var_C]
0x84A75F: mov     large fs:0, eax
0x84A765: mov     esi, ecx
0x84A767: mov     [esp+24h+var_10], esi
0x84A76B: mov     edi, [esp+24h+arg_8]
0x84A76F: mov     eax, [edi+10h]
0x84A772: mov     ebx, ds:0B45678h
0x84A778: push    eax
0x84A779: call    sub_848DA0
0x84A77E: mov     edi, [edi+0Ch]
0x84A781: push    edi
0x84A782: mov     ecx, esi
0x84A784: call    sub_848E50
0x84A789: mov     eax, [ebx+24h]
0x84A78C: mov     esi, [esp+24h+arg_C]
0x84A790: mov     edi, [eax]
0x84A792: mov     edx, [esi]
0x84A794: mov     eax, [edx+88h]
0x84A79A: push    0
0x84A79C: mov     ecx, esi
0x84A79E: mov     [esp+28h+arg_8], edi
0x84A7A2: call    eax
0x84A7A4: mov     edi, [edi+4]
0x84A7A7: mov     ebp, eax
0x84A7A9: cmp     edi, ebp
0x84A7AB: jz      short loc_84A7E4
0x84A7AD: test    edi, edi
0x84A7AF: jz      short loc_84A7CD
0x84A7B1: lea     ecx, [edi+4]
0x84A7B4: push    ecx; lpAddend
0x84A7B5: call    dword ptr ds:0A2807Ch
0x84A7BB: test    eax, eax
0x84A7BD: jnz     short loc_84A7CD
0x84A7BF: test    edi, edi
0x84A7C1: jz      short loc_84A7CD
0x84A7C3: mov     edx, [edi]
0x84A7C5: mov     eax, [edx]
0x84A7C7: push    1
0x84A7C9: mov     ecx, edi
0x84A7CB: call    eax
0x84A7CD: test    ebp, ebp
0x84A7CF: mov     edi, [esp+24h+arg_8]
0x84A7D3: mov     [edi+4], ebp
0x84A7D6: jz      short loc_84A7E8
0x84A7D8: add     ebp, 4
0x84A7DB: push    ebp; lpAddend
0x84A7DC: call    dword ptr ds:0A28078h
0x84A7E2: jmp     short loc_84A7E8
0x84A7E4: mov     edi, [esp+24h+arg_8]
0x84A7E8: test    edi, edi
0x84A7EA: jz      short loc_84A806
0x84A7EC: cmp     byte ptr ds:0B42CDDh, 0
0x84A7F3: jz      short loc_84A806
0x84A7F5: mov     edx, [esi]
0x84A7F7: mov     eax, [edx+78h]
0x84A7FA: mov     ecx, esi
0x84A7FC: call    eax
0x84A7FE: push    eax
0x84A7FF: mov     ecx, edi
0x84A801: call    sub_7715E0
0x84A806: mov     ecx, [ebx+24h]
0x84A809: mov     edi, [ecx+4]
0x84A80C: mov     edx, [esi]
0x84A80E: mov     eax, [edx+8Ch]
0x84A814: push    0
0x84A816: mov     ecx, esi
0x84A818: mov     [esp+28h+arg_8], edi
0x84A81C: call    eax
0x84A81E: test    eax, eax
0x84A820: jz      short loc_84A834
0x84A822: mov     edx, [esi]
0x84A824: mov     eax, [edx+8Ch]
0x84A82A: push    0
0x84A82C: mov     ecx, esi
0x84A82E: call    eax
0x84A830: mov     ebp, eax
0x84A832: jmp     short loc_84A849
0x84A834: test    dword ptr [esi+1Ch], 80h
0x84A83B: mov     ebp, ds:0B430F0h
0x84A841: ja      short loc_84A849
0x84A843: mov     ebp, ds:0B430DCh
0x84A849: mov     edi, [edi+4]
0x84A84C: cmp     edi, ebp
0x84A84E: jz      short loc_84A887
0x84A850: test    edi, edi
0x84A852: jz      short loc_84A870
0x84A854: lea     ecx, [edi+4]
0x84A857: push    ecx; lpAddend
0x84A858: call    dword ptr ds:0A2807Ch
0x84A85E: test    eax, eax
0x84A860: jnz     short loc_84A870
0x84A862: test    edi, edi
0x84A864: jz      short loc_84A870
0x84A866: mov     edx, [edi]
0x84A868: mov     eax, [edx]
0x84A86A: push    1
0x84A86C: mov     ecx, edi
0x84A86E: call    eax
0x84A870: test    ebp, ebp
0x84A872: mov     edi, [esp+24h+arg_8]
0x84A876: mov     [edi+4], ebp
0x84A879: jz      short loc_84A88B
0x84A87B: add     ebp, 4
0x84A87E: push    ebp; lpAddend
0x84A87F: call    dword ptr ds:0A28078h
0x84A885: jmp     short loc_84A88B
0x84A887: mov     edi, [esp+24h+arg_8]
0x84A88B: test    edi, edi
0x84A88D: jz      short loc_84A8A9
0x84A88F: cmp     byte ptr ds:0B42CDDh, 0
0x84A896: jz      short loc_84A8A9
0x84A898: mov     edx, [esi]
0x84A89A: mov     eax, [edx+78h]
0x84A89D: mov     ecx, esi
0x84A89F: call    eax
0x84A8A1: push    eax
0x84A8A2: mov     ecx, edi
0x84A8A4: call    sub_7715E0
0x84A8A9: mov     ecx, [ebx+24h]
0x84A8AC: mov     edi, [ecx+8]
0x84A8AF: mov     edx, [esi]
0x84A8B1: mov     eax, [edx+90h]
0x84A8B7: push    0
0x84A8B9: mov     ecx, esi
0x84A8BB: mov     [esp+28h+arg_8], edi
0x84A8BF: call    eax
0x84A8C1: mov     edi, [edi+4]
0x84A8C4: mov     ebp, eax
0x84A8C6: cmp     edi, ebp
0x84A8C8: jz      short loc_84A901
0x84A8CA: test    edi, edi
0x84A8CC: jz      short loc_84A8EA
0x84A8CE: lea     ecx, [edi+4]
0x84A8D1: push    ecx; lpAddend
0x84A8D2: call    dword ptr ds:0A2807Ch
0x84A8D8: test    eax, eax
0x84A8DA: jnz     short loc_84A8EA
0x84A8DC: test    edi, edi
0x84A8DE: jz      short loc_84A8EA
0x84A8E0: mov     edx, [edi]
0x84A8E2: mov     eax, [edx]
0x84A8E4: push    1
0x84A8E6: mov     ecx, edi
0x84A8E8: call    eax
0x84A8EA: test    ebp, ebp
0x84A8EC: mov     edi, [esp+24h+arg_8]
0x84A8F0: mov     [edi+4], ebp
0x84A8F3: jz      short loc_84A905
0x84A8F5: add     ebp, 4
0x84A8F8: push    ebp; lpAddend
0x84A8F9: call    dword ptr ds:0A28078h
0x84A8FF: jmp     short loc_84A905
0x84A901: mov     edi, [esp+24h+arg_8]
0x84A905: test    edi, edi
0x84A907: jz      short loc_84A923
0x84A909: cmp     byte ptr ds:0B42CDDh, 0
0x84A910: jz      short loc_84A923
0x84A912: mov     edx, [esi]
0x84A914: mov     eax, [edx+78h]
0x84A917: mov     ecx, esi
0x84A919: call    eax
0x84A91B: push    eax
0x84A91C: mov     ecx, edi
0x84A91E: call    sub_7715E0
0x84A923: mov     edi, 1
0x84A928: add     [ebx+60h], edi
0x84A92B: mov     [esp+24h+arg_8], ebx
0x84A92F: mov     esi, [esp+24h+var_10]
0x84A933: mov     edx, [esi+38h]
0x84A936: lea     ecx, [esp+24h+arg_8]
0x84A93A: push    ecx
0x84A93B: push    edx
0x84A93C: lea     ecx, [esi+40h]
0x84A93F: mov     [esp+2Ch+var_4], 0
0x84A947: call    sub_76CE40
0x84A94C: or      eax, 0FFFFFFFFh
0x84A94F: add     [ebx+60h], eax
0x84A952: mov     [esp+24h+var_4], eax
0x84A956: jnz     short loc_84A95F
0x84A958: mov     ecx, ebx
0x84A95A: call    sub_7604D0
0x84A95F: add     [esi+38h], edi
0x84A962: mov     ecx, dword ptr [esp+24h+var_C]
0x84A966: mov     large fs:0, ecx
0x84A96D: pop     ecx
0x84A96E: pop     edi
0x84A96F: pop     esi
0x84A970: pop     ebp
0x84A971: pop     ebx
0x84A972: add     esp, 10h
0x84A975: retn    10h
