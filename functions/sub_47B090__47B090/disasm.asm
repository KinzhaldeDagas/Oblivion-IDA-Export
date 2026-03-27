0x47B090: push    0FFFFFFFFh
0x47B092: push    offset SEH_47B090
0x47B097: mov     eax, large fs:0
0x47B09D: push    eax
0x47B09E: sub     esp, 94h
0x47B0A4: push    ebx
0x47B0A5: push    ebp
0x47B0A6: push    esi
0x47B0A7: push    edi
0x47B0A8: mov     eax, ds:0B30AACh
0x47B0AD: xor     eax, esp
0x47B0AF: push    eax
0x47B0B0: lea     eax, [esp+0B4h+var_C]
0x47B0B7: mov     large fs:0, eax
0x47B0BD: mov     esi, ecx
0x47B0BF: mov     [esp+0B4h+var_A0], esi
0x47B0C3: mov     ebx, [esp+0B4h+arg_0]
0x47B0CA: lea     ebp, [ebx+0ACh]
0x47B0D0: mov     ecx, ebp
0x47B0D2: mov     [esp+0B4h+var_9C], 0
0x47B0DA: mov     [esp+0B4h+var_98], ebp
0x47B0DE: call    sub_4784A0
0x47B0E3: mov     ecx, ebp
0x47B0E5: call    sub_477F90
0x47B0EA: cmp     [esp+0B4h+arg_8], 1
0x47B0F2: jnz     short loc_47B10A
0x47B0F4: mov     eax, [esp+0B4h+arg_10]
0x47B0FB: test    eax, eax
0x47B0FD: jnz     short loc_47B106
0x47B0FF: mov     ecx, esi
0x47B101: call    sub_478A40
0x47B106: mov     [esp+0B4h+var_9C], eax
0x47B10A: mov     eax, ds:0B3F9A8h
0x47B10F: mov     [ebx+54h], eax
0x47B112: mov     ecx, ds:0B3F9ACh
0x47B118: mov     eax, [esp+0B4h+arg_4]
0x47B11F: test    eax, eax
0x47B121: mov     [ebx+58h], ecx
0x47B124: mov     edx, ds:0B3F9B0h
0x47B12A: mov     [ebx+5Ch], edx
0x47B12D: jz      short loc_47B14A
0x47B12F: mov     ecx, ds:0B3F9A8h
0x47B135: mov     [eax+54h], ecx
0x47B138: mov     edx, ds:0B3F9ACh
0x47B13E: mov     [eax+58h], edx
0x47B141: mov     ecx, ds:0B3F9B0h
0x47B147: mov     [eax+5Ch], ecx
0x47B14A: xor     eax, eax
0x47B14C: cmp     [ebx+0B6h], ax
0x47B153: mov     [esp+0B4h+var_94], eax
0x47B157: jbe     loc_47B562
0x47B15D: movzx   edx, word ptr [ebx+0B6h]
0x47B164: cmp     edx, eax
0x47B166: ja      loc_47B1F1
0x47B16C: xor     esi, esi
0x47B16E: cmp     [esp+0B4h+arg_C], 0
0x47B176: jz      loc_47B25C
0x47B17C: mov     edx, ds:0B06590h
0x47B182: mov     eax, edx
0x47B184: lea     edi, [eax+1]
0x47B187: mov     cl, [eax]
0x47B189: add     eax, 1
0x47B18C: test    cl, cl
0x47B18E: jnz     short loc_47B187
0x47B190: mov     ecx, [esi+8]
0x47B193: sub     eax, edi
0x47B195: push    eax; MaxCount
0x47B196: push    edx; Str2
0x47B197: push    ecx; Str1
0x47B198: call    __strnicmp
0x47B19D: add     esp, 0Ch
0x47B1A0: test    eax, eax
0x47B1A2: jnz     loc_47B25C
0x47B1A8: mov     eax, [ebx]
0x47B1AA: mov     edx, [eax+88h]
0x47B1B0: push    esi
0x47B1B1: lea     ecx, [esp+0B8h+var_84]
0x47B1B5: push    ecx
0x47B1B6: mov     ecx, ebx
0x47B1B8: call    edx
0x47B1BA: mov     eax, dword ptr [esp+0B4h+var_84]
0x47B1BE: test    eax, eax
0x47B1C0: jz      loc_47B548
0x47B1C6: mov     esi, eax
0x47B1C8: add     eax, 4
0x47B1CB: push    eax; lpAddend
0x47B1CC: call    dword ptr ds:0A2807Ch
0x47B1D2: test    eax, eax
0x47B1D4: jnz     loc_47B548
0x47B1DA: test    esi, esi
0x47B1DC: jz      loc_47B548
0x47B1E2: mov     eax, [esi]
0x47B1E4: mov     edx, [eax]
0x47B1E6: push    1
0x47B1E8: mov     ecx, esi
0x47B1EA: call    edx
0x47B1EC: jmp     loc_47B548
0x47B1F1: mov     ecx, [ebx+0B0h]
0x47B1F7: mov     esi, [ecx+eax*4]
0x47B1FA: test    esi, esi
0x47B1FC: jz      loc_47B16E
0x47B202: mov     edx, [esi]
0x47B204: mov     eax, [edx+0Ch]
0x47B207: mov     ecx, esi
0x47B209: call    eax
0x47B20B: test    eax, eax
0x47B20D: jnz     loc_47B16E
0x47B213: mov     edx, [ebx]
0x47B215: mov     edx, [edx+88h]
0x47B21B: push    esi
0x47B21C: lea     eax, [esp+0B8h+var_70]
0x47B220: push    eax
0x47B221: mov     ecx, ebx
0x47B223: call    edx
0x47B225: mov     eax, dword ptr [esp+0B4h+var_70]
0x47B229: test    eax, eax
0x47B22B: jz      loc_47B548
0x47B231: mov     esi, eax
0x47B233: add     eax, 4
0x47B236: push    eax; lpAddend
0x47B237: call    dword ptr ds:0A2807Ch
0x47B23D: test    eax, eax
0x47B23F: jnz     loc_47B548
0x47B245: test    esi, esi
0x47B247: jz      loc_47B548
0x47B24D: mov     eax, [esi]
0x47B24F: mov     edx, [eax]
0x47B251: push    1
0x47B253: mov     ecx, esi
0x47B255: call    edx
0x47B257: jmp     loc_47B548
0x47B25C: cmp     dword ptr [esi+0B4h], 0
0x47B263: mov     eax, [esi+0B8h]
0x47B269: mov     ebp, eax
0x47B26B: mov     [esp+0B4h+var_90], ebp
0x47B26F: jz      loc_47B409
0x47B275: test    eax, eax
0x47B277: jz      loc_47B409
0x47B27D: cmp     [esp+0B4h+var_9C], 0
0x47B282: jz      loc_47B409
0x47B288: mov     edi, [esp+0B4h+var_A0]
0x47B28C: cmp     dword ptr [edi+150h], 0
0x47B293: jz      loc_47B40D
0x47B299: mov     ecx, [edi+150h]
0x47B29F: mov     eax, [ecx]
0x47B2A1: mov     edx, [eax+170h]
0x47B2A7: call    edx
0x47B2A9: test    eax, eax
0x47B2AB: jz      loc_47B40D
0x47B2B1: mov     ecx, [edi+150h]
0x47B2B7: mov     eax, [ecx]
0x47B2B9: mov     edx, [eax+170h]
0x47B2BF: call    edx
0x47B2C1: cmp     byte ptr [eax+4], 23h ; '#'
0x47B2C5: jnz     loc_47B40D
0x47B2CB: mov     ecx, [edi+150h]
0x47B2D1: mov     eax, [ecx]
0x47B2D3: mov     edx, [eax+170h]
0x47B2D9: call    edx
0x47B2DB: push    offset sub_43ACE0; a5
0x47B2E0: push    offset sub_43EB30; a4
0x47B2E5: push    4; size
0x47B2E7: mov     edi, eax
0x47B2E9: push    18h; a2
0x47B2EB: lea     eax, [esp+0C4h+a1]
0x47B2EF: push    eax; a1
0x47B2F0: call    ArrayConstructor
0x47B2F5: mov     ecx, [esi+0B4h]
0x47B2FB: lea     edx, [esp+0B4h+var_78]
0x47B2FF: push    edx
0x47B300: mov     [esp+0B8h+var_4], 0
0x47B30B: call    sub_700790
0x47B310: mov     eax, [eax]
0x47B312: push    eax
0x47B313: lea     ecx, [esp+0B8h+var_8C]
0x47B317: call    sub_405070
0x47B31C: lea     ecx, [esp+0B4h+var_78]; this
0x47B320: mov     byte ptr [esp+0B4h+var_4], 1
0x47B328: call    sub_7016A0
0x47B32D: mov     ecx, [esp+0B4h+var_8C]
0x47B331: mov     eax, [esi]
0x47B333: mov     edx, [eax+8Ch]
0x47B339: push    ecx
0x47B33A: mov     ecx, esi
0x47B33C: call    edx
0x47B33E: mov     eax, [esi+0B8h]
0x47B344: test    eax, eax
0x47B346: jz      short loc_47B3AE
0x47B348: cmp     dword ptr [eax+0Ch], 0
0x47B34C: jz      short loc_47B3AE
0x47B34E: mov     eax, [eax+0Ch]
0x47B351: lea     ecx, [esp+0B4h+var_80]
0x47B355: push    ecx
0x47B356: mov     ecx, eax
0x47B358: call    sub_700790
0x47B35D: mov     eax, [eax]
0x47B35F: push    eax
0x47B360: lea     ecx, [esp+0B8h+a2]
0x47B364: call    sub_405070
0x47B369: lea     ecx, [esp+0B4h+var_80]; this
0x47B36D: mov     byte ptr [esp+0B4h+var_4], 2
0x47B375: call    sub_7016A0
0x47B37A: mov     ecx, [esi+0B8h]
0x47B380: call    sub_700900
0x47B385: push    eax
0x47B386: mov     ecx, esi
0x47B388: call    sub_478350
0x47B38D: mov     edx, [esp+0B4h+a2]
0x47B391: mov     ecx, [esi+0B8h]; this
0x47B397: push    edx; a2
0x47B398: call    sub_478300
0x47B39D: lea     ecx, [esp+0B4h+a2]; this
0x47B3A1: mov     byte ptr [esp+0B4h+var_4], 1
0x47B3A9: call    sub_7016A0
0x47B3AE: lea     eax, [esp+0B4h+a1]
0x47B3B2: push    eax
0x47B3B3: mov     ecx, edi
0x47B3B5: call    sub_5221C0
0x47B3BA: cmp     byte ptr ds:0B120B4h, 0
0x47B3C1: jz      short loc_47B3DA
0x47B3C3: fld1
0x47B3C5: push    0; int
0x47B3C7: push    ecx
0x47B3C8: fstp    [esp+0BCh+var_BC]; float
0x47B3CB: push    esi; int
0x47B3CC: lea     ecx, [esp+0C0h+a1]
0x47B3D0: push    ecx; int
0x47B3D1: mov     ecx, [esp+0C4h+var_9C]
0x47B3D5: call    sub_558840
0x47B3DA: lea     ecx, [esp+0B4h+var_8C]; this
0x47B3DE: mov     byte ptr [esp+0B4h+var_4], 0
0x47B3E6: call    sub_7016A0
0x47B3EB: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x47B3F0: push    4; int
0x47B3F2: push    18h; unsigned int
0x47B3F4: lea     edx, [esp+0C0h+a1]
0x47B3F8: push    edx; void *
0x47B3F9: mov     [esp+0C4h+var_4], 0FFFFFFFFh
0x47B404: call    $LN21
0x47B409: mov     edi, [esp+0B4h+var_A0]
0x47B40D: push    esi
0x47B40E: mov     ecx, edi
0x47B410: call    sub_47AC20
0x47B415: test    ebp, ebp
0x47B417: jz      loc_47B544
0x47B41D: mov     eax, [ebp+8]
0x47B420: mov     eax, [eax+40h]
0x47B423: mov     ebx, [ebp+14h]
0x47B426: xor     edi, edi
0x47B428: test    eax, eax
0x47B42A: mov     [esp+0B4h+var_74], eax
0x47B42E: mov     [esp+0B4h+var_7C], ebx
0x47B432: jbe     loc_47B51C
0x47B438: jmp     short loc_47B440
0x47B43A: align 10h
0x47B440: mov     ecx, [ebx+edi*4]
0x47B443: mov     eax, [ecx+8]
0x47B446: mov     edx, [esp+0B4h+var_A0]
0x47B44A: push    eax; a2
0x47B44B: mov     eax, [edx]
0x47B44D: push    eax; a1
0x47B44E: call    NiObjectNET_LookupObjectByName
0x47B453: add     esp, 8
0x47B456: test    eax, eax
0x47B458: jz      short loc_47B465
0x47B45A: mov     ecx, [ebp+14h]
0x47B45D: mov     [ecx+edi*4], eax
0x47B460: jmp     loc_47B50F
0x47B465: mov     edx, [ebx+edi*4]
0x47B468: mov     ebp, [edx+8]
0x47B46B: mov     eax, ebp
0x47B46D: lea     edx, [eax+1]
0x47B470: mov     cl, [eax]
0x47B472: add     eax, 1
0x47B475: test    cl, cl
0x47B477: jnz     short loc_47B470
0x47B479: mov     ecx, [esi+8]
0x47B47C: sub     eax, edx
0x47B47E: push    eax; MaxCount
0x47B47F: push    ebp; Str2
0x47B480: push    ecx; Str1
0x47B481: call    __strnicmp
0x47B486: add     esp, 0Ch
0x47B489: test    eax, eax
0x47B48B: jnz     short loc_47B4C0
0x47B48D: mov     eax, [esp+0B4h+arg_0]
0x47B494: mov     ecx, [eax+1Ch]
0x47B497: test    ecx, ecx
0x47B499: jz      short loc_47B4A0
0x47B49B: mov     ecx, [ecx+8]
0x47B49E: jmp     short loc_47B4A5
0x47B4A0: mov     ecx, offset aNull; "NULL"
0x47B4A5: mov     eax, [eax+8]
0x47B4A8: push    eax
0x47B4A9: push    ecx
0x47B4AA: mov     ecx, [ebx+edi*4]
0x47B4AD: mov     edx, [ecx+8]
0x47B4B0: push    edx; ArgList
0x47B4B1: push    offset aBoneSNotFoundF; "Bone '%s' not found for part '%s->%s'."...
0x47B4B6: call    PrintError
0x47B4BB: add     esp, 10h
0x47B4BE: jmp     short loc_47B50B
0x47B4C0: mov     eax, [esp+0B4h+var_A0]
0x47B4C4: mov     ecx, [eax]
0x47B4C6: mov     eax, [ecx+1Ch]
0x47B4C9: test    eax, eax
0x47B4CB: jz      short loc_47B4D2
0x47B4CD: mov     eax, [eax+8]
0x47B4D0: jmp     short loc_47B4D7
0x47B4D2: mov     eax, offset aNull; "NULL"
0x47B4D7: mov     edx, [esp+0B4h+arg_0]
0x47B4DE: mov     ecx, [ebx+edi*4]
0x47B4E1: mov     ebp, [edx+8]
0x47B4E4: mov     edx, [esp+0B4h+var_A0]
0x47B4E8: mov     ebx, [ecx+8]
0x47B4EB: mov     ecx, [edx+150h]; this
0x47B4F1: push    eax
0x47B4F2: call    TESObjectREFR_GetName
0x47B4F7: push    eax
0x47B4F8: push    ebp
0x47B4F9: push    ebx; ArgList
0x47B4FA: push    offset aBoneSNotFoun_0; "Bone '%s' not found for part '%s'.\r\nR"...
0x47B4FF: call    PrintError
0x47B504: mov     ebx, [esp+0C8h+var_7C]
0x47B508: add     esp, 14h
0x47B50B: mov     ebp, [esp+0B4h+var_90]
0x47B50F: add     edi, 1
0x47B512: cmp     edi, [esp+0B4h+var_74]
0x47B516: jb      loc_47B440
0x47B51C: cmp     [esp+0B4h+arg_4], 0
0x47B524: jz      short loc_47B53D
0x47B526: mov     ecx, [esp+0B4h+arg_4]
0x47B52D: mov     [ebp+10h], ecx
0x47B530: mov     eax, [ecx]
0x47B532: mov     edx, [eax+84h]
0x47B538: push    1
0x47B53A: push    esi
0x47B53B: call    edx
0x47B53D: mov     ebx, [esp+0B4h+arg_0]
0x47B544: mov     ebp, [esp+0B4h+var_98]
0x47B548: mov     eax, [esp+0B4h+var_94]
0x47B54C: movzx   ecx, word ptr [ebx+0B6h]
0x47B553: add     eax, 1
0x47B556: cmp     eax, ecx
0x47B558: mov     [esp+0B4h+var_94], eax
0x47B55C: jb      loc_47B15D
0x47B562: mov     ecx, ebp
0x47B564: call    sub_4784A0
0x47B569: cmp     word ptr [ebp+0Ah], 0
0x47B56E: jbe     short loc_47B592
0x47B570: mov     edx, [ebp+4]
0x47B573: movzx   eax, word ptr [ebp+0Ah]
0x47B577: movzx   ecx, ax
0x47B57A: cmp     dword ptr [edx+ecx*4-4], 0
0x47B57F: setnz   cl
0x47B582: test    cl, cl
0x47B584: jnz     short loc_47B592
0x47B586: add     eax, 0FFFFFFFFh
0x47B589: test    ax, ax
0x47B58C: mov     [ebp+0Ah], ax
0x47B590: ja      short loc_47B573
0x47B592: mov     ecx, dword ptr [esp+0B4h+var_C]
0x47B599: mov     large fs:0, ecx
0x47B5A0: pop     ecx
0x47B5A1: pop     edi
0x47B5A2: pop     esi
0x47B5A3: pop     ebp
0x47B5A4: pop     ebx
0x47B5A5: add     esp, 0A0h
0x47B5AB: retn    14h
