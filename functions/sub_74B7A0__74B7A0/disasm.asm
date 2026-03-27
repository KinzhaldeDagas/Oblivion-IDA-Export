0x74B7A0: sub     esp, 4Ch
0x74B7A3: push    ebp
0x74B7A4: mov     ebp, [esp+50h+arg_4]
0x74B7A8: test    ebp, ebp
0x74B7AA: mov     [esp+50h+var_4C], ecx
0x74B7AE: jz      loc_74BAC2
0x74B7B4: mov     eax, [ebp+0]
0x74B7B7: mov     edx, [eax+10h]
0x74B7BA: mov     ecx, ebp
0x74B7BC: call    edx
0x74B7BE: test    eax, eax
0x74B7C0: jz      loc_74BAC2
0x74B7C6: push    ebx
0x74B7C7: mov     ebx, [esp+54h+arg_0]
0x74B7CB: mov     eax, [ebx+8]
0x74B7CE: test    eax, eax
0x74B7D0: jnz     short loc_74B7DC
0x74B7D2: pop     ebx
0x74B7D3: xor     al, al
0x74B7D5: pop     ebp
0x74B7D6: add     esp, 4Ch
0x74B7D9: retn    10h
0x74B7DC: movzx   eax, word ptr [eax+8]
0x74B7E0: push    esi
0x74B7E1: push    edi
0x74B7E2: movzx   edi, ax
0x74B7E5: mov     dword ptr [esp+5Ch+var_48], edi
0x74B7E9: call    _rand
0x74B7EE: mov     [esp+5Ch+arg_0], eax
0x74B7F2: fild    [esp+5Ch+arg_0]
0x74B7F6: fdiv    qword ptr ds:0A3D5A8h
0x74B7FC: fstp    [esp+5Ch+arg_0]
0x74B800: fld     [esp+5Ch+arg_0]
0x74B804: fimul   dword ptr [esp+5Ch+var_48]
0x74B808: fnstcw  word ptr [esp+5Ch+arg_0]
0x74B80C: movzx   eax, word ptr [esp+5Ch+arg_0]
0x74B811: or      eax, 0C00h
0x74B816: mov     dword ptr [esp+5Ch+var_48], eax
0x74B81A: lea     eax, [edi-1]
0x74B81D: fldcw   word ptr [esp+5Ch+var_48]
0x74B821: fistp   [esp+5Ch+var_48]
0x74B825: mov     esi, dword ptr [esp+5Ch+var_48]
0x74B829: cmp     esi, eax
0x74B82B: fldcw   word ptr [esp+5Ch+arg_0]
0x74B82F: jl      short loc_74B833
0x74B831: mov     esi, eax
0x74B833: mov     eax, [ebx+8]
0x74B836: imul    esi, 2Ch ; ','
0x74B839: add     esi, [eax+0Ch]
0x74B83C: cmp     word ptr [esi+1Eh], 0
0x74B841: jnz     short loc_74B862
0x74B843: mov     ecx, [esp+5Ch+arg_C]
0x74B847: mov     edx, [esp+5Ch+arg_8]
0x74B84B: push    ecx
0x74B84C: mov     ecx, [esp+60h+var_4C]
0x74B850: push    edx
0x74B851: push    ebp
0x74B852: push    ebx
0x74B853: call    sub_74B220
0x74B858: pop     edi
0x74B859: pop     esi
0x74B85A: pop     ebx
0x74B85B: pop     ebp
0x74B85C: add     esp, 4Ch
0x74B85F: retn    10h
0x74B862: movzx   edi, word ptr [esi+1Eh]
0x74B866: mov     [esp+5Ch+arg_0], edi
0x74B86A: call    sub_53D460
0x74B86F: lea     ecx, [edi-1]
0x74B872: fimul   [esp+5Ch+arg_0]
0x74B876: fnstcw  word ptr [esp+5Ch+arg_0]
0x74B87A: movzx   eax, word ptr [esp+5Ch+arg_0]
0x74B87F: or      eax, 0C00h
0x74B884: mov     dword ptr [esp+5Ch+var_48], eax
0x74B888: fldcw   word ptr [esp+5Ch+var_48]
0x74B88C: fistp   [esp+5Ch+var_48]
0x74B890: mov     eax, dword ptr [esp+5Ch+var_48]
0x74B894: cmp     eax, ecx
0x74B896: fldcw   word ptr [esp+5Ch+arg_0]
0x74B89A: jl      short loc_74B89E
0x74B89C: mov     eax, ecx
0x74B89E: mov     ecx, [ebp+0B8h]
0x74B8A4: test    ecx, ecx
0x74B8A6: mov     [esp+5Ch+arg_0], ecx
0x74B8AA: jnz     short loc_74B8B8
0x74B8AC: pop     edi
0x74B8AD: pop     esi
0x74B8AE: pop     ebx
0x74B8AF: xor     al, al
0x74B8B1: pop     ebp
0x74B8B2: add     esp, 4Ch
0x74B8B5: retn    10h
0x74B8B8: cmp     word ptr [esi+22h], 0
0x74B8BD: mov     ecx, [esi+14h]
0x74B8C0: jz      short loc_74B8D2
0x74B8C2: movzx   ebx, word ptr [ecx+eax*2]
0x74B8C6: movzx   edi, word ptr [ecx+eax*2+2]
0x74B8CB: movzx   ebp, word ptr [ecx+eax*2+4]
0x74B8D0: jmp     short loc_74B8E6
0x74B8D2: lea     eax, [eax+eax*2]
0x74B8D5: movzx   ebx, word ptr [ecx+eax*2]
0x74B8D9: movzx   edi, word ptr [ecx+eax*2+2]
0x74B8DE: movzx   ebp, word ptr [ecx+eax*2+4]
0x74B8E3: lea     eax, [ecx+eax*2]
0x74B8E6: call    _rand
0x74B8EB: cdq
0x74B8EC: mov     ecx, 3
0x74B8F1: idiv    ecx
0x74B8F3: sub     edx, 1
0x74B8F6: jz      short loc_74B8FF
0x74B8F8: sub     edx, 1
0x74B8FB: jnz     short loc_74B903
0x74B8FD: jmp     short loc_74B901
0x74B8FF: mov     ebx, edi
0x74B901: mov     edi, ebp
0x74B903: mov     edx, [esp+5Ch+arg_0]
0x74B907: mov     ebp, [esp+5Ch+arg_4]
0x74B90B: push    ebx
0x74B90C: mov     ebx, [esp+60h+var_4C]
0x74B910: push    esi
0x74B911: push    edx
0x74B912: push    ebp
0x74B913: lea     eax, [esp+6Ch+var_18]
0x74B917: push    eax
0x74B918: lea     ecx, [esp+70h+var_48]
0x74B91C: push    ecx
0x74B91D: mov     ecx, ebx
0x74B91F: call    sub_74A390
0x74B924: mov     edx, [esp+5Ch+arg_0]
0x74B928: push    edi
0x74B929: push    esi
0x74B92A: push    edx
0x74B92B: push    ebp
0x74B92C: lea     eax, [esp+6Ch+var_C]
0x74B930: push    eax
0x74B931: lea     ecx, [esp+70h+var_3C]
0x74B935: push    ecx
0x74B936: mov     ecx, ebx
0x74B938: call    sub_74A390
0x74B93D: fld     [esp+5Ch+var_3C]
0x74B941: fadd    dword ptr [esp+5Ch+var_48]
0x74B945: push    ecx
0x74B946: lea     edx, [esp+60h+var_24]
0x74B94A: lea     ecx, [esp+60h+var_30]
0x74B94E: fstp    [esp+60h+var_30]
0x74B952: fld     dword ptr [esp+60h+var_48+4]
0x74B956: fadd    [esp+60h+var_38]
0x74B95A: fstp    [esp+60h+var_2C]
0x74B95E: fld     [esp+60h+var_40]
0x74B962: fadd    [esp+60h+var_34]
0x74B966: fstp    [esp+60h+var_28]
0x74B96A: fld     dword ptr ds:0A379B4h
0x74B970: fstp    [esp+60h+var_60]; float
0x74B973: push    edx; int
0x74B974: call    sub_4BF9B0
0x74B979: mov     esi, [esp+5Ch+arg_8]
0x74B97D: mov     eax, [esp+5Ch+var_24]
0x74B981: mov     ecx, [esp+5Ch+var_20]
0x74B985: mov     edx, [esp+5Ch+var_1C]
0x74B989: mov     edi, [esp+5Ch+arg_C]
0x74B98D: mov     [esi], eax
0x74B98F: mov     [esi+4], ecx
0x74B992: mov     [esi+8], edx
0x74B995: cmp     dword ptr [ebx+70h], 0
0x74B999: jnz     short loc_74BA19
0x74B99B: fld     [esp+5Ch+var_C]
0x74B99F: push    ecx
0x74B9A0: fadd    [esp+60h+var_18]
0x74B9A4: lea     eax, [esp+60h+var_C]
0x74B9A8: lea     ecx, [esp+60h+var_24]
0x74B9AC: fstp    [esp+60h+var_24]
0x74B9B0: fld     [esp+60h+var_14]
0x74B9B4: fadd    [esp+60h+var_8]
0x74B9B8: fstp    [esp+60h+var_20]
0x74B9BC: fld     [esp+60h+var_10]
0x74B9C0: fadd    [esp+60h+var_4]
0x74B9C4: fstp    [esp+60h+var_1C]
0x74B9C8: fld     dword ptr ds:0A379B4h
0x74B9CE: fstp    [esp+60h+var_60]; float
0x74B9D1: push    eax; int
0x74B9D2: call    sub_4BF9B0
0x74B9D7: lea     ecx, [esp+5Ch+var_C]
0x74B9DB: push    ecx
0x74B9DC: call    sub_4BFAA0
0x74B9E1: add     esp, 4
0x74B9E4: mov     ecx, edi
0x74B9E6: call    sub_404C90
0x74B9EB: fstp    [esp+5Ch+arg_4]
0x74B9EF: fld     [esp+5Ch+arg_4]
0x74B9F3: lea     edx, [esp+5Ch+var_C]
0x74B9F7: push    edx; int
0x74B9F8: push    ecx
0x74B9F9: lea     eax, [esp+64h+var_18]
0x74B9FD: fstp    [esp+64h+var_64]; float
0x74BA00: push    eax; int
0x74BA01: call    sub_47DA10
0x74BA06: mov     ecx, [eax]
0x74BA08: mov     [edi], ecx
0x74BA0A: mov     edx, [eax+4]
0x74BA0D: mov     [edi+4], edx
0x74BA10: mov     eax, [eax+8]
0x74BA13: add     esp, 0Ch
0x74BA16: mov     [edi+8], eax
0x74BA19: cmp     dword ptr [ebx+74h], 4
0x74BA1D: jnz     loc_74BAAC
0x74BA23: fld     [esp+5Ch+var_3C]
0x74BA27: fsub    dword ptr [esp+5Ch+var_48]
0x74BA2B: fstp    [esp+5Ch+var_30]
0x74BA2F: fld     [esp+5Ch+var_38]
0x74BA33: fsub    dword ptr [esp+5Ch+var_48+4]
0x74BA37: fstp    [esp+5Ch+var_2C]
0x74BA3B: fld     [esp+5Ch+var_34]
0x74BA3F: fsub    [esp+5Ch+var_40]
0x74BA43: fstp    [esp+5Ch+var_28]
0x74BA47: call    sub_53D460
0x74BA4C: fstp    [esp+5Ch+arg_4]
0x74BA50: fld     [esp+5Ch+var_30]
0x74BA54: fld     [esp+5Ch+arg_4]
0x74BA58: fld     st
0x74BA5A: fmulp   st(2), st
0x74BA5C: fxch    st(1)
0x74BA5E: fstp    [esp+5Ch+var_3C]
0x74BA62: fld     [esp+5Ch+var_2C]
0x74BA66: fmul    st, st(1)
0x74BA68: fstp    [esp+5Ch+var_38]
0x74BA6C: fmul    [esp+5Ch+var_28]
0x74BA70: fstp    [esp+5Ch+var_34]
0x74BA74: fld     [esp+5Ch+var_3C]
0x74BA78: fadd    dword ptr [esp+5Ch+var_48]
0x74BA7C: fstp    [esp+5Ch+var_30]
0x74BA80: mov     ecx, [esp+5Ch+var_30]
0x74BA84: fld     [esp+5Ch+var_38]
0x74BA88: mov     [esi], ecx
0x74BA8A: fadd    dword ptr [esp+5Ch+var_48+4]
0x74BA8E: fstp    [esp+5Ch+var_2C]
0x74BA92: mov     edx, [esp+5Ch+var_2C]
0x74BA96: fld     [esp+5Ch+var_34]
0x74BA9A: mov     [esi+4], edx
0x74BA9D: fadd    [esp+5Ch+var_40]
0x74BAA1: fstp    [esp+5Ch+var_28]
0x74BAA5: mov     eax, [esp+5Ch+var_28]
0x74BAA9: mov     [esi+8], eax
0x74BAAC: push    edi
0x74BAAD: push    esi
0x74BAAE: push    ebp
0x74BAAF: mov     ecx, ebx
0x74BAB1: call    sub_74A0A0
0x74BAB6: pop     edi
0x74BAB7: pop     esi
0x74BAB8: pop     ebx
0x74BAB9: mov     al, 1
0x74BABB: pop     ebp
0x74BABC: add     esp, 4Ch
0x74BABF: retn    10h
0x74BAC2: xor     al, al
0x74BAC4: pop     ebp
0x74BAC5: add     esp, 4Ch
0x74BAC8: retn    10h
