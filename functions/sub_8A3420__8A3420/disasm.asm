0x8A3420: push    ebx
0x8A3421: push    esi
0x8A3422: push    edi
0x8A3423: mov     edi, ecx
0x8A3425: test    edi, edi
0x8A3427: jz      loc_8A34AF
0x8A342D: mov     esi, [edi+8]
0x8A3430: test    esi, esi
0x8A3432: jz      short loc_8A34AF
0x8A3434: lea     eax, [esi+14h]
0x8A3437: test    eax, eax
0x8A3439: jz      short loc_8A3440
0x8A343B: mov     eax, [eax+1Ch]
0x8A343E: jmp     short loc_8A3442
0x8A3440: xor     eax, eax
0x8A3442: and     al, 3Fh
0x8A3444: cmp     al, 8
0x8A3446: jnz     short loc_8A346C
0x8A3448: call    sub_89F570
0x8A344D: mov     eax, [esp+0Ch+arg_0]
0x8A3451: push    0
0x8A3453: push    1
0x8A3455: push    eax
0x8A3456: mov     ecx, esi
0x8A3458: call    sub_8A9AB0
0x8A345D: mov     ecx, edi
0x8A345F: call    sub_89F570
0x8A3464: pop     edi
0x8A3465: pop     esi
0x8A3466: mov     al, 1
0x8A3468: pop     ebx
0x8A3469: retn    4
0x8A346C: mov     ecx, [esi+50h]
0x8A346F: mov     edx, [ecx]
0x8A3471: mov     eax, [edx+8]
0x8A3474: call    eax
0x8A3476: mov     ebx, [esp+0Ch+arg_0]
0x8A347A: cmp     eax, ebx
0x8A347C: jz      short loc_8A34AF
0x8A347E: cmp     eax, 6
0x8A3481: jl      short loc_8A34A1
0x8A3483: cmp     eax, 7
0x8A3486: jg      short loc_8A34A1
0x8A3488: cmp     ebx, 6
0x8A348B: jge     short loc_8A34A1
0x8A348D: mov     ecx, edi
0x8A348F: call    sub_535AC0
0x8A3494: fcomp   dword ptr ds:0A2FAA8h
0x8A349A: fnstsw  ax
0x8A349C: test    ah, 44h
0x8A349F: jnp     short loc_8A34AF
0x8A34A1: mov     ecx, edi
0x8A34A3: call    sub_89F570
0x8A34A8: push    0
0x8A34AA: push    1
0x8A34AC: push    ebx
0x8A34AD: jmp     short loc_8A3456
0x8A34AF: pop     edi
0x8A34B0: pop     esi
0x8A34B1: xor     al, al
0x8A34B3: pop     ebx
0x8A34B4: retn    4
