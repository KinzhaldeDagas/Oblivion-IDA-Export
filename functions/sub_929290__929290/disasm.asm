0x929290: push    ecx
0x929291: mov     eax, [esp+4+arg_0]
0x929295: push    esi
0x929296: push    eax
0x929297: mov     esi, ecx
0x929299: call    sub_8ECB30
0x92929E: mov     ecx, [esi+24h]
0x9292A1: add     esp, 4
0x9292A4: dec     ecx
0x9292A5: cmp     eax, ecx
0x9292A7: mov     [esp+8+var_4], eax
0x9292AB: jl      short loc_9292D8
0x9292AD: mov     [esp+8+var_4], ecx
0x9292B1: lea     eax, ds:0[ecx*4]
0x9292B8: mov     ecx, [esi+2Ch]
0x9292BB: fld     dword ptr [ecx+eax]
0x9292BE: add     ecx, eax
0x9292C0: fsub    dword ptr [ecx-4]
0x9292C3: mov     ecx, [esi+2Ch]
0x9292C6: fild    [esp+8+var_4]
0x9292CA: pop     esi
0x9292CB: fsubr   [esp+4+arg_0]
0x9292CF: fmulp   st(1), st
0x9292D1: fadd    dword ptr [ecx+eax]
0x9292D4: pop     ecx
0x9292D5: retn    4
0x9292D8: test    eax, eax
0x9292DA: jge     short loc_9292E2
0x9292DC: xor     eax, eax
0x9292DE: mov     [esp+8+var_4], eax
0x9292E2: mov     edx, [esi+2Ch]
0x9292E5: shl     eax, 2
0x9292E8: fld     dword ptr [edx+eax+4]
0x9292EC: lea     ecx, [edx+eax]
0x9292EF: fsub    dword ptr [ecx]
0x9292F1: mov     ecx, edx
0x9292F3: fild    [esp+8+var_4]
0x9292F7: pop     esi
0x9292F8: fsubr   [esp+4+arg_0]
0x9292FC: fmulp   st(1), st
0x9292FE: fadd    dword ptr [ecx+eax]
0x929301: pop     ecx
0x929302: retn    4
