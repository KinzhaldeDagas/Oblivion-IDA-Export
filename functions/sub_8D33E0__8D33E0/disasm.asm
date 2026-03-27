0x8D33E0: push    ebp
0x8D33E1: mov     ebp, esp
0x8D33E3: and     esp, 0FFFFFFF0h
0x8D33E6: sub     esp, 74h
0x8D33E9: push    ebx
0x8D33EA: push    esi
0x8D33EB: push    edi
0x8D33EC: mov     ebx, ecx
0x8D33EE: mov     edi, edi
0x8D33F0: mov     eax, [ebx+18h]
0x8D33F3: fld     [ebp+arg_4]
0x8D33F6: or      ecx, 0FFFFFFFFh
0x8D33F9: xor     edx, edx
0x8D33FB: test    eax, eax
0x8D33FD: jle     loc_8D35EA
0x8D3403: mov     edi, [ebx+14h]
0x8D3406: mov     esi, edi
0x8D3408: fcom    dword ptr [esi]
0x8D340A: fnstsw  ax
0x8D340C: test    ah, 41h
0x8D340F: jnz     short loc_8D3417
0x8D3411: fstp    st
0x8D3413: mov     ecx, edx
0x8D3415: fld     dword ptr [esi]
0x8D3417: mov     eax, [ebx+18h]
0x8D341A: inc     edx
0x8D341B: add     esi, 40h ; '@'
0x8D341E: cmp     edx, eax
0x8D3420: jl      short loc_8D3408
0x8D3422: test    ecx, ecx
0x8D3424: fstp    st
0x8D3426: jl      loc_8D35EC
0x8D342C: shl     ecx, 6
0x8D342F: mov     edx, ecx
0x8D3431: lea     esi, [edx+edi]
0x8D3434: dec     eax
0x8D3435: mov     ecx, 10h
0x8D343A: lea     edi, [esp+80h+var_40]
0x8D343E: rep movsd
0x8D3440: mov     esi, [ebx+14h]
0x8D3443: mov     [ebx+18h], eax
0x8D3446: shl     eax, 6
0x8D3449: add     eax, esi
0x8D344B: mov     ecx, eax
0x8D344D: lea     eax, [esi+edx]
0x8D3450: mov     edx, [ecx]
0x8D3452: mov     esi, ecx
0x8D3454: mov     [eax], edx
0x8D3456: lea     edx, [eax+4]
0x8D3459: sub     esi, eax
0x8D345B: mov     [esp+80h+var_6C], 2
0x8D3463: mov     edi, [esi+edx]
0x8D3466: mov     [edx], edi
0x8D3468: mov     edi, [esp+80h+var_6C]
0x8D346C: add     edx, 4
0x8D346F: dec     edi
0x8D3470: mov     [esp+80h+var_6C], edi
0x8D3474: jnz     short loc_8D3463
0x8D3476: mov     edx, [ecx+0Ch]
0x8D3479: mov     esi, [ebp+arg_0]
0x8D347C: mov     [eax+0Ch], edx
0x8D347F: mov     edx, [ecx+10h]
0x8D3482: mov     [eax+10h], edx
0x8D3485: mov     edx, [ecx+14h]
0x8D3488: mov     [eax+14h], edx
0x8D348B: mov     edx, [ecx+18h]
0x8D348E: mov     [eax+18h], edx
0x8D3491: movaps  xmm0, xmmword ptr [ecx+20h]
0x8D3495: movaps  xmmword ptr [eax+20h], xmm0
0x8D3499: movaps  xmm0, xmmword ptr [ecx+30h]
0x8D349D: movaps  xmmword ptr [eax+30h], xmm0
0x8D34A1: fld     dword ptr [esi+18h]
0x8D34A4: mov     eax, [esp+80h+var_40]
0x8D34A8: fst     [esp+80h+var_64]
0x8D34AC: fsub    [esp+80h+var_40]
0x8D34B0: mov     ecx, eax
0x8D34B2: mov     [esi+0Ch], eax
0x8D34B5: mov     [esp+80h+var_68], ecx
0x8D34B9: fstp    [esp+80h+var_60]
0x8D34BD: fld     dword ptr ds:0A2FAA8h
0x8D34C3: fld     [esp+80h+var_60]
0x8D34C7: fucompp
0x8D34C9: fnstsw  ax
0x8D34CB: test    ah, 44h
0x8D34CE: jp      short loc_8D34DA
0x8D34D0: mov     [esp+80h+var_5C], 0
0x8D34D8: jmp     short loc_8D34E8
0x8D34DA: fld     dword ptr ds:0A2F948h
0x8D34E0: fdiv    [esp+80h+var_60]
0x8D34E4: fstp    [esp+80h+var_5C]
0x8D34E8: mov     eax, [esp+80h+var_68]
0x8D34EC: mov     ecx, [esp+80h+var_64]
0x8D34F0: lea     edx, [esi+160h]
0x8D34F6: mov     edi, edx
0x8D34F8: mov     edx, [esp+80h+var_60]
0x8D34FC: mov     [edi], eax
0x8D34FE: mov     [edi+4], ecx
0x8D3501: mov     [edi+8], edx
0x8D3504: mov     edx, [esp+80h+var_5C]
0x8D3508: mov     [edi+0Ch], edx
0x8D350B: mov     edi, [esi+74h]
0x8D350E: add     edi, 10h
0x8D3511: mov     [edi], eax
0x8D3513: mov     eax, [esp+80h+var_60]
0x8D3517: mov     [edi+4], ecx
0x8D351A: mov     [edi+8], eax
0x8D351D: mov     [edi+0Ch], edx
0x8D3520: inc     dword ptr [esi+88h]
0x8D3526: mov     eax, [ebx+8]
0x8D3529: mov     edx, [ebx]
0x8D352B: push    eax
0x8D352C: lea     ecx, [esp+84h+var_40]
0x8D3530: push    ecx
0x8D3531: push    esi
0x8D3532: mov     ecx, ebx
0x8D3534: call    dword ptr [edx+2Ch]
0x8D3537: mov     edx, [esp+80h+var_38]
0x8D353B: mov     eax, [esp+80h+var_3C]
0x8D353F: mov     ecx, [esp+80h+var_28]
0x8D3543: mov     [esp+80h+var_4C], edx
0x8D3547: lea     edx, [esp+80h+var_58]
0x8D354B: mov     word ptr [esp+80h+var_58], 0FFFFh
0x8D3552: mov     [esp+80h+var_54], 0
0x8D355A: mov     [esp+80h+var_50], eax
0x8D355E: mov     [esp+80h+var_44], ecx
0x8D3562: mov     eax, [eax+8]
0x8D3565: push    edx
0x8D3566: push    eax
0x8D3567: call    sub_8DC920
0x8D356C: mov     eax, [esp+88h+var_3C]
0x8D3570: mov     ecx, [eax+98h]
0x8D3576: add     esp, 8
0x8D3579: test    ecx, ecx
0x8D357B: jz      short loc_8D358B
0x8D357D: lea     ecx, [esp+80h+var_58]
0x8D3581: push    ecx
0x8D3582: push    eax
0x8D3583: call    sub_8DC0A0
0x8D3588: add     esp, 8
0x8D358B: mov     eax, [esp+80h+var_38]
0x8D358F: mov     ecx, [eax+98h]
0x8D3595: test    ecx, ecx
0x8D3597: jz      short loc_8D35A7
0x8D3599: lea     edx, [esp+80h+var_58]
0x8D359D: push    edx
0x8D359E: push    eax
0x8D359F: call    sub_8DC0A0
0x8D35A4: add     esp, 8
0x8D35A7: dec     dword ptr [esi+88h]
0x8D35AD: jnz     short loc_8D35CA
0x8D35AF: mov     eax, [esi+84h]
0x8D35B5: test    eax, eax
0x8D35B7: jz      short loc_8D35CA
0x8D35B9: mov     al, [esi+90h]
0x8D35BF: test    al, al
0x8D35C1: jnz     short loc_8D35CA
0x8D35C3: mov     ecx, esi
0x8D35C5: call    sub_899210
0x8D35CA: inc     dword ptr [ebx+24h]
0x8D35CD: mov     eax, ds:0BA7D98h
0x8D35D2: cmp     dword ptr [eax+4], 1
0x8D35D6: jnz     loc_8D33F0
0x8D35DC: mov     eax, 2
0x8D35E1: pop     edi
0x8D35E2: pop     esi
0x8D35E3: pop     ebx
0x8D35E4: mov     esp, ebp
0x8D35E6: pop     ebp
0x8D35E7: retn    8
0x8D35EA: fstp    st
0x8D35EC: pop     edi
0x8D35ED: pop     esi
0x8D35EE: xor     eax, eax
0x8D35F0: pop     ebx
0x8D35F1: mov     esp, ebp
0x8D35F3: pop     ebp
0x8D35F4: retn    8
