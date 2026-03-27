0x986774: push    ebp
0x986775: mov     ebp, esp
0x986777: sub     esp, 10h
0x98677A: push    ebx
0x98677B: xor     ebx, ebx
0x98677D: cmp     [ebp+MaxCount], ebx
0x986780: jnz     short loc_986789
0x986782: xor     eax, eax
0x986784: jmp     loc_9868C6
0x986789: push    edi
0x98678A: push    [ebp+arg_C]; struct localeinfo_struct *
0x98678D: lea     ecx, [ebp+var_10]; this
0x986790: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x986795: mov     edi, [ebp+var_C]
0x986798: cmp     [edi+8], ebx
0x98679B: jnz     short loc_9867C3
0x98679D: push    [ebp+MaxCount]; MaxCount
0x9867A0: push    [ebp+Str2]; Str2
0x9867A3: push    [ebp+Str1]; Str1
0x9867A6: call    _strncmp
0x9867AB: add     esp, 0Ch
0x9867AE: cmp     [ebp+var_4], bl
0x9867B1: jz      loc_9868C5
0x9867B7: mov     ecx, [ebp+var_8]
0x9867BA: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x9867BE: jmp     loc_9868C5
0x9867C3: cmp     [ebp+Str1], ebx
0x9867C6: jnz     short loc_9867F6
0x9867C8: call    __errno
0x9867CD: push    ebx
0x9867CE: push    ebx
0x9867CF: push    ebx
0x9867D0: push    ebx
0x9867D1: push    ebx
0x9867D2: mov     dword ptr [eax], 16h
0x9867D8: call    __invalid_parameter
0x9867DD: add     esp, 14h
0x9867E0: cmp     [ebp+var_4], bl
0x9867E3: jz      short loc_9867EC
0x9867E5: mov     eax, [ebp+var_8]
0x9867E8: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9867EC: mov     eax, 7FFFFFFFh
0x9867F1: jmp     loc_9868C5
0x9867F6: push    esi
0x9867F7: mov     esi, [ebp+Str2]
0x9867FA: cmp     esi, ebx
0x9867FC: jnz     short loc_98682C
0x9867FE: call    __errno
0x986803: push    ebx
0x986804: push    ebx
0x986805: push    ebx
0x986806: push    ebx
0x986807: push    ebx
0x986808: mov     dword ptr [eax], 16h
0x98680E: call    __invalid_parameter
0x986813: add     esp, 14h
0x986816: cmp     [ebp+var_4], bl
0x986819: jz      short loc_986822
0x98681B: mov     eax, [ebp+var_8]
0x98681E: and     dword ptr [eax+70h], 0FFFFFFFDh
0x986822: mov     eax, 7FFFFFFFh
0x986827: jmp     loc_9868C4
0x98682C: mov     eax, [ebp+Str1]
0x98682F: movzx   cx, byte ptr [eax]
0x986833: dec     [ebp+MaxCount]
0x986836: movzx   ecx, cx
0x986839: movzx   edx, cl
0x98683C: inc     eax
0x98683D: test    byte ptr [edx+edi+1Dh], 4
0x986842: mov     [ebp+Str1], eax
0x986845: jz      short loc_986873
0x986847: cmp     [ebp+MaxCount], ebx
0x98684A: jnz     short loc_98685D
0x98684C: movzx   eax, byte ptr [esi]
0x98684F: xor     ecx, ecx
0x986851: test    byte ptr [eax+edi+1Dh], 4
0x986856: jnz     short loc_9868B6
0x986858: movzx   eax, ax
0x98685B: jmp     short unknown_libname_56___unknown_libname_57
0x98685D: mov     al, [eax]
0x98685F: cmp     al, bl
0x986861: jnz     short loc_986867
0x986863: xor     ecx, ecx
0x986865: jmp     short loc_986873
0x986867: xor     edx, edx
0x986869: inc     [ebp+Str1]
0x98686C: mov     dh, cl
0x98686E: mov     dl, al
0x986870: movzx   ecx, dx
0x986873: movzx   ax, byte ptr [esi]
0x986877: movzx   eax, ax
0x98687A: movzx   edx, al
0x98687D: inc     esi
0x98687E: test    byte ptr [edx+edi+1Dh], 4
0x986883: jz      short unknown_libname_56___unknown_libname_57
0x986885: cmp     [ebp+MaxCount], ebx
0x986888: jnz     short loc_98688E
0x98688A: xor     eax, eax
0x98688C: jmp     short unknown_libname_56___unknown_libname_57
0x98688E: mov     dl, [esi]
0x986890: dec     [ebp+MaxCount]
0x986893: cmp     dl, bl
0x986895: jz      short loc_98688A
0x986897: xor     ebx, ebx
0x986899: mov     bh, al
0x98689B: inc     esi
0x98689C: mov     bl, dl
0x98689E: movzx   eax, bx
0x9868A1: xor     ebx, ebx
