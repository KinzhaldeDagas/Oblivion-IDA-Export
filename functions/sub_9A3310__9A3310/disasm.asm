0x9A3310: sub     esp, 10h
0x9A3313: push    ebx
0x9A3314: push    esi
0x9A3315: mov     esi, [esp+18h+arg_4]
0x9A3319: push    edi
0x9A331A: mov     edi, [esi+10h]
0x9A331D: lea     eax, [edi-1]; switch 12 cases
0x9A3320: xor     ebx, ebx
0x9A3322: cmp     eax, 0Bh
0x9A3325: ja      def_9A332B
0x9A332B: jmp     ds:jpt_9A332B[eax*4]; switch jump
0x9A3332: mov     ecx, [esp+1Ch+arg_0]; jumptable 009A332B cases 1,2
0x9A3336: mov     eax, [ecx]
0x9A3338: mov     edx, [eax+30h]
0x9A333B: push    0
0x9A333D: push    0
0x9A333F: jmp     loc_9A353A
0x9A3344: mov     eax, off_B329E4; jumptable 009A332B cases 3-7
0x9A3349: mov     ecx, [esp+1Ch+arg_8]
0x9A334D: push    eax
0x9A334E: call    NiObjectNET_GetExtraData
0x9A3353: test    eax, eax
0x9A3355: jnz     short loc_9A3365
0x9A3357: pop     edi
0x9A3358: pop     esi
0x9A3359: mov     eax, 80000010h
0x9A335E: pop     ebx
0x9A335F: add     esp, 10h
0x9A3362: retn    2Ch ; ','
0x9A3365: fld     dword ptr [eax+0Ch]
0x9A3368: lea     eax, [edi-3]; switch 5 cases
0x9A336B: cmp     eax, 4
0x9A336E: fstp    [esp+1Ch+arg_18]
0x9A3372: ja      def_9A3378
0x9A3378: jmp     ds:jpt_9A3378[eax*4]; switch jump
0x9A337F: fld     [esp+1Ch+arg_18]; jumptable 009A3378 case 3
0x9A3383: fst     [esp+1Ch+var_10]
0x9A3387: fst     [esp+1Ch+var_C]
0x9A338B: fst     [esp+1Ch+var_8]
0x9A338F: jmp     loc_9A3526
0x9A3394: fld     [esp+1Ch+arg_18]; jumptable 009A3378 case 4
0x9A3398: call    __CIsin
0x9A339D: fstp    [esp+1Ch+arg_18]
0x9A33A1: fld     [esp+1Ch+arg_18]
0x9A33A5: fstp    [esp+1Ch+arg_18]
0x9A33A9: fld     [esp+1Ch+arg_18]
0x9A33AD: fst     [esp+1Ch+var_10]
0x9A33B1: fst     [esp+1Ch+var_C]
0x9A33B5: fst     [esp+1Ch+var_8]
0x9A33B9: jmp     loc_9A3526
0x9A33BE: fld     [esp+1Ch+arg_18]; jumptable 009A3378 case 5
0x9A33C2: call    __CIcos
0x9A33C7: fstp    [esp+1Ch+arg_18]
0x9A33CB: fld     [esp+1Ch+arg_18]
0x9A33CF: fstp    [esp+1Ch+arg_18]
0x9A33D3: fld     [esp+1Ch+arg_18]
0x9A33D7: fst     [esp+1Ch+var_10]
0x9A33DB: fst     [esp+1Ch+var_C]
0x9A33DF: fst     [esp+1Ch+var_8]
0x9A33E3: jmp     loc_9A3526
0x9A33E8: fld     [esp+1Ch+arg_18]; jumptable 009A3378 case 6
0x9A33EC: call    __CItan
0x9A33F1: fstp    [esp+1Ch+arg_18]
0x9A33F5: fld     [esp+1Ch+arg_18]
0x9A33F9: fstp    [esp+1Ch+arg_18]
0x9A33FD: fld     [esp+1Ch+arg_18]
0x9A3401: fst     [esp+1Ch+var_10]
0x9A3405: fst     [esp+1Ch+var_C]
0x9A3409: fst     [esp+1Ch+var_8]
0x9A340D: jmp     loc_9A3526
0x9A3412: fld     [esp+1Ch+arg_18]; jumptable 009A3378 case 7
0x9A3416: fst     [esp+1Ch+var_10]
0x9A341A: call    __CIsin
0x9A341F: fstp    [esp+1Ch+arg_4]
0x9A3423: fld     [esp+1Ch+arg_4]
0x9A3427: fstp    [esp+1Ch+var_C]
0x9A342B: fld     [esp+1Ch+arg_18]
0x9A342F: call    __CIcos
0x9A3434: fstp    [esp+1Ch+arg_4]
0x9A3438: fld     [esp+1Ch+arg_4]
0x9A343C: fstp    [esp+1Ch+var_8]
0x9A3440: fld     [esp+1Ch+arg_18]
0x9A3444: call    __CItan
0x9A3449: fstp    [esp+1Ch+arg_18]
0x9A344D: fld     [esp+1Ch+arg_18]
0x9A3451: jmp     loc_9A3526
