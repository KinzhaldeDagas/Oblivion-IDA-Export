0x985093: push    ebp
0x985094: mov     ebp, esp
0x985096: sub     esp, 10h
0x985099: push    [ebp+Locale]; struct localeinfo_struct *
0x98509C: lea     ecx, [ebp+var_10]; this
0x98509F: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x9850A4: mov     eax, [ebp+var_10.locinfo]
0x9850A7: cmp     dword ptr [eax+0ACh], 1
0x9850AE: jle     short loc_9850C6
0x9850B0: lea     eax, [ebp+var_10]
0x9850B3: push    eax; Locale
0x9850B4: push    80h ; '€'; Type
0x9850B9: push    [ebp+C]; C
0x9850BC: call    __isctype_l
0x9850C1: add     esp, 0Ch
0x9850C4: jmp     short loc_9850D8
0x9850C6: mov     eax, [eax+0C8h]
0x9850CC: mov     ecx, [ebp+C]
0x9850CF: movzx   eax, byte ptr [eax+ecx*2]
0x9850D3: and     eax, 80h
0x9850D8: cmp     [ebp+var_4], 0
0x9850DC: jz      short locret_9850E5
0x9850DE: mov     ecx, [ebp+var_8]
0x9850E1: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x9850E5: leave
0x9850E6: retn
