0x9A15BD: push    ebp
0x9A15BE: mov     ebp, esp
0x9A15C0: sub     esp, 10h
0x9A15C3: push    ebx
0x9A15C4: push    [ebp+Locale]; struct localeinfo_struct *
0x9A15C7: lea     ecx, [ebp+var_10]; this
0x9A15CA: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x9A15CF: mov     edx, [ebp+MaxCount]
0x9A15D2: xor     ebx, ebx
0x9A15D4: cmp     edx, ebx
0x9A15D6: jnz     short loc_9A15EB
0x9A15D8: cmp     [ebp+var_4], bl
0x9A15DB: jz      short loc_9A15E4
0x9A15DD: mov     eax, [ebp+var_8]
0x9A15E0: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9A15E4: xor     eax, eax
0x9A15E6: jmp     loc_9A16B2
0x9A15EB: cmp     [ebp+Str1], ebx
0x9A15EE: jnz     short loc_9A161E
0x9A15F0: call    __errno
0x9A15F5: push    ebx
0x9A15F6: push    ebx
0x9A15F7: push    ebx
0x9A15F8: push    ebx
0x9A15F9: push    ebx
0x9A15FA: mov     dword ptr [eax], 16h
0x9A1600: call    __invalid_parameter
0x9A1605: add     esp, 14h
0x9A1608: cmp     [ebp+var_4], bl
0x9A160B: jz      short loc_9A1614
0x9A160D: mov     eax, [ebp+var_8]
0x9A1610: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9A1614: mov     eax, 7FFFFFFFh
0x9A1619: jmp     loc_9A16B2
0x9A161E: cmp     [ebp+Str2], ebx
0x9A1621: jz      short loc_9A15F0
0x9A1623: push    esi; Locale
0x9A1624: mov     esi, 7FFFFFFFh
0x9A1629: cmp     edx, esi
0x9A162B: jbe     short loc_9A1647
0x9A162D: call    __errno
0x9A1632: push    ebx
0x9A1633: push    ebx
0x9A1634: push    ebx
0x9A1635: push    ebx
0x9A1636: push    ebx
0x9A1637: mov     dword ptr [eax], 16h
0x9A163D: call    __invalid_parameter
0x9A1642: add     esp, 14h
0x9A1645: jmp     short loc_9A1692
0x9A1647: mov     eax, [ebp+var_10.locinfo]
0x9A164A: mov     ecx, [eax+10h]
0x9A164D: cmp     ecx, ebx
0x9A164F: jnz     short loc_9A1666
0x9A1651: lea     eax, [ebp+var_10]
0x9A1654: push    eax; Locale
0x9A1655: push    edx; MaxCount
0x9A1656: push    [ebp+Str2]; Str2
0x9A1659: push    [ebp+Str1]; Str1
0x9A165C: call    __strnicmp_l
0x9A1661: add     esp, 10h
0x9A1664: jmp     short loc_9A16A5
0x9A1666: push    dword ptr [eax+8]; int
0x9A1669: lea     eax, [ebp+var_10]
0x9A166C: push    edx; int
0x9A166D: push    [ebp+Str2]; int
0x9A1670: push    edx; int
0x9A1671: push    [ebp+Str1]; int
0x9A1674: push    1001h; int
0x9A1679: push    ecx; int
0x9A167A: push    eax; struct localeinfo_struct *
0x9A167B: call    ___crtCompareStringA
0x9A1680: add     esp, 20h
0x9A1683: cmp     eax, ebx
0x9A1685: jnz     short loc_9A16A2
0x9A1687: call    __errno
0x9A168C: mov     dword ptr [eax], 16h
0x9A1692: cmp     [ebp+var_4], bl
0x9A1695: jz      short loc_9A169E
0x9A1697: mov     eax, [ebp+var_8]
0x9A169A: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9A169E: mov     eax, esi
0x9A16A0: jmp     short loc_9A16B1
0x9A16A2: add     eax, 0FFFFFFFEh
0x9A16A5: cmp     [ebp+var_4], bl
0x9A16A8: jz      short loc_9A16B1
0x9A16AA: mov     ecx, [ebp+var_8]
0x9A16AD: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x9A16B1: pop     esi
0x9A16B2: pop     ebx
0x9A16B3: leave
0x9A16B4: retn
