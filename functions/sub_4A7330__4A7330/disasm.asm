0x4A7330: sub     esp, 14h
0x4A7333: mov     eax, [esp+14h+arg_0]
0x4A7337: test    eax, eax
0x4A7339: push    ebp
0x4A733A: mov     ebp, ecx
0x4A733C: mov     [esp+18h+var_10], 0
0x4A7344: jz      loc_4A74D3
0x4A734A: cmp     dword ptr [ebp+24h], 3
0x4A734E: jb      loc_4A74D3
0x4A7354: fld     dword ptr [eax]
0x4A7356: fstp    [esp+18h+var_14]
0x4A735A: fld     dword ptr [eax+4]
0x4A735D: fstp    [esp+18h+arg_0]
0x4A7361: fld     [esp+18h+var_14]
0x4A7365: fstp    [esp+18h+var_8]
0x4A7369: call    sub_4A7130
0x4A736E: fcomp   [esp+18h+var_8]
0x4A7372: fnstsw  ax
0x4A7374: test    ah, 41h
0x4A7377: jz      loc_4A74D3
0x4A737D: fld     [esp+18h+var_14]
0x4A7381: mov     ecx, ebp
0x4A7383: fstp    [esp+18h+var_8]
0x4A7387: call    sub_4A7180
0x4A738C: fcomp   [esp+18h+var_8]
0x4A7390: fnstsw  ax
0x4A7392: test    ah, 5
0x4A7395: jnp     loc_4A74D3
0x4A739B: fld     [esp+18h+arg_0]
0x4A739F: mov     ecx, ebp
0x4A73A1: fstp    [esp+18h+var_8]
0x4A73A5: call    sub_4A71D0
0x4A73AA: fcomp   [esp+18h+var_8]
0x4A73AE: fnstsw  ax
0x4A73B0: test    ah, 41h
0x4A73B3: jz      loc_4A74D3
0x4A73B9: fld     [esp+18h+arg_0]
0x4A73BD: mov     ecx, ebp
0x4A73BF: fstp    [esp+18h+var_8]
0x4A73C3: call    sub_4A7220
0x4A73C8: fcomp   [esp+18h+var_8]
0x4A73CC: fnstsw  ax
0x4A73CE: test    ah, 5
0x4A73D1: jnp     loc_4A74D3
0x4A73D7: fld     [esp+18h+var_14]
0x4A73DB: push    ebx
0x4A73DC: fld     [esp+1Ch+arg_0]
0x4A73E0: push    esi
0x4A73E1: mov     eax, ebp
0x4A73E3: push    edi
0x4A73E4: mov     esi, [eax+4]
0x4A73E7: test    esi, esi
0x4A73E9: jnz     short loc_4A73ED
0x4A73EB: mov     esi, ebp
0x4A73ED: mov     edi, [eax]
0x4A73EF: fld     dword ptr [edi]
0x4A73F1: mov     ebx, [esi]
0x4A73F3: fstp    [esp+24h+var_C]
0x4A73F7: fld     dword ptr [ebx]
0x4A73F9: fstp    dword ptr [esp+24h+var_8]
0x4A73FD: fld     [esp+24h+var_C]
0x4A7401: fcom    st(2)
0x4A7403: fnstsw  ax
0x4A7405: fld     dword ptr [esp+24h+var_8]
0x4A7409: test    ah, 41h
0x4A740C: jnz     short loc_4A7417
0x4A740E: fcom    st(3)
0x4A7410: fnstsw  ax
0x4A7412: test    ah, 41h
0x4A7415: jz      short loc_4A7454
0x4A7417: fxch    st(1)
0x4A7419: fcomp   st(3)
0x4A741B: fnstsw  ax
0x4A741D: test    ah, 41h
0x4A7420: jz      short loc_4A742D
0x4A7422: fcomp   st(2)
0x4A7424: fnstsw  ax
0x4A7426: test    ah, 41h
0x4A7429: jnz     short loc_4A74A8
0x4A742B: jmp     short loc_4A742F
0x4A742D: fstp    st(2)
0x4A742F: push    ecx
0x4A7430: fstp    st(1)
0x4A7432: fstp    [esp+28h+var_28]; float
0x4A7435: push    ebx; int
0x4A7436: push    edi; int
0x4A7437: call    sub_4A6AA0
0x4A743C: fld     [esp+30h+var_14]
0x4A7440: fcom    st(1)
0x4A7442: add     esp, 0Ch
0x4A7445: fnstsw  ax
0x4A7447: fstp    st(1)
0x4A7449: test    ah, 5
0x4A744C: fld     [esp+24h+arg_0]
0x4A7450: jp      short loc_4A74A8
0x4A7452: jmp     short loc_4A7458
0x4A7454: fstp    st(1)
0x4A7456: fstp    st
0x4A7458: fld     dword ptr [edi+4]
0x4A745B: fstp    dword ptr [esp+24h+var_8]
0x4A745F: fld     dword ptr [ebx+4]
0x4A7462: fstp    [esp+24h+var_C]
0x4A7466: fld     dword ptr [esp+24h+var_8]
0x4A746A: fcom    st(1)
0x4A746C: fnstsw  ax
0x4A746E: fld     [esp+24h+var_C]
0x4A7472: test    ah, 41h
0x4A7475: jnz     short loc_4A7480
0x4A7477: fcom    st(2)
0x4A7479: fnstsw  ax
0x4A747B: test    ah, 41h
0x4A747E: jnp     short loc_4A749B
0x4A7480: fxch    st(1)
0x4A7482: fcomp   st(2)
0x4A7484: fnstsw  ax
0x4A7486: test    ah, 41h
0x4A7489: jp      short loc_4A74A6
0x4A748B: fcomp   st(1)
0x4A748D: fnstsw  ax
0x4A748F: test    ah, 41h
0x4A7492: jnz     short loc_4A74A8
0x4A7494: add     [esp+24h+var_10], 1
0x4A7499: jmp     short loc_4A74A8
0x4A749B: add     [esp+24h+var_10], 1
0x4A74A0: fstp    st(1)
0x4A74A2: fstp    st
0x4A74A4: jmp     short loc_4A74A8
0x4A74A6: fstp    st
0x4A74A8: cmp     esi, ebp
0x4A74AA: mov     eax, esi
0x4A74AC: jnz     loc_4A73E4
0x4A74B2: mov     eax, [esp+24h+var_10]
0x4A74B6: fstp    st
0x4A74B8: and     eax, 80000001h
0x4A74BD: fstp    st
0x4A74BF: jns     short loc_4A74C6
0x4A74C1: dec     eax
0x4A74C2: or      eax, 0FFFFFFFEh
0x4A74C5: inc     eax
0x4A74C6: pop     edi
0x4A74C7: pop     esi
0x4A74C8: pop     ebx
0x4A74C9: setnz   al
0x4A74CC: pop     ebp
0x4A74CD: add     esp, 14h
0x4A74D0: retn    4
0x4A74D3: xor     al, al
0x4A74D5: pop     ebp
0x4A74D6: add     esp, 14h
0x4A74D9: retn    4
