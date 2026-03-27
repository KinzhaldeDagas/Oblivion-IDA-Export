0x7FB6F0: push    ebp
0x7FB6F1: mov     ebp, esp
0x7FB6F3: and     esp, 0FFFFFFF0h
0x7FB6F6: sub     esp, 264h
0x7FB6FC: mov     eax, [ebp+arg_10]
0x7FB6FF: push    ebx
0x7FB700: push    esi
0x7FB701: mov     esi, [eax+18h]
0x7FB704: test    esi, esi
0x7FB706: mov     ebx, ecx
0x7FB708: push    edi
0x7FB709: mov     [esp+270h+var_23C], ebx
0x7FB70D: jnz     short loc_7FB713
0x7FB70F: xor     eax, eax
0x7FB711: jmp     short loc_7FB726
0x7FB713: mov     edx, [esi]
0x7FB715: mov     eax, [edx+54h]
0x7FB718: mov     ecx, esi
0x7FB71A: call    eax
0x7FB71C: xor     ecx, ecx
0x7FB71E: cmp     eax, 0Ah
0x7FB721: setz    cl
0x7FB724: mov     eax, ecx
0x7FB726: mov     edx, ds:0B42E90h
0x7FB72C: neg     eax
0x7FB72E: sbb     eax, eax
0x7FB730: and     eax, esi
0x7FB732: mov     edi, eax
0x7FB734: test    byte ptr [edi+1Ch], 2
0x7FB738: mov     [esp+270h+var_230], edx
0x7FB73C: setnbe  al
0x7FB73F: test    al, al
0x7FB741: mov     [esp+270h+var_249], al
0x7FB745: jz      short loc_7FB788
0x7FB747: cmp     [ebp+arg_8], 0
0x7FB74B: jz      loc_7FC7B8
0x7FB751: cmp     dword ptr [ebx+34h], 0
0x7FB755: mov     esi, [ebp+arg_4]
0x7FB758: mov     ebx, [ebp+arg_18]
0x7FB75B: jnz     short loc_7FB770
0x7FB75D: mov     ecx, ds:0B43104h
0x7FB763: push    1
0x7FB765: push    3
0x7FB767: push    0
0x7FB769: push    ebx
0x7FB76A: push    esi
0x7FB76B: call    NiDX9Renderer__CalculateBoneMatrixes
0x7FB770: mov     eax, [esp+270h+var_23C]
0x7FB774: mov     ecx, [eax+18h]
0x7FB777: mov     eax, [ebp+arg_8]
0x7FB77A: movzx   eax, word ptr [eax+24h]
0x7FB77E: mov     edx, [ecx]
0x7FB780: mov     edx, [edx+30h]
0x7FB783: push    eax
0x7FB784: call    edx
0x7FB786: jmp     short loc_7FB78E
0x7FB788: mov     ebx, [ebp+arg_18]
0x7FB78B: mov     esi, [ebp+arg_4]
0x7FB78E: mov     eax, [esp+270h+var_23C]
0x7FB792: mov     ecx, [eax+14h]
0x7FB795: push    0
0x7FB797: push    ebx
0x7FB798: call    sub_765480
0x7FB79D: cmp     word ptr ds:0B42EACh, 5
0x7FB7A5: jnz     short loc_7FB810
0x7FB7A7: mov     edx, ds:0B42EB8h
0x7FB7AD: mov     eax, [edx+0Ch]
0x7FB7B0: lea     ecx, [esp+270h+var_234]
0x7FB7B4: push    ecx
0x7FB7B5: mov     ecx, [eax]
0x7FB7B7: call    sub_405AD0
0x7FB7BC: mov     ecx, [eax]
0x7FB7BE: mov     edi, [esp+270h+var_234]
0x7FB7C2: fld     dword ptr [ecx+0F8h]
0x7FB7C8: test    edi, edi
0x7FB7CA: fstp    [esp+270h+var_23C]
0x7FB7CE: jz      short loc_7FB7EC
0x7FB7D0: lea     edx, [edi+4]
0x7FB7D3: push    edx; lpAddend
0x7FB7D4: call    dword ptr ds:0A2807Ch
0x7FB7DA: test    eax, eax
0x7FB7DC: jnz     short loc_7FB7EC
0x7FB7DE: test    edi, edi
0x7FB7E0: jz      short loc_7FB7EC
0x7FB7E2: mov     eax, [edi]
0x7FB7E4: mov     edx, [eax]
0x7FB7E6: push    1
0x7FB7E8: mov     ecx, edi
0x7FB7EA: call    edx
0x7FB7EC: test    esi, esi
0x7FB7EE: jnz     short loc_7FB7FB
0x7FB7F0: fld     [esp+270h+var_23C]
0x7FB7F4: fdiv    dword ptr [ebx+30h]
0x7FB7F7: fstp    [esp+270h+var_23C]
0x7FB7FB: fld     [esp+270h+var_23C]
0x7FB7FF: xor     eax, eax
0x7FB801: fstp    dword ptr ds:0B47014h
0x7FB807: pop     edi
0x7FB808: pop     esi
0x7FB809: pop     ebx
0x7FB80A: mov     esp, ebp
0x7FB80C: pop     ebp
0x7FB80D: retn    20h ; ' '
0x7FB810: cmp     byte ptr [edi+100h], 0
0x7FB817: fldz
0x7FB819: fld1
0x7FB81B: jnz     loc_7FC1E4
0x7FB821: cmp     [esp+270h+var_249], 0
0x7FB826: fxch    st(1)
0x7FB828: mov     byte ptr [edi+100h], 1
0x7FB82F: fst     [esp+270h+var_F0]
0x7FB836: fst     [esp+270h+var_F4]
0x7FB83D: fst     [esp+270h+var_F8]
0x7FB844: fst     [esp+270h+var_FC]
0x7FB84B: fst     [esp+270h+var_104]
0x7FB852: fst     [esp+270h+var_108]
0x7FB859: fst     [esp+270h+var_10C]
0x7FB860: fst     [esp+270h+var_110]
0x7FB867: fst     [esp+270h+var_118]
0x7FB86E: fst     [esp+270h+var_11C]
0x7FB875: fst     [esp+270h+var_120]
0x7FB87C: fst     [esp+270h+var_124]
0x7FB883: fst     [esp+270h+var_130]
0x7FB88A: fst     [esp+270h+var_134]
0x7FB891: fst     [esp+270h+var_138]
0x7FB898: fst     [esp+270h+var_13C]
0x7FB89F: fst     [esp+270h+var_144]
0x7FB8A6: fst     [esp+270h+var_148]
0x7FB8AD: fst     [esp+270h+var_14C]
0x7FB8B4: fst     [esp+270h+var_150]
0x7FB8BB: fst     [esp+270h+var_158]
0x7FB8C2: fst     [esp+270h+var_15C]
0x7FB8C9: fst     [esp+270h+var_160]
0x7FB8D0: fstp    [esp+270h+var_164]
0x7FB8D7: fst     [esp+270h+var_EC]
0x7FB8DE: fst     [esp+270h+var_100]
0x7FB8E5: fst     [esp+270h+var_114]
0x7FB8EC: fst     [esp+270h+var_128]
0x7FB8F3: fst     [esp+270h+var_12C]
0x7FB8FA: fst     [esp+270h+var_140]
0x7FB901: fst     [esp+270h+var_154]
0x7FB908: fstp    [esp+270h+var_168]
0x7FB90F: jz      loc_7FB9EF
0x7FB915: test    esi, esi
0x7FB917: jz      loc_7FB9EF
0x7FB91D: mov     eax, [esi+28h]
0x7FB920: fld     dword ptr [eax]
0x7FB922: lea     ecx, [esp+270h+var_128]
0x7FB929: fstp    [esp+270h+var_168]
0x7FB930: fld     dword ptr [eax+4]
0x7FB933: fstp    [esp+270h+var_164]
0x7FB93A: fld     dword ptr [eax+8]
0x7FB93D: fstp    [esp+270h+var_160]
0x7FB944: fld     dword ptr [eax+10h]
0x7FB947: fstp    [esp+270h+var_158]
0x7FB94E: fld     dword ptr [eax+14h]
0x7FB951: fstp    [esp+270h+var_154]
0x7FB958: fld     dword ptr [eax+18h]
0x7FB95B: fstp    [esp+270h+var_150]
0x7FB962: fld     dword ptr [eax+20h]
0x7FB965: fstp    [esp+270h+var_148]
0x7FB96C: fld     dword ptr [eax+24h]
0x7FB96F: fstp    [esp+270h+var_144]
0x7FB976: fld     dword ptr [eax+28h]
0x7FB979: fstp    [esp+270h+var_140]
0x7FB980: fld     dword ptr [eax+30h]
0x7FB983: fadd    dword ptr ds:0B3F92Ch
0x7FB989: fstp    [esp+270h+var_138]
0x7FB990: fld     dword ptr [eax+34h]
0x7FB993: fadd    dword ptr ds:0B3F930h
0x7FB999: fstp    [esp+270h+var_134]
0x7FB9A0: fld     dword ptr [eax+38h]
0x7FB9A3: fadd    dword ptr ds:0B3F934h
0x7FB9A9: fstp    [esp+270h+var_130]
0x7FB9B0: fld     dword ptr [eax+0Ch]
0x7FB9B3: fstp    [esp+270h+var_15C]
0x7FB9BA: fld     dword ptr [eax+1Ch]
0x7FB9BD: fstp    [esp+270h+var_14C]
0x7FB9C4: fld     dword ptr [eax+2Ch]
0x7FB9C7: fstp    [esp+270h+var_13C]
0x7FB9CE: fld     dword ptr [eax+3Ch]
0x7FB9D1: lea     eax, [esp+270h+var_168]
0x7FB9D8: push    eax
0x7FB9D9: fstp    [esp+274h+var_12C]
0x7FB9E0: push    0
0x7FB9E2: push    ecx
0x7FB9E3: call    D3DXMatrixInverse_0
0x7FB9E8: fld1
0x7FB9EA: jmp     loc_7FBABB
0x7FB9EF: lea     edx, [esp+270h+var_200]
0x7FB9F3: push    edx
0x7FB9F4: mov     ecx, ebx
0x7FB9F6: call    sub_718A80
0x7FB9FB: fld     [esp+270h+var_200]
0x7FB9FF: fld     [esp+270h+var_1D0]
0x7FBA06: fld     st
0x7FBA08: fmulp   st(2), st
0x7FBA0A: fxch    st(1)
0x7FBA0C: fstp    [esp+270h+var_128]
0x7FBA13: fld     [esp+270h+var_1F4]
0x7FBA17: fmul    st, st(1)
0x7FBA19: fstp    [esp+270h+var_124]
0x7FBA20: fld     [esp+270h+var_1E8]
0x7FBA27: fmul    st, st(1)
0x7FBA29: fstp    [esp+270h+var_120]
0x7FBA30: fld     [esp+270h+var_1FC]
0x7FBA34: fmul    st, st(1)
0x7FBA36: fstp    [esp+270h+var_118]
0x7FBA3D: fld     [esp+270h+var_1F0]
0x7FBA44: fmul    st, st(1)
0x7FBA46: fstp    [esp+270h+var_114]
0x7FBA4D: fld     [esp+270h+var_1E4]
0x7FBA54: fmul    st, st(1)
0x7FBA56: fstp    [esp+270h+var_110]
0x7FBA5D: fld     [esp+270h+var_1F8]
0x7FBA61: fmul    st, st(1)
0x7FBA63: fstp    [esp+270h+var_108]
0x7FBA6A: fld     [esp+270h+var_1EC]
0x7FBA71: fmul    st, st(1)
0x7FBA73: fstp    [esp+270h+var_104]
0x7FBA7A: fmul    [esp+270h+var_1E0]
0x7FBA81: fstp    [esp+270h+var_100]
0x7FBA88: fld     [esp+270h+var_1DC]
0x7FBA8F: fstp    [esp+270h+var_F8]
0x7FBA96: fld     [esp+270h+var_1D8]
0x7FBA9D: fstp    [esp+270h+var_F4]
0x7FBAA4: fld     [esp+270h+var_1D4]
0x7FBAAB: fstp    [esp+270h+var_F0]
0x7FBAB2: fld1
0x7FBAB4: fst     [esp+270h+var_EC]
0x7FBABB: cmp     byte ptr ds:0B4696Eh, 0
0x7FBAC2: jz      loc_7FBDA9
0x7FBAC8: mov     edx, ds:0B42EB8h
0x7FBACE: mov     eax, [edx+0Ch]
0x7FBAD1: test    eax, eax
0x7FBAD3: jz      loc_7FBCA7
0x7FBAD9: mov     eax, [eax]
0x7FBADB: cmp     byte ptr [eax+0F5h], 0
0x7FBAE2: jnz     loc_7FBCA7
0x7FBAE8: mov     eax, [esp+270h+var_230]
0x7FBAEC: cmp     eax, 147h
0x7FBAF1: jl      short loc_7FBAFE
0x7FBAF3: cmp     eax, 14Dh
0x7FBAF8: jle     loc_7FBCA7
0x7FBAFE: test    esi, esi
0x7FBB00: fldz
0x7FBB02: fst     [esp+270h+var_1C8]
0x7FBB09: fst     [esp+270h+var_1CC]
0x7FBB10: fst     [esp+270h+var_1D0]
0x7FBB17: fst     [esp+270h+var_1D4]
0x7FBB1E: fst     [esp+270h+var_1DC]
0x7FBB25: fst     [esp+270h+var_1E0]
0x7FBB2C: fst     [esp+270h+var_1E4]
0x7FBB33: fst     [esp+270h+var_1E8]
0x7FBB3A: fst     [esp+270h+var_1F0]
0x7FBB41: fst     [esp+270h+var_1F4]
0x7FBB45: fst     [esp+270h+var_1F8]
0x7FBB49: fst     [esp+270h+var_1FC]
0x7FBB4D: fst     [esp+270h+var_188]
0x7FBB54: fst     [esp+270h+var_18C]
0x7FBB5B: fst     [esp+270h+var_190]
0x7FBB62: fst     [esp+270h+var_194]
0x7FBB69: fst     [esp+270h+var_19C]
0x7FBB70: fst     [esp+270h+var_1A0]
0x7FBB77: fst     [esp+270h+var_1A4]
0x7FBB7E: fst     [esp+270h+var_1A8]
0x7FBB85: fst     [esp+270h+var_1B0]
0x7FBB8C: fst     [esp+270h+var_1B4]
0x7FBB93: fst     [esp+270h+var_1B8]
0x7FBB9A: fstp    [esp+270h+var_1BC]
0x7FBBA1: fst     [esp+270h+var_1C4]
0x7FBBA8: fst     [esp+270h+var_1D8]
0x7FBBAF: fst     [esp+270h+var_1EC]
0x7FBBB6: fst     [esp+270h+var_200]
0x7FBBBA: fst     [esp+270h+var_184]
0x7FBBC1: fst     [esp+270h+var_198]
0x7FBBC8: fst     [esp+270h+var_1AC]
0x7FBBCF: fstp    [esp+270h+var_1C0]
0x7FBBD6: jz      short loc_7FBBE8
0x7FBBD8: mov     esi, [esi+28h]
0x7FBBDB: mov     ecx, 10h
0x7FBBE0: lea     edi, [esp+270h+var_200]
0x7FBBE4: rep movsd
0x7FBBE6: jmp     short loc_7FBBFC
0x7FBBE8: lea     ecx, [esp+270h+var_200]
0x7FBBEC: push    ebx
0x7FBBED: push    ecx
0x7FBBEE: call    sub_7640A0
0x7FBBF3: mov     edx, ds:0B42EB8h
0x7FBBF9: add     esp, 8
0x7FBBFC: fld     dword ptr ds:0B3F92Ch
0x7FBC02: mov     eax, ds:0B42E90h
0x7FBC07: fadd    [esp+270h+var_1D0]
0x7FBC0E: add     eax, 0FFFFFEB2h
0x7FBC13: cmp     eax, 3
0x7FBC16: fstp    [esp+270h+var_1D0]
0x7FBC1D: fld     dword ptr ds:0B3F930h
0x7FBC23: fadd    [esp+270h+var_1CC]
0x7FBC2A: fstp    [esp+270h+var_1CC]
0x7FBC31: fld     dword ptr ds:0B3F934h
0x7FBC37: fadd    [esp+270h+var_1C8]
0x7FBC3E: fstp    [esp+270h+var_1C8]
0x7FBC45: ja      short loc_7FBC4E
0x7FBC47: mov     ecx, [edx+0Ch]
0x7FBC4A: mov     eax, [ecx]
0x7FBC4C: jmp     short loc_7FBC54
0x7FBC4E: mov     edx, [edx+0Ch]
0x7FBC51: mov     eax, [edx+4]
0x7FBC54: add     eax, 10h
0x7FBC57: push    eax
0x7FBC58: lea     eax, [esp+274h+var_200]
0x7FBC5C: push    eax
0x7FBC5D: lea     ecx, [esp+278h+var_E0]
0x7FBC64: push    ecx
0x7FBC65: call    D3DXMatrixMultiply_0
0x7FBC6A: lea     edx, [esp+270h+var_1C0]
0x7FBC71: push    edx
0x7FBC72: mov     eax, edx
0x7FBC74: mov     ecx, 10h
0x7FBC79: lea     esi, [esp+274h+var_E0]
0x7FBC80: lea     edi, [esp+274h+var_1C0]
0x7FBC87: push    eax
0x7FBC88: rep movsd
0x7FBC8A: call    D3DXMatrixTranspose_0
0x7FBC8F: mov     ecx, 10h
0x7FBC94: lea     esi, [esp+270h+var_1C0]
0x7FBC9B: mov     edi, offset flt_B46D68
0x7FBCA0: rep movsd
0x7FBCA2: jmp     loc_7FBDA4
0x7FBCA7: mov     ecx, [esp+270h+var_23C]
0x7FBCAB: fstp    st
0x7FBCAD: mov     esi, [ecx+14h]
0x7FBCB0: lea     edx, [esp+270h+var_1C0]
0x7FBCB7: push    edx
0x7FBCB8: mov     eax, edx
0x7FBCBA: add     esi, 940h
0x7FBCC0: mov     ecx, 10h
0x7FBCC5: lea     edi, [esp+274h+var_1C0]
0x7FBCCC: push    eax
0x7FBCCD: rep movsd
0x7FBCCF: call    D3DXMatrixTranspose_0
0x7FBCD4: fld     [esp+270h+var_1C0]
0x7FBCDB: fstp    dword ptr ds:0B46D68h
0x7FBCE1: fld     [esp+270h+var_1BC]
0x7FBCE8: fstp    dword ptr ds:0B46D6Ch
0x7FBCEE: fld     [esp+270h+var_1B8]
0x7FBCF5: fstp    dword ptr ds:0B46D70h
0x7FBCFB: fld     [esp+270h+var_1B4]
0x7FBD02: fstp    dword ptr ds:0B46D74h
0x7FBD08: fld     [esp+270h+var_1B0]
0x7FBD0F: fstp    dword ptr ds:0B46D78h
0x7FBD15: fld     [esp+270h+var_1AC]
0x7FBD1C: fstp    dword ptr ds:0B46D7Ch
0x7FBD22: fld     [esp+270h+var_1A8]
0x7FBD29: fstp    dword ptr ds:0B46D80h
0x7FBD2F: fld     [esp+270h+var_1A4]
0x7FBD36: fstp    dword ptr ds:0B46D84h
0x7FBD3C: fld     [esp+270h+var_1A0]
0x7FBD43: fstp    dword ptr ds:0B46D88h
0x7FBD49: fld     [esp+270h+var_19C]
0x7FBD50: fstp    dword ptr ds:0B46D8Ch
0x7FBD56: fld     [esp+270h+var_198]
0x7FBD5D: fstp    dword ptr ds:0B46D90h
0x7FBD63: fld     [esp+270h+var_194]
0x7FBD6A: fstp    dword ptr ds:0B46D94h
0x7FBD70: fld     [esp+270h+var_190]
0x7FBD77: fstp    dword ptr ds:0B46D98h
0x7FBD7D: fld     [esp+270h+var_18C]
0x7FBD84: fstp    dword ptr ds:0B46D9Ch
0x7FBD8A: fld     [esp+270h+var_188]
0x7FBD91: fstp    dword ptr ds:0B46DA0h
0x7FBD97: fld     [esp+270h+var_184]
0x7FBD9E: fstp    dword ptr ds:0B46DA4h
0x7FBDA4: mov     esi, [ebp+arg_4]
0x7FBDA7: fld1
0x7FBDA9: mov     eax, [esp+270h+var_230]
0x7FBDAD: cmp     eax, 152h
0x7FBDB2: jl      short loc_7FBDBF
0x7FBDB4: cmp     eax, 153h
0x7FBDB9: jle     loc_7FC03C
0x7FBDBF: fld     dword ptr ds:0B46FD8h
0x7FBDC5: xor     edi, edi
0x7FBDC7: call    Double_To_SInt32
0x7FBDCC: fld     dword ptr ds:0B46FDCh
0x7FBDD2: mov     ebx, eax
0x7FBDD4: call    Double_To_SInt32
0x7FBDD9: mov     ecx, [esp+270h+var_230]
0x7FBDDD: cmp     ecx, 14Eh
0x7FBDE3: mov     [esp+270h+var_234], eax
0x7FBDE7: jl      short loc_7FBDF5
0x7FBDE9: cmp     ecx, 151h
0x7FBDEF: jle     loc_7FBEEF
0x7FBDF5: test    ebx, ebx
0x7FBDF7: jle     loc_7FBEEF
0x7FBDFD: fstp    st
0x7FBDFF: mov     esi, offset unk_B47018
0x7FBE04: fldz
0x7FBE06: mov     edi, ebx
0x7FBE08: fstp    [esp+270h+var_214]
0x7FBE0C: lea     esp, [esp+0]
0x7FBE10: fld     dword ptr [esi]
0x7FBE12: lea     ecx, [esp+270h+var_128]
0x7FBE19: fchs
0x7FBE1B: push    ecx
0x7FBE1C: fstp    [esp+274h+var_25C]
0x7FBE20: lea     edx, [esp+274h+var_22C]
0x7FBE24: fld     dword ptr [esi+4]
0x7FBE27: push    edx
0x7FBE28: fchs
0x7FBE2A: lea     eax, [esp+278h+var_174]
0x7FBE31: fstp    [esp+278h+var_258]
0x7FBE35: push    eax
0x7FBE36: fld     dword ptr [esi+8]
0x7FBE39: fchs
0x7FBE3B: fstp    [esp+27Ch+var_254]
0x7FBE3F: fld     [esp+27Ch+var_25C]
0x7FBE43: fstp    [esp+27Ch+var_22C]
0x7FBE47: fld     [esp+27Ch+var_258]
0x7FBE4B: fstp    [esp+27Ch+var_228]
0x7FBE4F: fld     [esp+27Ch+var_254]
0x7FBE53: fstp    [esp+27Ch+var_224]
0x7FBE57: call    D3DXVec3TransformNormal_0
0x7FBE5C: lea     ecx, [esp+270h+var_174]
0x7FBE63: push    ecx
0x7FBE64: lea     edx, [esp+274h+var_22C]
0x7FBE68: push    edx
0x7FBE69: call    D3DXVec3Normalize_0
0x7FBE6E: fld     [esp+270h+var_22C]
0x7FBE72: fstp    [esp+270h+var_248]
0x7FBE76: mov     eax, [esp+270h+var_248]
0x7FBE7A: fld     [esp+270h+var_228]
0x7FBE7E: mov     [esp+270h+var_210], eax
0x7FBE82: fstp    [esp+270h+var_244]
0x7FBE86: mov     ecx, [esp+270h+var_244]
0x7FBE8A: fld     [esp+270h+var_224]
0x7FBE8E: mov     [esp+270h+var_20C], ecx
0x7FBE92: fstp    [esp+270h+var_240]
0x7FBE96: mov     edx, [esp+270h+var_240]
0x7FBE9A: lea     ecx, [esp+270h+var_210]
0x7FBE9E: mov     [esp+270h+var_208], edx
0x7FBEA2: call    sub_43F350
0x7FBEA7: fstp    st
0x7FBEA9: fld     [esp+270h+var_210]
0x7FBEAD: add     esi, 20h ; ' '
0x7FBEB0: sub     ebx, 1
0x7FBEB3: fstp    [esp+270h+var_220]
0x7FBEB7: fld     [esp+270h+var_20C]
0x7FBEBB: mov     eax, [esp+270h+var_220]
0x7FBEBF: fstp    [esp+270h+var_21C]
0x7FBEC3: mov     ecx, [esp+270h+var_21C]
0x7FBEC7: fld     [esp+270h+var_208]
0x7FBECB: mov     [esi-20h], eax
0x7FBECE: mov     eax, [esp+270h+var_214]
0x7FBED2: fstp    [esp+270h+var_218]
0x7FBED6: mov     edx, [esp+270h+var_218]
0x7FBEDA: mov     [esi-1Ch], ecx
0x7FBEDD: mov     [esi-18h], edx
0x7FBEE0: mov     [esi-14h], eax
0x7FBEE3: jnz     loc_7FBE10
0x7FBEE9: fld1
0x7FBEEB: mov     eax, [esp+270h+var_234]
0x7FBEEF: test    eax, eax
0x7FBEF1: jle     loc_7FC036
0x7FBEF7: shl     edi, 5
0x7FBEFA: fstp    st
0x7FBEFC: add     edi, offset unk_B47018
0x7FBF02: mov     esi, edi
0x7FBF04: mov     edi, eax
0x7FBF06: mov     ecx, [esi]
0x7FBF08: mov     edx, [esi+4]
0x7FBF0B: mov     eax, [esi+8]
0x7FBF0E: mov     [esp+270h+var_220], ecx
0x7FBF12: fld     [esp+270h+var_220]
0x7FBF16: mov     ecx, [esi+0Ch]
0x7FBF19: fstp    [esp+270h+var_210]
0x7FBF1D: mov     [esp+270h+var_21C], edx
0x7FBF21: fld     [esp+270h+var_21C]
0x7FBF25: mov     [esp+270h+var_218], eax
0x7FBF29: fstp    [esp+270h+var_20C]
0x7FBF2D: fld     [esp+270h+var_218]
0x7FBF31: lea     edx, [esp+270h+var_128]
0x7FBF38: push    edx
0x7FBF39: fstp    [esp+274h+var_208]
0x7FBF3D: lea     eax, [esp+274h+var_210]
0x7FBF41: mov     [esp+274h+var_214], ecx
0x7FBF45: push    eax
0x7FBF46: lea     ecx, [esp+278h+var_174]
0x7FBF4D: push    ecx
0x7FBF4E: call    D3DXVec3TransformCoord_0
0x7FBF53: fld     [esp+270h+var_174]
0x7FBF5A: cmp     [ebp+arg_4], 0
0x7FBF5E: fst     [esp+270h+var_248]
0x7FBF62: fld     [esp+270h+var_170]
0x7FBF69: mov     edx, [esp+270h+var_248]
0x7FBF6D: fstp    [esp+270h+var_244]
0x7FBF71: mov     eax, [esp+270h+var_244]
0x7FBF75: fld     [esp+270h+var_16C]
0x7FBF7C: mov     [esp+270h+var_22C], edx
0x7FBF80: fstp    [esp+270h+var_240]
0x7FBF84: mov     ecx, [esp+270h+var_240]
0x7FBF88: fld     [esp+270h+var_214]
0x7FBF8C: mov     [esp+270h+var_228], eax
0x7FBF90: fst     [esp+270h+var_234]
0x7FBF94: mov     [esp+270h+var_224], ecx
0x7FBF98: jnz     short loc_7FBFE8
0x7FBF9A: mov     eax, [esp+270h+var_230]
0x7FBF9E: cmp     eax, 14Eh
0x7FBFA3: jz      short loc_7FBFBA
0x7FBFA5: cmp     eax, 14Fh
0x7FBFAA: jz      short loc_7FBFBA
0x7FBFAC: mov     edx, [ebp+arg_18]
0x7FBFAF: fstp    st(1)
0x7FBFB1: fdiv    dword ptr [edx+30h]
0x7FBFB4: fstp    [esp+270h+var_234]
0x7FBFB8: jmp     short loc_7FBFEC
0x7FBFBA: mov     eax, [ebp+arg_18]
0x7FBFBD: fstp    st
0x7FBFBF: fld     dword ptr [eax+30h]
0x7FBFC2: fstp    [esp+270h+var_238]
0x7FBFC6: fld     [esp+270h+var_238]
0x7FBFCA: fld     st
0x7FBFCC: fmulp   st(2), st
0x7FBFCE: fxch    st(1)
0x7FBFD0: fstp    [esp+270h+var_22C]
0x7FBFD4: fld     st
0x7FBFD6: fmul    [esp+270h+var_228]
0x7FBFDA: fstp    [esp+270h+var_228]
0x7FBFDE: fmul    [esp+270h+var_224]
0x7FBFE2: fstp    [esp+270h+var_224]
0x7FBFE6: jmp     short loc_7FBFEC
0x7FBFE8: fstp    st
0x7FBFEA: fstp    st
0x7FBFEC: fld     [esp+270h+var_22C]
0x7FBFF0: add     esi, 20h ; ' '
0x7FBFF3: sub     edi, 1
0x7FBFF6: fstp    [esp+270h+var_25C]
0x7FBFFA: fld     [esp+270h+var_228]
0x7FBFFE: mov     ecx, [esp+270h+var_25C]
0x7FC002: fstp    [esp+270h+var_258]
0x7FC006: mov     edx, [esp+270h+var_258]
0x7FC00A: fld     [esp+270h+var_224]
0x7FC00E: mov     [esi-20h], ecx
0x7FC011: fstp    [esp+270h+var_254]
0x7FC015: mov     eax, [esp+270h+var_254]
0x7FC019: fld     [esp+270h+var_234]
0x7FC01D: mov     [esi-1Ch], edx
0x7FC020: fstp    [esp+270h+var_250]
0x7FC024: mov     ecx, [esp+270h+var_250]
0x7FC028: mov     [esi-18h], eax
0x7FC02B: mov     [esi-14h], ecx
0x7FC02E: jnz     loc_7FBF06
0x7FC034: fld1
0x7FC036: mov     esi, [ebp+arg_4]
0x7FC039: mov     ebx, [ebp+arg_18]
0x7FC03C: mov     eax, ds:0B4665Ch
0x7FC041: mov     edx, ds:0B46658h
0x7FC047: mov     ecx, ds:0B46660h
0x7FC04D: mov     [esp+270h+var_20C], eax
0x7FC051: mov     eax, [esp+270h+var_230]
0x7FC055: mov     [esp+270h+var_210], edx
0x7FC059: mov     edx, ds:0B46664h
0x7FC05F: add     eax, 0FFFFFEB9h
0x7FC064: cmp     eax, 6
0x7FC067: mov     [esp+270h+var_208], ecx
0x7FC06B: mov     [esp+270h+var_204], edx
0x7FC06F: ja      loc_7FC124
0x7FC075: fld     [esp+270h+var_210]
0x7FC079: fsub    dword ptr ds:0B3F92Ch
0x7FC07F: fstp    [esp+270h+var_248]
0x7FC083: fld     [esp+270h+var_20C]
0x7FC087: fsub    dword ptr ds:0B3F930h
0x7FC08D: fstp    [esp+270h+var_244]
0x7FC091: fld     [esp+270h+var_208]
0x7FC095: fsub    dword ptr ds:0B3F934h
0x7FC09B: fstp    [esp+270h+var_240]
0x7FC09F: fld     [esp+270h+var_248]
0x7FC0A3: fst     [esp+270h+var_25C]
0x7FC0A7: mov     ecx, [esp+270h+var_25C]
0x7FC0AB: fld     [esp+270h+var_244]
0x7FC0AF: mov     ds:0B46DA8h, ecx
0x7FC0B5: fst     [esp+270h+var_258]
0x7FC0B9: mov     edx, [esp+270h+var_258]
0x7FC0BD: fld     [esp+270h+var_240]
0x7FC0C1: mov     ds:0B46DACh, edx
0x7FC0C7: fst     [esp+270h+var_254]
0x7FC0CB: mov     eax, [esp+270h+var_254]
0x7FC0CF: fxch    st(3)
0x7FC0D1: mov     ds:0B46DB0h, eax
0x7FC0D6: fst     [esp+270h+var_250]
0x7FC0DA: mov     ecx, [esp+270h+var_250]
0x7FC0DE: fxch    st(2)
0x7FC0E0: mov     ds:0B46DB4h, ecx
0x7FC0E6: fstp    [esp+270h+var_25C]
0x7FC0EA: mov     edx, [esp+270h+var_25C]
0x7FC0EE: mov     ds:0B46F88h, edx
0x7FC0F4: fstp    [esp+270h+var_258]
0x7FC0F8: mov     eax, [esp+270h+var_258]
0x7FC0FC: fxch    st(1)
0x7FC0FE: mov     ds:0B46F8Ch, eax
0x7FC103: fstp    [esp+270h+var_254]
0x7FC107: mov     ecx, [esp+270h+var_254]
0x7FC10B: mov     ds:0B46F90h, ecx
0x7FC111: fst     [esp+270h+var_250]
0x7FC115: mov     edx, [esp+270h+var_250]
0x7FC119: mov     ds:0B46F94h, edx
0x7FC11F: jmp     loc_7FC1E0
0x7FC124: fstp    st
0x7FC126: lea     eax, [esp+270h+var_128]
0x7FC12D: fld     [esp+270h+var_210]
0x7FC131: push    eax
0x7FC132: fstp    [esp+274h+var_174]
0x7FC139: lea     ecx, [esp+274h+var_174]
0x7FC140: fld     [esp+274h+var_20C]
0x7FC144: push    ecx
0x7FC145: fstp    [esp+278h+var_170]
0x7FC14C: lea     edx, [esp+278h+var_248]
0x7FC150: fld     [esp+278h+var_208]
0x7FC154: push    edx
0x7FC155: fstp    [esp+27Ch+var_16C]
0x7FC15C: call    D3DXVec3TransformCoord_0
0x7FC161: fld     [esp+270h+var_248]
0x7FC165: fst     [esp+270h+var_25C]
0x7FC169: mov     eax, [esp+270h+var_25C]
0x7FC16D: fld     [esp+270h+var_244]
0x7FC171: mov     ds:0B46DA8h, eax
0x7FC176: fst     [esp+270h+var_258]
0x7FC17A: mov     ecx, [esp+270h+var_258]
0x7FC17E: fld     [esp+270h+var_240]
0x7FC182: mov     ds:0B46DACh, ecx
0x7FC188: fst     [esp+270h+var_254]
0x7FC18C: mov     edx, [esp+270h+var_254]
0x7FC190: fld1
0x7FC192: mov     ds:0B46DB0h, edx
0x7FC198: fst     [esp+270h+var_250]
0x7FC19C: mov     eax, [esp+270h+var_250]
0x7FC1A0: fxch    st(3)
0x7FC1A2: fstp    [esp+270h+var_25C]
0x7FC1A6: mov     ds:0B46DB4h, eax
0x7FC1AB: mov     ecx, [esp+270h+var_25C]
0x7FC1AF: fxch    st(1)
0x7FC1B1: fstp    [esp+270h+var_258]
0x7FC1B5: mov     ds:0B46F88h, ecx
0x7FC1BB: mov     edx, [esp+270h+var_258]
0x7FC1BF: mov     ds:0B46F8Ch, edx
0x7FC1C5: fstp    [esp+270h+var_254]
0x7FC1C9: mov     eax, [esp+270h+var_254]
0x7FC1CD: mov     ds:0B46F90h, eax
0x7FC1D2: fst     [esp+270h+var_250]
0x7FC1D6: mov     ecx, [esp+270h+var_250]
0x7FC1DA: mov     ds:0B46F94h, ecx
0x7FC1E0: fldz
0x7FC1E2: fxch    st(1)
0x7FC1E4: cmp     byte ptr ds:0B46979h, 0
0x7FC1EB: jz      loc_7FC4E1
0x7FC1F1: cmp     [esp+270h+var_249], 0
0x7FC1F6: jz      loc_7FC299
0x7FC1FC: test    esi, esi
0x7FC1FE: jz      loc_7FC299
0x7FC204: mov     edx, ds:0B3F92Ch
0x7FC20A: fst     [esp+270h+var_200]
0x7FC20E: mov     eax, ds:0B3F930h
0x7FC213: fxch    st(1)
0x7FC215: mov     ecx, ds:0B3F934h
0x7FC21B: fst     [esp+270h+var_1FC]
0x7FC21F: fst     [esp+270h+var_1F8]
0x7FC223: mov     [esp+270h+var_248], edx
0x7FC227: fld     [esp+270h+var_248]
0x7FC22B: mov     [esp+270h+var_244], eax
0x7FC22F: fstp    [esp+270h+var_1F4]
0x7FC233: mov     [esp+270h+var_240], ecx
0x7FC237: fst     [esp+270h+var_1F0]
0x7FC23E: fst     [esp+270h+var_1E8]
0x7FC245: fxch    st(1)
0x7FC247: fst     [esp+270h+var_1EC]
0x7FC24E: fld     [esp+270h+var_244]
0x7FC252: fstp    [esp+270h+var_1E4]
0x7FC259: fxch    st(1)
0x7FC25B: fst     [esp+270h+var_1E0]
0x7FC262: fst     [esp+270h+var_1DC]
0x7FC269: fxch    st(1)
0x7FC26B: fst     [esp+270h+var_1D8]
0x7FC272: fld     [esp+270h+var_240]
0x7FC276: fstp    [esp+270h+var_1D4]
0x7FC27D: fxch    st(1)
0x7FC27F: fst     [esp+270h+var_1D0]
0x7FC286: fst     [esp+270h+var_1CC]
0x7FC28D: fstp    [esp+270h+var_1C8]
0x7FC294: jmp     loc_7FC31E
0x7FC299: fstp    st
0x7FC29B: fld     dword ptr [ebx]
0x7FC29D: fstp    [esp+270h+var_200]
0x7FC2A1: fld     dword ptr [ebx+4]
0x7FC2A4: fstp    [esp+270h+var_1FC]
0x7FC2A8: fld     dword ptr [ebx+8]
0x7FC2AB: fstp    [esp+270h+var_1F8]
0x7FC2AF: fld     dword ptr [ebx+24h]
0x7FC2B2: fstp    [esp+270h+var_1F4]
0x7FC2B6: fld     dword ptr [ebx+0Ch]
0x7FC2B9: fstp    [esp+270h+var_1F0]
0x7FC2C0: fld     dword ptr [ebx+10h]
0x7FC2C3: fstp    [esp+270h+var_1EC]
0x7FC2CA: fld     dword ptr [ebx+14h]
0x7FC2CD: fstp    [esp+270h+var_1E8]
0x7FC2D4: fld     dword ptr [ebx+28h]
0x7FC2D7: fstp    [esp+270h+var_1E4]
0x7FC2DE: fld     dword ptr [ebx+18h]
0x7FC2E1: fstp    [esp+270h+var_1E0]
0x7FC2E8: fld     dword ptr [ebx+1Ch]
0x7FC2EB: fstp    [esp+270h+var_1DC]
0x7FC2F2: fld     dword ptr [ebx+20h]
0x7FC2F5: fstp    [esp+270h+var_1D8]
0x7FC2FC: fld     dword ptr [ebx+2Ch]
0x7FC2FF: fstp    [esp+270h+var_1D4]
0x7FC306: fst     [esp+270h+var_1D0]
0x7FC30D: fst     [esp+270h+var_1CC]
0x7FC314: fstp    [esp+270h+var_1C8]
0x7FC31B: fld     dword ptr [ebx+30h]
0x7FC31E: fstp    [esp+270h+var_1C4]
0x7FC325: mov     ecx, 10h
0x7FC32A: lea     edi, [esp+270h+var_1C0]
0x7FC331: lea     esi, [esp+270h+var_200]
0x7FC335: rep movsd
0x7FC337: fld     [esp+270h+var_1C0]
0x7FC33E: fstp    [esp+270h+var_25C]
0x7FC342: fld     [esp+270h+var_1BC]
0x7FC349: fstp    [esp+270h+var_258]
0x7FC34D: fld     [esp+270h+var_1B8]
0x7FC354: fstp    [esp+270h+var_254]
0x7FC358: fld     [esp+270h+var_1B4]
0x7FC35F: fstp    [esp+270h+var_250]
0x7FC363: fld     [esp+270h+var_1B0]
0x7FC36A: mov     edx, [esp+270h+var_25C]
0x7FC36E: mov     eax, [esp+270h+var_258]
0x7FC372: mov     ecx, [esp+270h+var_254]
0x7FC376: fstp    [esp+270h+var_25C]
0x7FC37A: fld     [esp+270h+var_1AC]
0x7FC381: mov     ds:0B46E18h, edx
0x7FC387: mov     edx, [esp+270h+var_250]
0x7FC38B: fstp    [esp+270h+var_258]
0x7FC38F: fld     [esp+270h+var_1A8]
0x7FC396: mov     ds:0B46E1Ch, eax
0x7FC39B: mov     eax, [esp+270h+var_25C]
0x7FC39F: fstp    [esp+270h+var_254]
0x7FC3A3: fld     [esp+270h+var_1A4]
0x7FC3AA: mov     ds:0B46E20h, ecx
0x7FC3B0: mov     ecx, [esp+270h+var_258]
0x7FC3B4: fstp    [esp+270h+var_250]
0x7FC3B8: fld     [esp+270h+var_1A0]
0x7FC3BF: mov     ds:0B46E24h, edx
0x7FC3C5: mov     edx, [esp+270h+var_254]
0x7FC3C9: fstp    [esp+270h+var_25C]
0x7FC3CD: fld     [esp+270h+var_19C]
0x7FC3D4: mov     ds:0B46E28h, eax
0x7FC3D9: mov     eax, [esp+270h+var_250]
0x7FC3DD: fstp    [esp+270h+var_258]
0x7FC3E1: fld     [esp+270h+var_198]
0x7FC3E8: mov     ds:0B46E2Ch, ecx
0x7FC3EE: mov     ecx, [esp+270h+var_25C]
0x7FC3F2: fstp    [esp+270h+var_254]
0x7FC3F6: fld     [esp+270h+var_194]
0x7FC3FD: mov     ds:0B46E30h, edx
0x7FC403: mov     edx, [esp+270h+var_258]
0x7FC407: fstp    [esp+270h+var_250]
0x7FC40B: fld     [esp+270h+var_190]
0x7FC412: mov     ds:0B46E34h, eax
0x7FC417: mov     eax, [esp+270h+var_254]
0x7FC41B: fstp    [esp+270h+var_25C]
0x7FC41F: fld     [esp+270h+var_18C]
0x7FC426: mov     ds:0B46E38h, ecx
0x7FC42C: mov     ecx, [esp+270h+var_250]
0x7FC430: fstp    [esp+270h+var_258]
0x7FC434: fld     [esp+270h+var_188]
0x7FC43B: mov     ds:0B46E3Ch, edx
0x7FC441: mov     edx, [esp+270h+var_25C]
0x7FC445: fstp    [esp+270h+var_254]
0x7FC449: fld     [esp+270h+var_184]
0x7FC450: mov     ds:0B46E40h, eax
0x7FC455: mov     eax, [esp+270h+var_258]
0x7FC459: fstp    [esp+270h+var_250]
0x7FC45D: mov     ds:0B46E44h, ecx
0x7FC463: mov     ecx, [esp+270h+var_254]
0x7FC467: mov     ds:0B46E48h, edx
0x7FC46D: mov     edx, [esp+270h+var_250]
0x7FC471: mov     ds:0B46E4Ch, eax
0x7FC476: mov     eax, ds:0B44EE8h
0x7FC47B: mov     ds:0B46E50h, ecx
0x7FC481: mov     ecx, ds:0B44EECh
0x7FC487: mov     ds:0B46E54h, edx
0x7FC48D: mov     edx, ds:0B44EF0h
0x7FC493: mov     ds:0B46E58h, eax
0x7FC498: mov     eax, ds:0B44EF4h
0x7FC49D: mov     ds:0B46E5Ch, ecx
0x7FC4A3: mov     ecx, ds:0B44EF8h
0x7FC4A9: mov     ds:0B46E60h, edx
0x7FC4AF: mov     edx, ds:0B44EFCh
0x7FC4B5: mov     ds:0B46E64h, eax
0x7FC4BA: mov     ds:0B46E68h, ecx
0x7FC4C0: mov     ds:0B46E6Ch, edx
0x7FC4C6: mov     eax, ds:0B44F00h
0x7FC4CB: mov     ecx, ds:0B44F04h
0x7FC4D1: mov     esi, [ebp+arg_4]
0x7FC4D4: mov     ds:0B46E70h, eax
0x7FC4D9: mov     ds:0B46E74h, ecx
0x7FC4DF: jmp     short loc_7FC4E5
0x7FC4E1: fstp    st(1)
0x7FC4E3: fstp    st
0x7FC4E5: cmp     byte ptr ds:0B4697Fh, 0
0x7FC4EC: jz      short loc_7FC526
0x7FC4EE: test    esi, esi
0x7FC4F0: jz      short loc_7FC526
0x7FC4F2: mov     esi, [esi+28h]
0x7FC4F5: lea     edx, [esp+270h+var_1C0]
0x7FC4FC: push    edx
0x7FC4FD: mov     eax, edx
0x7FC4FF: mov     ecx, 10h
0x7FC504: lea     edi, [esp+274h+var_1C0]
0x7FC50B: push    eax
0x7FC50C: rep movsd
0x7FC50E: call    D3DXMatrixTranspose_0
0x7FC513: mov     ecx, 10h
0x7FC518: lea     esi, [esp+270h+var_1C0]
0x7FC51F: mov     edi, offset unk_B46E78
0x7FC524: rep movsd
0x7FC526: mov     edx, [esp+270h+var_230]
0x7FC52A: mov     ecx, ds:0B43104h
0x7FC530: mov     ebx, [ecx+280h]
0x7FC536: add     edx, 0FFFFFEB2h
0x7FC53C: cmp     edx, 3
0x7FC53F: mov     [esp+270h+var_E8], ebx
0x7FC546: ja      loc_7FC7B8
0x7FC54C: mov     eax, ds:0B42EB8h
0x7FC551: mov     ecx, [eax+0Ch]
0x7FC554: mov     eax, [ecx]
0x7FC556: cmp     byte ptr [eax+214h], 0
0x7FC55D: mov     [esp+270h+var_E4], eax
0x7FC564: jnz     loc_7FC797
0x7FC56A: mov     edx, [esp+270h+var_23C]
0x7FC56E: lea     ebx, [eax+150h]
0x7FC574: mov     eax, [edx+14h]
0x7FC577: lea     esi, [eax+980h]
0x7FC57D: mov     ecx, 10h
0x7FC582: lea     edi, [esp+270h+var_1C0]
0x7FC589: rep movsd
0x7FC58B: fld     [esp+270h+var_1B0]
0x7FC592: fld     dword ptr ds:0B3F930h
0x7FC598: fld     st
0x7FC59A: fmulp   st(2), st
0x7FC59C: fld     [esp+270h+var_1C0]
0x7FC5A3: fld     dword ptr ds:0B3F92Ch
0x7FC5A9: fld     st
0x7FC5AB: fmulp   st(2), st
0x7FC5AD: fxch    st(3)
0x7FC5AF: faddp   st(1), st
0x7FC5B1: fld     [esp+270h+var_1A0]
0x7FC5B8: lea     esi, [eax+9C0h]
0x7FC5BE: fld     dword ptr ds:0B3F934h
0x7FC5C4: mov     ecx, 10h
0x7FC5C9: fld     st
0x7FC5CB: lea     edi, [esp+270h+var_E0]
0x7FC5D2: fmulp   st(2), st
0x7FC5D4: lea     eax, [esp+270h+var_E0]
0x7FC5DB: fxch    st(2)
0x7FC5DD: push    eax
0x7FC5DE: lea     edx, [esp+274h+var_200]
0x7FC5E2: faddp   st(1), st
0x7FC5E4: fstp    [esp+274h+var_238]
0x7FC5E8: fld     [esp+274h+var_238]
0x7FC5EC: fchs
0x7FC5EE: fstp    [esp+274h+var_190]
0x7FC5F5: fld     [esp+274h+var_1AC]
0x7FC5FC: fmul    st, st(2)
0x7FC5FE: fld     [esp+274h+var_1BC]
0x7FC605: fmul    st, st(4)
0x7FC607: faddp   st(1), st
0x7FC609: fld     [esp+274h+var_19C]
0x7FC610: fmul    st, st(2)
0x7FC612: faddp   st(1), st
0x7FC614: fstp    [esp+274h+var_238]
0x7FC618: fld     [esp+274h+var_238]
0x7FC61C: fchs
0x7FC61E: fstp    [esp+274h+var_18C]
0x7FC625: fld     [esp+274h+var_1A8]
0x7FC62C: fmulp   st(2), st
0x7FC62E: fld     [esp+274h+var_1B8]
0x7FC635: fmulp   st(3), st
0x7FC637: fxch    st(1)
0x7FC639: faddp   st(2), st
0x7FC63B: fmul    [esp+274h+var_198]
0x7FC642: faddp   st(1), st
0x7FC644: fstp    [esp+274h+var_238]
0x7FC648: fld     [esp+274h+var_238]
0x7FC64C: fchs
0x7FC64E: fstp    [esp+274h+var_188]
0x7FC655: rep movsd
0x7FC657: lea     ecx, [esp+274h+var_1C0]
0x7FC65E: push    ecx
0x7FC65F: push    edx
0x7FC660: call    D3DXMatrixMultiply_0
0x7FC665: lea     eax, [esp+270h+var_200]
0x7FC669: push    eax
0x7FC66A: push    0
0x7FC66C: lea     ecx, [esp+278h+var_40]
0x7FC673: push    ecx
0x7FC674: call    D3DXMatrixInverse_0
0x7FC679: lea     edx, [esp+270h+var_40]
0x7FC680: push    edx
0x7FC681: lea     eax, [esp+274h+var_200]
0x7FC685: push    eax
0x7FC686: call    D3DXMatrixTranspose_0
0x7FC68B: lea     eax, [esp+270h+var_9C]
0x7FC692: sub     eax, ebx
0x7FC694: mov     [esp+270h+var_234], eax
0x7FC698: lea     eax, [esp+270h+var_98]
0x7FC69F: xor     edi, edi
0x7FC6A1: sub     eax, ebx
0x7FC6A3: mov     esi, ebx
0x7FC6A5: mov     [esp+270h+var_23C], eax
0x7FC6A9: lea     eax, [esp+270h+var_94]
0x7FC6B0: sub     eax, ebx
0x7FC6B2: mov     [esp+270h+var_230], eax
0x7FC6B6: lea     eax, [esp+270h+var_A0]
0x7FC6BD: sub     eax, ebx
0x7FC6BF: mov     [esp+270h+var_238], eax
0x7FC6C3: mov     ecx, [esi]
0x7FC6C5: mov     edx, [esi+4]
0x7FC6C8: mov     eax, [esi+8]
0x7FC6CB: mov     [esp+270h+var_248], ecx
0x7FC6CF: fld     [esp+270h+var_248]
0x7FC6D3: fstp    [esp+270h+var_25C]
0x7FC6D7: mov     [esp+270h+var_244], edx
0x7FC6DB: fld     [esp+270h+var_244]
0x7FC6DF: mov     [esp+270h+var_240], eax
0x7FC6E3: fstp    [esp+270h+var_258]
0x7FC6E7: lea     ecx, [esp+270h+var_25C]
0x7FC6EB: fld     [esp+270h+var_240]
0x7FC6EF: push    ecx
0x7FC6F0: fstp    [esp+274h+var_254]
0x7FC6F4: mov     edx, ecx
0x7FC6F6: fld     dword ptr [esi+0Ch]
0x7FC6F9: push    edx
0x7FC6FA: fchs
0x7FC6FC: fstp    [esp+278h+var_250]
0x7FC700: call    D3DXPlaneNormalize_0
0x7FC705: lea     eax, [esp+270h+var_200]
0x7FC709: push    eax
0x7FC70A: lea     ecx, [esp+274h+var_25C]
0x7FC70E: push    ecx
0x7FC70F: lea     edx, [esp+278h+var_220]
0x7FC713: push    edx
0x7FC714: call    D3DXPlaneTransform_0
0x7FC719: fld     [esp+270h+var_220]
0x7FC71D: mov     eax, [esp+270h+var_238]
0x7FC721: mov     ecx, [esp+270h+var_234]
0x7FC725: fstp    dword ptr [eax+esi]
0x7FC728: fld     [esp+270h+var_21C]
0x7FC72C: mov     edx, [esp+270h+var_23C]
0x7FC730: add     eax, esi
0x7FC732: fstp    dword ptr [ecx+esi]
0x7FC735: fld     [esp+270h+var_218]
0x7FC739: mov     ecx, [esp+270h+var_230]
0x7FC73D: fstp    dword ptr [edx+esi]
0x7FC740: push    eax
0x7FC741: fld     [esp+274h+var_214]
0x7FC745: push    edi
0x7FC746: fstp    dword ptr [ecx+esi]
0x7FC749: mov     ecx, [esp+278h+var_E8]
0x7FC750: mov     edx, [ecx]
0x7FC752: mov     eax, [edx+0DCh]
0x7FC758: push    ecx
0x7FC759: call    eax
0x7FC75B: add     edi, 1
0x7FC75E: add     esi, 10h
0x7FC761: cmp     edi, 6
0x7FC764: jl      loc_7FC6C3
0x7FC76A: mov     eax, [esp+270h+var_E4]
0x7FC771: lea     edi, [eax+1B4h]
0x7FC777: mov     ecx, 18h
0x7FC77C: lea     esi, [esp+270h+var_A0]
0x7FC783: mov     byte ptr [eax+214h], 1
0x7FC78A: rep movsd
0x7FC78C: xor     eax, eax
0x7FC78E: pop     edi
0x7FC78F: pop     esi
0x7FC790: pop     ebx
0x7FC791: mov     esp, ebp
0x7FC793: pop     ebp
0x7FC794: retn    20h ; ' '
0x7FC797: lea     edi, [eax+1B4h]
0x7FC79D: xor     esi, esi
0x7FC79F: nop
0x7FC7A0: mov     ecx, [ebx]
0x7FC7A2: mov     edx, [ecx+0DCh]
0x7FC7A8: push    edi
0x7FC7A9: push    esi
0x7FC7AA: push    ebx
0x7FC7AB: call    edx
0x7FC7AD: add     esi, 1
0x7FC7B0: add     edi, 10h
0x7FC7B3: cmp     esi, 6
0x7FC7B6: jl      short loc_7FC7A0
0x7FC7B8: pop     edi
0x7FC7B9: pop     esi
0x7FC7BA: xor     eax, eax
0x7FC7BC: pop     ebx
0x7FC7BD: mov     esp, ebp
0x7FC7BF: pop     ebp
0x7FC7C0: retn    20h ; ' '
