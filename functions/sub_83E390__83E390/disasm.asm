0x83E390: push    0FFFFFFFFh
0x83E392: push    offset SEH_882120
0x83E397: mov     eax, large fs:0
0x83E39D: push    eax
0x83E39E: push    ebx
0x83E39F: push    ebp
0x83E3A0: push    esi
0x83E3A1: push    edi
0x83E3A2: mov     eax, ds:0B30AACh
0x83E3A7: xor     eax, esp
0x83E3A9: push    eax
0x83E3AA: lea     eax, [esp+20h+var_C]
0x83E3AE: mov     large fs:0, eax
0x83E3B4: mov     edi, ecx
0x83E3B6: mov     eax, [esp+20h+arg_8]
0x83E3BA: mov     esi, [eax+0Ch]
0x83E3BD: mov     ebx, ds:0B4584Ch
0x83E3C3: push    esi
0x83E3C4: call    sub_848E50
0x83E3C9: mov     edx, [edi]
0x83E3CB: mov     eax, [esp+20h+arg_0]
0x83E3CF: mov     edx, [edx+0BCh]
0x83E3D5: push    0
0x83E3D7: push    esi
0x83E3D8: push    eax
0x83E3D9: mov     ecx, edi
0x83E3DB: call    edx
0x83E3DD: mov     esi, [esp+20h+arg_C]
0x83E3E1: mov     eax, [esi+0A8h]
0x83E3E7: mov     ds:0B46628h, eax
0x83E3EC: mov     ecx, [esi+0ACh]
0x83E3F2: mov     ds:0B4662Ch, ecx
0x83E3F8: mov     edx, [esi+0B0h]
0x83E3FE: mov     ds:0B46630h, edx
0x83E404: mov     eax, [esi+0B4h]
0x83E40A: mov     ds:0B46634h, eax
0x83E40F: mov     ecx, [ebx+24h]
0x83E412: mov     ebp, [ecx]
0x83E414: mov     edx, [esi]
0x83E416: mov     eax, [edx+88h]
0x83E41C: push    0
0x83E41E: mov     ecx, esi
0x83E420: mov     [esp+24h+arg_8], ebp
0x83E424: call    eax
0x83E426: mov     ebp, [ebp+4]
0x83E429: cmp     ebp, eax
0x83E42B: mov     [esp+20h+arg_0], eax
0x83E42F: jz      short loc_83E46B
0x83E431: test    ebp, ebp
0x83E433: jz      short loc_83E456
0x83E435: lea     ecx, [ebp+4]
0x83E438: push    ecx; lpAddend
0x83E439: call    dword ptr ds:0A2807Ch
0x83E43F: test    eax, eax
0x83E441: jnz     short loc_83E452
0x83E443: test    ebp, ebp
0x83E445: jz      short loc_83E452
0x83E447: mov     edx, [ebp+0]
0x83E44A: mov     eax, [edx]
0x83E44C: push    1
0x83E44E: mov     ecx, ebp
0x83E450: call    eax
0x83E452: mov     eax, [esp+20h+arg_0]
0x83E456: test    eax, eax
0x83E458: mov     ecx, [esp+20h+arg_8]
0x83E45C: mov     [ecx+4], eax
0x83E45F: jz      short loc_83E46B
0x83E461: add     eax, 4
0x83E464: push    eax; lpAddend
0x83E465: call    dword ptr ds:0A28078h
0x83E46B: mov     edx, [esp+20h+arg_8]
0x83E46F: push    esi
0x83E470: push    edx
0x83E471: mov     ecx, edi
0x83E473: call    sub_848FA0
0x83E478: mov     eax, [ebx+24h]
0x83E47B: mov     ebp, [eax+4]
0x83E47E: push    0
0x83E480: push    esi
0x83E481: mov     ecx, edi
0x83E483: mov     [esp+28h+arg_8], ebp
0x83E487: call    sub_848FD0
0x83E48C: mov     ebp, [ebp+4]
0x83E48F: cmp     ebp, eax
0x83E491: mov     [esp+20h+arg_0], eax
0x83E495: jz      short loc_83E4D1
0x83E497: test    ebp, ebp
0x83E499: jz      short loc_83E4BC
0x83E49B: lea     ecx, [ebp+4]
0x83E49E: push    ecx; lpAddend
0x83E49F: call    dword ptr ds:0A2807Ch
0x83E4A5: test    eax, eax
0x83E4A7: jnz     short loc_83E4B8
0x83E4A9: test    ebp, ebp
0x83E4AB: jz      short loc_83E4B8
0x83E4AD: mov     edx, [ebp+0]
0x83E4B0: mov     eax, [edx]
0x83E4B2: push    1
0x83E4B4: mov     ecx, ebp
0x83E4B6: call    eax
0x83E4B8: mov     eax, [esp+20h+arg_0]
0x83E4BC: test    eax, eax
0x83E4BE: mov     ecx, [esp+20h+arg_8]
0x83E4C2: mov     [ecx+4], eax
0x83E4C5: jz      short loc_83E4D1
0x83E4C7: add     eax, 4
0x83E4CA: push    eax; lpAddend
0x83E4CB: call    dword ptr ds:0A28078h
0x83E4D1: mov     edx, [esp+20h+arg_8]
0x83E4D5: push    esi
0x83E4D6: push    edx
0x83E4D7: mov     ecx, edi
0x83E4D9: call    sub_848FA0
0x83E4DE: mov     eax, [ebx+24h]
0x83E4E1: mov     ebp, [eax+10h]
0x83E4E4: mov     edx, [esi]
0x83E4E6: mov     eax, [edx+88h]
0x83E4EC: push    1
0x83E4EE: mov     ecx, esi
0x83E4F0: mov     [esp+24h+arg_8], ebp
0x83E4F4: call    eax
0x83E4F6: mov     ebp, [ebp+4]
0x83E4F9: cmp     ebp, eax
0x83E4FB: mov     [esp+20h+arg_0], eax
0x83E4FF: jz      short loc_83E53B
0x83E501: test    ebp, ebp
0x83E503: jz      short loc_83E526
0x83E505: lea     ecx, [ebp+4]
0x83E508: push    ecx; lpAddend
0x83E509: call    dword ptr ds:0A2807Ch
0x83E50F: test    eax, eax
0x83E511: jnz     short loc_83E522
0x83E513: test    ebp, ebp
0x83E515: jz      short loc_83E522
0x83E517: mov     edx, [ebp+0]
0x83E51A: mov     eax, [edx]
0x83E51C: push    1
0x83E51E: mov     ecx, ebp
0x83E520: call    eax
0x83E522: mov     eax, [esp+20h+arg_0]
0x83E526: test    eax, eax
0x83E528: mov     ecx, [esp+20h+arg_8]
0x83E52C: mov     [ecx+4], eax
0x83E52F: jz      short loc_83E53B
0x83E531: add     eax, 4
0x83E534: push    eax; lpAddend
0x83E535: call    dword ptr ds:0A28078h
0x83E53B: mov     edx, [esp+20h+arg_8]
0x83E53F: push    esi
0x83E540: push    edx
0x83E541: mov     ecx, edi
0x83E543: call    sub_848FA0
0x83E548: mov     ecx, [ebx+24h]
0x83E54B: mov     esi, [ecx+18h]
0x83E54E: mov     eax, ds:0B43108h
0x83E553: mov     ebp, [esi+4]
0x83E556: add     esi, 4
0x83E559: cmp     ebp, eax
0x83E55B: mov     [esp+20h+arg_8], eax
0x83E55F: jz      short loc_83E596
0x83E561: test    ebp, ebp
0x83E563: jz      short loc_83E586
0x83E565: lea     edx, [ebp+4]
0x83E568: push    edx; lpAddend
0x83E569: call    dword ptr ds:0A2807Ch
0x83E56F: test    eax, eax
0x83E571: jnz     short loc_83E582
0x83E573: test    ebp, ebp
0x83E575: jz      short loc_83E582
0x83E577: mov     eax, [ebp+0]
0x83E57A: mov     edx, [eax]
0x83E57C: push    1
0x83E57E: mov     ecx, ebp
0x83E580: call    edx
0x83E582: mov     eax, [esp+20h+arg_8]
0x83E586: test    eax, eax
0x83E588: mov     [esi], eax
0x83E58A: jz      short loc_83E596
0x83E58C: add     eax, 4
0x83E58F: push    eax; lpAddend
0x83E590: call    dword ptr ds:0A28078h
0x83E596: mov     eax, [ebx+24h]
0x83E599: mov     ebp, [eax+1Ch]
0x83E59C: mov     eax, ds:0B4310Ch
0x83E5A1: mov     esi, [ebp+4]
0x83E5A4: cmp     esi, eax
0x83E5A6: mov     ecx, eax
0x83E5A8: mov     [esp+20h+arg_8], ecx
0x83E5AC: jz      short loc_83E5E3
0x83E5AE: test    esi, esi
0x83E5B0: jz      short loc_83E5D2
0x83E5B2: lea     ecx, [esi+4]
0x83E5B5: push    ecx; lpAddend
0x83E5B6: call    dword ptr ds:0A2807Ch
0x83E5BC: test    eax, eax
0x83E5BE: jnz     short loc_83E5CE
0x83E5C0: test    esi, esi
0x83E5C2: jz      short loc_83E5CE
0x83E5C4: mov     edx, [esi]
0x83E5C6: mov     eax, [edx]
0x83E5C8: push    1
0x83E5CA: mov     ecx, esi
0x83E5CC: call    eax
0x83E5CE: mov     ecx, [esp+20h+arg_8]
0x83E5D2: test    ecx, ecx
0x83E5D4: mov     [ebp+4], ecx
0x83E5D7: jz      short loc_83E5E3
0x83E5D9: add     ecx, 4
0x83E5DC: push    ecx; lpAddend
0x83E5DD: call    dword ptr ds:0A28078h
0x83E5E3: mov     esi, 1
0x83E5E8: add     [ebx+60h], esi
0x83E5EB: mov     [esp+20h+arg_8], ebx
0x83E5EF: mov     edx, [edi+38h]
0x83E5F2: lea     ecx, [esp+20h+arg_8]
0x83E5F6: push    ecx
0x83E5F7: push    edx
0x83E5F8: lea     ecx, [edi+40h]
0x83E5FB: mov     [esp+28h+var_4], 0
0x83E603: call    sub_76CE40
0x83E608: or      eax, 0FFFFFFFFh
0x83E60B: add     [ebx+60h], eax
0x83E60E: mov     [esp+20h+var_4], eax
0x83E612: jnz     short loc_83E61B
0x83E614: mov     ecx, ebx
0x83E616: call    sub_7604D0
0x83E61B: add     [edi+38h], esi
0x83E61E: mov     ecx, [esp+20h+var_C]
0x83E622: mov     large fs:0, ecx
0x83E629: pop     ecx
0x83E62A: pop     edi
0x83E62B: pop     esi
0x83E62C: pop     ebp
0x83E62D: pop     ebx
0x83E62E: add     esp, 0Ch
0x83E631: retn    10h
