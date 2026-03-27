0x9282C0: push    ecx
0x9282C1: fld     dword ptr [ecx+8]
0x9282C4: mov     edx, [esp+4+arg_0]
0x9282C8: fld     st
0x9282CA: push    esi
0x9282CB: mov     esi, [esp+8+arg_4]
0x9282CF: fstp    dword ptr [esi+8]
0x9282D2: fchs
0x9282D4: fstp    dword ptr [esi+0Ch]
0x9282D7: mov     eax, [edx+18h]
0x9282DA: fld     dword ptr [edx+8]
0x9282DD: fld     st
0x9282DF: fsub    dword ptr [eax]
0x9282E1: fstp    [esp+8+var_4]
0x9282E5: fld     dword ptr [eax]
0x9282E7: fsub    dword ptr [edx+4]
0x9282EA: fstp    [esp+8+arg_4]
0x9282EE: fstp    dword ptr [eax]
0x9282F0: mov     eax, [ecx+0Ch]
0x9282F3: mov     [esi+10h], eax
0x9282F6: mov     eax, [ecx+10h]
0x9282F9: mov     [esi+14h], eax
0x9282FC: fld     dword ptr [ecx+14h]
0x9282FF: mov     eax, [edx+0Ch]
0x928302: fmul    dword ptr [eax+8]
0x928305: fmul    [esp+8+arg_4]
0x928309: fld     [esp+8+arg_4]
0x92830D: fsub    st, st(1)
0x92830F: fld     dword ptr [ecx+18h]
0x928312: fmul    dword ptr [eax+8]
0x928315: fstp    [esp+8+arg_0]
0x928319: fld     st
0x92831B: fabs
0x92831D: fcomp   [esp+8+arg_0]
0x928321: fnstsw  ax
0x928323: test    ah, 41h
0x928326: jnz     short loc_92833F
0x928328: fcomp   dword ptr ds:0A2FAA8h
0x92832E: fld     [esp+8+arg_0]
0x928332: fnstsw  ax
0x928334: test    ah, 41h
0x928337: jz      short loc_92833B
0x928339: fchs
0x92833B: faddp   st(1), st
0x92833D: jmp     short loc_928347
0x92833F: fstp    st
0x928341: fstp    st
0x928343: fld     [esp+8+arg_4]
0x928347: fadd    dword ptr [edx+14h]
0x92834A: fld     [esp+8+arg_4]
0x92834E: fabs
0x928350: fstp    [esp+8+arg_4]
0x928354: fcom    [esp+8+arg_4]
0x928358: fnstsw  ax
0x92835A: test    ah, 5
0x92835D: jnp     short loc_928365
0x92835F: fstp    st
0x928361: fld     [esp+8+arg_4]
0x928365: fld     [esp+8+arg_4]
0x928369: fchs
0x92836B: fstp    [esp+8+arg_4]
0x92836F: fcom    [esp+8+arg_4]
0x928373: fnstsw  ax
0x928375: test    ah, 41h
0x928378: jz      short loc_928380
0x92837A: fstp    st
0x92837C: fld     [esp+8+arg_4]
0x928380: fsub    dword ptr [edx+14h]
0x928383: mov     ecx, [edx+0Ch]
0x928386: fadd    [esp+8+var_4]
0x92838A: fmul    dword ptr [ecx+0Ch]
0x92838D: fstp    dword ptr [esi+4]
0x928390: mov     edx, [edx+14h]
0x928393: mov     [esi], edx
0x928395: mov     dword ptr [esi+18h], 1
0x92839C: pop     esi
0x92839D: pop     ecx
0x92839E: retn    8
