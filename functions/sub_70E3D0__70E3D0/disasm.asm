0x70E3D0: push    0FFFFFFFFh
0x70E3D2: push    offset SEH_70E3D0
0x70E3D7: mov     eax, large fs:0
0x70E3DD: push    eax
0x70E3DE: sub     esp, 0C8h
0x70E3E4: push    ebx
0x70E3E5: push    ebp
0x70E3E6: push    esi
0x70E3E7: push    edi
0x70E3E8: mov     eax, ds:0B30AACh
0x70E3ED: xor     eax, esp
0x70E3EF: push    eax
0x70E3F0: lea     eax, [esp+0E8h+var_C]
0x70E3F7: mov     large fs:0, eax
0x70E3FD: mov     ebp, ecx
0x70E3FF: mov     [esp+0E8h+var_D4], ebp
0x70E403: call    NiObject_constr
0x70E408: lea     edi, [ebp+8]
0x70E40B: mov     ecx, edi
0x70E40D: mov     [esp+0E8h+var_4], 0
0x70E418: mov     dword ptr [ebp+0], offset ??_7NiPixelData@@6B@; const NiPixelData::`vftable'
0x70E41F: call    InitSurfacEData
0x70E424: mov     dword ptr [ebp+4Ch], 0
0x70E42B: mov     ebx, [esp+0E8h+arg_0]
0x70E432: lea     esi, [ebx+8]
0x70E435: mov     ecx, 11h
0x70E43A: rep movsd
0x70E43C: cmp     dword ptr [ebx+4Ch], 0
0x70E440: mov     byte ptr [esp+0E8h+var_4], 1
0x70E448: jz      short loc_70E484
0x70E44A: push    24h ; '$'; Size
0x70E44C: call    FormHeapAlloc
0x70E451: add     esp, 4
0x70E454: mov     [esp+0E8h+var_D0], eax
0x70E458: test    eax, eax
0x70E45A: mov     byte ptr [esp+0E8h+var_4], 2
0x70E462: jz      short loc_70E471
0x70E464: mov     edx, [ebx+4Ch]
0x70E467: push    edx
0x70E468: mov     ecx, eax
0x70E46A: call    sub_732690
0x70E46F: jmp     short loc_70E473
0x70E471: xor     eax, eax
0x70E473: push    eax; a2
0x70E474: lea     ecx, [ebp+4Ch]; this
0x70E477: mov     byte ptr [esp+0ECh+var_4], 1
0x70E47F: call    NiSmartPointer_Set??
0x70E484: mov     eax, [ebx+60h]
0x70E487: mov     [ebp+60h], eax
0x70E48A: mov     ecx, [ebx+6Ch]
0x70E48D: mov     [ebp+6Ch], ecx
0x70E490: mov     edx, [ebx+64h]
0x70E493: mov     [ebp+64h], edx
0x70E496: mov     edx, eax
0x70E498: test    edx, edx
0x70E49A: jbe     short loc_70E4CD
0x70E49C: mov     esi, [ebx+5Ch]
0x70E49F: add     eax, eax
0x70E4A1: add     eax, eax
0x70E4A3: mov     ecx, eax
0x70E4A5: shr     ecx, 2
0x70E4A8: lea     edi, [esp+0E8h+var_CC]
0x70E4AC: rep movsd
0x70E4AE: mov     esi, [ebx+58h]
0x70E4B1: mov     ecx, eax
0x70E4B3: shr     ecx, 2
0x70E4B6: lea     edi, [esp+0E8h+var_4C]
0x70E4BD: rep movsd
0x70E4BF: mov     esi, [ebx+54h]
0x70E4C2: mov     ecx, eax
0x70E4C4: shr     ecx, 2
0x70E4C7: lea     edi, [esp+0E8h+Src]
0x70E4CB: rep movsd
0x70E4CD: mov     eax, [ebx+5Ch]
0x70E4D0: mov     edi, [eax+edx*4]
0x70E4D3: mov     ecx, [ebp+6Ch]
0x70E4D6: push    edi
0x70E4D7: push    ecx
0x70E4D8: push    edx
0x70E4D9: mov     ecx, ebp
0x70E4DB: mov     [esp+edx*4+0F4h+var_CC], edi
0x70E4DF: call    sub_732280
0x70E4E4: mov     esi, [ebp+60h]
0x70E4E7: mov     eax, [ebp+54h]
0x70E4EA: add     esi, esi
0x70E4EC: add     esi, esi
0x70E4EE: push    esi; Size
0x70E4EF: lea     edx, [esp+0ECh+Src]
0x70E4F3: push    edx; Src
0x70E4F4: push    eax; Dst
0x70E4F5: call    _memcpy
0x70E4FA: mov     edx, [ebp+58h]
0x70E4FD: push    esi; Size
0x70E4FE: lea     ecx, [esp+0F8h+var_4C]
0x70E505: push    ecx; Src
0x70E506: push    edx; Dst
0x70E507: call    _memcpy
0x70E50C: mov     eax, [ebp+60h]
0x70E50F: lea     ecx, ds:4[eax*4]
0x70E516: mov     eax, [ebp+5Ch]
0x70E519: push    ecx; Size
0x70E51A: lea     edx, [esp+104h+var_CC]
0x70E51E: push    edx; Src
0x70E51F: push    eax; Dst
0x70E520: call    _memcpy
0x70E525: mov     ecx, [ebx+50h]
0x70E528: mov     edx, [ebp+50h]
0x70E52B: push    edi; Size
0x70E52C: push    ecx; Src
0x70E52D: push    edx; Dst
0x70E52E: call    _memcpy
0x70E533: add     esp, 30h
0x70E536: mov     dword ptr [ebp+68h], 1
0x70E53D: mov     eax, ebp
0x70E53F: mov     ecx, [esp+0E8h+var_C]
0x70E546: mov     large fs:0, ecx
0x70E54D: pop     ecx
0x70E54E: pop     edi
0x70E54F: pop     esi
0x70E550: pop     ebp
0x70E551: pop     ebx
0x70E552: add     esp, 0D4h
0x70E558: retn    4
