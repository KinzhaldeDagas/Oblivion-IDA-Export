0x79E400: push    ebp
0x79E401: mov     ebp, esp
0x79E403: push    0FFFFFFFFh
0x79E405: push    offset SEH_79E400
0x79E40A: mov     eax, large fs:0
0x79E410: push    eax
0x79E411: sub     esp, 44h
0x79E414: mov     eax, ds:0B30AACh
0x79E419: xor     eax, ebp
0x79E41B: mov     [ebp+var_14], eax
0x79E41E: push    ebx
0x79E41F: push    esi
0x79E420: push    edi
0x79E421: push    eax
0x79E422: lea     eax, [ebp+var_C]
0x79E425: mov     large fs:0, eax
0x79E42B: mov     [ebp+var_10], esp
0x79E42E: mov     ebx, [ebp+arg_C]
0x79E431: push    0FFFFFFFFh
0x79E433: xor     edi, edi
0x79E435: mov     esi, ecx
0x79E437: push    edi
0x79E438: push    ebx
0x79E439: lea     ecx, [ebp+var_40]
0x79E43C: mov     [ebp+var_48], esi
0x79E43F: mov     [ebp+var_28], 0Fh
0x79E446: mov     [ebp+var_2C], edi
0x79E449: mov     byte ptr [ebp+var_3C], 0
0x79E44D: call    sub_414420
0x79E452: fld     dword ptr [ebx+1Ch]
0x79E455: fstp    [ebp+var_24]
0x79E458: fld     dword ptr [ebx+20h]
0x79E45B: fstp    [ebp+var_20]
0x79E45E: fld     dword ptr [ebx+24h]
0x79E461: fstp    [ebp+var_1C]
0x79E464: fld     dword ptr [ebx+28h]
0x79E467: fstp    [ebp+var_18]
0x79E46A: mov     ecx, [esi+4]
0x79E46D: cmp     ecx, edi
0x79E46F: mov     [ebp+var_4], edi
0x79E472: jz      short loc_79E48A
0x79E474: mov     edx, [esi+0Ch]
0x79E477: sub     edx, ecx
0x79E479: mov     eax, 2E8BA2E9h
0x79E47E: imul    edx
0x79E480: sar     edx, 3
0x79E483: mov     edi, edx
0x79E485: shr     edi, 1Fh
0x79E488: add     edi, edx
0x79E48A: mov     ebx, [ebp+arg_8]
0x79E48D: test    ebx, ebx
0x79E48F: jz      loc_79E6EE
0x79E495: test    ecx, ecx
0x79E497: jnz     short loc_79E49D
0x79E499: xor     eax, eax
0x79E49B: jmp     short loc_79E4B3
0x79E49D: mov     edx, [esi+8]
0x79E4A0: sub     edx, ecx
0x79E4A2: mov     eax, 2E8BA2E9h
0x79E4A7: imul    edx
0x79E4A9: sar     edx, 3
0x79E4AC: mov     eax, edx
0x79E4AE: shr     eax, 1Fh
0x79E4B1: add     eax, edx
0x79E4B3: mov     edx, 5D1745Dh
0x79E4B8: sub     edx, eax
0x79E4BA: cmp     edx, ebx
0x79E4BC: jnb     short loc_79E4C3
0x79E4BE: call    sub_790B90
0x79E4C3: test    ecx, ecx
0x79E4C5: jnz     short loc_79E4CB
0x79E4C7: xor     eax, eax
0x79E4C9: jmp     short loc_79E4E1
0x79E4CB: mov     edx, [esi+8]
0x79E4CE: sub     edx, ecx
0x79E4D0: mov     eax, 2E8BA2E9h
0x79E4D5: imul    edx
0x79E4D7: sar     edx, 3
0x79E4DA: mov     eax, edx
0x79E4DC: shr     eax, 1Fh
0x79E4DF: add     eax, edx
0x79E4E1: add     eax, ebx
0x79E4E3: cmp     edi, eax
0x79E4E5: jnb     loc_79E60F
0x79E4EB: mov     eax, edi
0x79E4ED: shr     eax, 1
0x79E4EF: mov     edx, 5D1745Dh
0x79E4F4: sub     edx, eax
0x79E4F6: cmp     edx, edi
0x79E4F8: jnb     short loc_79E4FE
0x79E4FA: xor     edi, edi
0x79E4FC: jmp     short loc_79E500
0x79E4FE: add     edi, eax
0x79E500: test    ecx, ecx
0x79E502: jnz     short loc_79E508
0x79E504: xor     eax, eax
0x79E506: jmp     short loc_79E51E
0x79E508: mov     edx, [esi+8]
0x79E50B: sub     edx, ecx
0x79E50D: mov     eax, 2E8BA2E9h
0x79E512: imul    edx
0x79E514: sar     edx, 3
0x79E517: mov     eax, edx
0x79E519: shr     eax, 1Fh
0x79E51C: add     eax, edx
0x79E51E: add     eax, ebx
0x79E520: cmp     edi, eax
0x79E522: jnb     short loc_79E52F
0x79E524: mov     ecx, esi
0x79E526: call    sub_6F1140
0x79E52B: mov     edi, eax
0x79E52D: add     edi, ebx
0x79E52F: push    0
0x79E531: push    edi; char *
0x79E532: call    sub_556440
0x79E537: mov     ecx, [esi+4]
0x79E53A: mov     byte ptr [ebp+var_44], 0
0x79E53E: mov     edx, [ebp+var_44]
0x79E541: push    edx
0x79E542: mov     edx, [ebp+var_44]
0x79E545: push    edx
0x79E546: push    esi
0x79E547: push    eax
0x79E548: mov     [ebp+var_50], eax
0x79E54B: mov     [ebp+var_4C], eax
0x79E54E: mov     eax, [ebp+arg_4]
0x79E551: push    eax
0x79E552: push    ecx
0x79E553: mov     byte ptr [ebp+var_4], 1
0x79E557: call    sub_79B470
0x79E55C: add     esp, 20h
0x79E55F: lea     ecx, [ebp+var_40]
0x79E562: push    ecx
0x79E563: push    ebx
0x79E564: push    eax
0x79E565: mov     ecx, esi
0x79E567: mov     [ebp+var_4C], eax
0x79E56A: call    sub_79E080
0x79E56F: mov     ecx, [esi+8]
0x79E572: mov     byte ptr [ebp+var_44], 0
0x79E576: mov     edx, [ebp+var_44]
0x79E579: push    edx
0x79E57A: mov     edx, [ebp+var_44]
0x79E57D: push    edx
0x79E57E: push    esi
0x79E57F: push    eax
0x79E580: mov     [ebp+var_4C], eax
0x79E583: mov     eax, [ebp+arg_4]
0x79E586: push    ecx
0x79E587: push    eax
0x79E588: call    sub_79B470
0x79E58D: mov     ecx, [esi+4]
0x79E590: add     esp, 18h
0x79E593: test    ecx, ecx
0x79E595: jnz     short loc_79E59B
0x79E597: xor     eax, eax
0x79E599: jmp     short loc_79E5B1
0x79E59B: mov     edx, [esi+8]
0x79E59E: sub     edx, ecx
0x79E5A0: mov     eax, 2E8BA2E9h
0x79E5A5: imul    edx
0x79E5A7: sar     edx, 3
0x79E5AA: mov     eax, edx
0x79E5AC: shr     eax, 1Fh
0x79E5AF: add     eax, edx
0x79E5B1: add     ebx, eax
0x79E5B3: test    ecx, ecx
0x79E5B5: jz      short loc_79E5D2
0x79E5B7: mov     edx, [ebp+var_44]
0x79E5BA: mov     eax, [esi+8]
0x79E5BD: push    edx
0x79E5BE: push    esi
0x79E5BF: push    eax
0x79E5C0: push    ecx
0x79E5C1: call    sub_79B120
0x79E5C6: mov     ecx, [esi+4]
0x79E5C9: push    ecx
0x79E5CA: call    FormHeapFree
0x79E5CF: add     esp, 14h
0x79E5D2: mov     eax, [ebp+var_50]
0x79E5D5: imul    edi, 2Ch ; ','
0x79E5D8: imul    ebx, 2Ch ; ','
0x79E5DB: add     edi, eax
0x79E5DD: add     ebx, eax
0x79E5DF: mov     [esi+0Ch], edi
0x79E5E2: mov     [esi+8], ebx
0x79E5E5: mov     [esi+4], eax
0x79E5E8: jmp     loc_79E6EE
0x79E5ED: mov     edx, [ebp+var_4C]
0x79E5F0: mov     esi, [ebp+var_50]
0x79E5F3: mov     ecx, [ebp+var_48]
0x79E5F6: push    edx
0x79E5F7: push    esi
0x79E5F8: call    sub_79BDD0
0x79E5FD: push    esi
0x79E5FE: call    FormHeapFree
0x79E603: add     esp, 4
0x79E606: push    0
0x79E608: push    0
0x79E60A: call    ThrowException??
0x79E60F: mov     ecx, [esi+8]
0x79E612: mov     edi, [ebp+arg_4]
0x79E615: mov     edx, ecx
0x79E617: sub     edx, edi
0x79E619: mov     eax, 2E8BA2E9h
0x79E61E: imul    edx
0x79E620: sar     edx, 3
0x79E623: mov     eax, edx
0x79E625: shr     eax, 1Fh
0x79E628: add     eax, edx
0x79E62A: cmp     eax, ebx
0x79E62C: mov     [ebp+var_44], ecx
0x79E62F: jnb     loc_79E6B9
0x79E635: mov     eax, ebx
0x79E637: imul    eax, 2Ch ; ','
0x79E63A: mov     [ebp+var_44], eax
0x79E63D: add     eax, edi
0x79E63F: push    eax
0x79E640: push    ecx
0x79E641: push    edi
0x79E642: mov     ecx, esi
0x79E644: call    sub_79E0F0
0x79E649: mov     ecx, [esi+8]
0x79E64C: lea     edx, [ebp+var_40]
0x79E64F: push    edx
0x79E650: mov     edx, ecx
0x79E652: sub     edx, edi
0x79E654: mov     eax, 2E8BA2E9h
0x79E659: imul    edx
0x79E65B: sar     edx, 3
0x79E65E: mov     eax, edx
0x79E660: shr     eax, 1Fh
0x79E663: add     eax, edx
0x79E665: sub     ebx, eax
0x79E667: push    ebx
0x79E668: push    ecx
0x79E669: mov     ecx, esi
0x79E66B: mov     byte ptr [ebp+var_4], 3
0x79E66F: call    sub_79E080
0x79E674: mov     eax, [ebp+var_44]
0x79E677: add     [esi+8], eax
0x79E67A: mov     esi, [esi+8]
0x79E67D: lea     ecx, [ebp+var_40]
0x79E680: push    ecx
0x79E681: sub     esi, eax
0x79E683: push    esi
0x79E684: push    edi
0x79E685: mov     [ebp+var_4], 0
0x79E68C: call    sub_79B6B0
0x79E691: add     esp, 0Ch
0x79E694: jmp     short loc_79E6EE
0x79E696: mov     eax, [ebp+arg_8]
0x79E699: mov     ecx, [ebp+var_48]
0x79E69C: imul    eax, 2Ch ; ','
0x79E69F: mov     edx, [ecx+8]
0x79E6A2: add     edx, eax
0x79E6A4: push    edx
0x79E6A5: mov     edx, [ebp+arg_4]
0x79E6A8: add     eax, edx
0x79E6AA: push    eax
0x79E6AB: call    sub_79BDD0
0x79E6B0: push    0
0x79E6B2: push    0
0x79E6B4: call    ThrowException??
0x79E6B9: imul    ebx, 2Ch ; ','
0x79E6BC: push    ecx
0x79E6BD: mov     eax, ecx
0x79E6BF: sub     eax, ebx
0x79E6C1: push    ecx
0x79E6C2: push    eax
0x79E6C3: mov     ecx, esi
0x79E6C5: mov     [ebp+var_48], eax
0x79E6C8: call    sub_79E0F0
0x79E6CD: mov     ecx, [ebp+var_48]
0x79E6D0: mov     [esi+8], eax
0x79E6D3: mov     eax, [ebp+var_44]
0x79E6D6: push    eax
0x79E6D7: push    ecx
0x79E6D8: push    edi
0x79E6D9: call    sub_79E120
0x79E6DE: lea     edx, [ebp+var_40]
0x79E6E1: push    edx
0x79E6E2: add     ebx, edi
0x79E6E4: push    ebx
0x79E6E5: push    edi
0x79E6E6: call    sub_79B6B0
0x79E6EB: add     esp, 18h
0x79E6EE: cmp     [ebp+var_28], 10h
0x79E6F2: jb      short loc_79E700
0x79E6F4: mov     eax, [ebp+var_3C]
0x79E6F7: push    eax
0x79E6F8: call    FormHeapFree
0x79E6FD: add     esp, 4
0x79E700: mov     ecx, [ebp+var_C]
0x79E703: mov     large fs:0, ecx
0x79E70A: pop     ecx
0x79E70B: pop     edi
0x79E70C: pop     esi
0x79E70D: pop     ebx
0x79E70E: mov     ecx, [ebp+var_14]
0x79E711: xor     ecx, ebp
0x79E713: call    @__security_check_cookie@4; __security_check_cookie(x)
0x79E718: mov     esp, ebp
0x79E71A: pop     ebp
0x79E71B: retn    10h
