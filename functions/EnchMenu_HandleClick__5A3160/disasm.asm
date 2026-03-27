0x5A3160: push    ebx
0x5A3161: push    esi
0x5A3162: mov     esi, ecx
0x5A3164: mov     ecx, [esi+98h]
0x5A316A: push    edi
0x5A316B: call    sub_57D2F0
0x5A3170: test    al, al
0x5A3172: mov     edi, [esp+0Ch+arg_0]
0x5A3176: jz      short loc_5A3187
0x5A3178: mov     ecx, [esi+98h]
0x5A317E: push    0
0x5A3180: call    sub_57DD90
0x5A3185: jmp     short loc_5A3198
0x5A3187: cmp     edi, 2
0x5A318A: jz      short loc_5A3191
0x5A318C: cmp     edi, 18h
0x5A318F: jnz     short loc_5A31CA
0x5A3191: mov     ecx, esi
0x5A3193: call    sub_5A1600
0x5A3198: mov     ecx, [esi+98h]
0x5A319E: call    sub_580120
0x5A31A3: mov     ecx, [esi+3Ch]
0x5A31A6: push    eax
0x5A31A7: push    0FDEh
0x5A31AC: call    Tile_SetString
0x5A31B1: mov     ecx, [esi+98h]
0x5A31B7: call    NiRenderTargetGroup__GetRenderTargetsNum
0x5A31BC: mov     ecx, [esi+28h]
0x5A31BF: push    0; a3
0x5A31C1: push    eax; a2
0x5A31C2: add     ecx, 1Ch; this
0x5A31C5: call    BSStringT_Set
0x5A31CA: mov     ebx, [esp+0Ch+arg_4]
0x5A31CE: lea     eax, [edi-0Eh]; switch 9 cases
0x5A31D1: cmp     eax, 8
0x5A31D4: ja      EnchMenu_HandleClick___def_5A31DA; jumptable 005A31DA default case, cases 16-19,21
0x5A31DA: jmp     ds:jpt_5A31DA[eax*4]; switch jump
0x5A31E1: mov     ecx, [esi+28h]; jumptable 005A31DA case 15
0x5A31E4: test    ecx, ecx
0x5A31E6: jz      short loc_5A31F1
0x5A31E8: mov     eax, [ecx]
0x5A31EA: mov     edx, [eax+10h]
0x5A31ED: push    1
0x5A31EF: call    edx
0x5A31F1: call    sub_5A1740
0x5A31F6: mov     edx, [esi]
0x5A31F8: mov     eax, [edx+14h]
0x5A31FB: push    ebx
0x5A31FC: push    edi
0x5A31FD: mov     ecx, esi
0x5A31FF: call    eax
0x5A3201: pop     edi
0x5A3202: pop     esi
0x5A3203: pop     ebx
0x5A3204: retn    8
0x5A3207: push    0; jumptable 005A31DA case 20
0x5A3209: push    0
0x5A320B: push    0
0x5A320D: push    4
0x5A320F: call    sub_5D2070
0x5A3214: mov     edx, [esi]
0x5A3216: mov     eax, [edx+14h]
0x5A3219: add     esp, 10h
0x5A321C: push    ebx
0x5A321D: push    edi
0x5A321E: mov     ecx, esi
0x5A3220: call    eax
0x5A3222: pop     edi
0x5A3223: pop     esi
0x5A3224: pop     ebx
0x5A3225: retn    8
0x5A3228: push    0; jumptable 005A31DA case 22
0x5A322A: push    0
0x5A322C: push    0
0x5A322E: push    5
0x5A3230: call    sub_5D2070
0x5A3235: mov     edx, [esi]
0x5A3237: mov     eax, [edx+14h]
0x5A323A: add     esp, 10h
0x5A323D: push    ebx
0x5A323E: push    edi
0x5A323F: mov     ecx, esi
0x5A3241: call    eax
0x5A3243: pop     edi
0x5A3244: pop     esi
0x5A3245: pop     ebx
0x5A3246: retn    8
0x5A3249: mov     ecx, esi; jumptable 005A31DA case 14
0x5A324B: call    sub_5A2D30
0x5A3250: mov     edx, [esi]
0x5A3252: mov     eax, [edx+14h]
0x5A3255: push    ebx
0x5A3256: push    edi
0x5A3257: mov     ecx, esi
0x5A3259: call    eax
0x5A325B: pop     edi
0x5A325C: pop     esi
0x5A325D: pop     ebx
0x5A325E: retn    8
0x5A3261: cmp     edi, 3E8h; jumptable 005A31DA default case, cases 16-19,21
0x5A3267: jl      short loc_5A32BC
0x5A3269: cmp     edi, 0BB8h
0x5A326F: jge     short loc_5A32C4
0x5A3271: cmp     dword ptr [esi+30h], 0
0x5A3275: jz      short loc_5A3290
0x5A3277: push    ebx
0x5A3278: mov     ecx, esi
0x5A327A: call    sub_5A3020
0x5A327F: mov     edx, [esi]
0x5A3281: mov     eax, [edx+14h]
0x5A3284: push    ebx
0x5A3285: push    edi
0x5A3286: mov     ecx, esi
0x5A3288: call    eax
0x5A328A: pop     edi
0x5A328B: pop     esi
0x5A328C: pop     ebx
0x5A328D: retn    8
0x5A3290: mov     eax, ds:0B389B0h
0x5A3295: sub     esp, 8
0x5A3298: mov     ecx, esp
0x5A329A: mov     [esp+14h+arg_0], esp
0x5A329E: push    eax
0x5A329F: call    BSStringT_constr_str
0x5A32A4: mov     ecx, esi
0x5A32A6: call    ShowMessageBox??
0x5A32AB: mov     edx, [esi]
0x5A32AD: mov     eax, [edx+14h]
0x5A32B0: push    ebx
0x5A32B1: push    edi
0x5A32B2: mov     ecx, esi
0x5A32B4: call    eax
0x5A32B6: pop     edi
0x5A32B7: pop     esi
0x5A32B8: pop     ebx
0x5A32B9: retn    8
0x5A32BC: cmp     edi, 0BB8h
0x5A32C2: jl      short loc_5A32CC
0x5A32C4: push    ebx
0x5A32C5: mov     ecx, esi
0x5A32C7: call    sub_5A1E10
0x5A32CC: mov     edx, [esi]
0x5A32CE: mov     eax, [edx+14h]
0x5A32D1: push    ebx
0x5A32D2: push    edi
0x5A32D3: mov     ecx, esi
0x5A32D5: call    eax
0x5A32D7: pop     edi
0x5A32D8: pop     esi
0x5A32D9: pop     ebx
0x5A32DA: retn    8
