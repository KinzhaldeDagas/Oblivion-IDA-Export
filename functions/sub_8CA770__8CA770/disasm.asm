0x8CA770: push    ebx
0x8CA771: push    esi
0x8CA772: mov     esi, ecx
0x8CA774: push    edi
0x8CA775: mov     dword ptr [esi], offset off_A99AE8
0x8CA77B: call    sub_8CA2A0
0x8CA780: mov     eax, [esi+1Ch]
0x8CA783: xor     edi, edi
0x8CA785: test    eax, eax
0x8CA787: jle     short loc_8CA7A5
0x8CA789: lea     esp, [esp+0]
0x8CA790: mov     eax, [esi+18h]
0x8CA793: mov     ecx, [eax+edi*4]
0x8CA796: mov     edx, [ecx]
0x8CA798: push    0
0x8CA79A: call    dword ptr [edx+8]
0x8CA79D: mov     eax, [esi+1Ch]
0x8CA7A0: inc     edi
0x8CA7A1: cmp     edi, eax
0x8CA7A3: jl      short loc_8CA790
0x8CA7A5: mov     eax, [esi+50h]
0x8CA7A8: xor     ebx, ebx
0x8CA7AA: test    eax, eax
0x8CA7AC: jle     short loc_8CA7E5
0x8CA7AE: mov     edi, edi
0x8CA7B0: mov     eax, [esi+4Ch]
0x8CA7B3: mov     edi, [eax+ebx*4]
0x8CA7B6: test    edi, edi
0x8CA7B8: jz      short loc_8CA7DD
0x8CA7BA: mov     ecx, [edi]
0x8CA7BC: mov     eax, [ecx-4]
0x8CA7BF: sub     ecx, 0Ch
0x8CA7C2: dec     eax
0x8CA7C3: mov     [ecx+8], eax
0x8CA7C6: jns     short loc_8CA7CD
0x8CA7C8: call    sub_8B1930
0x8CA7CD: mov     ecx, ds:0BA7D98h
0x8CA7D3: mov     edx, [ecx]
0x8CA7D5: push    13h
0x8CA7D7: push    4
0x8CA7D9: push    edi
0x8CA7DA: call    dword ptr [edx+14h]
0x8CA7DD: mov     eax, [esi+50h]
0x8CA7E0: inc     ebx
0x8CA7E1: cmp     ebx, eax
0x8CA7E3: jl      short loc_8CA7B0
0x8CA7E5: mov     ecx, [esi+48h]
0x8CA7E8: test    ecx, ecx
0x8CA7EA: mov     dword ptr [esi+50h], 0
0x8CA7F1: jz      short loc_8CA80B
0x8CA7F3: cmp     word ptr [ecx+4], 0
0x8CA7F8: jz      short loc_8CA80B
0x8CA7FA: dec     word ptr [ecx+6]
0x8CA7FE: cmp     word ptr [ecx+6], 0
0x8CA803: jnz     short loc_8CA80B
0x8CA805: mov     eax, [ecx]
0x8CA807: push    1
0x8CA809: call    dword ptr [eax]
0x8CA80B: mov     eax, [esi+54h]
0x8CA80E: test    eax, eax
0x8CA810: mov     edi, ds:0BA9DE4h
0x8CA816: mov     ebx, large fs:2Ch
0x8CA81D: js      short loc_8CA846
0x8CA81F: mov     ecx, [ebx+edi*4]
0x8CA822: mov     ecx, [ecx+19Ch]
0x8CA828: test    ecx, ecx
0x8CA82A: jnz     short loc_8CA832
0x8CA82C: mov     ecx, ds:0BA7D9Ch
0x8CA832: mov     edx, [esi+4Ch]
0x8CA835: and     eax, 3FFFFFFFh
0x8CA83A: push    14h
0x8CA83C: shl     eax, 2
0x8CA83F: push    eax
0x8CA840: push    edx
0x8CA841: call    sub_8A75D0
0x8CA846: mov     eax, [esi+44h]
0x8CA849: test    eax, eax
0x8CA84B: js      short loc_8CA874
0x8CA84D: mov     ecx, [ebx+edi*4]
0x8CA850: mov     ecx, [ecx+19Ch]
0x8CA856: test    ecx, ecx
0x8CA858: jnz     short loc_8CA860
0x8CA85A: mov     ecx, ds:0BA7D9Ch
0x8CA860: mov     edx, [esi+3Ch]
0x8CA863: and     eax, 3FFFFFFFh
0x8CA868: push    14h
0x8CA86A: shl     eax, 2
0x8CA86D: push    eax
0x8CA86E: push    edx
0x8CA86F: call    sub_8A75D0
0x8CA874: mov     eax, [esi+38h]
0x8CA877: test    eax, eax
0x8CA879: js      short loc_8CA8A2
0x8CA87B: mov     ecx, [ebx+edi*4]
0x8CA87E: mov     ecx, [ecx+19Ch]
0x8CA884: test    ecx, ecx
0x8CA886: jnz     short loc_8CA88E
0x8CA888: mov     ecx, ds:0BA7D9Ch
0x8CA88E: mov     edx, [esi+30h]
0x8CA891: and     eax, 3FFFFFFFh
0x8CA896: push    14h
0x8CA898: shl     eax, 2
0x8CA89B: push    eax
0x8CA89C: push    edx
0x8CA89D: call    sub_8A75D0
0x8CA8A2: mov     eax, [esi+2Ch]
0x8CA8A5: test    eax, eax
0x8CA8A7: js      short loc_8CA8D0
0x8CA8A9: mov     ecx, [ebx+edi*4]
0x8CA8AC: mov     ecx, [ecx+19Ch]
0x8CA8B2: test    ecx, ecx
0x8CA8B4: jnz     short loc_8CA8BC
0x8CA8B6: mov     ecx, ds:0BA7D9Ch
0x8CA8BC: mov     edx, [esi+24h]
0x8CA8BF: and     eax, 3FFFFFFFh
0x8CA8C4: push    14h
0x8CA8C6: shl     eax, 3
0x8CA8C9: push    eax
0x8CA8CA: push    edx
0x8CA8CB: call    sub_8A75D0
0x8CA8D0: mov     eax, [esi+20h]
0x8CA8D3: test    eax, eax
0x8CA8D5: js      short loc_8CA8FE
0x8CA8D7: mov     ecx, [ebx+edi*4]
0x8CA8DA: mov     ecx, [ecx+19Ch]
0x8CA8E0: test    ecx, ecx
0x8CA8E2: jnz     short loc_8CA8EA
0x8CA8E4: mov     ecx, ds:0BA7D9Ch
0x8CA8EA: mov     edx, [esi+18h]
0x8CA8ED: and     eax, 3FFFFFFFh
0x8CA8F2: push    14h
0x8CA8F4: shl     eax, 2
0x8CA8F7: push    eax
0x8CA8F8: push    edx
0x8CA8F9: call    sub_8A75D0
0x8CA8FE: mov     eax, [esi+14h]
0x8CA901: test    eax, eax
0x8CA903: js      short loc_8CA92C
0x8CA905: mov     ecx, [ebx+edi*4]
0x8CA908: mov     ecx, [ecx+19Ch]
0x8CA90E: test    ecx, ecx
0x8CA910: jnz     short loc_8CA918
0x8CA912: mov     ecx, ds:0BA7D9Ch
0x8CA918: mov     edx, [esi+0Ch]
0x8CA91B: and     eax, 3FFFFFFFh
0x8CA920: push    14h
0x8CA922: shl     eax, 3
0x8CA925: push    eax
0x8CA926: push    edx
0x8CA927: call    sub_8A75D0
0x8CA92C: pop     edi
0x8CA92D: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8CA933: pop     esi
0x8CA934: pop     ebx
0x8CA935: retn
