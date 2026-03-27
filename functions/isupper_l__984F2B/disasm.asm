0x984F2B: push    ebp
0x984F2C: mov     ebp, esp
0x984F2E: sub     esp, 10h
0x984F31: push    [ebp+Locale]; struct localeinfo_struct *
0x984F34: lea     ecx, [ebp+var_10]; this
0x984F37: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x984F3C: mov     eax, [ebp+var_10.locinfo]
0x984F3F: cmp     dword ptr [eax+0ACh], 1
0x984F46: jle     short loc_984F5B
0x984F48: lea     eax, [ebp+var_10]
0x984F4B: push    eax; Locale
0x984F4C: push    1; Type
0x984F4E: push    [ebp+C]; C
0x984F51: call    __isctype_l
0x984F56: add     esp, 0Ch
0x984F59: jmp     short loc_984F6B
0x984F5B: mov     eax, [eax+0C8h]
0x984F61: mov     ecx, [ebp+C]
0x984F64: movzx   eax, byte ptr [eax+ecx*2]
0x984F68: and     eax, 1
0x984F6B: cmp     [ebp+var_4], 0
0x984F6F: jz      short locret_984F78
0x984F71: mov     ecx, [ebp+var_8]
0x984F74: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x984F78: leave
0x984F79: retn
