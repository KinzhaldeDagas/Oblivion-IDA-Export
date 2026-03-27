0x744330: push    ecx
0x744331: push    ebx
0x744332: push    esi
0x744333: mov     esi, [esp+0Ch+arg_0]
0x744337: mov     eax, [esi+0Ch]
0x74433A: add     eax, 0FFFFFFFBh
0x74433D: cmp     eax, 0FFFFh
0x744342: push    edi
0x744343: mov     [esp+10h+var_4], 0FFFFh
0x74434B: jnb     short loc_744351
0x74434D: mov     [esp+10h+var_4], eax
0x744351: mov     eax, [esi+6Ch]
0x744354: cmp     eax, 1
0x744357: ja      short loc_744369
0x744359: call    sub_7441E0
0x74435E: mov     eax, [esi+6Ch]
0x744361: test    eax, eax
0x744363: jz      loc_74449F
0x744369: add     [esi+64h], eax
0x74436C: mov     ecx, [esi+54h]
0x74436F: mov     eax, [esp+10h+var_4]
0x744373: mov     edx, [esi+64h]
0x744376: mov     dword ptr [esi+6Ch], 0
0x74437D: lea     eax, [ecx+eax]
0x744380: jz      short loc_74438A
0x744382: cmp     edx, eax
0x744384: jb      loc_74440A
0x74438A: sub     edx, eax
0x74438C: test    ecx, ecx
0x74438E: mov     [esi+6Ch], edx
0x744391: mov     [esi+64h], eax
0x744394: jl      short loc_74439D
0x744396: mov     edx, [esi+30h]
0x744399: add     edx, ecx
0x74439B: jmp     short loc_74439F
0x74439D: xor     edx, edx
0x74439F: push    0
0x7443A1: sub     eax, ecx
0x7443A3: push    eax
0x7443A4: push    edx
0x7443A5: push    esi
0x7443A6: call    sub_747610
0x7443AB: mov     ecx, [esi+64h]
0x7443AE: mov     edi, [esi]
0x7443B0: mov     [esi+54h], ecx
0x7443B3: mov     eax, [edi+1Ch]
0x7443B6: mov     ebx, [eax+14h]
0x7443B9: mov     ecx, [edi+10h]
0x7443BC: add     esp, 10h
0x7443BF: cmp     ebx, ecx
0x7443C1: jbe     short loc_7443C5
0x7443C3: mov     ebx, ecx
0x7443C5: test    ebx, ebx
0x7443C7: jz      short loc_7443FE
0x7443C9: mov     edx, [eax+10h]
0x7443CC: mov     eax, [edi+0Ch]
0x7443CF: push    ebx; Size
0x7443D0: push    edx; Src
0x7443D1: push    eax; Dst
0x7443D2: call    _memcpy
0x7443D7: mov     eax, [edi+1Ch]
0x7443DA: add     [edi+0Ch], ebx
0x7443DD: add     [eax+10h], ebx
0x7443E0: add     [edi+14h], ebx
0x7443E3: sub     [edi+10h], ebx
0x7443E6: mov     eax, [edi+1Ch]
0x7443E9: sub     [eax+14h], ebx
0x7443EC: mov     edi, [edi+1Ch]
0x7443EF: add     esp, 0Ch
0x7443F2: cmp     dword ptr [edi+14h], 0
0x7443F6: jnz     short loc_7443FE
0x7443F8: mov     ecx, [edi+8]
0x7443FB: mov     [edi+10h], ecx
0x7443FE: mov     edx, [esi]
0x744400: cmp     dword ptr [edx+10h], 0
0x744404: jz      loc_744498
0x74440A: mov     edx, [esi+54h]
0x74440D: mov     ecx, [esi+64h]
0x744410: mov     eax, [esi+24h]
0x744413: sub     ecx, edx
0x744415: sub     eax, 106h
0x74441A: cmp     ecx, eax
0x74441C: jb      loc_744351
0x744422: test    edx, edx
0x744424: jl      short loc_74442D
0x744426: mov     eax, [esi+30h]
0x744429: add     eax, edx
0x74442B: jmp     short loc_74442F
0x74442D: xor     eax, eax
0x74442F: push    0
0x744431: push    ecx
0x744432: push    eax
0x744433: push    esi
0x744434: call    sub_747610
0x744439: mov     ecx, [esi+64h]
0x74443C: mov     edi, [esi]
0x74443E: mov     [esi+54h], ecx
0x744441: mov     eax, [edi+1Ch]
0x744444: mov     ebx, [eax+14h]
0x744447: mov     ecx, [edi+10h]
0x74444A: add     esp, 10h
0x74444D: cmp     ebx, ecx
0x74444F: jbe     short loc_744453
0x744451: mov     ebx, ecx
0x744453: test    ebx, ebx
0x744455: jz      short loc_74448C
0x744457: mov     edx, [eax+10h]
0x74445A: mov     eax, [edi+0Ch]
0x74445D: push    ebx; Size
0x74445E: push    edx; Src
0x74445F: push    eax; Dst
0x744460: call    _memcpy
0x744465: mov     eax, [edi+1Ch]
0x744468: add     [edi+0Ch], ebx
0x74446B: add     [eax+10h], ebx
0x74446E: add     [edi+14h], ebx
0x744471: sub     [edi+10h], ebx
0x744474: mov     eax, [edi+1Ch]
0x744477: sub     [eax+14h], ebx
0x74447A: mov     edi, [edi+1Ch]
0x74447D: add     esp, 0Ch
0x744480: cmp     dword ptr [edi+14h], 0
0x744484: jnz     short loc_74448C
0x744486: mov     ecx, [edi+8]
0x744489: mov     [edi+10h], ecx
0x74448C: mov     edx, [esi]
0x74448E: cmp     dword ptr [edx+10h], 0
0x744492: jnz     loc_744351
0x744498: pop     edi
0x744499: pop     esi
0x74449A: xor     eax, eax
0x74449C: pop     ebx
0x74449D: pop     ecx
0x74449E: retn
0x74449F: mov     edi, [esp+10h+arg_4]
0x7444A3: test    edi, edi
0x7444A5: jz      short loc_744498
0x7444A7: mov     ecx, [esi+54h]
0x7444AA: test    ecx, ecx
0x7444AC: jl      short loc_7444B5
0x7444AE: mov     eax, [esi+30h]
0x7444B1: add     eax, ecx
0x7444B3: jmp     short loc_7444B7
0x7444B5: xor     eax, eax
0x7444B7: xor     edx, edx
0x7444B9: cmp     edi, 4
0x7444BC: setz    dl
0x7444BF: push    edx
0x7444C0: mov     edx, [esi+64h]
0x7444C3: sub     edx, ecx
0x7444C5: push    edx
0x7444C6: push    eax
0x7444C7: push    esi
0x7444C8: call    sub_747610
0x7444CD: mov     eax, [esi+64h]
0x7444D0: mov     [esi+54h], eax
0x7444D3: mov     eax, [esi]
0x7444D5: add     esp, 10h
0x7444D8: call    sub_7439F0
0x7444DD: mov     ecx, [esi]
0x7444DF: xor     eax, eax
0x7444E1: cmp     [ecx+10h], eax
0x7444E4: jnz     short loc_7444F7
0x7444E6: cmp     edi, 4
0x7444E9: setnz   al
0x7444EC: pop     edi
0x7444ED: pop     esi
0x7444EE: pop     ebx
0x7444EF: sub     eax, 1
0x7444F2: and     eax, 2
0x7444F5: pop     ecx
0x7444F6: retn
0x7444F7: cmp     edi, 4
0x7444FA: setz    al
0x7444FD: pop     edi
0x7444FE: pop     esi
0x7444FF: pop     ebx
0x744500: lea     eax, [eax+eax+1]
0x744504: pop     ecx
0x744505: retn
