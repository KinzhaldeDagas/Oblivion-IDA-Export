0x67C310: sub     esp, 30h
0x67C313: fldz
0x67C315: push    ebx
0x67C316: push    ebp
0x67C317: fstp    [esp+38h+var_30]
0x67C31B: mov     ebp, ecx
0x67C31D: mov     eax, [ebp+3Ch]
0x67C320: mov     ebx, [eax]
0x67C322: xor     ecx, ecx
0x67C324: test    ebx, ebx
0x67C326: mov     eax, ebx
0x67C328: jz      short loc_67C33F
0x67C32A: lea     ebx, [ebx+0]
0x67C330: cmp     dword ptr [eax], 0
0x67C333: jz      short loc_67C338
0x67C335: add     ecx, 1
0x67C338: mov     eax, [eax+4]
0x67C33B: test    eax, eax
0x67C33D: jnz     short loc_67C330
0x67C33F: test    ecx, ecx
0x67C341: jle     loc_67C48B
0x67C347: push    esi
0x67C348: mov     [esp+3Ch+var_2C], ecx
0x67C34C: push    edi
0x67C34D: lea     ecx, [ecx+0]
0x67C350: mov     edx, [ebp+3Ch]
0x67C353: mov     esi, [edx]
0x67C355: test    esi, esi
0x67C357: mov     ecx, [ebx]
0x67C359: mov     edi, [ecx]
0x67C35B: jz      loc_67C47B
0x67C361: cmp     dword ptr [esi+4], 0
0x67C365: jnz     short loc_67C370
0x67C367: cmp     dword ptr [esi], 0
0x67C36A: jz      loc_67C47B
0x67C370: mov     eax, [esi]
0x67C372: mov     ecx, [eax]
0x67C374: test    ecx, ecx
0x67C376: jz      loc_67C470
0x67C37C: mov     eax, [ecx]
0x67C37E: mov     edx, [eax+174h]
0x67C384: call    edx
0x67C386: mov     edx, [eax+4]
0x67C389: mov     ecx, [eax]
0x67C38B: mov     eax, [eax+8]
0x67C38E: mov     [esp+40h+var_8], edx
0x67C392: mov     edx, [edi]
0x67C394: mov     [esp+40h+var_C], ecx
0x67C398: mov     [esp+40h+var_4], eax
0x67C39C: mov     eax, [edx+174h]
0x67C3A2: mov     ecx, edi
0x67C3A4: call    eax
0x67C3A6: fld     [esp+40h+var_C]
0x67C3AA: mov     ecx, [eax]
0x67C3AC: mov     edx, [eax+4]
0x67C3AF: mov     eax, [eax+8]
0x67C3B2: mov     [esp+40h+var_18], ecx
0x67C3B6: fsub    [esp+40h+var_18]
0x67C3BA: mov     [esp+40h+var_14], edx
0x67C3BE: mov     [esp+40h+var_10], eax
0x67C3C2: fstp    [esp+40h+var_24]
0x67C3C6: fld     [esp+40h+var_8]
0x67C3CA: fsub    [esp+40h+var_14]
0x67C3CE: fstp    [esp+40h+var_20]
0x67C3D2: fld     [esp+40h+var_4]
0x67C3D6: fsub    [esp+40h+var_10]
0x67C3DA: fstp    [esp+40h+var_1C]
0x67C3DE: fld     [esp+40h+var_20]
0x67C3E2: fld     [esp+40h+var_24]
0x67C3E6: fld     [esp+40h+var_1C]
0x67C3EA: fld     st(1)
0x67C3EC: fmulp   st(2), st
0x67C3EE: fld     st(2)
0x67C3F0: fmulp   st(3), st
0x67C3F2: fxch    st(1)
0x67C3F4: faddp   st(2), st
0x67C3F6: fmul    st, st
0x67C3F8: faddp   st(1), st
0x67C3FA: fstp    [esp+40h+var_28]
0x67C3FE: fld     [esp+40h+var_28]
0x67C402: call    __CIsqrt
0x67C407: fstp    [esp+40h+var_28]
0x67C40B: fld     [esp+40h+var_28]
0x67C40F: fld     [esp+40h+var_30]
0x67C413: fcomp   st(1)
0x67C415: fnstsw  ax
0x67C417: test    ah, 5
0x67C41A: jp      short loc_67C46E
0x67C41C: fstp    [esp+40h+var_30]
0x67C420: mov     eax, [ebp+3Ch]
0x67C423: fld     [esp+40h+var_18]
0x67C427: add     eax, 14h
0x67C42A: fadd    [esp+40h+var_C]
0x67C42E: fld     qword ptr ds:0A2FAA0h
0x67C434: fmul    st(1), st
0x67C436: fxch    st(1)
0x67C438: fstp    [esp+40h+var_24]
0x67C43C: mov     ecx, [esp+40h+var_24]
0x67C440: fld     [esp+40h+var_14]
0x67C444: mov     [eax], ecx
0x67C446: fadd    [esp+40h+var_8]
0x67C44A: fmul    st, st(1)
0x67C44C: fstp    [esp+40h+var_20]
0x67C450: mov     edx, [esp+40h+var_20]
0x67C454: fld     [esp+40h+var_10]
0x67C458: mov     [eax+4], edx
0x67C45B: fadd    [esp+40h+var_4]
0x67C45F: fmulp   st(1), st
0x67C461: fstp    [esp+40h+var_1C]
0x67C465: mov     ecx, [esp+40h+var_1C]
0x67C469: mov     [eax+8], ecx
0x67C46C: jmp     short loc_67C470
0x67C46E: fstp    st
0x67C470: mov     esi, [esi+4]
0x67C473: test    esi, esi
0x67C475: jnz     loc_67C361
0x67C47B: sub     [esp+40h+var_2C], 1
0x67C480: mov     ebx, [ebx+4]
0x67C483: jnz     loc_67C350
0x67C489: pop     edi
0x67C48A: pop     esi
0x67C48B: pop     ebp
0x67C48C: pop     ebx
0x67C48D: add     esp, 30h
0x67C490: retn
