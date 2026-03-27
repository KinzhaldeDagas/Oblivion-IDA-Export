0x52D2C0: push    0FFFFFFFFh
0x52D2C2: push    offset SEH_52D2C0
0x52D2C7: mov     eax, large fs:0
0x52D2CD: push    eax
0x52D2CE: sub     esp, 190h
0x52D2D4: mov     eax, ds:0B30AACh
0x52D2D9: xor     eax, esp
0x52D2DB: mov     [esp+19Ch+var_10], eax
0x52D2E2: push    ebx
0x52D2E3: push    ebp
0x52D2E4: push    esi
0x52D2E5: push    edi
0x52D2E6: mov     eax, ds:0B30AACh
0x52D2EB: xor     eax, esp
0x52D2ED: push    eax
0x52D2EE: lea     eax, [esp+1B0h+var_C]
0x52D2F5: mov     large fs:0, eax
0x52D2FB: mov     eax, [esp+1B0h+arg_4]
0x52D302: mov     ebp, [esp+1B0h+arg_0]
0x52D309: mov     [esp+1B0h+var_174], ecx
0x52D30D: mov     ecx, [esp+1B0h+arg_8]
0x52D314: mov     [esp+1B0h+var_17C], ecx
0x52D318: mov     ecx, [esp+1B0h+arg_C]
0x52D31F: xor     ebx, ebx
0x52D321: cmp     ecx, 0Fh
0x52D324: mov     [esp+1B0h+var_178], eax
0x52D328: lea     eax, [ecx-2]
0x52D32B: jnz     short loc_52D338
0x52D32D: mov     eax, 4
0x52D332: mov     [esp+1B0h+var_188], eax
0x52D336: jmp     short loc_52D34F
0x52D338: cmp     eax, ebx
0x52D33A: jl      short loc_52D347
0x52D33C: cmp     eax, 5
0x52D33F: jge     short loc_52D347
0x52D341: mov     [esp+1B0h+var_188], eax
0x52D345: jmp     short loc_52D34F
0x52D347: mov     [esp+1B0h+var_188], 0FFFFFFFFh
0x52D34F: mov     [esp+1B0h+var_190], ebx
0x52D353: mov     [esp+1B0h+var_4], ebx
0x52D35A: mov     [esp+1B0h+var_194], ebx
0x52D35E: mov     [esp+1B0h+var_18C], ebx
0x52D362: push    offset sub_43ACE0; a5
0x52D367: push    offset sub_43EB30; a4
0x52D36C: push    4; size
0x52D36E: push    18h; a2
0x52D370: lea     edx, [esp+1C0h+a1]
0x52D374: push    edx; a1
0x52D375: mov     byte ptr [esp+1C4h+var_4], 2
0x52D37D: call    ArrayConstructor
0x52D382: mov     dword ptr [esp+1B0h+ArgList], ebx
0x52D386: mov     word ptr [esp+1B0h+var_180], bx
0x52D38B: mov     word ptr [esp+1B0h+var_180+2], bx
0x52D390: mov     [esp+1B0h+var_19C], ebx
0x52D394: mov     word ptr [esp+1B0h+var_198], bx
0x52D399: mov     word ptr [esp+1B0h+var_198+2], bx
0x52D39E: mov     esi, [ebp+0]
0x52D3A1: cmp     esi, ebx
0x52D3A3: mov     byte ptr [esp+1B0h+var_4], 5
0x52D3AB: jz      short loc_52D3CC
0x52D3AD: lea     eax, [esi+4]
0x52D3B0: push    eax; lpAddend
0x52D3B1: call    dword ptr ds:0A2807Ch
0x52D3B7: test    eax, eax
0x52D3B9: jnz     short loc_52D3C9
0x52D3BB: cmp     esi, ebx
0x52D3BD: jz      short loc_52D3C9
0x52D3BF: mov     edx, [esi]
0x52D3C1: mov     eax, [edx]
0x52D3C3: push    1
0x52D3C5: mov     ecx, esi
0x52D3C7: call    eax
0x52D3C9: mov     [ebp+0], ebx
0x52D3CC: call    sub_523D80
0x52D3D1: mov     ecx, [esp+1B0h+var_178]
0x52D3D5: mov     esi, [ecx]
0x52D3D7: mov     edi, eax
0x52D3D9: cmp     esi, edi
0x52D3DB: jz      short loc_52D411
0x52D3DD: cmp     esi, ebx
0x52D3DF: jz      short loc_52D3FD
0x52D3E1: lea     edx, [esi+4]
0x52D3E4: push    edx; lpAddend
0x52D3E5: call    dword ptr ds:0A2807Ch
0x52D3EB: test    eax, eax
0x52D3ED: jnz     short loc_52D3FD
0x52D3EF: cmp     esi, ebx
0x52D3F1: jz      short loc_52D3FD
0x52D3F3: mov     eax, [esi]
0x52D3F5: mov     edx, [eax]
0x52D3F7: push    1
0x52D3F9: mov     ecx, esi
0x52D3FB: call    edx
0x52D3FD: cmp     edi, ebx
0x52D3FF: mov     eax, [esp+1B0h+var_178]
0x52D403: mov     [eax], edi
0x52D405: jz      short loc_52D411
0x52D407: add     edi, 4
0x52D40A: push    edi; lpAddend
0x52D40B: call    dword ptr ds:0A28078h
0x52D411: mov     esi, [esp+1B0h+var_188]
0x52D415: cmp     esi, 4
0x52D418: ja      loc_52D792
0x52D41E: mov     ecx, [esp+1B0h+var_17C]
0x52D422: cmp     ecx, ebx
0x52D424: jz      short loc_52D431
0x52D426: call    TESActorBase_IsFemale
0x52D42B: mov     [esp+1B0h+var_188], eax
0x52D42F: jmp     short loc_52D437
0x52D431: mov     [esp+1B0h+var_188], ebx
0x52D435: mov     eax, ebx
0x52D437: mov     edi, [esp+1B0h+var_174]
0x52D43B: lea     ecx, [esi+eax*4]
0x52D43E: lea     esi, [eax+ecx]
0x52D441: lea     edx, [esi+esi*2+8Ah]
0x52D448: movzx   ecx, word ptr [edi+edx*4+4]
0x52D44D: cmp     cx, 0FFFFh
0x52D452: lea     eax, [edi+edx*4]
0x52D455: jnz     short loc_52D46D
0x52D457: mov     eax, [eax]
0x52D459: lea     edx, [eax+1]
0x52D45C: lea     esp, [esp+0]
0x52D460: mov     cl, [eax]
0x52D462: add     eax, 1
0x52D465: cmp     cl, bl
0x52D467: jnz     short loc_52D460
0x52D469: sub     eax, edx
0x52D46B: jmp     short loc_52D470
0x52D46D: movzx   eax, cx
0x52D470: cmp     eax, ebx
0x52D472: jnz     short loc_52D4A8
0x52D474: mov     eax, [esp+1B0h+var_19C]
0x52D478: push    eax
0x52D479: call    FormHeapFree
0x52D47E: push    ebx
0x52D47F: mov     [esp+1B8h+var_19C], ebx
0x52D483: mov     word ptr [esp+1B8h+var_198+2], bx
0x52D488: mov     word ptr [esp+1B8h+var_198], bx
0x52D48D: call    FormHeapFree
0x52D492: add     esp, 8
0x52D495: push    offset sub_43ACE0
0x52D49A: push    4
0x52D49C: push    18h
0x52D49E: lea     ecx, [esp+1BCh+a1]
0x52D4A2: push    ecx
0x52D4A3: jmp     loc_52D7C1
0x52D4A8: lea     edx, [esi+esi*2]
0x52D4AB: lea     eax, [edi+edx*4+224h]
0x52D4B2: mov     eax, [eax+4]
0x52D4B5: cmp     eax, ebx
0x52D4B7: jnz     short loc_52D4BE
0x52D4B9: mov     eax, offset EmptyString
0x52D4BE: push    eax; ArgList
0x52D4BF: lea     eax, [esp+1B4h+ArgList]
0x52D4C3: push    offset aTexturesS; "Textures\\%s"
0x52D4C8: push    eax; int
0x52D4C9: call    BSStringT_Static_Format
0x52D4CE: mov     esi, dword ptr [esp+1BCh+ArgList]
0x52D4D2: add     esp, 0Ch
0x52D4D5: push    ebx; char
0x52D4D6: push    ebx; char
0x52D4D7: push    esi; ArgList
0x52D4D8: lea     ecx, [esp+1BCh+var_174]
0x52D4DC: push    ecx; int
0x52D4DD: mov     ecx, ds:0B333A0h
0x52D4E3: call    sub_442890
0x52D4E8: mov     eax, [eax]
0x52D4EA: push    eax; a2
0x52D4EB: mov     ecx, ebp; this
0x52D4ED: mov     byte ptr [esp+1B4h+var_4], 6
0x52D4F5: call    NiSmartPointer_Set??
0x52D4FA: mov     eax, [esp+1B0h+var_174]
0x52D4FE: cmp     eax, ebx
0x52D500: mov     byte ptr [esp+1B0h+var_4], 5
0x52D508: jz      short loc_52D528
0x52D50A: mov     edi, eax
0x52D50C: add     eax, 4
0x52D50F: push    eax; lpAddend
0x52D510: call    dword ptr ds:0A2807Ch
0x52D516: test    eax, eax
0x52D518: jnz     short loc_52D528
0x52D51A: cmp     edi, ebx
0x52D51C: jz      short loc_52D528
0x52D51E: mov     edx, [edi]
0x52D520: mov     eax, [edx]
0x52D522: push    1
0x52D524: mov     ecx, edi
0x52D526: call    eax
0x52D528: cmp     [ebp+0], ebx
0x52D52B: jnz     short loc_52D5A3
0x52D52D: mov     ecx, [esp+1B0h+var_19C]
0x52D531: push    ecx
0x52D532: call    FormHeapFree
0x52D537: push    esi
0x52D538: mov     [esp+1B8h+var_19C], ebx
0x52D53C: mov     word ptr [esp+1B8h+var_198+2], bx
0x52D541: mov     word ptr [esp+1B8h+var_198], bx
0x52D546: call    FormHeapFree
0x52D54B: add     esp, 8
0x52D54E: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x52D553: push    4; int
0x52D555: push    18h; unsigned int
0x52D557: lea     edx, [esp+1BCh+a1]
0x52D55B: push    edx; void *
0x52D55C: mov     byte ptr [esp+1C0h+var_4], 2
0x52D564: call    $LN21
0x52D569: lea     ecx, [esp+1B0h+var_18C]; this
0x52D56D: mov     byte ptr [esp+1B0h+var_4], 1
0x52D575: call    sub_7016A0
0x52D57A: lea     ecx, [esp+1B0h+var_194]; this
0x52D57E: mov     byte ptr [esp+1B0h+var_4], bl
0x52D585: call    sub_7016A0
0x52D58A: lea     ecx, [esp+1B0h+var_190]; this
0x52D58E: mov     [esp+1B0h+var_4], 0FFFFFFFFh
0x52D599: call    sub_7016A0
0x52D59E: jmp     loc_52D7CE
0x52D5A3: cmp     ds:0B10D3Ch, bl
0x52D5A9: jz      loc_52D71C
0x52D5AF: mov     ebp, [esp+1B0h+arg_C]
0x52D5B6: mov     edx, [esp+1B0h+var_17C]
0x52D5BA: mov     cl, ds:0B3630Ch
0x52D5C0: mov     eax, ebp
0x52D5C2: sub     eax, 2
0x52D5C5: mov     eax, [edx+0Ch]
0x52D5C8: push    eax
0x52D5C9: jz      short loc_52D5DC
0x52D5CB: neg     cl
0x52D5CD: push    offset a08xmodbody; "%08XModBody"
0x52D5D2: sbb     ecx, ecx
0x52D5D4: and     ecx, offset unk_B364D0
0x52D5DA: jmp     short loc_52D603
0x52D5DC: cmp     [esp+1B4h+var_188], 1
0x52D5E1: jnz     short loc_52D5F4
0x52D5E3: neg     cl
0x52D5E5: push    offset a08xmodupperbod; "%08XModUpperBodyFemale"
0x52D5EA: sbb     ecx, ecx
0x52D5EC: and     ecx, offset unk_B364B8
0x52D5F2: jmp     short loc_52D603
0x52D5F4: neg     cl
0x52D5F6: push    offset a08xmodupperb_0; "%08XModUpperBodyMale"
0x52D5FB: sbb     ecx, ecx
0x52D5FD: and     ecx, offset unk_B364A0
0x52D603: lea     eax, [esp+1B8h+var_110]
0x52D60A: push    eax
0x52D60B: mov     esi, ecx
0x52D60D: call    __sprintf
0x52D612: add     esp, 0Ch
0x52D615: cmp     esi, ebx
0x52D617: jnz     short loc_52D64E
0x52D619: lea     ecx, [esp+1B0h+var_19C]; void *
0x52D61D: mov     byte ptr [esp+1B0h+var_4], 4
0x52D625: call    BSStringT_Clear
0x52D62A: lea     ecx, [esp+1B0h+ArgList]; void *
0x52D62E: mov     byte ptr [esp+1B0h+var_4], 3
0x52D636: call    BSStringT_Clear
0x52D63B: push    offset sub_43ACE0
0x52D640: push    4
0x52D642: push    18h
0x52D644: lea     ecx, [esp+1BCh+a1]
0x52D648: push    ecx
0x52D649: jmp     loc_52D55C
0x52D64E: mov     ecx, ds:0B35300h
0x52D654: mov     edx, [ecx]
0x52D656: mov     edx, [edx+4]
0x52D659: push    ebx
0x52D65A: lea     eax, [esp+1B4h+var_110]
0x52D661: push    eax
0x52D662: call    edx
0x52D664: mov     edi, [esp+1B0h+var_178]
0x52D668: push    eax; a2
0x52D669: mov     ecx, edi; this
0x52D66B: call    NiSmartPointer_Set??
0x52D670: cmp     [edi], ebx
0x52D672: jnz     loc_52D71C
0x52D678: mov     edx, [esi]
0x52D67A: mov     eax, [edx+14h]
0x52D67D: mov     ecx, esi
0x52D67F: call    eax
0x52D681: push    eax; ArgList
0x52D682: lea     ecx, [esp+1B4h+ArgList]
0x52D686: push    offset aMeshesS; "Meshes\\%s"
0x52D68B: push    ecx; int
0x52D68C: call    BSStringT_Static_Format
0x52D691: mov     edx, dword ptr [esp+1BCh+ArgList]
0x52D695: add     esp, 0Ch
0x52D698: push    ebx
0x52D699: push    1
0x52D69B: push    edx
0x52D69C: lea     eax, [esp+1BCh+var_19C]
0x52D6A0: push    eax
0x52D6A1: call    sub_5500C0
0x52D6A6: add     esp, 8
0x52D6A9: push    eax
0x52D6AA: push    ebx
0x52D6AB: push    ebx
0x52D6AC: push    ebx
0x52D6AD: call    sub_553620
0x52D6B2: mov     edi, eax
0x52D6B4: add     esp, 18h
0x52D6B7: cmp     edi, ebx
0x52D6B9: jz      loc_52D619
0x52D6BF: mov     ecx, [esp+1B0h+var_17C]
0x52D6C3: lea     edx, [esp+1B0h+a1]
0x52D6C7: push    edx
0x52D6C8: call    sub_5221C0
0x52D6CD: xor     esi, esi
0x52D6CF: call    GetOpenedMenuCode
0x52D6D4: cmp     eax, 40Ch
0x52D6D9: jnz     short loc_52D6EA
0x52D6DB: sub     ebp, 2
0x52D6DE: neg     ebp
0x52D6E0: sbb     ebp, ebp
0x52D6E2: and     ebp, 0FFFFFFFBh
0x52D6E5: add     ebp, 0Ah
0x52D6E8: mov     esi, ebp
0x52D6EA: push    esi
0x52D6EB: mov     esi, [esp+1B4h+var_178]
0x52D6EF: push    esi
0x52D6F0: lea     eax, [esp+1B8h+a1]
0x52D6F4: push    eax
0x52D6F5: mov     ecx, edi
0x52D6F7: call    sub_557E60
0x52D6FC: mov     eax, [esi]
0x52D6FE: cmp     eax, ebx
0x52D700: jz      loc_52D619
0x52D706: mov     ecx, ds:0B35300h
0x52D70C: mov     edx, [ecx]
0x52D70E: mov     edx, [edx+8]
0x52D711: push    eax
0x52D712: lea     eax, [esp+1B4h+var_110]
0x52D719: push    eax
0x52D71A: call    edx
0x52D71C: lea     ecx, [esp+1B0h+var_19C]; void *
0x52D720: mov     byte ptr [esp+1B0h+var_4], 4
0x52D728: call    BSStringT_Clear
0x52D72D: lea     ecx, [esp+1B0h+ArgList]; void *
0x52D731: mov     byte ptr [esp+1B0h+var_4], 3
0x52D739: call    BSStringT_Clear
0x52D73E: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x52D743: push    4; int
0x52D745: push    18h; unsigned int
0x52D747: lea     eax, [esp+1BCh+a1]
0x52D74B: push    eax; void *
0x52D74C: mov     byte ptr [esp+1C0h+var_4], 2
0x52D754: call    $LN21
0x52D759: lea     ecx, [esp+1B0h+var_18C]; this
0x52D75D: mov     byte ptr [esp+1B0h+var_4], 1
0x52D765: call    sub_7016A0
0x52D76A: lea     ecx, [esp+1B0h+var_194]; this
0x52D76E: mov     byte ptr [esp+1B0h+var_4], bl
0x52D775: call    sub_7016A0
0x52D77A: lea     ecx, [esp+1B0h+var_190]; this
0x52D77E: mov     [esp+1B0h+var_4], 0FFFFFFFFh
0x52D789: call    sub_7016A0
0x52D78E: mov     al, 1
0x52D790: jmp     short loc_52D7D0
0x52D792: mov     ecx, [esp+1B0h+var_19C]
0x52D796: push    ecx
0x52D797: call    FormHeapFree
0x52D79C: push    ebx
0x52D79D: mov     [esp+1B8h+var_19C], ebx
0x52D7A1: mov     word ptr [esp+1B8h+var_198+2], bx
0x52D7A6: mov     word ptr [esp+1B8h+var_198], bx
0x52D7AB: call    FormHeapFree
0x52D7B0: add     esp, 8
0x52D7B3: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x52D7B8: push    4; int
0x52D7BA: push    18h; unsigned int
0x52D7BC: lea     edx, [esp+1BCh+a1]
0x52D7C0: push    edx; void *
0x52D7C1: mov     byte ptr [esp+1C0h+var_4], 2
0x52D7C9: call    $LN21
0x52D7CE: xor     al, al
0x52D7D0: mov     ecx, dword ptr [esp+1B0h+var_C]
0x52D7D7: mov     large fs:0, ecx
0x52D7DE: pop     ecx
0x52D7DF: pop     edi
0x52D7E0: pop     esi
0x52D7E1: pop     ebp
0x52D7E2: pop     ebx
0x52D7E3: mov     ecx, [esp+19Ch+var_10]
0x52D7EA: xor     ecx, esp
0x52D7EC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x52D7F1: add     esp, 19Ch
0x52D7F7: retn    10h
