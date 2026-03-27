0x55A190: mov     edx, [esp+arg_0]
0x55A194: sub     esp, 10h
0x55A197: test    edx, edx
0x55A199: jz      loc_55A3A8
0x55A19F: push    edi
0x55A1A0: mov     edi, [esp+14h+arg_4]
0x55A1A4: test    edi, edi
0x55A1A6: jz      loc_55A3A7
0x55A1AC: fldz
0x55A1AE: fld     [esp+14h+arg_C]
0x55A1B2: fcom    st(1)
0x55A1B4: fnstsw  ax
0x55A1B6: fstp    st(1)
0x55A1B8: test    ah, 41h
0x55A1BB: jnp     loc_55A3A5
0x55A1C1: fld1
0x55A1C3: fcomp   st(1)
0x55A1C5: fnstsw  ax
0x55A1C7: test    ah, 5
0x55A1CA: jnp     loc_55A3A5
0x55A1D0: cmp     dword ptr [ecx+4], 0
0x55A1D4: jz      loc_55A3A5
0x55A1DA: mov     eax, [ecx+8]
0x55A1DD: cmp     edi, eax
0x55A1DF: jnb     short loc_55A1E7
0x55A1E1: mov     [esp+14h+arg_4], edi
0x55A1E5: jmp     short loc_55A1ED
0x55A1E7: mov     [esp+14h+arg_4], eax
0x55A1EB: mov     edi, eax
0x55A1ED: push    ebx
0x55A1EE: xor     ebx, ebx
0x55A1F0: cmp     edi, 4
0x55A1F3: push    esi
0x55A1F4: jl      loc_55A349
0x55A1FA: push    ebp
0x55A1FB: fld     st
0x55A1FD: add     edi, 0FFFFFFFCh
0x55A200: mov     ebx, 4
0x55A205: mov     ebp, 10h
0x55A20A: mov     esi, 0FFFFFFECh
0x55A20F: sub     esi, edx
0x55A211: sub     ebx, edx
0x55A213: sub     ebp, edx
0x55A215: shr     edi, 2
0x55A218: add     edi, 1
0x55A21B: lea     eax, [edx+14h]
0x55A21E: lea     edx, ds:0[edi*4]
0x55A225: mov     [esp+20h+arg_C], esi
0x55A229: mov     [esp+20h+var_10], edx
0x55A22D: jmp     short loc_55A233
0x55A22F: mov     esi, [esp+20h+arg_C]
0x55A233: mov     edx, [ecx+4]
0x55A236: add     esi, eax
0x55A238: fld     dword ptr [edx+esi]
0x55A23B: add     edx, esi
0x55A23D: fmul    st, st(1)
0x55A23F: fstp    [esp+20h+var_C]
0x55A243: fld     dword ptr [edx+4]
0x55A246: fmul    st, st(1)
0x55A248: fstp    [esp+20h+var_8]
0x55A24C: fld     dword ptr [edx+8]
0x55A24F: fmul    st, st(1)
0x55A251: fstp    [esp+20h+var_4]
0x55A255: fld     dword ptr [eax-14h]
0x55A258: fadd    [esp+20h+var_C]
0x55A25C: fstp    dword ptr [eax-14h]
0x55A25F: fld     [esp+20h+var_8]
0x55A263: fadd    dword ptr [eax-10h]
0x55A266: fstp    dword ptr [eax-10h]
0x55A269: fld     dword ptr [eax-0Ch]
0x55A26C: fadd    [esp+20h+var_4]
0x55A270: fstp    dword ptr [eax-0Ch]
0x55A273: mov     edx, [ecx+4]
0x55A276: fld     dword ptr [esi+edx+0Ch]
0x55A27A: lea     edx, [esi+edx+0Ch]
0x55A27E: fmul    st, st(1)
0x55A280: fstp    [esp+20h+var_C]
0x55A284: fld     dword ptr [edx+4]
0x55A287: fmul    st, st(1)
0x55A289: fstp    [esp+20h+var_8]
0x55A28D: fld     dword ptr [edx+8]
0x55A290: lea     edx, [ebx+eax]
0x55A293: fmul    st, st(1)
0x55A295: fstp    [esp+20h+var_4]
0x55A299: fld     dword ptr [eax-8]
0x55A29C: fadd    [esp+20h+var_C]
0x55A2A0: fstp    dword ptr [eax-8]
0x55A2A3: fld     dword ptr [eax-4]
0x55A2A6: fadd    [esp+20h+var_8]
0x55A2AA: fstp    dword ptr [eax-4]
0x55A2AD: fld     dword ptr [eax]
0x55A2AF: fadd    [esp+20h+var_4]
0x55A2B3: fstp    dword ptr [eax]
0x55A2B5: add     edx, [ecx+4]
0x55A2B8: fld     dword ptr [edx]
0x55A2BA: fmul    st, st(1)
0x55A2BC: fstp    [esp+20h+var_C]
0x55A2C0: fld     dword ptr [edx+4]
0x55A2C3: fmul    st, st(1)
0x55A2C5: fstp    [esp+20h+var_8]
0x55A2C9: fld     dword ptr [edx+8]
0x55A2CC: lea     edx, [eax+ebp]
0x55A2CF: fmul    st, st(1)
0x55A2D1: fstp    [esp+20h+var_4]
0x55A2D5: fld     dword ptr [eax+4]
0x55A2D8: fadd    [esp+20h+var_C]
0x55A2DC: fstp    dword ptr [eax+4]
0x55A2DF: fld     [esp+20h+var_8]
0x55A2E3: fadd    dword ptr [eax+8]
0x55A2E6: fstp    dword ptr [eax+8]
0x55A2E9: fld     dword ptr [eax+0Ch]
0x55A2EC: fadd    [esp+20h+var_4]
0x55A2F0: fstp    dword ptr [eax+0Ch]
0x55A2F3: add     edx, [ecx+4]
0x55A2F6: fld     dword ptr [edx]
0x55A2F8: fmul    st, st(1)
0x55A2FA: fstp    [esp+20h+var_C]
0x55A2FE: fld     dword ptr [edx+4]
0x55A301: fmul    st, st(1)
0x55A303: fstp    [esp+20h+var_8]
0x55A307: fld     dword ptr [edx+8]
0x55A30A: fmul    st, st(1)
0x55A30C: fstp    [esp+20h+var_4]
0x55A310: fld     [esp+20h+var_C]
0x55A314: fadd    dword ptr [eax+10h]
0x55A317: fstp    dword ptr [eax+10h]
0x55A31A: fld     dword ptr [eax+14h]
0x55A31D: fadd    [esp+20h+var_8]
0x55A321: fstp    dword ptr [eax+14h]
0x55A324: fld     dword ptr [eax+18h]
0x55A327: fadd    [esp+20h+var_4]
0x55A32B: fstp    dword ptr [eax+18h]
0x55A32E: add     eax, 30h ; '0'
0x55A331: sub     edi, 1
0x55A334: jnz     loc_55A22F
0x55A33A: mov     edi, [esp+20h+arg_4]
0x55A33E: fstp    st
0x55A340: mov     edx, [esp+20h+arg_0]
0x55A344: mov     ebx, [esp+20h+var_10]
0x55A348: pop     ebp
0x55A349: cmp     ebx, edi
0x55A34B: jnb     short loc_55A3A3
0x55A34D: mov     esi, 0FFFFFFF8h
0x55A352: lea     eax, [ebx+ebx*2]
0x55A355: sub     esi, edx
0x55A357: lea     eax, [edx+eax*4+8]
0x55A35B: sub     edi, ebx
0x55A35D: lea     edx, [esi+eax]
0x55A360: add     edx, [ecx+4]
0x55A363: add     eax, 0Ch
0x55A366: sub     edi, 1
0x55A369: fld     dword ptr [edx]
0x55A36B: fmul    st, st(1)
0x55A36D: fstp    [esp+1Ch+var_C]
0x55A371: fld     dword ptr [edx+4]
0x55A374: fmul    st, st(1)
0x55A376: fstp    [esp+1Ch+var_8]
0x55A37A: fld     dword ptr [edx+8]
0x55A37D: fmul    st, st(1)
0x55A37F: fstp    [esp+1Ch+var_4]
0x55A383: fld     dword ptr [eax-14h]
0x55A386: fadd    [esp+1Ch+var_C]
0x55A38A: fstp    dword ptr [eax-14h]
0x55A38D: fld     dword ptr [eax-10h]
0x55A390: fadd    [esp+1Ch+var_8]
0x55A394: fstp    dword ptr [eax-10h]
0x55A397: fld     dword ptr [eax-0Ch]
0x55A39A: fadd    [esp+1Ch+var_4]
0x55A39E: fstp    dword ptr [eax-0Ch]
0x55A3A1: jnz     short loc_55A35D
0x55A3A3: pop     esi
0x55A3A4: pop     ebx
0x55A3A5: fstp    st
0x55A3A7: pop     edi
0x55A3A8: add     esp, 10h
0x55A3AB: retn    10h
