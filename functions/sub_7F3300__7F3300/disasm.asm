0x7F3300: fld     [esp+arg_0]
0x7F3304: push    esi
0x7F3305: fcom    qword ptr ds:0A2FC80h
0x7F330B: mov     esi, ecx
0x7F330D: fnstsw  ax
0x7F330F: test    ah, 41h
0x7F3312: jnz     short loc_7F331C
0x7F3314: fstp    st
0x7F3316: fld     dword ptr ds:0A2FAACh
0x7F331C: fstp    [esp+4+arg_0]
0x7F3320: push    ecx
0x7F3321: fld     [esp+8+arg_0]
0x7F3325: fmul    [esp+8+arg_8]
0x7F3329: fstp    [esp+8+arg_0]
0x7F332D: fld     [esp+8+arg_0]
0x7F3331: fstp    [esp+8+var_8]; float
0x7F3334: call    sub_7F2AB0
0x7F3339: fld     dword ptr [esi+150h]
0x7F333F: fstp    [esp+4+arg_0]
0x7F3343: fld     [esp+4+arg_0]
0x7F3347: fld     [esp+4+arg_4]
0x7F334B: fcom    st(1)
0x7F334D: fnstsw  ax
0x7F334F: test    ah, 5
0x7F3352: jp      short loc_7F3360
0x7F3354: fstp    st
0x7F3356: fstp    [esp+4+arg_4]
0x7F335A: fld     [esp+4+arg_4]
0x7F335E: jmp     short loc_7F3362
0x7F3360: fstp    st(1)
0x7F3362: mov     eax, [esi+6Ch]
0x7F3365: mov     ecx, [esi+88h]
0x7F336B: mov     edx, [esi+84h]
0x7F3371: shl     ecx, 4
0x7F3374: fld     dword ptr [ecx+eax+4]
0x7F3378: shl     edx, 4
0x7F337B: fstp    dword ptr [esi+90h]
0x7F3381: fld     dword ptr [edx+eax+4]
0x7F3385: fstp    [esp+4+arg_4]
0x7F3389: fld     [esp+4+arg_4]
0x7F338D: fst     dword ptr [esi+18Ch]
0x7F3393: fld     dword ptr [esi+150h]
0x7F3399: fchs
0x7F339B: fcomp   st(1)
0x7F339D: fnstsw  ax
0x7F339F: test    ah, 1
0x7F33A2: jnz     short loc_7F33D1
0x7F33A4: fchs
0x7F33A6: fdiv    dword ptr [esi+150h]
0x7F33AC: call    Double_To_SInt32
0x7F33B1: push    eax
0x7F33B2: mov     ecx, esi
0x7F33B4: call    sub_7F2BA0
0x7F33B9: mov     eax, [esi+84h]
0x7F33BF: mov     ecx, [esi+6Ch]
0x7F33C2: shl     eax, 4
0x7F33C5: fld     dword ptr [eax+ecx+4]
0x7F33C9: fstp    dword ptr [esi+18Ch]
0x7F33CF: jmp     short loc_7F33D3
0x7F33D1: fstp    st
0x7F33D3: fld     dword ptr [esi+90h]
0x7F33D9: fcomp   st(1)
0x7F33DB: fnstsw  ax
0x7F33DD: test    ah, 5
0x7F33E0: jp      short loc_7F3415
0x7F33E2: fsub    dword ptr [esi+90h]
0x7F33E8: fdiv    dword ptr [esi+150h]
0x7F33EE: call    Double_To_SInt32
0x7F33F3: push    eax
0x7F33F4: mov     ecx, esi
0x7F33F6: call    sub_7F3130
0x7F33FB: mov     edx, [esi+88h]
0x7F3401: mov     eax, [esi+6Ch]
0x7F3404: shl     edx, 4
0x7F3407: fld     dword ptr [edx+eax+4]
0x7F340B: fstp    dword ptr [esi+90h]
0x7F3411: pop     esi
0x7F3412: retn    10h
0x7F3415: fadd    dword ptr [esi+150h]
0x7F341B: fld     dword ptr [esi+90h]
0x7F3421: fcomp   st(1)
0x7F3423: fnstsw  ax
0x7F3425: test    ah, 1
0x7F3428: jnz     short loc_7F345D
0x7F342A: fsubr   dword ptr [esi+90h]
0x7F3430: fdiv    dword ptr [esi+150h]
0x7F3436: call    Double_To_SInt32
0x7F343B: push    eax
0x7F343C: mov     ecx, esi
0x7F343E: call    sub_7F2B30
0x7F3443: mov     ecx, [esi+88h]
0x7F3449: mov     edx, [esi+6Ch]
0x7F344C: shl     ecx, 4
0x7F344F: fld     dword ptr [ecx+edx+4]
0x7F3453: fstp    dword ptr [esi+90h]
0x7F3459: pop     esi
0x7F345A: retn    10h
0x7F345D: fstp    st
0x7F345F: pop     esi
0x7F3460: retn    10h
