0x6CA440: push    ebx
0x6CA441: push    esi
0x6CA442: mov     esi, [esp+8+a2]
0x6CA446: push    edi
0x6CA447: push    esi; a2
0x6CA448: mov     edi, ecx
0x6CA44A: call    sub_7009A0
0x6CA44F: mov     eax, ds:0B3CB24h
0x6CA454: push    eax; ArgList
0x6CA455: call    TESOutput_PrintString
0x6CA45A: movzx   ebx, word ptr [esi+0Ah]
0x6CA45E: movzx   ecx, word ptr [esi+8]
0x6CA462: add     esp, 4
0x6CA465: cmp     ebx, ecx
0x6CA467: mov     [esp+0Ch+a2], eax
0x6CA46B: jb      short loc_6CA47B
0x6CA46D: movzx   edx, word ptr [esi+0Eh]
0x6CA471: add     edx, ebx
0x6CA473: push    edx
0x6CA474: mov     ecx, esi
0x6CA476: call    NiTArray_SetSize
0x6CA47B: lea     eax, [esp+0Ch+a2]
0x6CA47F: push    eax
0x6CA480: push    ebx
0x6CA481: mov     ecx, esi
0x6CA483: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CA488: mov     ecx, [edi+44h]
0x6CA48B: push    ecx
0x6CA48C: push    offset aState; "State"
0x6CA491: call    sub_6C6140
0x6CA496: movzx   ebx, word ptr [esi+0Ah]
0x6CA49A: movzx   edx, word ptr [esi+8]
0x6CA49E: add     esp, 8
0x6CA4A1: cmp     ebx, edx
0x6CA4A3: mov     [esp+0Ch+a2], eax
0x6CA4A7: jb      short loc_6CA4B7
0x6CA4A9: movzx   eax, word ptr [esi+0Eh]
0x6CA4AD: add     eax, ebx
0x6CA4AF: push    eax
0x6CA4B0: mov     ecx, esi
0x6CA4B2: call    NiTArray_SetSize
0x6CA4B7: lea     ecx, [esp+0Ch+a2]
0x6CA4BB: push    ecx
0x6CA4BC: push    ebx
0x6CA4BD: mov     ecx, esi
0x6CA4BF: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CA4C4: mov     edx, [edi+0Ch]
0x6CA4C7: push    edx; int
0x6CA4C8: push    offset aArraysize; "ArraySize"
0x6CA4CD: call    TESOutput_PrintLabeledUnsignedInt
0x6CA4D2: movzx   ebx, word ptr [esi+0Ah]
0x6CA4D6: mov     [esp+14h+a2], eax
0x6CA4DA: movzx   eax, word ptr [esi+8]
0x6CA4DE: add     esp, 8
0x6CA4E1: cmp     ebx, eax
0x6CA4E3: jb      short loc_6CA4F3
0x6CA4E5: movzx   ecx, word ptr [esi+0Eh]
0x6CA4E9: add     ecx, ebx
0x6CA4EB: push    ecx
0x6CA4EC: mov     ecx, esi
0x6CA4EE: call    NiTArray_SetSize
0x6CA4F3: lea     edx, [esp+0Ch+a2]
0x6CA4F7: push    edx
0x6CA4F8: push    ebx
0x6CA4F9: mov     ecx, esi
0x6CA4FB: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CA500: fld     dword ptr [edi+1Ch]
0x6CA503: push    ecx
0x6CA504: fstp    [esp+10h+var_10]; float
0x6CA507: push    offset aWeight; "Weight"
0x6CA50C: call    TESOutput_PrintLabeledFloat
0x6CA511: movzx   ebx, word ptr [esi+0Ah]
0x6CA515: mov     [esp+14h+a2], eax
0x6CA519: movzx   eax, word ptr [esi+8]
0x6CA51D: add     esp, 8
0x6CA520: cmp     ebx, eax
0x6CA522: jb      short loc_6CA532
0x6CA524: movzx   ecx, word ptr [esi+0Eh]
0x6CA528: add     ecx, ebx
0x6CA52A: push    ecx
0x6CA52B: mov     ecx, esi
0x6CA52D: call    NiTArray_SetSize
0x6CA532: lea     edx, [esp+0Ch+a2]
0x6CA536: push    edx
0x6CA537: push    ebx
0x6CA538: mov     ecx, esi
0x6CA53A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CA53F: mov     eax, [edi+24h]
0x6CA542: push    eax; int
0x6CA543: push    offset aCycletype; "CycleType"
0x6CA548: call    sub_715910
0x6CA54D: movzx   ebx, word ptr [esi+0Ah]
0x6CA551: movzx   ecx, word ptr [esi+8]
0x6CA555: add     esp, 8
0x6CA558: cmp     ebx, ecx
0x6CA55A: mov     [esp+0Ch+a2], eax
0x6CA55E: jb      short loc_6CA56E
0x6CA560: movzx   edx, word ptr [esi+0Eh]
0x6CA564: add     edx, ebx
0x6CA566: push    edx
0x6CA567: mov     ecx, esi
0x6CA569: call    NiTArray_SetSize
0x6CA56E: lea     eax, [esp+0Ch+a2]
0x6CA572: push    eax
0x6CA573: push    ebx
0x6CA574: mov     ecx, esi
0x6CA576: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CA57B: fld     dword ptr [edi+28h]
0x6CA57E: push    ecx
0x6CA57F: fstp    [esp+10h+var_10]; float
0x6CA582: push    offset aFreq; "Freq"
0x6CA587: call    TESOutput_PrintLabeledFloat
0x6CA58C: movzx   ebx, word ptr [esi+0Ah]
0x6CA590: movzx   ecx, word ptr [esi+8]
0x6CA594: add     esp, 8
0x6CA597: cmp     ebx, ecx
0x6CA599: mov     [esp+0Ch+a2], eax
0x6CA59D: jb      short loc_6CA5AD
0x6CA59F: movzx   edx, word ptr [esi+0Eh]
0x6CA5A3: add     edx, ebx
0x6CA5A5: push    edx
0x6CA5A6: mov     ecx, esi
0x6CA5A8: call    NiTArray_SetSize
0x6CA5AD: lea     eax, [esp+0Ch+a2]
0x6CA5B1: push    eax
0x6CA5B2: push    ebx
0x6CA5B3: mov     ecx, esi
0x6CA5B5: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CA5BA: fld     dword ptr [edi+2Ch]
0x6CA5BD: push    ecx
0x6CA5BE: fstp    [esp+10h+var_10]; float
0x6CA5C1: push    offset aBegin; "Begin"
0x6CA5C6: call    TESOutput_PrintLabeledFloat
0x6CA5CB: movzx   ebx, word ptr [esi+0Ah]
0x6CA5CF: movzx   ecx, word ptr [esi+8]
0x6CA5D3: add     esp, 8
0x6CA5D6: cmp     ebx, ecx
0x6CA5D8: mov     [esp+0Ch+a2], eax
0x6CA5DC: jb      short loc_6CA5EC
0x6CA5DE: movzx   edx, word ptr [esi+0Eh]
0x6CA5E2: add     edx, ebx
0x6CA5E4: push    edx
0x6CA5E5: mov     ecx, esi
0x6CA5E7: call    NiTArray_SetSize
0x6CA5EC: lea     eax, [esp+0Ch+a2]
0x6CA5F0: push    eax
0x6CA5F1: push    ebx
0x6CA5F2: mov     ecx, esi
0x6CA5F4: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CA5F9: fld     dword ptr [edi+30h]
0x6CA5FC: push    ecx
0x6CA5FD: fstp    [esp+10h+var_10]; float
0x6CA600: push    offset aEnd; ArgList
0x6CA605: call    TESOutput_PrintLabeledFloat
0x6CA60A: movzx   ebx, word ptr [esi+0Ah]
0x6CA60E: movzx   ecx, word ptr [esi+8]
0x6CA612: add     esp, 8
0x6CA615: cmp     ebx, ecx
0x6CA617: mov     [esp+0Ch+a2], eax
0x6CA61B: jb      short loc_6CA62B
0x6CA61D: movzx   edx, word ptr [esi+0Eh]
0x6CA621: add     edx, ebx
0x6CA623: push    edx
0x6CA624: mov     ecx, esi
0x6CA626: call    NiTArray_SetSize
0x6CA62B: lea     eax, [esp+0Ch+a2]
0x6CA62F: push    eax
0x6CA630: push    ebx
0x6CA631: mov     ecx, esi
0x6CA633: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CA638: fld     dword ptr [edi+34h]
0x6CA63B: push    ecx
0x6CA63C: fstp    [esp+10h+var_10]; float
0x6CA63F: push    offset aLast; "Last"
0x6CA644: call    TESOutput_PrintLabeledFloat
0x6CA649: movzx   ebx, word ptr [esi+0Ah]
0x6CA64D: movzx   ecx, word ptr [esi+8]
0x6CA651: add     esp, 8
0x6CA654: cmp     ebx, ecx
0x6CA656: mov     [esp+0Ch+a2], eax
0x6CA65A: jb      short loc_6CA66A
0x6CA65C: movzx   edx, word ptr [esi+0Eh]
0x6CA660: add     edx, ebx
0x6CA662: push    edx
0x6CA663: mov     ecx, esi
0x6CA665: call    NiTArray_SetSize
0x6CA66A: lea     eax, [esp+0Ch+a2]
0x6CA66E: push    eax
0x6CA66F: push    ebx
0x6CA670: mov     ecx, esi
0x6CA672: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CA677: fld     dword ptr [edi+48h]
0x6CA67A: push    ecx
0x6CA67B: fstp    [esp+10h+var_10]; float
0x6CA67E: push    offset aOffset; "Offset"
0x6CA683: call    TESOutput_PrintLabeledFloat
0x6CA688: movzx   ebx, word ptr [esi+0Ah]
0x6CA68C: movzx   ecx, word ptr [esi+8]
0x6CA690: add     esp, 8
0x6CA693: cmp     ebx, ecx
0x6CA695: mov     [esp+0Ch+a2], eax
0x6CA699: jb      short loc_6CA6A9
0x6CA69B: movzx   edx, word ptr [esi+0Eh]
0x6CA69F: add     edx, ebx
0x6CA6A1: push    edx
0x6CA6A2: mov     ecx, esi
0x6CA6A4: call    NiTArray_SetSize
0x6CA6A9: lea     eax, [esp+0Ch+a2]
0x6CA6AD: push    eax
0x6CA6AE: push    ebx
0x6CA6AF: mov     ecx, esi
0x6CA6B1: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CA6B6: fld     dword ptr [edi+4Ch]
0x6CA6B9: push    ecx
0x6CA6BA: fstp    [esp+10h+var_10]; float
0x6CA6BD: push    offset aStart; "Start"
0x6CA6C2: call    TESOutput_PrintLabeledFloat
0x6CA6C7: movzx   ebx, word ptr [esi+0Ah]
0x6CA6CB: movzx   ecx, word ptr [esi+8]
0x6CA6CF: add     esp, 8
0x6CA6D2: cmp     ebx, ecx
0x6CA6D4: mov     [esp+0Ch+a2], eax
0x6CA6D8: jb      short loc_6CA6E8
0x6CA6DA: movzx   edx, word ptr [esi+0Eh]
0x6CA6DE: add     edx, ebx
0x6CA6E0: push    edx
0x6CA6E1: mov     ecx, esi
0x6CA6E3: call    NiTArray_SetSize
0x6CA6E8: lea     eax, [esp+0Ch+a2]
0x6CA6EC: push    eax
0x6CA6ED: push    ebx
0x6CA6EE: mov     ecx, esi
0x6CA6F0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CA6F5: fld     dword ptr [edi+50h]
0x6CA6F8: push    ecx
0x6CA6F9: fstp    [esp+10h+var_10]; float
0x6CA6FC: push    offset aEnd; ArgList
0x6CA701: call    TESOutput_PrintLabeledFloat
0x6CA706: movzx   ebx, word ptr [esi+0Ah]
0x6CA70A: movzx   ecx, word ptr [esi+8]
0x6CA70E: add     esp, 8
0x6CA711: cmp     ebx, ecx
0x6CA713: mov     [esp+0Ch+a2], eax
0x6CA717: jb      short loc_6CA727
0x6CA719: movzx   edx, word ptr [esi+0Eh]
0x6CA71D: add     edx, ebx
0x6CA71F: push    edx
0x6CA720: mov     ecx, esi
0x6CA722: call    NiTArray_SetSize
0x6CA727: lea     eax, [esp+0Ch+a2]
0x6CA72B: push    eax
0x6CA72C: push    ebx
0x6CA72D: mov     ecx, esi
0x6CA72F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CA734: fld     dword ptr [edi+38h]
0x6CA737: push    ecx
0x6CA738: fstp    [esp+10h+var_10]; float
0x6CA73B: push    offset aWeightlast; "WeightLast"
0x6CA740: call    TESOutput_PrintLabeledFloat
0x6CA745: movzx   ebx, word ptr [esi+0Ah]
0x6CA749: movzx   ecx, word ptr [esi+8]
0x6CA74D: add     esp, 8
0x6CA750: cmp     ebx, ecx
0x6CA752: mov     [esp+0Ch+a2], eax
0x6CA756: jb      short loc_6CA766
0x6CA758: movzx   edx, word ptr [esi+0Eh]
0x6CA75C: add     edx, ebx
0x6CA75E: push    edx
0x6CA75F: mov     ecx, esi
0x6CA761: call    NiTArray_SetSize
0x6CA766: lea     eax, [esp+0Ch+a2]
0x6CA76A: push    eax
0x6CA76B: push    ebx
0x6CA76C: mov     ecx, esi
0x6CA76E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CA773: fld     dword ptr [edi+3Ch]
0x6CA776: push    ecx
0x6CA777: fstp    [esp+10h+var_10]; float
0x6CA77A: push    offset aLastscaled; "LastScaled"
0x6CA77F: call    TESOutput_PrintLabeledFloat
0x6CA784: movzx   edi, word ptr [esi+0Ah]
0x6CA788: movzx   ecx, word ptr [esi+8]
0x6CA78C: add     esp, 8
0x6CA78F: cmp     edi, ecx
0x6CA791: mov     [esp+0Ch+a2], eax
0x6CA795: jb      short loc_6CA7A5
0x6CA797: movzx   edx, word ptr [esi+0Eh]
0x6CA79B: add     edx, edi
0x6CA79D: push    edx
0x6CA79E: mov     ecx, esi
0x6CA7A0: call    NiTArray_SetSize
0x6CA7A5: lea     eax, [esp+0Ch+a2]
0x6CA7A9: push    eax
0x6CA7AA: push    edi
0x6CA7AB: mov     ecx, esi
0x6CA7AD: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CA7B2: pop     edi
0x6CA7B3: pop     esi
0x6CA7B4: pop     ebx
0x6CA7B5: retn    4
