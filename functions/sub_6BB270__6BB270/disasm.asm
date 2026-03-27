0x6BB270: mov     ecx, [esp+arg_C]
0x6BB274: sub     esp, 10h
0x6BB277: cmp     ecx, 1
0x6BB27A: jz      loc_6BB47E
0x6BB280: fld     [esp+10h+arg_0]
0x6BB284: fld     dword ptr ds:0A7DEB4h
0x6BB28A: fchs
0x6BB28C: fucomp  st(1)
0x6BB28E: fnstsw  ax
0x6BB290: test    ah, 44h
0x6BB293: jnp     loc_6BB47C
0x6BB299: mov     eax, [esp+10h+arg_10]
0x6BB29D: mov     eax, [eax]
0x6BB29F: push    ebx
0x6BB2A0: mov     ebx, [esp+14h+arg_4]
0x6BB2A4: push    ebp
0x6BB2A5: push    esi
0x6BB2A6: movzx   esi, [esp+1Ch+arg_14]
0x6BB2AB: push    edi
0x6BB2AC: lea     edi, [ecx-1]
0x6BB2AF: mov     ecx, esi
0x6BB2B1: imul    ecx, eax
0x6BB2B4: mov     [esp+20h+arg_C], eax
0x6BB2B8: mov     [esp+20h+var_4], edi
0x6BB2BC: fld     dword ptr [ecx+ebx]
0x6BB2BF: fstp    [esp+20h+var_C]
0x6BB2C3: fld     [esp+20h+var_C]
0x6BB2C7: fcomp   st(1)
0x6BB2C9: fnstsw  ax
0x6BB2CB: test    ah, 41h
0x6BB2CE: jnz     short loc_6BB2DE
0x6BB2D0: fld     dword ptr [ebx]
0x6BB2D2: mov     [esp+20h+arg_C], 0
0x6BB2DA: fstp    [esp+20h+var_C]
0x6BB2DE: mov     ecx, [esp+20h+arg_C]
0x6BB2E2: add     ecx, 1
0x6BB2E5: mov     edx, edi
0x6BB2E7: sub     edx, ecx
0x6BB2E9: add     edx, 1
0x6BB2EC: cmp     edx, 4
0x6BB2EF: jl      loc_6BB446
0x6BB2F5: mov     edi, esi
0x6BB2F7: lea     eax, [ecx+3]
0x6BB2FA: imul    edi, ecx
0x6BB2FD: lea     ebp, [ecx+2]
0x6BB300: imul    eax, esi
0x6BB303: imul    ebp, esi
0x6BB306: add     eax, ebx
0x6BB308: add     edi, ebx
0x6BB30A: add     ebp, ebx
0x6BB30C: lea     ebx, [ecx+1]
0x6BB30F: imul    ebx, esi
0x6BB312: add     ebx, [esp+20h+arg_4]
0x6BB316: lea     edx, ds:0[esi*4]
0x6BB31D: mov     [esp+20h+var_8], eax
0x6BB321: jmp     short loc_6BB325
0x6BB323: fstp    st
0x6BB325: fld     dword ptr [edi]
0x6BB327: fstp    [esp+20h+var_10]
0x6BB32B: fld     [esp+20h+var_10]
0x6BB32F: fcom    st(1)
0x6BB331: fnstsw  ax
0x6BB333: test    ah, 1
0x6BB336: jz      loc_6BB457
0x6BB33C: fstp    [esp+20h+var_C]
0x6BB340: fld     dword ptr [ebx]
0x6BB342: fstp    [esp+20h+var_10]
0x6BB346: fld     [esp+20h+var_10]
0x6BB34A: fcom    st(1)
0x6BB34C: fnstsw  ax
0x6BB34E: test    ah, 1
0x6BB351: jz      loc_6BB44F
0x6BB357: fstp    [esp+20h+var_C]
0x6BB35B: fld     dword ptr [ebp+0]
0x6BB35E: fstp    [esp+20h+var_10]
0x6BB362: fld     [esp+20h+var_10]
0x6BB366: fcom    st(1)
0x6BB368: fnstsw  ax
0x6BB36A: test    ah, 1
0x6BB36D: jz      loc_6BB45D
0x6BB373: mov     eax, [esp+20h+var_8]
0x6BB377: fstp    [esp+20h+var_C]
0x6BB37B: fld     dword ptr [eax]
0x6BB37D: fstp    [esp+20h+var_10]
0x6BB381: fld     [esp+20h+var_10]
0x6BB385: fcom    st(1)
0x6BB387: fnstsw  ax
0x6BB389: test    ah, 1
0x6BB38C: jz      loc_6BB46B
0x6BB392: mov     eax, [esp+20h+var_4]
0x6BB396: fst     [esp+20h+var_C]
0x6BB39A: add     [esp+20h+arg_C], 4
0x6BB39F: add     [esp+20h+var_8], edx
0x6BB3A3: add     ecx, 4
0x6BB3A6: add     eax, 0FFFFFFFDh
0x6BB3A9: add     edi, edx
0x6BB3AB: add     ebx, edx
0x6BB3AD: add     ebp, edx
0x6BB3AF: cmp     ecx, eax
0x6BB3B1: jbe     loc_6BB323
0x6BB3B7: mov     ebx, [esp+20h+arg_4]
0x6BB3BB: mov     edi, [esp+20h+var_4]
0x6BB3BF: cmp     ecx, edi
0x6BB3C1: ja      short loc_6BB3F7
0x6BB3C3: mov     ebp, [esp+20h+arg_C]
0x6BB3C7: mov     edx, esi
0x6BB3C9: imul    edx, ecx
0x6BB3CC: add     edx, ebx
0x6BB3CE: fstp    st
0x6BB3D0: fld     dword ptr [edx]
0x6BB3D2: fstp    [esp+20h+var_10]
0x6BB3D6: fld     [esp+20h+var_10]
0x6BB3DA: fcom    st(1)
0x6BB3DC: fnstsw  ax
0x6BB3DE: test    ah, 1
0x6BB3E1: jz      short loc_6BB3F3
0x6BB3E3: add     ecx, 1
0x6BB3E6: fst     [esp+20h+var_C]
0x6BB3EA: add     ebp, 1
0x6BB3ED: add     edx, esi
0x6BB3EF: cmp     ecx, edi
0x6BB3F1: jbe     short loc_6BB3CE
0x6BB3F3: mov     [esp+20h+arg_C], ebp
0x6BB3F7: fld     [esp+20h+var_C]
0x6BB3FB: mov     edi, [esp+20h+arg_C]
0x6BB3FF: fsub    st(2), st
0x6BB401: mov     eax, esi
0x6BB403: imul    esi, edi
0x6BB406: fsubp   st(1), st
0x6BB408: fdivp   st(1), st
0x6BB40A: lea     edx, [esp+20h+arg_C]
0x6BB40E: push    edx
0x6BB40F: add     esi, ebx
0x6BB411: imul    eax, ecx
0x6BB414: fstp    [esp+24h+arg_C]
0x6BB418: fld     [esp+24h+arg_C]
0x6BB41C: add     eax, ebx
0x6BB41E: push    eax
0x6BB41F: push    esi
0x6BB420: push    ecx
0x6BB421: mov     ecx, [esp+30h+arg_8]
0x6BB425: mov     edx, ds:0B3CFF8h[ecx*4]
0x6BB42C: fstp    [esp+30h+var_30]
0x6BB42F: call    edx ; dword_B3CFF8
0x6BB431: mov     eax, [esp+30h+arg_10]
0x6BB435: fld     [esp+30h+arg_C]
0x6BB439: add     esp, 10h
0x6BB43C: mov     [eax], edi
0x6BB43E: pop     edi
0x6BB43F: pop     esi
0x6BB440: pop     ebp
0x6BB441: pop     ebx
0x6BB442: add     esp, 10h
0x6BB445: retn
0x6BB446: fld     [esp+20h+var_10]
0x6BB44A: jmp     loc_6BB3BF
0x6BB44F: add     ecx, 1
0x6BB452: add     [esp+20h+arg_C], 1
0x6BB457: mov     ebx, [esp+20h+arg_4]
0x6BB45B: jmp     short loc_6BB3F7
0x6BB45D: mov     ebx, [esp+20h+arg_4]
0x6BB461: add     ecx, 2
0x6BB464: add     [esp+20h+arg_C], 2
0x6BB469: jmp     short loc_6BB3F7
0x6BB46B: mov     ebx, [esp+20h+arg_4]
0x6BB46F: add     ecx, 3
0x6BB472: add     [esp+20h+arg_C], 3
0x6BB477: jmp     loc_6BB3F7
0x6BB47C: fstp    st
0x6BB47E: mov     ecx, [esp+10h+arg_4]
0x6BB482: fld     dword ptr [ecx+4]
0x6BB485: add     esp, 10h
0x6BB488: retn
