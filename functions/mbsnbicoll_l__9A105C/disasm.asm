0x9A105C: push    ebp
0x9A105D: mov     ebp, esp
0x9A105F: sub     esp, 10h
0x9A1062: push    ebx
0x9A1063: push    [ebp+Locale]; struct localeinfo_struct *
0x9A1066: lea     ecx, [ebp+var_10]; this
0x9A1069: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x9A106E: mov     ecx, [ebp+MaxCount]
0x9A1071: xor     ebx, ebx
0x9A1073: cmp     ecx, ebx
0x9A1075: jnz     short loc_9A108A
0x9A1077: cmp     [ebp+var_4], bl
0x9A107A: jz      short loc_9A1083
0x9A107C: mov     eax, [ebp+var_8]
0x9A107F: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9A1083: xor     eax, eax
0x9A1085: jmp     loc_9A1145
0x9A108A: cmp     [ebp+Str1], ebx
0x9A108D: jnz     short loc_9A10BD
0x9A108F: call    __errno
0x9A1094: push    ebx
0x9A1095: push    ebx
0x9A1096: push    ebx
0x9A1097: push    ebx
0x9A1098: push    ebx
0x9A1099: mov     dword ptr [eax], 16h
0x9A109F: call    __invalid_parameter
0x9A10A4: add     esp, 14h
0x9A10A7: cmp     [ebp+var_4], bl
0x9A10AA: jz      short loc_9A10B3
0x9A10AC: mov     eax, [ebp+var_8]
0x9A10AF: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9A10B3: mov     eax, 7FFFFFFFh
0x9A10B8: jmp     loc_9A1145
0x9A10BD: cmp     [ebp+Str2], ebx
0x9A10C0: jz      short loc_9A108F
0x9A10C2: push    esi; Locale
0x9A10C3: mov     esi, 7FFFFFFFh
0x9A10C8: cmp     ecx, esi
0x9A10CA: jbe     short loc_9A10E6
0x9A10CC: call    __errno
0x9A10D1: push    ebx
0x9A10D2: push    ebx
0x9A10D3: push    ebx
0x9A10D4: push    ebx
0x9A10D5: push    ebx
0x9A10D6: mov     dword ptr [eax], 16h
0x9A10DC: call    __invalid_parameter
0x9A10E1: add     esp, 14h
0x9A10E4: jmp     short loc_9A1125
0x9A10E6: mov     eax, [ebp+var_10.mbcinfo]
0x9A10E9: cmp     [eax+8], ebx
0x9A10EC: jnz     short loc_9A1102
0x9A10EE: push    [ebp+Locale]; Locale
0x9A10F1: push    ecx; MaxCount
0x9A10F2: push    [ebp+Str2]; Str2
0x9A10F5: push    [ebp+Str1]; Str1
0x9A10F8: call    __strnicoll_l
0x9A10FD: add     esp, 10h
0x9A1100: jmp     short loc_9A1138
0x9A1102: push    dword ptr [eax+4]; int
0x9A1105: push    ecx; int
0x9A1106: push    [ebp+Str2]; int
0x9A1109: push    ecx; int
0x9A110A: push    [ebp+Str1]; int
0x9A110D: push    1001h; int
0x9A1112: push    dword ptr [eax+0Ch]; int
0x9A1115: lea     eax, [ebp+var_10]
0x9A1118: push    eax; struct localeinfo_struct *
0x9A1119: call    ___crtCompareStringA
0x9A111E: add     esp, 20h
0x9A1121: cmp     eax, ebx
0x9A1123: jnz     short loc_9A1135
0x9A1125: cmp     [ebp+var_4], bl
0x9A1128: jz      short loc_9A1131
0x9A112A: mov     eax, [ebp+var_8]
0x9A112D: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9A1131: mov     eax, esi
0x9A1133: jmp     short loc_9A1144
0x9A1135: add     eax, 0FFFFFFFEh
0x9A1138: cmp     [ebp+var_4], bl
0x9A113B: jz      short loc_9A1144
0x9A113D: mov     ecx, [ebp+var_8]
0x9A1140: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x9A1144: pop     esi
0x9A1145: pop     ebx
0x9A1146: leave
0x9A1147: retn
