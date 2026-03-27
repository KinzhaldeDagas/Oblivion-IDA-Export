0x7A3280: mov     eax, [esp+arg_C]
0x7A3284: push    ebx
0x7A3285: push    esi
0x7A3286: mov     esi, ecx
0x7A3288: mov     ecx, [eax]
0x7A328A: mov     [esp+8+arg_C], ecx
0x7A328E: mov     ecx, [esi+4]
0x7A3291: test    ecx, ecx
0x7A3293: push    edi
0x7A3294: jnz     short loc_7A329A
0x7A3296: xor     edi, edi
0x7A3298: jmp     short loc_7A32A2
0x7A329A: mov     edi, [esi+0Ch]
0x7A329D: sub     edi, ecx
0x7A329F: sar     edi, 2
0x7A32A2: mov     ebx, [esp+0Ch+arg_8]
0x7A32A6: test    ebx, ebx
0x7A32A8: jz      loc_7A342F
0x7A32AE: test    ecx, ecx
0x7A32B0: jnz     short loc_7A32B6
0x7A32B2: xor     eax, eax
0x7A32B4: jmp     short loc_7A32BE
0x7A32B6: mov     eax, [esi+8]
0x7A32B9: sub     eax, ecx
0x7A32BB: sar     eax, 2
0x7A32BE: mov     edx, 3FFFFFFFh
0x7A32C3: sub     edx, eax
0x7A32C5: cmp     edx, ebx
0x7A32C7: jnb     short loc_7A32CE
0x7A32C9: call    sub_790B90
0x7A32CE: test    ecx, ecx
0x7A32D0: jnz     short loc_7A32D6
0x7A32D2: xor     eax, eax
0x7A32D4: jmp     short loc_7A32DE
0x7A32D6: mov     eax, [esi+8]
0x7A32D9: sub     eax, ecx
0x7A32DB: sar     eax, 2
0x7A32DE: add     eax, ebx
0x7A32E0: cmp     edi, eax
0x7A32E2: push    ebp
0x7A32E3: jnb     loc_7A339D
0x7A32E9: mov     eax, edi
0x7A32EB: shr     eax, 1
0x7A32ED: mov     edx, 3FFFFFFFh
0x7A32F2: sub     edx, eax
0x7A32F4: cmp     edx, edi
0x7A32F6: jnb     short loc_7A32FC
0x7A32F8: xor     edi, edi
0x7A32FA: jmp     short loc_7A32FE
0x7A32FC: add     edi, eax
0x7A32FE: test    ecx, ecx
0x7A3300: jnz     short loc_7A3306
0x7A3302: xor     eax, eax
0x7A3304: jmp     short loc_7A330E
0x7A3306: mov     eax, [esi+8]
0x7A3309: sub     eax, ecx
0x7A330B: sar     eax, 2
0x7A330E: add     eax, ebx
0x7A3310: cmp     edi, eax
0x7A3312: jnb     short loc_7A3326
0x7A3314: test    ecx, ecx
0x7A3316: jnz     short loc_7A331C
0x7A3318: xor     edi, edi
0x7A331A: jmp     short loc_7A3324
0x7A331C: mov     edi, [esi+8]
0x7A331F: sub     edi, ecx
0x7A3321: sar     edi, 2
0x7A3324: add     edi, ebx
0x7A3326: push    0
0x7A3328: push    edi; char *
0x7A3329: call    sub_78FB60
0x7A332E: mov     ecx, [esi+4]
0x7A3331: add     esp, 8
0x7A3334: mov     ebp, eax
0x7A3336: mov     eax, [esp+10h+Src]
0x7A333A: push    ebp; Dst
0x7A333B: push    eax; int
0x7A333C: push    ecx; Src
0x7A333D: mov     ecx, esi
0x7A333F: call    sub_7A25C0
0x7A3344: lea     edx, [esp+10h+arg_C]
0x7A3348: push    edx
0x7A3349: push    ebx
0x7A334A: push    eax
0x7A334B: mov     ecx, esi
0x7A334D: call    sub_790B60
0x7A3352: mov     ecx, [esp+10h+Src]
0x7A3356: push    eax; Dst
0x7A3357: mov     eax, [esi+8]
0x7A335A: push    eax; int
0x7A335B: push    ecx; Src
0x7A335C: mov     ecx, esi
0x7A335E: call    sub_7A25C0
0x7A3363: mov     eax, [esi+4]
0x7A3366: test    eax, eax
0x7A3368: jnz     short loc_7A336E
0x7A336A: xor     ecx, ecx
0x7A336C: jmp     short loc_7A3376
0x7A336E: mov     ecx, [esi+8]
0x7A3371: sub     ecx, eax
0x7A3373: sar     ecx, 2
0x7A3376: add     ebx, ecx
0x7A3378: test    eax, eax
0x7A337A: jz      short loc_7A3385
0x7A337C: push    eax
0x7A337D: call    FormHeapFree
0x7A3382: add     esp, 4
0x7A3385: lea     edx, [ebp+edi*4+0]
0x7A3389: lea     eax, [ebp+ebx*4+0]
0x7A338D: mov     [esi+4], ebp
0x7A3390: pop     ebp
0x7A3391: pop     edi
0x7A3392: mov     [esi+0Ch], edx
0x7A3395: mov     [esi+8], eax
0x7A3398: pop     esi
0x7A3399: pop     ebx
0x7A339A: retn    10h
0x7A339D: mov     ebp, [esi+8]
0x7A33A0: mov     edi, [esp+10h+Src]
0x7A33A4: mov     ecx, ebp
0x7A33A6: sub     ecx, edi
0x7A33A8: sar     ecx, 2
0x7A33AB: lea     eax, ds:0[ebx*4]
0x7A33B2: cmp     ecx, ebx
0x7A33B4: mov     [esp+10h+arg_8], eax
0x7A33B8: mov     ecx, esi
0x7A33BA: jnb     short loc_7A3402
0x7A33BC: add     eax, edi
0x7A33BE: push    eax; Dst
0x7A33BF: push    ebp; int
0x7A33C0: push    edi; Src
0x7A33C1: call    sub_7A25C0
0x7A33C6: mov     eax, [esi+8]
0x7A33C9: mov     ecx, eax
0x7A33CB: sub     ecx, edi
0x7A33CD: sar     ecx, 2
0x7A33D0: lea     edx, [esp+10h+arg_C]
0x7A33D4: push    edx
0x7A33D5: sub     ebx, ecx
0x7A33D7: push    ebx
0x7A33D8: push    eax
0x7A33D9: mov     ecx, esi
0x7A33DB: call    sub_790B60
0x7A33E0: mov     eax, [esp+10h+arg_8]
0x7A33E4: add     [esi+8], eax
0x7A33E7: mov     esi, [esi+8]
0x7A33EA: lea     edx, [esp+10h+arg_C]
0x7A33EE: push    edx
0x7A33EF: sub     esi, eax
0x7A33F1: push    esi
0x7A33F2: push    edi
0x7A33F3: call    sub_790490
0x7A33F8: add     esp, 0Ch
0x7A33FB: pop     ebp
0x7A33FC: pop     edi
0x7A33FD: pop     esi
0x7A33FE: pop     ebx
0x7A33FF: retn    10h
0x7A3402: push    ebp; Dst
0x7A3403: mov     ebx, ebp
0x7A3405: sub     ebx, eax
0x7A3407: push    ebp; int
0x7A3408: push    ebx; Src
0x7A3409: call    sub_7A25C0
0x7A340E: push    ebp; int
0x7A340F: push    ebx; int
0x7A3410: push    edi; Src
0x7A3411: mov     [esi+8], eax
0x7A3414: call    sub_5254A0
0x7A3419: mov     ecx, [esp+1Ch+arg_8]
0x7A341D: lea     eax, [esp+1Ch+arg_C]
0x7A3421: push    eax
0x7A3422: add     ecx, edi
0x7A3424: push    ecx
0x7A3425: push    edi
0x7A3426: call    sub_790490
0x7A342B: add     esp, 18h
0x7A342E: pop     ebp
0x7A342F: pop     edi
0x7A3430: pop     esi
0x7A3431: pop     ebx
0x7A3432: retn    10h
