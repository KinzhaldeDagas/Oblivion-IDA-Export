0x7A7460: push    ebp
0x7A7461: mov     ebp, esp
0x7A7463: and     esp, 0FFFFFFF8h
0x7A7466: sub     esp, 10h
0x7A7469: push    esi
0x7A746A: mov     esi, ecx
0x7A746C: cmp     byte ptr [esi+10h], 0
0x7A7470: push    edi
0x7A7471: jz      short loc_7A747A
0x7A7473: push    1
0x7A7475: call    sub_7A71D0
0x7A747A: fld1
0x7A747C: mov     ecx, esi
0x7A747E: fstp    dword ptr [esp+18h+var_C]
0x7A7482: call    sub_7A6FD0
0x7A7487: fstp    [esp+18h+var_10]
0x7A748B: fld     dword ptr ds:0A3D65Ch
0x7A7491: fld     [esp+18h+var_10]
0x7A7495: fcom    st(1)
0x7A7497: fnstsw  ax
0x7A7499: fstp    st(1)
0x7A749B: test    ah, 41h
0x7A749E: jnz     short loc_7A74B6
0x7A74A0: fld     dword ptr ds:0A30634h
0x7A74A6: fstp    dword ptr [esp+18h+var_C]
0x7A74AA: fld1
0x7A74AC: fsubrp  st(1), st
0x7A74AE: fstp    [esp+18h+var_10]
0x7A74B2: fld     [esp+18h+var_10]
0x7A74B6: fmul    dword ptr [esi+4]
0x7A74B9: call    Double_To_SInt32
0x7A74BE: mov     edi, eax
0x7A74C0: mov     eax, [esi+8]
0x7A74C3: fld     dword ptr [eax+edi*4]
0x7A74C6: mov     ecx, esi
0x7A74C8: fstp    [esp+18h+var_10]
0x7A74CC: call    sub_7A6FD0
0x7A74D1: mov     ecx, [esi+8]
0x7A74D4: fld     dword ptr [ecx+edi*4+4]
0x7A74D8: mov     edx, [esi+0Ch]
0x7A74DB: fld     [esp+18h+var_10]
0x7A74DF: mov     ecx, esi
0x7A74E1: fld     st
0x7A74E3: lea     edi, [edx+edi*4]
0x7A74E6: fsubp   st(2), st
0x7A74E8: fxch    st(2)
0x7A74EA: fmulp   st(1), st
0x7A74EC: faddp   st(1), st
0x7A74EE: fstp    [esp+18h+var_10]
0x7A74F2: call    sub_7A6FD0
0x7A74F7: fmul    dword ptr [edi]
0x7A74F9: fstp    dword ptr [esp+18h+var_C+4]
0x7A74FD: fld     dword ptr [esp+18h+var_C+4]
0x7A7501: fld     dword ptr [edi+4]
0x7A7504: fcomp   st(1)
0x7A7506: fnstsw  ax
0x7A7508: test    ah, 41h
0x7A750B: jp      short loc_7A7547
0x7A750D: mov     eax, [esi]
0x7A750F: fstp    [esp+18h+var_C+4]
0x7A7513: fld     [esp+18h+var_10]
0x7A7517: mov     edx, [eax+0Ch]
0x7A751A: push    ecx
0x7A751B: mov     ecx, esi
0x7A751D: fstp    [esp+1Ch+var_1C]
0x7A7520: call    edx
0x7A7522: fcomp   [esp+18h+var_C+4]
0x7A7526: fnstsw  ax
0x7A7528: test    ah, 41h
0x7A752B: jnp     loc_7A747A
0x7A7531: fld     [esp+18h+var_10]
0x7A7535: fmul    dword ptr [esp+18h+var_C]
0x7A7539: fstp    dword ptr [esp+18h+var_C+4]
0x7A753D: fld     dword ptr [esp+18h+var_C+4]
0x7A7541: pop     edi
0x7A7542: pop     esi
0x7A7543: mov     esp, ebp
0x7A7545: pop     ebp
0x7A7546: retn
0x7A7547: fstp    st
0x7A7549: pop     edi
0x7A754A: fld     [esp+14h+var_10]
0x7A754E: pop     esi
0x7A754F: fmul    dword ptr [esp+10h+var_C]
0x7A7553: fstp    dword ptr [esp+10h+var_C+4]
0x7A7557: fld     dword ptr [esp+10h+var_C+4]
0x7A755B: mov     esp, ebp
0x7A755D: pop     ebp
0x7A755E: retn
