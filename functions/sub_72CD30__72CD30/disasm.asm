0x72CD30: push    ecx
0x72CD31: fldz
0x72CD33: push    esi
0x72CD34: push    edi
0x72CD35: fstp    [esp+0Ch+var_4]
0x72CD39: mov     edi, [ecx+8]
0x72CD3C: xor     esi, esi
0x72CD3E: cmp     edi, 4
0x72CD41: jl      short loc_72CD94
0x72CD43: mov     eax, [ecx]
0x72CD45: lea     edx, [edi-4]
0x72CD48: shr     edx, 2
0x72CD4B: add     eax, 0Ch
0x72CD4E: add     edx, 1
0x72CD51: lea     esi, ds:0[edx*4]
0x72CD58: jmp     short loc_72CD60
0x72CD5A: align 10h
0x72CD60: fld     dword ptr [eax-8]
0x72CD63: add     eax, 20h ; ' '
0x72CD66: sub     edx, 1
0x72CD69: fadd    [esp+0Ch+var_4]
0x72CD6D: fstp    [esp+0Ch+var_4]
0x72CD71: fld     [esp+0Ch+var_4]
0x72CD75: fadd    dword ptr [eax-20h]
0x72CD78: fstp    [esp+0Ch+var_4]
0x72CD7C: fld     [esp+0Ch+var_4]
0x72CD80: fadd    dword ptr [eax-18h]
0x72CD83: fstp    [esp+0Ch+var_4]
0x72CD87: fld     [esp+0Ch+var_4]
0x72CD8B: fadd    dword ptr [eax-10h]
0x72CD8E: fstp    [esp+0Ch+var_4]
0x72CD92: jnz     short loc_72CD60
0x72CD94: cmp     esi, edi
0x72CD96: jnb     short loc_72CDB4
0x72CD98: mov     eax, [ecx]
0x72CD9A: lea     edx, [eax+esi*8+4]
0x72CD9E: mov     eax, edi
0x72CDA0: sub     eax, esi
0x72CDA2: fld     dword ptr [edx]
0x72CDA4: add     edx, 8
0x72CDA7: sub     eax, 1
0x72CDAA: fadd    [esp+0Ch+var_4]
0x72CDAE: fstp    [esp+0Ch+var_4]
0x72CDB2: jnz     short loc_72CDA2
0x72CDB4: fld     [esp+0Ch+var_4]
0x72CDB8: xor     eax, eax
0x72CDBA: fld1
0x72CDBC: test    edi, edi
0x72CDBE: fdivrp  st(1), st
0x72CDC0: pop     edi
0x72CDC1: pop     esi
0x72CDC2: fstp    [esp+4+var_4]
0x72CDC5: jbe     short loc_72CDE2
0x72CDC7: fld     [esp+4+var_4]
0x72CDCA: mov     edx, [ecx]
0x72CDCC: fld     dword ptr [edx+eax*8+4]
0x72CDD0: lea     edx, [edx+eax*8+4]
0x72CDD4: fmul    st, st(1)
0x72CDD6: add     eax, 1
0x72CDD9: fstp    dword ptr [edx]
0x72CDDB: cmp     eax, [ecx+8]
0x72CDDE: jb      short loc_72CDCA
0x72CDE0: fstp    st
0x72CDE2: pop     ecx
0x72CDE3: retn
