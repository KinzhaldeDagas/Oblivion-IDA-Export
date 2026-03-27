0x98518A: push    ebp
0x98518B: mov     ebp, esp
0x98518D: sub     esp, 10h
0x985190: push    [ebp+Locale]; struct localeinfo_struct *
0x985193: lea     ecx, [ebp+var_10]; this
0x985196: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x98519B: mov     eax, [ebp+var_10.locinfo]
0x98519E: cmp     dword ptr [eax+0ACh], 1
0x9851A5: jle     short loc_9851BD
0x9851A7: lea     eax, [ebp+var_10]
0x9851AA: push    eax; Locale
0x9851AB: push    107h; Type
0x9851B0: push    [ebp+C]; C
0x9851B3: call    __isctype_l
0x9851B8: add     esp, 0Ch
0x9851BB: jmp     short loc_9851CF
0x9851BD: mov     eax, [eax+0C8h]
0x9851C3: mov     ecx, [ebp+C]
0x9851C6: movzx   eax, word ptr [eax+ecx*2]
0x9851CA: and     eax, 107h
0x9851CF: cmp     [ebp+var_4], 0
0x9851D3: jz      short locret_9851DC
0x9851D5: mov     ecx, [ebp+var_8]
0x9851D8: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x9851DC: leave
0x9851DD: retn
