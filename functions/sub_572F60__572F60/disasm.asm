0x572F60: sub     esp, 8
0x572F63: push    ebp
0x572F64: push    esi
0x572F65: push    edi
0x572F66: xor     ebp, ebp
0x572F68: jmp     short loc_572F70
0x572F6A: align 10h
0x572F70: fldz
0x572F72: lea     esi, [ebp+ebp*2+0]
0x572F76: mov     edx, ds:0B12DD0h[esi*8]
0x572F7D: test    edx, edx
0x572F7F: lea     esi, ds:0B12DC0h[esi*8]
0x572F86: jz      loc_57308A
0x572F8C: cmp     byte ptr [esi+8], 0
0x572F90: jz      short loc_572FF8
0x572F92: cmp     [esp+14h+arg_0], 0
0x572F97: fstp    st
0x572F99: jz      short loc_572FA5
0x572F9B: cmp     ebp, 2
0x572F9E: jnz     short loc_572FA5
0x572FA0: call    sub_5ADB40
0x572FA5: fld1
0x572FA7: fcom    dword ptr [esi+14h]
0x572FAA: fnstsw  ax
0x572FAC: test    ah, 41h
0x572FAF: jnz     loc_57308A
0x572FB5: fld     dword ptr [esi+0Ch]
0x572FB8: fld1
0x572FBA: fdivrp  st(1), st
0x572FBC: fmul    dword ptr ds:0B33E9Ch
0x572FC2: fadd    dword ptr [esi+14h]
0x572FC5: fstp    [esp+14h+var_8]
0x572FC9: fld     [esp+14h+var_8]
0x572FCD: fst     dword ptr [esi+14h]
0x572FD0: fcomp   st(1)
0x572FD2: fnstsw  ax
0x572FD4: test    ah, 41h
0x572FD7: jnz     short loc_572FDE
0x572FD9: fstp    dword ptr [esi+14h]
0x572FDC: jmp     short loc_572FE0
0x572FDE: fstp    st
0x572FE0: fld     dword ptr [esi+14h]
0x572FE3: mov     eax, [esi+10h]
0x572FE6: push    ecx
0x572FE7: fstp    [esp+18h+var_18]; float
0x572FEA: push    eax; int
0x572FEB: call    sub_4A2A90
0x572FF0: add     esp, 8
0x572FF3: jmp     loc_57308C
0x572FF8: fcom    dword ptr [esi+14h]
0x572FFB: fnstsw  ax
0x572FFD: test    ah, 1
0x573000: jnz     short loc_57304B
0x573002: mov     ecx, [edx+1Ch]
0x573005: fstp    st
0x573007: mov     eax, [ecx]
0x573009: mov     eax, [eax+88h]
0x57300F: push    edx
0x573010: lea     edx, [esp+18h+var_4]
0x573014: push    edx
0x573015: call    eax
0x573017: mov     eax, dword ptr [esp+14h+var_4]
0x57301B: test    eax, eax
0x57301D: jz      short loc_57303D
0x57301F: mov     edi, eax
0x573021: add     eax, 4
0x573024: push    eax; lpAddend
0x573025: call    dword ptr ds:0A2807Ch
0x57302B: test    eax, eax
0x57302D: jnz     short loc_57303D
0x57302F: test    edi, edi
0x573031: jz      short loc_57303D
0x573033: mov     edx, [edi]
0x573035: mov     eax, [edx]
0x573037: push    1
0x573039: mov     ecx, edi
0x57303B: call    eax
0x57303D: fldz
0x57303F: mov     dword ptr [esi+10h], 0
0x573046: fstp    dword ptr [esi+14h]
0x573049: jmp     short loc_57308C
0x57304B: fld     dword ptr [esi+14h]
0x57304E: fld     dword ptr [esi+0Ch]
0x573051: fld1
0x573053: fdivrp  st(1), st
0x573055: fmul    dword ptr ds:0B33E9Ch
0x57305B: fsubp   st(1), st
0x57305D: fstp    [esp+14h+var_8]
0x573061: fld     [esp+14h+var_8]
0x573065: fst     dword ptr [esi+14h]
0x573068: fcomp   st(1)
0x57306A: fnstsw  ax
0x57306C: test    ah, 5
0x57306F: jp      short loc_573076
0x573071: fstp    dword ptr [esi+14h]
0x573074: jmp     short loc_573078
0x573076: fstp    st
0x573078: fld     dword ptr [esi+14h]
0x57307B: push    ecx
0x57307C: fstp    [esp+18h+var_18]; float
0x57307F: push    edx; int
0x573080: call    sub_4A2A90
0x573085: add     esp, 8
0x573088: jmp     short loc_57308C
0x57308A: fstp    st
0x57308C: add     ebp, 1
0x57308F: cmp     ebp, 3
0x573092: jl      loc_572F70
0x573098: pop     edi
0x573099: pop     esi
0x57309A: pop     ebp
0x57309B: add     esp, 8
0x57309E: retn    4
