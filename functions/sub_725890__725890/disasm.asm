0x725890: push    ecx
0x725891: fldz
0x725893: push    ebx
0x725894: fld1
0x725896: push    esi
0x725897: mov     esi, [esp+0Ch+arg_4]
0x72589B: xor     ecx, ecx
0x72589D: cmp     esi, 4
0x7258A0: push    edi
0x7258A1: mov     edi, [esp+10h+arg_8]
0x7258A5: jl      loc_725B18
0x7258AB: lea     ebx, [esi-4]
0x7258AE: shr     ebx, 2
0x7258B1: add     ebx, 1
0x7258B4: lea     eax, ds:0[ebx*4]
0x7258BB: mov     [esp+10h+var_4], eax
0x7258BF: mov     eax, [esp+10h+arg_0]
0x7258C3: push    ebp
0x7258C4: fld     dword ptr [eax+4]
0x7258C7: fld     dword ptr [eax]
0x7258C9: fld     dword ptr [eax+8]
0x7258CC: fld     st(1)
0x7258CE: fmul    st, st(2)
0x7258D0: fld     st(3)
0x7258D2: fmulp   st(4), st
0x7258D4: faddp   st(3), st
0x7258D6: fmul    st, st
0x7258D8: faddp   st(2), st
0x7258DA: fxch    st(1)
0x7258DC: fstp    [esp+14h+arg_4]
0x7258E0: mov     ecx, [esp+14h+arg_4]
0x7258E4: test    ecx, ecx
0x7258E6: jnz     short loc_7258F0
0x7258E8: fxch    st(2)
0x7258EA: fst     [esp+14h+arg_4]
0x7258EE: jmp     short loc_725935
0x7258F0: mov     edx, ecx
0x7258F2: shr     edx, 17h
0x7258F5: sub     edx, 7Fh
0x7258F8: movzx   edx, dx
0x7258FB: and     ecx, (offset loc_7FFFFA+5)
0x725901: test    dl, 1
0x725904: jz      short loc_72590C
0x725906: or      ecx, offset loc_800000
0x72590C: mov     ebp, ds:0B3FD88h
0x725912: sar     dx, 1
0x725915: movsx   edx, dx
0x725918: add     edx, 7Fh
0x72591B: shr     ecx, 10h
0x72591E: shl     edx, 17h
0x725921: or      edx, [ebp+ecx*4+0]
0x725925: mov     [esp+14h+arg_4], edx
0x725929: fld     [esp+14h+arg_4]
0x72592D: fdivr   st, st(2)
0x72592F: fstp    [esp+14h+arg_4]
0x725933: fxch    st(2)
0x725935: fld     [esp+14h+arg_4]
0x725939: fld     st
0x72593B: fmulp   st(4), st
0x72593D: fxch    st(3)
0x72593F: fstp    dword ptr [eax]
0x725941: fld     dword ptr [eax+4]
0x725944: fmul    st, st(3)
0x725946: fstp    dword ptr [eax+4]
0x725949: fld     dword ptr [eax+8]
0x72594C: fmulp   st(3), st
0x72594E: fxch    st(2)
0x725950: fstp    dword ptr [eax+8]
0x725953: add     eax, edi
0x725955: fld     dword ptr [eax+4]
0x725958: fld     dword ptr [eax]
0x72595A: fld     dword ptr [eax+8]
0x72595D: fld     st(1)
0x72595F: fmul    st, st(2)
0x725961: fld     st(3)
0x725963: fmulp   st(4), st
0x725965: faddp   st(3), st
0x725967: fmul    st, st
0x725969: faddp   st(2), st
0x72596B: fxch    st(1)
0x72596D: fstp    [esp+14h+arg_4]
0x725971: mov     ecx, [esp+14h+arg_4]
0x725975: test    ecx, ecx
0x725977: jnz     short loc_725981
0x725979: fxch    st(2)
0x72597B: fst     [esp+14h+arg_4]
0x72597F: jmp     short loc_7259C6
0x725981: mov     edx, ecx
0x725983: shr     edx, 17h
0x725986: sub     edx, 7Fh
0x725989: movzx   edx, dx
0x72598C: and     ecx, (offset loc_7FFFFA+5)
0x725992: test    dl, 1
0x725995: jz      short loc_72599D
0x725997: or      ecx, offset loc_800000
0x72599D: mov     ebp, ds:0B3FD88h
0x7259A3: sar     dx, 1
0x7259A6: movsx   edx, dx
0x7259A9: add     edx, 7Fh
0x7259AC: shr     ecx, 10h
0x7259AF: shl     edx, 17h
0x7259B2: or      edx, [ebp+ecx*4+0]
0x7259B6: mov     [esp+14h+arg_4], edx
0x7259BA: fld     [esp+14h+arg_4]
0x7259BE: fdivr   st, st(2)
0x7259C0: fstp    [esp+14h+arg_4]
0x7259C4: fxch    st(2)
0x7259C6: fld     [esp+14h+arg_4]
0x7259CA: fld     st
0x7259CC: fmulp   st(4), st
0x7259CE: fxch    st(3)
0x7259D0: fstp    dword ptr [eax]
0x7259D2: fld     dword ptr [eax+4]
0x7259D5: fmul    st, st(3)
0x7259D7: fstp    dword ptr [eax+4]
0x7259DA: fld     dword ptr [eax+8]
0x7259DD: fmulp   st(3), st
0x7259DF: fxch    st(2)
0x7259E1: fstp    dword ptr [eax+8]
0x7259E4: add     eax, edi
0x7259E6: fld     dword ptr [eax+4]
0x7259E9: fld     dword ptr [eax]
0x7259EB: fld     dword ptr [eax+8]
0x7259EE: fld     st(1)
0x7259F0: fmul    st, st(2)
0x7259F2: fld     st(3)
0x7259F4: fmulp   st(4), st
0x7259F6: faddp   st(3), st
0x7259F8: fmul    st, st
0x7259FA: faddp   st(2), st
0x7259FC: fxch    st(1)
0x7259FE: fstp    [esp+14h+arg_4]
0x725A02: mov     ecx, [esp+14h+arg_4]
0x725A06: test    ecx, ecx
0x725A08: jnz     short loc_725A12
0x725A0A: fxch    st(2)
0x725A0C: fst     [esp+14h+arg_4]
0x725A10: jmp     short loc_725A57
0x725A12: mov     edx, ecx
0x725A14: shr     edx, 17h
0x725A17: sub     edx, 7Fh
0x725A1A: movzx   edx, dx
0x725A1D: and     ecx, (offset loc_7FFFFA+5)
0x725A23: test    dl, 1
0x725A26: jz      short loc_725A2E
0x725A28: or      ecx, offset loc_800000
0x725A2E: mov     ebp, ds:0B3FD88h
0x725A34: sar     dx, 1
0x725A37: movsx   edx, dx
0x725A3A: add     edx, 7Fh
0x725A3D: shr     ecx, 10h
0x725A40: shl     edx, 17h
0x725A43: or      edx, [ebp+ecx*4+0]
0x725A47: mov     [esp+14h+arg_4], edx
0x725A4B: fld     [esp+14h+arg_4]
0x725A4F: fdivr   st, st(2)
0x725A51: fstp    [esp+14h+arg_4]
0x725A55: fxch    st(2)
0x725A57: fld     [esp+14h+arg_4]
0x725A5B: fld     st
0x725A5D: fmulp   st(4), st
0x725A5F: fxch    st(3)
0x725A61: fstp    dword ptr [eax]
0x725A63: fld     dword ptr [eax+4]
0x725A66: fmul    st, st(3)
0x725A68: fstp    dword ptr [eax+4]
0x725A6B: fld     dword ptr [eax+8]
0x725A6E: fmulp   st(3), st
0x725A70: fxch    st(2)
0x725A72: fstp    dword ptr [eax+8]
0x725A75: add     eax, edi
0x725A77: fld     dword ptr [eax+4]
0x725A7A: fld     dword ptr [eax]
0x725A7C: fld     dword ptr [eax+8]
0x725A7F: fld     st(1)
0x725A81: fmul    st, st(2)
0x725A83: fld     st(3)
0x725A85: fmulp   st(4), st
0x725A87: faddp   st(3), st
0x725A89: fmul    st, st
0x725A8B: faddp   st(2), st
0x725A8D: fxch    st(1)
0x725A8F: fstp    [esp+14h+arg_4]
0x725A93: mov     ecx, [esp+14h+arg_4]
0x725A97: test    ecx, ecx
0x725A99: jnz     short loc_725AA3
0x725A9B: fxch    st(2)
0x725A9D: fst     [esp+14h+arg_4]
0x725AA1: jmp     short loc_725AE8
0x725AA3: mov     edx, ecx
0x725AA5: shr     edx, 17h
0x725AA8: sub     edx, 7Fh
0x725AAB: movzx   edx, dx
0x725AAE: and     ecx, (offset loc_7FFFFA+5)
0x725AB4: test    dl, 1
0x725AB7: jz      short loc_725ABF
0x725AB9: or      ecx, offset loc_800000
0x725ABF: mov     ebp, ds:0B3FD88h
0x725AC5: sar     dx, 1
0x725AC8: movsx   edx, dx
0x725ACB: add     edx, 7Fh
0x725ACE: shr     ecx, 10h
0x725AD1: shl     edx, 17h
0x725AD4: or      edx, [ebp+ecx*4+0]
0x725AD8: mov     [esp+14h+arg_4], edx
0x725ADC: fld     [esp+14h+arg_4]
0x725AE0: fdivr   st, st(2)
0x725AE2: fstp    [esp+14h+arg_4]
0x725AE6: fxch    st(2)
0x725AE8: fld     [esp+14h+arg_4]
0x725AEC: fld     st
0x725AEE: fmulp   st(4), st
0x725AF0: fxch    st(3)
0x725AF2: fstp    dword ptr [eax]
0x725AF4: fld     dword ptr [eax+4]
0x725AF7: fmul    st, st(3)
0x725AF9: fstp    dword ptr [eax+4]
0x725AFC: fld     dword ptr [eax+8]
0x725AFF: fmulp   st(3), st
0x725B01: fxch    st(2)
0x725B03: fstp    dword ptr [eax+8]
0x725B06: add     eax, edi
0x725B08: sub     ebx, 1
0x725B0B: jnz     loc_7258C4
0x725B11: mov     ecx, [esp+14h+var_4]
0x725B15: pop     ebp
0x725B16: jmp     short loc_725B1C
0x725B18: mov     eax, [esp+10h+arg_0]
0x725B1C: cmp     ecx, esi
0x725B1E: jnb     loc_725BB9
0x725B24: sub     esi, ecx
0x725B26: fld     dword ptr [eax+4]
0x725B29: fld     dword ptr [eax]
0x725B2B: fld     dword ptr [eax+8]
0x725B2E: fld     st(1)
0x725B30: fmul    st, st(2)
0x725B32: fld     st(3)
0x725B34: fmul    st, st(4)
0x725B36: faddp   st(1), st
0x725B38: fld     st(1)
0x725B3A: fmul    st, st(2)
0x725B3C: faddp   st(1), st
0x725B3E: fstp    [esp+10h+arg_4]
0x725B42: mov     ecx, [esp+10h+arg_4]
0x725B46: test    ecx, ecx
0x725B48: jnz     short loc_725B52
0x725B4A: fxch    st(4)
0x725B4C: fst     [esp+10h+arg_4]
0x725B50: jmp     short loc_725B96
0x725B52: mov     edx, ecx
0x725B54: shr     edx, 17h
0x725B57: sub     edx, 7Fh
0x725B5A: movzx   edx, dx
0x725B5D: and     ecx, (offset loc_7FFFFA+5)
0x725B63: test    dl, 1
0x725B66: jz      short loc_725B6E
0x725B68: or      ecx, offset loc_800000
0x725B6E: mov     ebx, ds:0B3FD88h
0x725B74: sar     dx, 1
0x725B77: movsx   edx, dx
0x725B7A: add     edx, 7Fh
0x725B7D: shr     ecx, 10h
0x725B80: shl     edx, 17h
0x725B83: or      edx, [ebx+ecx*4]
0x725B86: mov     [esp+10h+arg_4], edx
0x725B8A: fld     [esp+10h+arg_4]
0x725B8E: fdivr   st, st(4)
0x725B90: fstp    [esp+10h+arg_4]
0x725B94: fxch    st(4)
0x725B96: fld     [esp+10h+arg_4]
0x725B9A: fmul    st(2), st
0x725B9C: fxch    st(2)
0x725B9E: fstp    dword ptr [eax]
0x725BA0: fxch    st(2)
0x725BA2: fmul    st, st(1)
0x725BA4: fstp    dword ptr [eax+4]
0x725BA7: fmulp   st(3), st
0x725BA9: fxch    st(2)
0x725BAB: fstp    dword ptr [eax+8]
0x725BAE: add     eax, edi
0x725BB0: sub     esi, 1
0x725BB3: jnz     loc_725B26
0x725BB9: pop     edi
0x725BBA: fstp    st(1)
0x725BBC: pop     esi
0x725BBD: fstp    st
0x725BBF: pop     ebx
0x725BC0: pop     ecx
0x725BC1: retn
