0x758980: fldz
0x758982: sub     esp, 12Ch
0x758988: push    ebx
0x758989: mov     ebx, ecx
0x75898B: fcomp   dword ptr [ebx+28h]
0x75898E: fnstsw  ax
0x758990: test    ah, 5
0x758993: jp      loc_758C6C
0x758999: push    ebp
0x75899A: mov     ebp, [esp+134h+arg_4]
0x7589A1: cmp     word ptr [ebp+48h], 0
0x7589A6: jbe     loc_758C6B
0x7589AC: mov     eax, [ebx+18h]
0x7589AF: test    eax, eax
0x7589B1: jz      loc_758C6B
0x7589B7: push    esi
0x7589B8: push    edi
0x7589B9: lea     esi, [eax+64h]
0x7589BC: mov     ecx, 0Dh
0x7589C1: lea     edi, [esp+13Ch+var_9C]
0x7589C8: rep movsd
0x7589CA: mov     esi, [ebx+10h]
0x7589CD: add     esi, 64h ; 'd'
0x7589D0: mov     ecx, 0Dh
0x7589D5: lea     edi, [esp+13Ch+var_68]
0x7589DC: lea     eax, [esp+13Ch+var_34]
0x7589E3: rep movsd
0x7589E5: push    eax
0x7589E6: lea     ecx, [esp+140h+var_68]
0x7589ED: call    sub_718A80
0x7589F2: lea     ecx, [esp+13Ch+var_9C]
0x7589F9: push    ecx
0x7589FA: lea     edx, [esp+140h+var_D0]
0x7589FE: push    edx
0x7589FF: lea     ecx, [esp+144h+var_34]
0x758A06: call    sub_53D7A0
0x758A0B: mov     eax, [esp+13Ch+var_AC]
0x758A12: mov     ecx, [esp+13Ch+var_A8]
0x758A19: mov     edx, [esp+13Ch+var_A4]
0x758A20: mov     [esp+13Ch+var_104], eax
0x758A24: mov     [esp+13Ch+var_100], ecx
0x758A28: lea     eax, [ebx+1Ch]
0x758A2B: push    eax
0x758A2C: lea     ecx, [esp+140h+var_110]
0x758A30: push    ecx
0x758A31: lea     ecx, [esp+144h+var_D0]
0x758A35: mov     [esp+144h+var_FC], edx
0x758A39: call    sub_7101F0
0x758A3E: mov     edx, [eax]
0x758A40: mov     ecx, [eax+4]
0x758A43: mov     [esp+13Ch+var_120], edx
0x758A47: mov     edx, [eax+8]
0x758A4A: mov     [esp+13Ch+var_11C], ecx
0x758A4E: lea     ecx, [esp+13Ch+var_120]
0x758A52: mov     [esp+13Ch+var_118], edx
0x758A56: call    sub_43F350
0x758A5B: fstp    st
0x758A5D: fld     [esp+13Ch+var_11C]
0x758A61: xor     edi, edi
0x758A63: cmp     [ebp+48h], di
0x758A67: fld     [esp+13Ch+var_120]
0x758A6B: fld     [esp+13Ch+var_118]
0x758A6F: fld     st(1)
0x758A71: fmulp   st(2), st
0x758A73: fld     st(2)
0x758A75: fmulp   st(3), st
0x758A77: fxch    st(1)
0x758A79: faddp   st(2), st
0x758A7B: fmul    st, st
0x758A7D: faddp   st(1), st
0x758A7F: fstp    [esp+13Ch+var_114]
0x758A83: fld     dword ptr [ebx+30h]
0x758A86: fsub    dword ptr [ebx+2Ch]
0x758A89: fstp    [esp+13Ch+var_D4]
0x758A8D: jbe     loc_758C69
0x758A93: mov     ecx, [ebp+1Ch]
0x758A96: movzx   eax, di
0x758A99: lea     edx, [eax+eax*2]
0x758A9C: lea     ecx, [ecx+edx*4]
0x758A9F: mov     edx, [ecx]
0x758AA1: mov     [esp+13Ch+var_F8], edx
0x758AA5: mov     edx, [ecx+4]
0x758AA8: fld     [esp+13Ch+var_F8]
0x758AAC: mov     ecx, [ecx+8]
0x758AAF: fsub    [esp+13Ch+var_104]
0x758AB3: mov     [esp+13Ch+var_F4], edx
0x758AB7: mov     [esp+13Ch+var_F0], ecx
0x758ABB: lea     edx, ds:0[eax*8]
0x758AC2: fstp    [esp+13Ch+var_E0]
0x758AC6: sub     edx, eax
0x758AC8: fld     [esp+13Ch+var_F4]
0x758ACC: mov     eax, [ebp+5Ch]
0x758ACF: fsub    [esp+13Ch+var_100]
0x758AD3: lea     esi, [eax+edx*4]
0x758AD6: fstp    [esp+13Ch+var_DC]
0x758ADA: fld     [esp+13Ch+var_F0]
0x758ADE: fsub    [esp+13Ch+var_FC]
0x758AE2: fstp    [esp+13Ch+var_D8]
0x758AE6: fld     [esp+13Ch+var_DC]
0x758AEA: fld     [esp+13Ch+var_E0]
0x758AEE: fld     [esp+13Ch+var_D8]
0x758AF2: fld     st(1)
0x758AF4: fmulp   st(2), st
0x758AF6: fld     st(2)
0x758AF8: fmulp   st(3), st
0x758AFA: fxch    st(1)
0x758AFC: faddp   st(2), st
0x758AFE: fmul    st, st
0x758B00: faddp   st(1), st
0x758B02: fstp    [esp+13Ch+var_12C]
0x758B06: fld     [esp+13Ch+var_12C]
0x758B0A: call    __CIsqrt
0x758B0F: fstp    [esp+13Ch+var_12C]
0x758B13: fld     [esp+13Ch+var_12C]
0x758B17: fstp    [esp+13Ch+var_12C]
0x758B1B: fld     dword ptr [ebx+28h]
0x758B1E: fstp    [esp+13Ch+var_124]
0x758B22: fld     [esp+13Ch+arg_0]
0x758B29: fsub    dword ptr [esi+14h]
0x758B2C: fdiv    qword ptr ds:0A87738h
0x758B32: fstp    [esp+13Ch+var_128]
0x758B36: fld     [esp+13Ch+var_12C]
0x758B3A: fld     dword ptr [ebx+2Ch]
0x758B3D: fcomp   st(1)
0x758B3F: fnstsw  ax
0x758B41: test    ah, 5
0x758B44: jp      short loc_758B73
0x758B46: fld     dword ptr [ebx+30h]
0x758B49: fcomp   st(1)
0x758B4B: fnstsw  ax
0x758B4D: test    ah, 41h
0x758B50: jnp     loc_758C5A
0x758B56: fsub    dword ptr [ebx+2Ch]
0x758B59: fstp    [esp+13Ch+var_12C]
0x758B5D: fld     [esp+13Ch+var_12C]
0x758B61: fdiv    [esp+13Ch+var_D4]
0x758B65: fld1
0x758B67: fsubrp  st(1), st
0x758B69: fmul    [esp+13Ch+var_124]
0x758B6D: fstp    [esp+13Ch+var_124]
0x758B71: jmp     short loc_758B75
0x758B73: fstp    st
0x758B75: fld     dword ptr [esi]
0x758B77: fld     [esp+13Ch+var_120]
0x758B7B: fld     st
0x758B7D: fmulp   st(2), st
0x758B7F: fld     dword ptr [esi+4]
0x758B82: fld     [esp+13Ch+var_11C]
0x758B86: fld     st
0x758B88: fmulp   st(2), st
0x758B8A: fxch    st(3)
0x758B8C: faddp   st(1), st
0x758B8E: fld     dword ptr [esi+8]
0x758B91: fld     [esp+13Ch+var_118]
0x758B95: fld     st
0x758B97: fmulp   st(2), st
0x758B99: fxch    st(2)
0x758B9B: faddp   st(1), st
0x758B9D: fstp    [esp+13Ch+var_12C]
0x758BA1: fld     [esp+13Ch+var_128]
0x758BA5: fld     st
0x758BA7: fld     [esp+13Ch+var_124]
0x758BAB: fld     st
0x758BAD: fmulp   st(2), st
0x758BAF: fxch    st(1)
0x758BB1: fcomp   qword ptr ds:0A2F928h
0x758BB7: fnstsw  ax
0x758BB9: test    ah, 41h
0x758BBC: jnz     short loc_758C0C
0x758BBE: fstp    st(1)
0x758BC0: fstp    st
0x758BC2: fld     [esp+13Ch+var_12C]
0x758BC6: fchs
0x758BC8: fdiv    [esp+13Ch+var_114]
0x758BCC: fstp    [esp+13Ch+var_128]
0x758BD0: fld     [esp+13Ch+var_128]
0x758BD4: fld     st
0x758BD6: fmulp   st(3), st
0x758BD8: fxch    st(2)
0x758BDA: fstp    [esp+13Ch+var_EC]
0x758BDE: fld     st(1)
0x758BE0: fmulp   st(3), st
0x758BE2: fxch    st(2)
0x758BE4: fstp    [esp+13Ch+var_E8]
0x758BE8: fmulp   st(1), st
0x758BEA: fstp    [esp+13Ch+var_E4]
0x758BEE: fld     [esp+13Ch+var_EC]
0x758BF2: fadd    dword ptr [esi]
0x758BF4: fstp    dword ptr [esi]
0x758BF6: fld     dword ptr [esi+4]
0x758BF9: fadd    [esp+13Ch+var_E8]
0x758BFD: fstp    dword ptr [esi+4]
0x758C00: fld     dword ptr [esi+8]
0x758C03: fadd    [esp+13Ch+var_E4]
0x758C07: fstp    dword ptr [esi+8]
0x758C0A: jmp     short loc_758C5C
0x758C0C: fchs
0x758C0E: fmulp   st(1), st
0x758C10: fld     [esp+13Ch+var_12C]
0x758C14: fdiv    [esp+13Ch+var_114]
0x758C18: fmulp   st(1), st
0x758C1A: fstp    [esp+13Ch+var_128]
0x758C1E: fld     [esp+13Ch+var_128]
0x758C22: fld     st
0x758C24: fmulp   st(3), st
0x758C26: fxch    st(2)
0x758C28: fstp    [esp+13Ch+var_110]
0x758C2C: fld     st(1)
0x758C2E: fmulp   st(3), st
0x758C30: fxch    st(2)
0x758C32: fstp    [esp+13Ch+var_10C]
0x758C36: fmulp   st(1), st
0x758C38: fstp    [esp+13Ch+var_108]
0x758C3C: fld     [esp+13Ch+var_110]
0x758C40: fadd    dword ptr [esi]
0x758C42: fstp    dword ptr [esi]
0x758C44: fld     dword ptr [esi+4]
0x758C47: fadd    [esp+13Ch+var_10C]
0x758C4B: fstp    dword ptr [esi+4]
0x758C4E: fld     dword ptr [esi+8]
0x758C51: fadd    [esp+13Ch+var_108]
0x758C55: fstp    dword ptr [esi+8]
0x758C58: jmp     short loc_758C5C
0x758C5A: fstp    st
0x758C5C: add     edi, 1
0x758C5F: cmp     di, [ebp+48h]
0x758C63: jb      loc_758A93
0x758C69: pop     edi
0x758C6A: pop     esi
0x758C6B: pop     ebp
0x758C6C: pop     ebx
0x758C6D: add     esp, 12Ch
0x758C73: retn    8
