0x990407: push    ebp
0x990408: mov     ebp, esp
0x99040A: sub     esp, 10h
0x99040D: push    ebx
0x99040E: push    esi
0x99040F: push    edi
0x990410: push    [ebp+arg_C]; struct localeinfo_struct *
0x990413: mov     ebx, eax
0x990415: mov     esi, [ebx+4]
0x990418: mov     edi, ecx
0x99041A: lea     ecx, [ebp+var_10]; this
0x99041D: dec     esi
0x99041E: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x990423: test    edi, edi
0x990425: jnz     short loc_990454
0x990427: call    __errno
0x99042C: push    16h
0x99042E: pop     esi
0x99042F: mov     [eax], esi
0x990431: xor     eax, eax
0x990433: push    eax
0x990434: push    eax
0x990435: push    eax
0x990436: push    eax
0x990437: push    eax
0x990438: call    __invalid_parameter
0x99043D: add     esp, 14h
0x990440: cmp     [ebp+var_4], 0
0x990444: jz      short loc_99044D
0x990446: mov     eax, [ebp+var_8]
0x990449: and     dword ptr [eax+70h], 0FFFFFFFDh
0x99044D: mov     eax, esi
0x99044F: jmp     loc_9904F7
0x990454: cmp     [ebp+arg_0], 0
0x990458: jbe     short loc_990427
0x99045A: cmp     [ebp+arg_8], 0
0x99045E: jz      short loc_990478
0x990460: cmp     esi, [ebp+arg_4]
0x990463: jnz     short loc_990478
0x990465: xor     eax, eax
0x990467: cmp     dword ptr [ebx], 2Dh ; '-'
0x99046A: setz    al
0x99046D: add     eax, esi
0x99046F: add     eax, edi
0x990471: mov     byte ptr [eax], 30h ; '0'
0x990474: mov     byte ptr [eax+1], 0
0x990478: cmp     dword ptr [ebx], 2Dh ; '-'
0x99047B: mov     esi, edi
0x99047D: jnz     short loc_990485
0x99047F: mov     byte ptr [edi], 2Dh ; '-'
0x990482: lea     esi, [edi+1]
0x990485: mov     eax, [ebx+4]
0x990488: xor     edi, edi
0x99048A: inc     edi
0x99048B: test    eax, eax
0x99048D: jg      short loc_99049C
0x99048F: mov     eax, esi
0x990491: call    __shift
0x990496: mov     byte ptr [esi], 30h ; '0'
0x990499: inc     esi
0x99049A: jmp     short loc_99049E
0x99049C: add     esi, eax
0x99049E: cmp     [ebp+arg_4], 0
0x9904A2: jle     short loc_9904E8
0x9904A4: mov     eax, esi
0x9904A6: call    __shift
0x9904AB: mov     eax, [ebp+var_10]
0x9904AE: mov     eax, [eax+0BCh]
0x9904B4: mov     eax, [eax]
0x9904B6: mov     al, [eax]
0x9904B8: mov     [esi], al
0x9904BA: mov     ebx, [ebx+4]
0x9904BD: inc     esi
0x9904BE: test    ebx, ebx
0x9904C0: jge     short loc_9904E8
0x9904C2: neg     ebx
0x9904C4: cmp     [ebp+arg_8], 0
0x9904C8: jnz     short loc_9904CF
0x9904CA: cmp     [ebp+arg_4], ebx
0x9904CD: jl      short loc_9904D2
0x9904CF: mov     [ebp+arg_4], ebx
0x9904D2: mov     edi, [ebp+arg_4]
0x9904D5: mov     eax, esi
0x9904D7: call    __shift
0x9904DC: push    edi
0x9904DD: push    30h ; '0'
0x9904DF: push    esi
0x9904E0: call    __memset
0x9904E5: add     esp, 0Ch
0x9904E8: cmp     [ebp+var_4], 0
0x9904EC: jz      short loc_9904F5
0x9904EE: mov     eax, [ebp+var_8]
0x9904F1: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9904F5: xor     eax, eax
0x9904F7: pop     edi
0x9904F8: pop     esi
0x9904F9: pop     ebx
0x9904FA: leave
0x9904FB: retn
