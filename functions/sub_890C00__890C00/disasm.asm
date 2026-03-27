0x890C00: push    0FFFFFFFFh
0x890C02: push    offset SEH_890C00
0x890C07: mov     eax, large fs:0
0x890C0D: push    eax
0x890C0E: push    ecx
0x890C0F: push    ebx
0x890C10: push    ebp
0x890C11: push    esi
0x890C12: push    edi
0x890C13: mov     eax, ds:0B30AACh
0x890C18: xor     eax, esp
0x890C1A: push    eax
0x890C1B: lea     eax, [esp+24h+var_C]
0x890C1F: mov     large fs:0, eax
0x890C25: mov     esi, ecx
0x890C27: mov     [esp+24h+var_10], esi
0x890C2B: call    sub_890B00
0x890C30: xor     ebx, ebx
0x890C32: mov     [esi+74h], ebx
0x890C35: mov     [esi+8Ch], ebx
0x890C3B: mov     byte ptr [esi+84h], 1
0x890C42: mov     [esi+70h], ebx
0x890C45: mov     eax, ds:0B2EB3Ch
0x890C4A: add     eax, 1
0x890C4D: and     eax, 0FFFFh
0x890C52: mov     [esp+24h+var_4], ebx
0x890C56: mov     ds:0B2EB3Ch, eax
0x890C5B: jnz     short loc_890C67
0x890C5D: mov     eax, 0Ah
0x890C62: mov     ds:0B2EB3Ch, eax
0x890C67: fldz
0x890C69: shl     eax, 10h
0x890C6C: fst     dword ptr [esi+7Ch]
0x890C6F: or      eax, 14h
0x890C72: cmp     [esp+24h+arg_0], bl
0x890C76: fld1
0x890C78: fst     dword ptr [esi+80h]
0x890C7E: mov     [esi+74h], eax
0x890C81: fld     dword ptr ds:0A967D0h
0x890C87: mov     [esi+78h], ebx
0x890C8A: fstp    dword ptr [esi+94h]
0x890C90: mov     [esi+88h], ebx
0x890C96: mov     [esi+90h], ebx
0x890C9C: mov     dword ptr [esi+9Ch], 1
0x890CA6: mov     [esi+0A0h], ebx
0x890CAC: fst     dword ptr [esi+98h]
0x890CB2: mov     [esi+85h], bl
0x890CB8: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x890CBF: fxch    st(1)
0x890CC1: movaps  xmmword ptr [esi], xmm0
0x890CC4: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x890CCB: fst     dword ptr [esi+50h]
0x890CCE: fst     dword ptr [esi+24h]
0x890CD1: movaps  xmmword ptr [esi+10h], xmm0
0x890CD5: fst     dword ptr [esi+40h]
0x890CD8: mov     [esi+48h], ebx
0x890CDB: fstp    dword ptr [esi+44h]
0x890CDE: mov     dword ptr [esi+54h], 4
0x890CE5: fst     dword ptr [esi+20h]
0x890CE8: fld     dword ptr ds:0A3D65Ch
0x890CEE: fstp    dword ptr [esi+4Ch]
0x890CF1: fstp    dword ptr [esi+28h]
0x890CF4: fld     dword ptr ds:0A2FE7Ch
0x890CFA: fstp    dword ptr [esi+58h]
0x890CFD: jz      loc_890F52
0x890D03: cmp     ds:0BA7A54h, ebx
0x890D09: jnz     loc_890F45
0x890D0F: mov     ecx, ds:0BA7D98h
0x890D15: mov     eax, [ecx]
0x890D17: mov     edx, [eax+10h]
0x890D1A: push    31h ; '1'
0x890D1C: push    34h ; '4'
0x890D1E: call    edx
0x890D20: mov     word ptr [eax+4], 34h ; '4'
0x890D26: mov     dword ptr [esp+24h+arg_0], eax
0x890D2A: mov     ecx, eax
0x890D2C: mov     byte ptr [esp+24h+var_4], 1
0x890D31: call    sub_8BA090
0x890D36: mov     ecx, ds:0BA7D98h
0x890D3C: mov     ds:0BA7A54h, eax
0x890D41: mov     eax, [ecx]
0x890D43: mov     edx, [eax+10h]
0x890D46: push    31h ; '1'
0x890D48: push    0Ch
0x890D4A: mov     byte ptr [esp+2Ch+var_4], bl
0x890D4E: call    edx
0x890D50: mov     word ptr [eax+4], 0Ch
0x890D56: mov     dword ptr [esp+24h+arg_0], eax
0x890D5A: mov     ecx, eax
0x890D5C: mov     byte ptr [esp+24h+var_4], 2
0x890D61: call    sub_8D0030
0x890D66: mov     ecx, ds:0BA7A54h
0x890D6C: mov     edi, eax
0x890D6E: push    ebx
0x890D6F: push    edi
0x890D70: mov     byte ptr [esp+2Ch+var_4], bl
0x890D74: call    sub_8BA120
0x890D79: cmp     [edi+4], bx
0x890D7D: jz      short loc_890D97
0x890D7F: add     word ptr [edi+6], 0FFFFh
0x890D84: movzx   eax, word ptr [edi+6]
0x890D88: cmp     ax, bx
0x890D8B: jnz     short loc_890D97
0x890D8D: mov     eax, [edi]
0x890D8F: mov     edx, [eax]
0x890D91: push    1
0x890D93: mov     ecx, edi
0x890D95: call    edx
0x890D97: mov     ecx, ds:0BA7D98h
0x890D9D: mov     eax, [ecx]
0x890D9F: mov     edx, [eax+10h]
0x890DA2: push    31h ; '1'
0x890DA4: mov     ebp, 8
0x890DA9: push    ebp
0x890DAA: call    edx
0x890DAC: mov     [eax+4], bp
0x890DB0: mov     dword ptr [esp+24h+arg_0], eax
0x890DB4: mov     ecx, eax
0x890DB6: mov     byte ptr [esp+24h+var_4], 3
0x890DBB: call    sub_8CFC60
0x890DC0: mov     ecx, ds:0BA7A54h
0x890DC6: mov     edi, eax
0x890DC8: push    5
0x890DCA: push    edi
0x890DCB: mov     byte ptr [esp+2Ch+var_4], bl
0x890DCF: call    sub_8BA120
0x890DD4: cmp     [edi+4], bx
0x890DD8: jz      short loc_890DF2
0x890DDA: add     word ptr [edi+6], 0FFFFh
0x890DDF: movzx   eax, word ptr [edi+6]
0x890DE3: cmp     ax, bx
0x890DE6: jnz     short loc_890DF2
0x890DE8: mov     eax, [edi]
0x890DEA: mov     edx, [eax]
0x890DEC: push    1
0x890DEE: mov     ecx, edi
0x890DF0: call    edx
0x890DF2: mov     ecx, ds:0BA7D98h
0x890DF8: mov     eax, [ecx]
0x890DFA: mov     edx, [eax+10h]
0x890DFD: push    31h ; '1'
0x890DFF: push    ebp
0x890E00: call    edx
0x890E02: mov     [eax+4], bp
0x890E06: mov     dword ptr [esp+24h+arg_0], eax
0x890E0A: mov     ecx, eax
0x890E0C: mov     byte ptr [esp+24h+var_4], 4
0x890E11: call    sub_8CFA40
0x890E16: mov     ecx, ds:0BA7A54h
0x890E1C: mov     edi, eax
0x890E1E: push    1
0x890E20: push    edi
0x890E21: mov     byte ptr [esp+2Ch+var_4], bl
0x890E25: call    sub_8BA120
0x890E2A: cmp     [edi+4], bx
0x890E2E: jz      short loc_890E48
0x890E30: add     word ptr [edi+6], 0FFFFh
0x890E35: movzx   eax, word ptr [edi+6]
0x890E39: cmp     ax, bx
0x890E3C: jnz     short loc_890E48
0x890E3E: mov     eax, [edi]
0x890E40: mov     edx, [eax]
0x890E42: push    1
0x890E44: mov     ecx, edi
0x890E46: call    edx
0x890E48: mov     ecx, ds:0BA7D98h
0x890E4E: mov     eax, [ecx]
0x890E50: mov     edx, [eax+10h]
0x890E53: push    31h ; '1'
0x890E55: push    0Ch
0x890E57: call    edx
0x890E59: mov     word ptr [eax+4], 0Ch
0x890E5F: mov     dword ptr [esp+24h+arg_0], eax
0x890E63: mov     ecx, eax
0x890E65: mov     byte ptr [esp+24h+var_4], 5
0x890E6A: call    sub_8CF6C0
0x890E6F: mov     ecx, ds:0BA7A54h
0x890E75: mov     edi, eax
0x890E77: push    2
0x890E79: push    edi
0x890E7A: mov     byte ptr [esp+2Ch+var_4], bl
0x890E7E: call    sub_8BA120
0x890E83: cmp     [edi+4], bx
0x890E87: jz      short loc_890EA1
0x890E89: add     word ptr [edi+6], 0FFFFh
0x890E8E: movzx   eax, word ptr [edi+6]
0x890E92: cmp     ax, bx
0x890E95: jnz     short loc_890EA1
0x890E97: mov     eax, [edi]
0x890E99: mov     edx, [eax]
0x890E9B: push    1
0x890E9D: mov     ecx, edi
0x890E9F: call    edx
0x890EA1: mov     ecx, ds:0BA7D98h
0x890EA7: mov     eax, [ecx]
0x890EA9: mov     edx, [eax+10h]
0x890EAC: push    31h ; '1'
0x890EAE: push    ebp
0x890EAF: call    edx
0x890EB1: mov     edi, eax
0x890EB3: push    4
0x890EB5: mov     [edi+4], bp
0x890EB9: mov     word ptr [edi+6], 1
0x890EBF: mov     dword ptr [edi], offset ??_7bhkCharacterStateFlying@@6B@; const bhkCharacterStateFlying::`vftable'
0x890EC5: mov     ecx, ds:0BA7A54h
0x890ECB: push    edi
0x890ECC: call    sub_8BA120
0x890ED1: cmp     [edi+4], bx
0x890ED5: jz      short loc_890EEF
0x890ED7: add     word ptr [edi+6], 0FFFFh
0x890EDC: movzx   eax, word ptr [edi+6]
0x890EE0: cmp     ax, bx
0x890EE3: jnz     short loc_890EEF
0x890EE5: mov     eax, [edi]
0x890EE7: mov     edx, [eax]
0x890EE9: push    1
0x890EEB: mov     ecx, edi
0x890EED: call    edx
0x890EEF: mov     ecx, ds:0BA7D98h
0x890EF5: mov     eax, [ecx]
0x890EF7: mov     edx, [eax+10h]
0x890EFA: push    31h ; '1'
0x890EFC: push    ebp
0x890EFD: call    edx
0x890EFF: mov     [eax+4], bp
0x890F03: mov     dword ptr [esp+24h+arg_0], eax
0x890F07: mov     ecx, eax
0x890F09: mov     byte ptr [esp+24h+var_4], 6
0x890F0E: call    sub_8CF3A0
0x890F13: mov     ecx, ds:0BA7A54h
0x890F19: mov     edi, eax
0x890F1B: push    6
0x890F1D: push    edi
0x890F1E: mov     byte ptr [esp+2Ch+var_4], bl
0x890F22: call    sub_8BA120
0x890F27: cmp     [edi+4], bx
0x890F2B: jz      short loc_890F45
0x890F2D: add     word ptr [edi+6], 0FFFFh
0x890F32: movzx   eax, word ptr [edi+6]
0x890F36: cmp     ax, bx
0x890F39: jnz     short loc_890F45
0x890F3B: mov     eax, [edi]
0x890F3D: mov     edx, [eax]
0x890F3F: push    1
0x890F41: mov     ecx, edi
0x890F43: call    edx
0x890F45: mov     eax, ds:0BA7A54h
0x890F4A: push    eax
0x890F4B: mov     ecx, esi
0x890F4D: call    sub_890560
0x890F52: mov     eax, esi
0x890F54: mov     ecx, [esp+24h+var_C]
0x890F58: mov     large fs:0, ecx
0x890F5F: pop     ecx
0x890F60: pop     edi
0x890F61: pop     esi
0x890F62: pop     ebp
0x890F63: pop     ebx
0x890F64: add     esp, 10h
0x890F67: retn    4
