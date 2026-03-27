0x8C22F0: push    0FFFFFFFFh
0x8C22F2: push    offset SEH_8C22F0
0x8C22F7: mov     eax, large fs:0
0x8C22FD: push    eax
0x8C22FE: sub     esp, 30h
0x8C2301: push    ebx
0x8C2302: push    esi
0x8C2303: push    edi
0x8C2304: mov     eax, ds:0B30AACh
0x8C2309: xor     eax, esp
0x8C230B: push    eax
0x8C230C: lea     eax, [esp+4Ch+var_C]
0x8C2310: mov     large fs:0, eax
0x8C2316: xor     ebx, ebx
0x8C2318: mov     [esp+4Ch+var_24], ebx
0x8C231C: mov     [esp+4Ch+var_1C], ebx
0x8C2320: mov     [esp+4Ch+var_18], ebx
0x8C2324: mov     [esp+4Ch+var_20], 1
0x8C232C: mov     [esp+4Ch+var_28], offset ??_7hkFixedConstraintCinfo@@6B@; const hkFixedConstraintCinfo::`vftable'
0x8C2334: mov     esi, [esp+4Ch+arg_0]
0x8C2338: mov     eax, [esi]
0x8C233A: mov     edx, [eax+8Ch]
0x8C2340: mov     ecx, esi
0x8C2342: mov     [esp+4Ch+var_4], ebx
0x8C2346: call    edx
0x8C2348: cmp     eax, ebx
0x8C234A: jz      short loc_8C2351
0x8C234C: mov     edi, [eax+0Ch]
0x8C234F: jmp     short loc_8C2353
0x8C2351: xor     edi, edi
0x8C2353: mov     eax, [esi]
0x8C2355: mov     edx, [eax+88h]
0x8C235B: mov     ecx, esi
0x8C235D: call    edx
0x8C235F: cmp     eax, ebx
0x8C2361: jz      short loc_8C2373
0x8C2363: mov     eax, [eax+0Ch]
0x8C2366: cmp     eax, ebx
0x8C2368: jz      short loc_8C2373
0x8C236A: mov     eax, [eax+8]
0x8C236D: mov     [esp+4Ch+var_1C], eax
0x8C2371: jmp     short loc_8C2377
0x8C2373: mov     [esp+4Ch+var_1C], ebx
0x8C2377: cmp     edi, ebx
0x8C2379: jz      short loc_8C2384
0x8C237B: mov     ecx, [edi+8]
0x8C237E: mov     [esp+4Ch+var_18], ecx
0x8C2382: jmp     short loc_8C2388
0x8C2384: mov     [esp+4Ch+var_18], ebx
0x8C2388: mov     edx, [esi]
0x8C238A: mov     eax, [edx+88h]
0x8C2390: mov     ecx, esi
0x8C2392: call    eax
0x8C2394: cmp     eax, ebx
0x8C2396: lea     ecx, [esp+4Ch+var_28]
0x8C239A: jz      short loc_8C23A5
0x8C239C: mov     eax, [eax+50h]
0x8C239F: add     eax, 10h
0x8C23A2: push    eax
0x8C23A3: jmp     short loc_8C23AA
0x8C23A5: push    offset xmmword_B2F090
0x8C23AA: call    sub_8C21D0
0x8C23AF: fld1
0x8C23B1: fcomp   [esp+4Ch+arg_4]
0x8C23B5: mov     edi, offset ??_7hkConstraintCinfo@@6B@; const hkConstraintCinfo::`vftable'
0x8C23BA: fnstsw  ax
0x8C23BC: test    ah, 41h
0x8C23BF: jnz     loc_8C246A
0x8C23C5: mov     [esp+4Ch+var_38], ebx
0x8C23C9: mov     [esp+4Ch+var_30], ebx
0x8C23CD: mov     [esp+4Ch+var_2C], ebx
0x8C23D1: mov     [esp+4Ch+var_34], 1
0x8C23D9: mov     [esp+4Ch+var_3C], offset ??_7hkMalleableConstraintCinfo@@6B@; const hkMalleableConstraintCinfo::`vftable'
0x8C23E1: lea     ecx, [esp+4Ch+var_3C]
0x8C23E5: mov     byte ptr [esp+4Ch+var_4], 1
0x8C23EA: call    sub_8BEEC0
0x8C23EF: mov     ecx, [esp+4Ch+var_24]
0x8C23F3: push    ecx
0x8C23F4: lea     ecx, [esp+50h+var_3C]
0x8C23F8: call    sub_8BEF00
0x8C23FD: fld1
0x8C23FF: mov     edx, [esp+4Ch+var_1C]
0x8C2403: mov     eax, [esp+4Ch+var_18]
0x8C2407: push    ecx
0x8C2408: lea     ecx, [esp+50h+var_3C]
0x8C240C: fstp    [esp+50h+var_50]; float
0x8C240F: mov     [esp+50h+var_30], edx
0x8C2413: mov     [esp+50h+var_2C], eax
0x8C2417: call    sub_8BEDE0
0x8C241C: fld     [esp+4Ch+arg_4]
0x8C2420: push    ecx
0x8C2421: lea     ecx, [esp+50h+var_3C]
0x8C2425: fstp    [esp+50h+var_50]; float
0x8C2428: call    sub_8BEE00
0x8C242D: push    10h; Size
0x8C242F: call    FormHeapAlloc
0x8C2434: add     esp, 4
0x8C2437: mov     [esp+4Ch+arg_4], eax
0x8C243B: cmp     eax, ebx
0x8C243D: mov     byte ptr [esp+4Ch+var_4], 2
0x8C2442: jz      short loc_8C2452
0x8C2444: lea     ecx, [esp+4Ch+var_3C]
0x8C2448: push    ecx
0x8C2449: mov     ecx, eax
0x8C244B: call    sub_8C1E10
0x8C2450: jmp     short loc_8C2454
0x8C2452: xor     eax, eax
0x8C2454: push    ebx
0x8C2455: lea     ecx, [esp+50h+var_3C]
0x8C2459: mov     esi, eax
0x8C245B: mov     byte ptr [esp+50h+var_4], bl
0x8C245F: mov     [esp+50h+var_3C], edi
0x8C2463: call    sub_8A0200
0x8C2468: jmp     short loc_8C2493
0x8C246A: push    10h; Size
0x8C246C: call    FormHeapAlloc
0x8C2471: add     esp, 4
0x8C2474: mov     [esp+4Ch+arg_4], eax
0x8C2478: cmp     eax, ebx
0x8C247A: mov     byte ptr [esp+4Ch+var_4], 3
0x8C247F: jz      short loc_8C248F
0x8C2481: lea     edx, [esp+4Ch+var_28]
0x8C2485: push    edx
0x8C2486: mov     ecx, eax
0x8C2488: call    sub_8C1D80
0x8C248D: jmp     short loc_8C2491
0x8C248F: xor     eax, eax
0x8C2491: mov     esi, eax
0x8C2493: push    ebx
0x8C2494: lea     ecx, [esp+50h+var_28]
0x8C2498: mov     [esp+50h+var_4], 0FFFFFFFFh
0x8C24A0: mov     [esp+50h+var_28], edi
0x8C24A4: call    sub_8A0200
0x8C24A9: mov     eax, esi
0x8C24AB: mov     ecx, [esp+4Ch+var_C]
0x8C24AF: mov     large fs:0, ecx
0x8C24B6: pop     ecx
0x8C24B7: pop     edi
0x8C24B8: pop     esi
0x8C24B9: pop     ebx
0x8C24BA: add     esp, 3Ch
0x8C24BD: retn
