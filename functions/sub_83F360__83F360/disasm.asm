0x83F360: push    0FFFFFFFFh
0x83F362: push    offset SEH_882120
0x83F367: mov     eax, large fs:0
0x83F36D: push    eax
0x83F36E: push    ebx
0x83F36F: push    ebp
0x83F370: push    esi
0x83F371: push    edi
0x83F372: mov     eax, ds:0B30AACh
0x83F377: xor     eax, esp
0x83F379: push    eax
0x83F37A: lea     eax, [esp+20h+var_C]
0x83F37E: mov     large fs:0, eax
0x83F384: mov     esi, ecx
0x83F386: mov     edi, [esp+20h+arg_8]
0x83F38A: mov     eax, [edi+10h]
0x83F38D: mov     ebx, ds:0B45888h
0x83F393: push    eax
0x83F394: call    sub_848DA0
0x83F399: mov     ebp, [edi+0Ch]
0x83F39C: push    ebp
0x83F39D: mov     ecx, esi
0x83F39F: call    sub_848E50
0x83F3A4: mov     edi, [edi+10h]
0x83F3A7: mov     ecx, [esp+20h+arg_0]
0x83F3AB: mov     eax, [esi]
0x83F3AD: mov     edx, [eax+0BCh]
0x83F3B3: push    edi
0x83F3B4: push    ebp
0x83F3B5: push    ecx
0x83F3B6: mov     ecx, esi
0x83F3B8: call    edx
0x83F3BA: mov     eax, [ebx+24h]
0x83F3BD: mov     edi, [esp+20h+arg_C]
0x83F3C1: mov     ebp, [eax]
0x83F3C3: mov     edx, [edi]
0x83F3C5: mov     eax, [edx+88h]
0x83F3CB: push    0
0x83F3CD: mov     ecx, edi
0x83F3CF: mov     [esp+24h+arg_8], ebp
0x83F3D3: call    eax
0x83F3D5: mov     ebp, [ebp+4]
0x83F3D8: cmp     ebp, eax
0x83F3DA: mov     [esp+20h+arg_0], eax
0x83F3DE: jz      short loc_83F41A
0x83F3E0: test    ebp, ebp
0x83F3E2: jz      short loc_83F405
0x83F3E4: lea     ecx, [ebp+4]
0x83F3E7: push    ecx; lpAddend
0x83F3E8: call    dword ptr ds:0A2807Ch
0x83F3EE: test    eax, eax
0x83F3F0: jnz     short loc_83F401
0x83F3F2: test    ebp, ebp
0x83F3F4: jz      short loc_83F401
0x83F3F6: mov     edx, [ebp+0]
0x83F3F9: mov     eax, [edx]
0x83F3FB: push    1
0x83F3FD: mov     ecx, ebp
0x83F3FF: call    eax
0x83F401: mov     eax, [esp+20h+arg_0]
0x83F405: test    eax, eax
0x83F407: mov     ecx, [esp+20h+arg_8]
0x83F40B: mov     [ecx+4], eax
0x83F40E: jz      short loc_83F41A
0x83F410: add     eax, 4
0x83F413: push    eax; lpAddend
0x83F414: call    dword ptr ds:0A28078h
0x83F41A: mov     edx, [esp+20h+arg_8]
0x83F41E: push    edi
0x83F41F: push    edx
0x83F420: mov     ecx, esi
0x83F422: call    sub_848FA0
0x83F427: mov     eax, [ebx+24h]
0x83F42A: mov     ebp, [eax+4]
0x83F42D: push    0
0x83F42F: push    edi
0x83F430: mov     ecx, esi
0x83F432: mov     [esp+28h+arg_8], ebp
0x83F436: call    sub_848FD0
0x83F43B: mov     ebp, [ebp+4]
0x83F43E: cmp     ebp, eax
0x83F440: mov     [esp+20h+arg_0], eax
0x83F444: jz      short loc_83F480
0x83F446: test    ebp, ebp
0x83F448: jz      short loc_83F46B
0x83F44A: lea     ecx, [ebp+4]
0x83F44D: push    ecx; lpAddend
0x83F44E: call    dword ptr ds:0A2807Ch
0x83F454: test    eax, eax
0x83F456: jnz     short loc_83F467
0x83F458: test    ebp, ebp
0x83F45A: jz      short loc_83F467
0x83F45C: mov     edx, [ebp+0]
0x83F45F: mov     eax, [edx]
0x83F461: push    1
0x83F463: mov     ecx, ebp
0x83F465: call    eax
0x83F467: mov     eax, [esp+20h+arg_0]
0x83F46B: test    eax, eax
0x83F46D: mov     ecx, [esp+20h+arg_8]
0x83F471: mov     [ecx+4], eax
0x83F474: jz      short loc_83F480
0x83F476: add     eax, 4
0x83F479: push    eax; lpAddend
0x83F47A: call    dword ptr ds:0A28078h
0x83F480: mov     edx, [esp+20h+arg_8]
0x83F484: push    edi
0x83F485: push    edx
0x83F486: mov     ecx, esi
0x83F488: call    sub_848FA0
0x83F48D: mov     eax, [ebx+24h]
0x83F490: mov     ebp, [eax+10h]
0x83F493: mov     edx, [edi]
0x83F495: mov     eax, [edx+90h]
0x83F49B: push    0
0x83F49D: mov     ecx, edi
0x83F49F: mov     [esp+24h+arg_8], ebp
0x83F4A3: call    eax
0x83F4A5: mov     ebp, [ebp+4]
0x83F4A8: cmp     ebp, eax
0x83F4AA: mov     [esp+20h+arg_0], eax
0x83F4AE: jz      short loc_83F4EA
0x83F4B0: test    ebp, ebp
0x83F4B2: jz      short loc_83F4D5
0x83F4B4: lea     ecx, [ebp+4]
0x83F4B7: push    ecx; lpAddend
0x83F4B8: call    dword ptr ds:0A2807Ch
0x83F4BE: test    eax, eax
0x83F4C0: jnz     short loc_83F4D1
0x83F4C2: test    ebp, ebp
0x83F4C4: jz      short loc_83F4D1
0x83F4C6: mov     edx, [ebp+0]
0x83F4C9: mov     eax, [edx]
0x83F4CB: push    1
0x83F4CD: mov     ecx, ebp
0x83F4CF: call    eax
0x83F4D1: mov     eax, [esp+20h+arg_0]
0x83F4D5: test    eax, eax
0x83F4D7: mov     ecx, [esp+20h+arg_8]
0x83F4DB: mov     [ecx+4], eax
0x83F4DE: jz      short loc_83F4EA
0x83F4E0: add     eax, 4
0x83F4E3: push    eax; lpAddend
0x83F4E4: call    dword ptr ds:0A28078h
0x83F4EA: mov     edx, [esp+20h+arg_8]
0x83F4EE: push    edi
0x83F4EF: push    edx
0x83F4F0: mov     ecx, esi
0x83F4F2: call    sub_848FA0
0x83F4F7: mov     ecx, [ebx+24h]
0x83F4FA: mov     edi, [ecx+18h]
0x83F4FD: mov     eax, ds:0B43108h
0x83F502: mov     ebp, [edi+4]
0x83F505: add     edi, 4
0x83F508: cmp     ebp, eax
0x83F50A: mov     [esp+20h+arg_8], eax
0x83F50E: jz      short loc_83F545
0x83F510: test    ebp, ebp
0x83F512: jz      short loc_83F535
0x83F514: lea     edx, [ebp+4]
0x83F517: push    edx; lpAddend
0x83F518: call    dword ptr ds:0A2807Ch
0x83F51E: test    eax, eax
0x83F520: jnz     short loc_83F531
0x83F522: test    ebp, ebp
0x83F524: jz      short loc_83F531
0x83F526: mov     eax, [ebp+0]
0x83F529: mov     edx, [eax]
0x83F52B: push    1
0x83F52D: mov     ecx, ebp
0x83F52F: call    edx
0x83F531: mov     eax, [esp+20h+arg_8]
0x83F535: test    eax, eax
0x83F537: mov     [edi], eax
0x83F539: jz      short loc_83F545
0x83F53B: add     eax, 4
0x83F53E: push    eax; lpAddend
0x83F53F: call    dword ptr ds:0A28078h
0x83F545: mov     eax, [ebx+24h]
0x83F548: mov     ebp, [eax+1Ch]
0x83F54B: mov     eax, ds:0B4310Ch
0x83F550: mov     edi, [ebp+4]
0x83F553: cmp     edi, eax
0x83F555: mov     ecx, eax
0x83F557: mov     [esp+20h+arg_8], ecx
0x83F55B: jz      short loc_83F592
0x83F55D: test    edi, edi
0x83F55F: jz      short loc_83F581
0x83F561: lea     ecx, [edi+4]
0x83F564: push    ecx; lpAddend
0x83F565: call    dword ptr ds:0A2807Ch
0x83F56B: test    eax, eax
0x83F56D: jnz     short loc_83F57D
0x83F56F: test    edi, edi
0x83F571: jz      short loc_83F57D
0x83F573: mov     edx, [edi]
0x83F575: mov     eax, [edx]
0x83F577: push    1
0x83F579: mov     ecx, edi
0x83F57B: call    eax
0x83F57D: mov     ecx, [esp+20h+arg_8]
0x83F581: test    ecx, ecx
0x83F583: mov     [ebp+4], ecx
0x83F586: jz      short loc_83F592
0x83F588: add     ecx, 4
0x83F58B: push    ecx; lpAddend
0x83F58C: call    dword ptr ds:0A28078h
0x83F592: mov     edi, 1
0x83F597: add     [ebx+60h], edi
0x83F59A: mov     [esp+20h+arg_8], ebx
0x83F59E: mov     edx, [esi+38h]
0x83F5A1: lea     ecx, [esp+20h+arg_8]
0x83F5A5: push    ecx
0x83F5A6: push    edx
0x83F5A7: lea     ecx, [esi+40h]
0x83F5AA: mov     [esp+28h+var_4], 0
0x83F5B2: call    sub_76CE40
0x83F5B7: or      eax, 0FFFFFFFFh
0x83F5BA: add     [ebx+60h], eax
0x83F5BD: mov     [esp+20h+var_4], eax
0x83F5C1: jnz     short loc_83F5CA
0x83F5C3: mov     ecx, ebx
0x83F5C5: call    sub_7604D0
0x83F5CA: add     [esi+38h], edi
0x83F5CD: mov     ecx, [esp+20h+var_C]
0x83F5D1: mov     large fs:0, ecx
0x83F5D8: pop     ecx
0x83F5D9: pop     edi
0x83F5DA: pop     esi
0x83F5DB: pop     ebp
0x83F5DC: pop     ebx
0x83F5DD: add     esp, 0Ch
0x83F5E0: retn    10h
