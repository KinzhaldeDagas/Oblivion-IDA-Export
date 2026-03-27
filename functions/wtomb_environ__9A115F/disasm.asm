0x9A115F: push    ebp
0x9A1160: mov     ebp, esp
0x9A1162: push    ecx
0x9A1163: push    ecx
0x9A1164: push    ebx
0x9A1165: push    esi
0x9A1166: xor     esi, esi
0x9A1168: push    edi
0x9A1169: mov     edi, dword_BA9DBC
0x9A116F: mov     [ebp+Memory], esi
0x9A1172: mov     eax, [edi]
0x9A1174: cmp     eax, esi
0x9A1176: jz      short loc_9A11DD
0x9A1178: mov     ebx, ds:WideCharToMultiByte
0x9A117E: push    esi; lpUsedDefaultChar
0x9A117F: push    esi; lpDefaultChar
0x9A1180: push    esi; cbMultiByte
0x9A1181: push    esi; lpMultiByteStr
0x9A1182: push    0FFFFFFFFh; cchWideChar
0x9A1184: push    eax; lpWideCharStr
0x9A1185: push    esi; dwFlags
0x9A1186: push    esi; CodePage
0x9A1187: call    ebx ; WideCharToMultiByte
0x9A1189: cmp     eax, esi
0x9A118B: mov     [ebp+cbMultiByte], eax
0x9A118E: jz      short loc_9A11E4
0x9A1190: push    1
0x9A1192: push    eax
0x9A1193: call    unknown_libname_74
0x9A1198: cmp     eax, esi
0x9A119A: pop     ecx
0x9A119B: pop     ecx
0x9A119C: mov     [ebp+Memory], eax
0x9A119F: jz      short loc_9A11E4
0x9A11A1: push    esi; lpUsedDefaultChar
0x9A11A2: push    esi; lpDefaultChar
0x9A11A3: push    [ebp+cbMultiByte]; cbMultiByte
0x9A11A6: push    eax; lpMultiByteStr
0x9A11A7: push    0FFFFFFFFh; cchWideChar
0x9A11A9: push    dword ptr [edi]; lpWideCharStr
0x9A11AB: push    esi; dwFlags
0x9A11AC: push    esi; CodePage
0x9A11AD: call    ebx ; WideCharToMultiByte
0x9A11AF: test    eax, eax
0x9A11B1: jz      short loc_9A11E9
0x9A11B3: lea     eax, [ebp+Memory]
0x9A11B6: push    esi
0x9A11B7: push    eax
0x9A11B8: call    ___crtsetenv
0x9A11BD: test    eax, eax
0x9A11BF: pop     ecx
0x9A11C0: pop     ecx
0x9A11C1: jge     short loc_9A11D4
0x9A11C3: cmp     [ebp+Memory], esi
0x9A11C6: jz      short loc_9A11D4
0x9A11C8: push    [ebp+Memory]; Memory
0x9A11CB: call    _free
0x9A11D0: pop     ecx
0x9A11D1: mov     [ebp+Memory], esi
0x9A11D4: add     edi, 4
0x9A11D7: mov     eax, [edi]
0x9A11D9: cmp     eax, esi
0x9A11DB: jnz     short loc_9A117E
0x9A11DD: xor     eax, eax
0x9A11DF: pop     edi
0x9A11E0: pop     esi
0x9A11E1: pop     ebx
0x9A11E2: leave
0x9A11E3: retn
0x9A11E4: or      eax, 0FFFFFFFFh
0x9A11E7: jmp     short loc_9A11DF
0x9A11E9: push    [ebp+Memory]; Memory
0x9A11EC: call    _free
0x9A11F1: pop     ecx
0x9A11F2: jmp     short loc_9A11E4
