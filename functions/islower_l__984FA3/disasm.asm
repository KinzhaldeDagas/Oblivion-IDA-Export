0x984FA3: push    ebp
0x984FA4: mov     ebp, esp
0x984FA6: sub     esp, 10h
0x984FA9: push    [ebp+Locale]; struct localeinfo_struct *
0x984FAC: lea     ecx, [ebp+var_10]; this
0x984FAF: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x984FB4: mov     eax, [ebp+var_10.locinfo]
0x984FB7: cmp     dword ptr [eax+0ACh], 1
0x984FBE: jle     short loc_984FD3
0x984FC0: lea     eax, [ebp+var_10]
0x984FC3: push    eax; Locale
0x984FC4: push    2; Type
0x984FC6: push    [ebp+C]; C
0x984FC9: call    __isctype_l
0x984FCE: add     esp, 0Ch
0x984FD1: jmp     short loc_984FE3
0x984FD3: mov     eax, [eax+0C8h]
0x984FD9: mov     ecx, [ebp+C]
0x984FDC: movzx   eax, byte ptr [eax+ecx*2]
0x984FE0: and     eax, 2
0x984FE3: cmp     [ebp+var_4], 0
0x984FE7: jz      short locret_984FF0
0x984FE9: mov     ecx, [ebp+var_8]
0x984FEC: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x984FF0: leave
0x984FF1: retn
