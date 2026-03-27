0x80B300: push    0FFFFFFFFh
0x80B302: push    offset ??0HairShader@@QAE@XZ_SEH
0x80B307: mov     eax, large fs:0
0x80B30D: push    eax
0x80B30E: push    ecx
0x80B30F: push    ebx
0x80B310: push    ebp
0x80B311: push    esi
0x80B312: push    edi
0x80B313: mov     eax, ds:0B30AACh
0x80B318: xor     eax, esp
0x80B31A: push    eax
0x80B31B: lea     eax, [esp+24h+var_C]
0x80B31F: mov     large fs:0, eax
0x80B325: mov     ebx, ecx
0x80B327: mov     [esp+24h+var_10], ebx
0x80B32B: mov     dword ptr [ebx], offset ??_7HairShader@@6B@; const HairShader::`vftable'
0x80B331: mov     ebp, 7
0x80B336: mov     [esp+24h+var_4], ebp
0x80B33A: lea     edi, [ebx+0A4h]
0x80B340: mov     esi, [edi]
0x80B342: test    esi, esi
0x80B344: jz      short loc_80B368
0x80B346: lea     eax, [esi+4]
0x80B349: push    eax; lpAddend
0x80B34A: call    dword ptr ds:0A2807Ch
0x80B350: test    eax, eax
0x80B352: jnz     short loc_80B362
0x80B354: test    esi, esi
0x80B356: jz      short loc_80B362
0x80B358: mov     edx, [esi]
0x80B35A: mov     eax, [edx]
0x80B35C: push    1
0x80B35E: mov     ecx, esi
0x80B360: call    eax
0x80B362: mov     dword ptr [edi], 0
0x80B368: add     edi, 4
0x80B36B: sub     ebp, 1
0x80B36E: jnz     short loc_80B340
0x80B370: lea     edi, [ebx+0CCh]
0x80B376: mov     ebp, 7
0x80B37B: jmp     short loc_80B380
0x80B37D: align 10h
0x80B380: mov     esi, [edi]
0x80B382: test    esi, esi
0x80B384: jz      short loc_80B3A8
0x80B386: lea     ecx, [esi+4]
0x80B389: push    ecx; lpAddend
0x80B38A: call    dword ptr ds:0A2807Ch
0x80B390: test    eax, eax
0x80B392: jnz     short loc_80B3A2
0x80B394: test    esi, esi
0x80B396: jz      short loc_80B3A2
0x80B398: mov     edx, [esi]
0x80B39A: mov     eax, [edx]
0x80B39C: push    1
0x80B39E: mov     ecx, esi
0x80B3A0: call    eax
0x80B3A2: mov     dword ptr [edi], 0
0x80B3A8: add     edi, 4
0x80B3AB: sub     ebp, 1
0x80B3AE: jnz     short loc_80B380
0x80B3B0: lea     edi, [ebx+0C0h]
0x80B3B6: mov     ebp, 3
0x80B3BB: jmp     short loc_80B3C0
0x80B3BD: align 10h
0x80B3C0: mov     esi, [edi]
0x80B3C2: test    esi, esi
0x80B3C4: jz      short loc_80B3E8
0x80B3C6: lea     ecx, [esi+4]
0x80B3C9: push    ecx; lpAddend
0x80B3CA: call    dword ptr ds:0A2807Ch
0x80B3D0: test    eax, eax
0x80B3D2: jnz     short loc_80B3E2
0x80B3D4: test    esi, esi
0x80B3D6: jz      short loc_80B3E2
0x80B3D8: mov     edx, [esi]
0x80B3DA: mov     eax, [edx]
0x80B3DC: push    1
0x80B3DE: mov     ecx, esi
0x80B3E0: call    eax
0x80B3E2: mov     dword ptr [edi], 0
0x80B3E8: add     edi, 4
0x80B3EB: sub     ebp, 1
0x80B3EE: jnz     short loc_80B3C0
0x80B3F0: lea     edi, [ebx+0E8h]
0x80B3F6: mov     ebp, 3
0x80B3FB: jmp     short loc_80B400
0x80B3FD: align 10h
0x80B400: mov     esi, [edi]
0x80B402: test    esi, esi
0x80B404: jz      short loc_80B428
0x80B406: lea     ecx, [esi+4]
0x80B409: push    ecx; lpAddend
0x80B40A: call    dword ptr ds:0A2807Ch
0x80B410: test    eax, eax
0x80B412: jnz     short loc_80B422
0x80B414: test    esi, esi
0x80B416: jz      short loc_80B422
0x80B418: mov     edx, [esi]
0x80B41A: mov     eax, [edx]
0x80B41C: push    1
0x80B41E: mov     ecx, esi
0x80B420: call    eax
0x80B422: mov     dword ptr [edi], 0
0x80B428: add     edi, 4
0x80B42B: sub     ebp, 1
0x80B42E: jnz     short loc_80B400
0x80B430: lea     ebp, [ebx+9Ch]
0x80B436: mov     esi, ebp
0x80B438: mov     edi, 2
0x80B43D: lea     ecx, [ecx+0]
0x80B440: mov     ecx, [esi]
0x80B442: test    ecx, ecx
0x80B444: jz      short loc_80B457
0x80B446: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x80B44A: jnz     short loc_80B451
0x80B44C: call    sub_7604D0
0x80B451: mov     dword ptr [esi], 0
0x80B457: add     esi, 4
0x80B45A: sub     edi, 1
0x80B45D: jnz     short loc_80B440
0x80B45F: mov     byte ptr [ebx+78h], 0
0x80B463: mov     esi, [ebx+0F4h]
0x80B469: test    esi, esi
0x80B46B: jz      short loc_80B493
0x80B46D: lea     ecx, [esi+4]
0x80B470: push    ecx; lpAddend
0x80B471: call    dword ptr ds:0A2807Ch
0x80B477: test    eax, eax
0x80B479: jnz     short loc_80B489
0x80B47B: test    esi, esi
0x80B47D: jz      short loc_80B489
0x80B47F: mov     edx, [esi]
0x80B481: mov     eax, [edx]
0x80B483: push    1
0x80B485: mov     ecx, esi
0x80B487: call    eax
0x80B489: mov     dword ptr [ebx+0F4h], 0
0x80B493: mov     esi, [ebx+0F8h]
0x80B499: test    esi, esi
0x80B49B: jz      short loc_80B4C3
0x80B49D: lea     ecx, [esi+4]
0x80B4A0: push    ecx; lpAddend
0x80B4A1: call    dword ptr ds:0A2807Ch
0x80B4A7: test    eax, eax
0x80B4A9: jnz     short loc_80B4B9
0x80B4AB: test    esi, esi
0x80B4AD: jz      short loc_80B4B9
0x80B4AF: mov     edx, [esi]
0x80B4B1: mov     eax, [edx]
0x80B4B3: push    1
0x80B4B5: mov     ecx, esi
0x80B4B7: call    eax
0x80B4B9: mov     dword ptr [ebx+0F8h], 0
0x80B4C3: or      edi, 0FFFFFFFFh
0x80B4C6: mov     [ebx+74h], edi
0x80B4C9: mov     esi, [ebx+0F8h]
0x80B4CF: test    esi, esi
0x80B4D1: mov     byte ptr [esp+24h+var_4], 6
0x80B4D6: jz      short loc_80B4F4
0x80B4D8: lea     ecx, [esi+4]
0x80B4DB: push    ecx; lpAddend
0x80B4DC: call    dword ptr ds:0A2807Ch
0x80B4E2: test    eax, eax
0x80B4E4: jnz     short loc_80B4F4
0x80B4E6: test    esi, esi
0x80B4E8: jz      short loc_80B4F4
0x80B4EA: mov     edx, [esi]
0x80B4EC: mov     eax, [edx]
0x80B4EE: push    1
0x80B4F0: mov     ecx, esi
0x80B4F2: call    eax
0x80B4F4: mov     esi, [ebx+0F4h]
0x80B4FA: test    esi, esi
0x80B4FC: mov     byte ptr [esp+24h+var_4], 5
0x80B501: jz      short loc_80B51F
0x80B503: lea     ecx, [esi+4]
0x80B506: push    ecx; lpAddend
0x80B507: call    dword ptr ds:0A2807Ch
0x80B50D: test    eax, eax
0x80B50F: jnz     short loc_80B51F
0x80B511: test    esi, esi
0x80B513: jz      short loc_80B51F
0x80B515: mov     edx, [esi]
0x80B517: mov     eax, [edx]
0x80B519: push    1
0x80B51B: mov     ecx, esi
0x80B51D: call    eax
0x80B51F: push    offset sub_7016A0; void (__thiscall *)(void *)
0x80B524: push    3; int
0x80B526: push    4; unsigned int
0x80B528: lea     eax, [ebx+0E8h]
0x80B52E: push    eax; void *
0x80B52F: mov     byte ptr [esp+34h+var_4], 4
0x80B534: call    $LN21
0x80B539: push    offset sub_7016A0; void (__thiscall *)(void *)
0x80B53E: push    7; int
0x80B540: push    4; unsigned int
0x80B542: lea     eax, [ebx+0CCh]
0x80B548: push    eax; void *
0x80B549: mov     byte ptr [esp+34h+var_4], 3
0x80B54E: call    $LN21
0x80B553: push    offset sub_7016A0; void (__thiscall *)(void *)
0x80B558: push    3; int
0x80B55A: push    4; unsigned int
0x80B55C: lea     eax, [ebx+0C0h]
0x80B562: push    eax; void *
0x80B563: mov     byte ptr [esp+34h+var_4], 2
0x80B568: call    $LN21
0x80B56D: push    offset sub_7016A0; void (__thiscall *)(void *)
0x80B572: push    7; int
0x80B574: push    4; unsigned int
0x80B576: lea     eax, [ebx+0A4h]
0x80B57C: push    eax; void *
0x80B57D: mov     byte ptr [esp+34h+var_4], 1
0x80B582: call    $LN21
0x80B587: push    offset sub_4027D0; void (__thiscall *)(void *)
0x80B58C: push    2; int
0x80B58E: push    4; unsigned int
0x80B590: push    ebp; void *
0x80B591: mov     byte ptr [esp+34h+var_4], 0
0x80B596: call    $LN21
0x80B59B: mov     ecx, ebx; this
0x80B59D: mov     [esp+24h+var_4], edi
0x80B5A1: call    ??1ShadowLightShader@@UAE@XZ; ShadowLightShader::~ShadowLightShader(void)
0x80B5A6: mov     ecx, dword ptr [esp+24h+var_C]
0x80B5AA: mov     large fs:0, ecx
0x80B5B1: pop     ecx
0x80B5B2: pop     edi
0x80B5B3: pop     esi
0x80B5B4: pop     ebp
0x80B5B5: pop     ebx
0x80B5B6: add     esp, 10h
0x80B5B9: retn
