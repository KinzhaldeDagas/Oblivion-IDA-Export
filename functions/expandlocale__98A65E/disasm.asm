0x98A65E: push    ebp
0x98A65F: lea     ebp, [esp-60h]
0x98A663: sub     esp, 0B4h
0x98A669: mov     eax, ___security_cookie
0x98A66E: xor     eax, ebp
0x98A670: mov     [ebp+60h+var_4], eax
0x98A673: mov     eax, [ebp+60h+arg_4]
0x98A676: push    ebx
0x98A677: push    esi
0x98A678: mov     esi, [ebp+60h+Str]
0x98A67B: push    edi; MaxCount
0x98A67C: mov     edi, [ebp+60h+arg_C]
0x98A67F: mov     [ebp+60h+Dst], eax
0x98A682: mov     eax, [ebp+60h+arg_10]
0x98A685: mov     [ebp+60h+var_A4], edi
0x98A688: mov     [ebp+60h+var_A0], eax
0x98A68B: call    __getptd
0x98A690: add     eax, 9Ch ; 'œ'
0x98A695: lea     ecx, [eax+28h]
0x98A698: mov     [ebp+60h+Src], ecx
0x98A69B: lea     ecx, [eax+2Ch]
0x98A69E: lea     ebx, [eax+20h]
0x98A6A1: add     eax, 0AFh ; '¯'
0x98A6A6: test    esi, esi
0x98A6A8: mov     [ebp+60h+var_A8], ecx
0x98A6AB: mov     [ebp+60h+Str1], eax
0x98A6AE: jz      loc_98A81E
0x98A6B4: cmp     [ebp+60h+Dst], 0
0x98A6B8: jz      loc_98A81E
0x98A6BE: cmp     [ebp+60h+SizeInBytes], 0
0x98A6C2: jz      loc_98A81E
0x98A6C8: cmp     byte ptr [esi], 43h ; 'C'
0x98A6CB: jnz     short loc_98A719
0x98A6CD: cmp     byte ptr [esi+1], 0
0x98A6D1: jnz     short loc_98A719
0x98A6D3: push    offset aC
0x98A6D8: push    [ebp+60h+SizeInBytes]; SizeInBytes
0x98A6DB: push    [ebp+60h+Dst]; Dst
0x98A6DE: call    _strcpy_s
0x98A6E3: add     esp, 0Ch
0x98A6E6: xor     esi, esi
0x98A6E8: test    eax, eax
0x98A6EA: jz      short loc_98A6F9
0x98A6EC: push    esi
0x98A6ED: push    esi
0x98A6EE: push    esi
0x98A6EF: push    esi
0x98A6F0: push    esi
0x98A6F1: call    __invoke_watson
0x98A6F6: add     esp, 14h
0x98A6F9: cmp     edi, esi
0x98A6FB: jz      short loc_98A708
0x98A6FD: mov     [edi], si
0x98A700: mov     [edi+2], si
0x98A704: mov     [edi+4], si
0x98A708: mov     eax, [ebp+60h+var_A0]
0x98A70B: cmp     eax, esi
0x98A70D: jz      short loc_98A711
0x98A70F: mov     [eax], esi
0x98A711: mov     eax, [ebp+60h+Dst]
0x98A714: jmp     loc_98A820
0x98A719: push    esi; Str
0x98A71A: call    _strlen
0x98A71F: mov     edi, 83h ; 'ƒ'
0x98A724: cmp     eax, edi
0x98A726: pop     ecx
0x98A727: mov     [ebp+60h+var_B0], eax
0x98A72A: jnb     short loc_98A74E
0x98A72C: push    esi; Str2
0x98A72D: push    [ebp+60h+Str1]; Str1
0x98A730: call    _strcmp
0x98A735: test    eax, eax
0x98A737: pop     ecx
0x98A738: pop     ecx
0x98A739: jz      loc_98A7CD
0x98A73F: push    esi; Str2
0x98A740: push    [ebp+60h+var_A8]; Str1
0x98A743: call    _strcmp
0x98A748: test    eax, eax
0x98A74A: pop     ecx
0x98A74B: pop     ecx
0x98A74C: jz      short loc_98A7CD
0x98A74E: and     [ebp+60h+var_B4], 0
0x98A752: lea     eax, [ebp+60h+var_94]
0x98A755: push    esi; Str
0x98A756: push    eax; int
0x98A757: call    ___lc_strtolc
0x98A75C: test    eax, eax
0x98A75E: pop     ecx
0x98A75F: pop     ecx
0x98A760: jnz     loc_98A81E
0x98A766: lea     eax, [ebp+60h+var_94]
0x98A769: push    eax; Dst
0x98A76A: push    ebx; int
0x98A76B: push    eax; int
0x98A76C: call    ___get_qualified_locale
0x98A771: add     esp, 0Ch
0x98A774: test    eax, eax
0x98A776: jz      loc_98A81E
0x98A77C: movzx   eax, word ptr [ebx+4]
0x98A780: mov     ecx, [ebp+60h+Src]
0x98A783: mov     [ecx], eax
0x98A785: lea     eax, [ebp+60h+var_94]
0x98A788: push    eax; Src
0x98A789: push    edi; SizeInBytes
0x98A78A: push    [ebp+60h+Str1]; Dst
0x98A78D: call    ___lc_lctostr
0x98A792: add     esp, 0Ch
0x98A795: cmp     byte ptr [esi], 0
0x98A798: jz      short loc_98A7A1
0x98A79A: mov     eax, [ebp+60h+var_B0]
0x98A79D: cmp     eax, edi
0x98A79F: jb      short loc_98A7A9
0x98A7A1: mov     eax, [ebp+60h+var_B4]
0x98A7A4: mov     esi, offset EmptyString
0x98A7A9: inc     eax
0x98A7AA: push    eax; Src
0x98A7AB: push    esi; Src
0x98A7AC: push    edi; SizeInBytes
0x98A7AD: push    [ebp+60h+var_A8]; Dst
0x98A7B0: call    _strncpy_s
0x98A7B5: add     esp, 10h
0x98A7B8: test    eax, eax
0x98A7BA: jz      short loc_98A7CD
0x98A7BC: xor     esi, esi
0x98A7BE: push    esi
0x98A7BF: push    esi
0x98A7C0: push    esi
0x98A7C1: push    esi
0x98A7C2: push    esi
0x98A7C3: call    __invoke_watson
0x98A7C8: add     esp, 14h
0x98A7CB: jmp     short loc_98A7CF
0x98A7CD: xor     esi, esi
0x98A7CF: cmp     [ebp+60h+var_A4], esi
0x98A7D2: jz      short loc_98A7E2
0x98A7D4: push    6; Size
0x98A7D6: push    ebx; Src
0x98A7D7: push    [ebp+60h+var_A4]; Dst
0x98A7DA: call    _memcpy
0x98A7DF: add     esp, 0Ch
0x98A7E2: cmp     [ebp+60h+var_A0], esi
0x98A7E5: jz      short loc_98A7F7
0x98A7E7: push    4; Size
0x98A7E9: push    [ebp+60h+Src]; Src
0x98A7EC: push    [ebp+60h+var_A0]; Dst
0x98A7EF: call    _memcpy
0x98A7F4: add     esp, 0Ch
0x98A7F7: push    [ebp+60h+Str1]; Src
0x98A7FA: push    [ebp+60h+SizeInBytes]; SizeInBytes
0x98A7FD: push    [ebp+60h+Dst]; Dst
0x98A800: call    _strcpy_s
0x98A805: add     esp, 0Ch
0x98A808: test    eax, eax
0x98A80A: jz      short loc_98A819
0x98A80C: push    esi
0x98A80D: push    esi
0x98A80E: push    esi
0x98A80F: push    esi
0x98A810: push    esi
0x98A811: call    __invoke_watson
0x98A816: add     esp, 14h
0x98A819: mov     eax, [ebp+60h+Str1]
0x98A81C: jmp     short loc_98A820
0x98A81E: xor     eax, eax
0x98A820: mov     ecx, [ebp+60h+var_4]
0x98A823: pop     edi
0x98A824: pop     esi
0x98A825: xor     ecx, ebp
0x98A827: pop     ebx
0x98A828: call    @__security_check_cookie@4
0x98A82D: add     ebp, 60h ; '`'
0x98A830: leave
0x98A831: retn
