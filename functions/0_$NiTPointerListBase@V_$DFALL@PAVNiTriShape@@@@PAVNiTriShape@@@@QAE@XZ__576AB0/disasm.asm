0x576AB0: push    0FFFFFFFFh
0x576AB2: push    offset ??0?$NiTPointerListBase@V?$DFALL@PAVNiTriShape@@@@PAVNiTriShape@@@@QAE@XZ_SEH
0x576AB7: mov     eax, large fs:0
0x576ABD: push    eax
0x576ABE: sub     esp, 6Ch
0x576AC1: push    ebx
0x576AC2: push    ebp
0x576AC3: push    esi
0x576AC4: push    edi
0x576AC5: mov     eax, ds:0B30AACh
0x576ACA: xor     eax, esp
0x576ACC: push    eax
0x576ACD: lea     eax, [esp+8Ch+var_C]
0x576AD4: mov     large fs:0, eax
0x576ADA: mov     eax, ecx
0x576ADC: mov     [esp+8Ch+var_74], eax
0x576AE0: mov     ecx, [eax+18h]
0x576AE3: mov     eax, [eax+4]
0x576AE6: xor     ebx, ebx
0x576AE8: cmp     eax, ebx
0x576AEA: jz      loc_576F08
0x576AF0: mov     edx, ecx
0x576AF2: sub     ecx, 1
0x576AF5: test    edx, edx
0x576AF7: jz      short loc_576B04
0x576AF9: mov     eax, [eax]
0x576AFB: cmp     eax, ebx
0x576AFD: jnz     short loc_576AF0
0x576AFF: jmp     loc_576F08
0x576B04: cmp     eax, ebx
0x576B06: jz      loc_576F08
0x576B0C: mov     ebp, [eax+8]
0x576B0F: xor     esi, esi
0x576B11: xor     eax, eax
0x576B13: mov     [esp+8Ch+var_34], eax
0x576B17: mov     [esp+8Ch+var_30], eax
0x576B1B: mov     [esp+8Ch+var_2C], eax
0x576B1F: mov     [esp+8Ch+var_28], eax
0x576B23: mov     [esp+8Ch+var_24], eax
0x576B27: push    esi
0x576B28: mov     ecx, ebp
0x576B2A: mov     [esp+esi*4+90h+var_20], ebx
0x576B2E: call    sub_574FB0
0x576B33: mov     edi, eax
0x576B35: cmp     edi, ebx
0x576B37: jle     short loc_576B91
0x576B39: fld     dword ptr ds:0A68A84h
0x576B3F: fstp    [esp+8Ch+var_54]
0x576B43: fld     dword ptr ds:0A68A80h
0x576B49: fstp    [esp+8Ch+var_50]
0x576B4D: fld     dword ptr ds:0A68A7Ch
0x576B53: fstp    [esp+8Ch+var_4C]
0x576B57: fld1
0x576B59: fstp    [esp+8Ch+var_48]
0x576B5D: call    FontManager_GetSingleton
0x576B62: mov     eax, [eax+esi*4]
0x576B65: lea     ecx, [esp+8Ch+var_54]
0x576B69: push    ecx
0x576B6A: push    edi
0x576B6B: mov     ecx, eax
0x576B6D: call    sub_574200
0x576B72: mov     edx, ds:0B3F9A8h
0x576B78: mov     [eax+54h], edx
0x576B7B: mov     ecx, ds:0B3F9ACh
0x576B81: mov     [eax+58h], ecx
0x576B84: mov     edx, ds:0B3F9B0h
0x576B8A: mov     [esp+esi*4+8Ch+var_20], eax
0x576B8E: mov     [eax+5Ch], edx
0x576B91: add     esi, 1
0x576B94: cmp     esi, 5
0x576B97: jl      short loc_576B27
0x576B99: mov     [esp+8Ch+var_38], ebx
0x576B9D: mov     [esp+8Ch+var_40], ebx
0x576BA1: mov     [esp+8Ch+var_3C], ebx
0x576BA5: mov     [esp+8Ch+var_44], offset ??_7?$NiTList@PAVNiTriShape@@@@6B@; const NiTList<NiTriShape *>::`vftable'
0x576BAD: cmp     ebp, ebx
0x576BAF: mov     [esp+8Ch+var_4], ebx
0x576BB6: jz      loc_576ED7
0x576BBC: mov     eax, ds:0B3F9A8h
0x576BC1: fldz
0x576BC3: mov     ecx, ds:0B3F9ACh
0x576BC9: mov     edx, ds:0B3F9B0h
0x576BCF: mov     dword ptr [esp+8Ch+var_6C], eax
0x576BD3: mov     eax, [ebp+4]
0x576BD6: cmp     eax, ebx
0x576BD8: mov     dword ptr [esp+8Ch+var_6C+4], ecx
0x576BDC: mov     [esp+8Ch+var_64], edx
0x576BE0: jz      loc_576DB6
0x576BE6: jmp     short loc_576BEC
0x576BE8: mov     eax, [esp+8Ch+var_78]
0x576BEC: mov     edx, [esp+8Ch+arg_4]
0x576BF3: cmp     [edx+28h], ebx
0x576BF6: jle     loc_576DB6
0x576BFC: lea     ecx, [eax+8]
0x576BFF: fst     dword ptr [esp+8Ch+var_6C]
0x576C03: mov     eax, [eax]
0x576C05: mov     ecx, [ecx]
0x576C07: mov     [esp+8Ch+var_78], eax
0x576C0B: xor     eax, eax
0x576C0D: cmp     [edx+34h], al
0x576C10: jz      short loc_576C19
0x576C12: mov     edx, [esp+8Ch+var_74]
0x576C16: mov     eax, [edx+10h]
0x576C19: mov     edx, [ecx+24h]
0x576C1C: cmp     edx, 4
0x576C1F: jnz     short loc_576C32
0x576C21: mov     esi, eax
0x576C23: sub     esi, [ecx+10h]
0x576C26: mov     [esp+8Ch+var_70], esi
0x576C2A: fild    [esp+8Ch+var_70]
0x576C2E: fstp    dword ptr [esp+8Ch+var_6C]
0x576C32: cmp     edx, 2
0x576C35: jnz     short loc_576C4B
0x576C37: sub     eax, [ecx+10h]
0x576C3A: cdq
0x576C3B: sub     eax, edx
0x576C3D: sar     eax, 1
0x576C3F: mov     [esp+8Ch+var_70], eax
0x576C43: fild    [esp+8Ch+var_70]
0x576C47: fstp    dword ptr [esp+8Ch+var_6C]
0x576C4B: mov     eax, [ecx+20h]
0x576C4E: fst     dword ptr [esp+8Ch+var_6C+4]
0x576C52: add     eax, [ecx+18h]
0x576C55: fld     [esp+8Ch+var_64]
0x576C59: mov     ebp, [ecx+4]
0x576C5C: cmp     ebp, ebx
0x576C5E: mov     [esp+8Ch+var_70], eax
0x576C62: fisub   [esp+8Ch+var_70]
0x576C66: fstp    [esp+8Ch+var_64]
0x576C6A: jz      loc_576DAC
0x576C70: mov     ebx, [esp+8Ch+var_64]
0x576C74: fstp    st
0x576C76: mov     esi, [ebp+8]
0x576C79: mov     edi, [esi]
0x576C7B: lea     eax, [ebp+8]
0x576C7E: mov     ebp, [ebp+0]
0x576C81: call    FontManager_GetSingleton
0x576C86: cmp     dword ptr [esi+1Ch], 0
0x576C8A: mov     ecx, [eax+edi*4]
0x576C8D: jz      short loc_576C97
0x576C8F: mov     edx, [esi+1Ch]
0x576C92: cmp     byte ptr [edx], 0
0x576C95: jnz     short loc_576CF8
0x576C97: mov     eax, dword ptr [esp+8Ch+var_6C]
0x576C9B: fild    dword ptr [esi+34h]
0x576C9E: mov     edx, dword ptr [esp+8Ch+var_6C+4]
0x576CA2: mov     dword ptr [esp+8Ch+var_60], eax
0x576CA6: mov     eax, [esi]
0x576CA8: fadd    dword ptr [esp+8Ch+var_6C]
0x576CAC: add     eax, eax
0x576CAE: add     eax, eax
0x576CB0: mov     dword ptr [esp+8Ch+var_60+4], edx
0x576CB4: fstp    dword ptr [esp+8Ch+var_60]
0x576CB8: mov     edx, [esp+eax+8Ch+var_34]
0x576CBC: lea     edi, [edx+1]
0x576CBF: mov     [esp+eax+8Ch+var_34], edi
0x576CC3: mov     eax, [esp+eax+8Ch+var_20]
0x576CC7: lea     edi, [esi+8]
0x576CCA: push    edi
0x576CCB: lea     edi, [esp+90h+var_60]
0x576CCF: push    edi
0x576CD0: push    eax
0x576CD1: movzx   eax, byte ptr [esi+4]
0x576CD5: push    edx
0x576CD6: lea     edx, ds:0[eax*8]
0x576CDD: sub     edx, eax
0x576CDF: mov     eax, [ecx+38h]
0x576CE2: lea     edx, [eax+edx*8+128h]
0x576CE9: push    edx
0x576CEA: mov     [esp+0A0h+var_58], ebx
0x576CEE: call    sub_573F10
0x576CF3: jmp     loc_576DA0
0x576CF8: mov     eax, dword ptr [esp+8Ch+var_6C]
0x576CFC: fild    dword ptr [esi+34h]
0x576CFF: mov     ecx, dword ptr [esp+8Ch+var_6C+4]
0x576D03: mov     [esp+8Ch+var_54], eax
0x576D07: mov     eax, [esi+2Ch]
0x576D0A: fadd    dword ptr [esp+8Ch+var_6C]
0x576D0E: add     eax, [esi+28h]
0x576D11: mov     edx, ebx
0x576D13: push    eax; int
0x576D14: fstp    [esp+90h+var_54]
0x576D18: mov     eax, [esi+24h]
0x576D1B: mov     edi, [esp+90h+var_54]
0x576D1F: push    eax; int
0x576D20: sub     esp, 0Ch
0x576D23: mov     eax, esp
0x576D25: sub     esp, 8
0x576D28: mov     [eax], edi
0x576D2A: mov     [eax+4], ecx
0x576D2D: mov     ecx, esp; this
0x576D2F: xor     edi, edi
0x576D31: mov     [esp+0A8h+var_70], esp
0x576D35: mov     [ecx], edi
0x576D37: mov     [ecx+4], di
0x576D3B: mov     [ecx+6], di
0x576D3F: mov     esi, [esi+1Ch]
0x576D42: push    edi; a3
0x576D43: push    esi; a2
0x576D44: mov     [eax+8], edx
0x576D47: call    BSStringT_Set
0x576D4C: mov     byte ptr [esp+0A8h+var_4], 1
0x576D54: call    FontManager_GetSingleton
0x576D59: mov     ecx, eax
0x576D5B: mov     byte ptr [esp+0A8h+var_4], 0
0x576D63: call    sub_575000
0x576D68: mov     esi, eax
0x576D6A: cmp     esi, edi
0x576D6C: jz      short loc_576DA0
0x576D6E: mov     edx, [esp+8Ch+var_44]
0x576D72: mov     eax, [edx+4]
0x576D75: lea     ecx, [esp+8Ch+var_44]
0x576D79: call    eax
0x576D7B: mov     [eax+8], esi
0x576D7E: mov     [eax], edi
0x576D80: mov     ecx, [esp+8Ch+var_3C]
0x576D84: mov     [eax+4], ecx
0x576D87: mov     ecx, [esp+8Ch+var_3C]
0x576D8B: cmp     ecx, edi
0x576D8D: jz      short loc_576D93
0x576D8F: mov     [ecx], eax
0x576D91: jmp     short loc_576D97
0x576D93: mov     [esp+8Ch+var_40], eax
0x576D97: add     [esp+8Ch+var_38], 1
0x576D9C: mov     [esp+8Ch+var_3C], eax
0x576DA0: test    ebp, ebp
0x576DA2: jnz     loc_576C76
0x576DA8: fldz
0x576DAA: xor     ebx, ebx
0x576DAC: cmp     [esp+8Ch+var_78], ebx
0x576DB0: jnz     loc_576BE8
0x576DB6: mov     edi, [esp+8Ch+arg_0]
0x576DBD: fstp    st
0x576DBF: xor     ebp, ebp
0x576DC1: mov     esi, [esp+ebp*4+8Ch+var_20]
0x576DC5: cmp     esi, ebx
0x576DC7: jz      short loc_576E29
0x576DC9: mov     eax, [esi+0B4h]
0x576DCF: movzx   edx, word ptr [eax+8]
0x576DD3: mov     ecx, [eax+1Ch]
0x576DD6: movzx   edx, dx
0x576DD9: push    ecx
0x576DDA: push    edx
0x576DDB: lea     ecx, [eax+0Ch]
0x576DDE: call    sub_72A0F0
0x576DE3: mov     eax, ds:0B3F9A8h
0x576DE8: mov     [esi+54h], eax
0x576DEB: mov     ecx, ds:0B3F9ACh
0x576DF1: mov     [esi+58h], ecx
0x576DF4: mov     edx, ds:0B3F9B0h
0x576DFA: mov     ecx, esi; this
0x576DFC: mov     [esi+5Ch], edx
0x576DFF: call    NiAVObject_InitializePropertyState
0x576E04: mov     ecx, esi
0x576E06: call    NiNode_UpdateDynamicEffectState
0x576E0B: fldz
0x576E0D: push    1; a3
0x576E0F: push    ecx
0x576E10: mov     ecx, esi; this
0x576E12: fstp    [esp+94h+a2]; a2
0x576E15: call    NiAVObject_UpdateNiAVObject
0x576E1A: mov     eax, [edi]
0x576E1C: mov     edx, [eax+84h]
0x576E22: push    1
0x576E24: push    esi
0x576E25: mov     ecx, edi
0x576E27: call    edx
0x576E29: add     ebp, 1
0x576E2C: cmp     ebp, 5
0x576E2F: jb      short loc_576DC1
0x576E31: cmp     [esp+8Ch+var_38], ebx
0x576E35: jz      loc_576ED7
0x576E3B: jmp     short loc_576E40
0x576E3D: align 10h
0x576E40: mov     eax, [esp+8Ch+var_40]
0x576E44: mov     ecx, [eax]
0x576E46: cmp     ecx, ebx
0x576E48: mov     [esp+8Ch+var_40], ecx
0x576E4C: jz      short loc_576E53
0x576E4E: mov     [ecx+4], ebx
0x576E51: jmp     short loc_576E57
0x576E53: mov     [esp+8Ch+var_3C], ebx
0x576E57: mov     esi, [eax+8]
0x576E5A: push    eax
0x576E5B: mov     eax, [esp+90h+var_44]
0x576E5F: mov     edx, [eax+8]
0x576E62: lea     ecx, [esp+90h+var_44]
0x576E66: call    edx
0x576E68: sub     [esp+8Ch+var_38], 1
0x576E6D: mov     eax, [esi+0B4h]
0x576E73: mov     ecx, [eax+1Ch]
0x576E76: movzx   edx, word ptr [eax+8]
0x576E7A: push    ecx
0x576E7B: movzx   ecx, dx
0x576E7E: push    ecx
0x576E7F: lea     ecx, [eax+0Ch]
0x576E82: call    sub_72A0F0
0x576E87: mov     edx, ds:0B3F9A8h
0x576E8D: mov     [esi+54h], edx
0x576E90: mov     eax, ds:0B3F9ACh
0x576E95: mov     [esi+58h], eax
0x576E98: mov     ecx, ds:0B3F9B0h
0x576E9E: mov     [esi+5Ch], ecx
0x576EA1: mov     ecx, esi; this
0x576EA3: call    NiAVObject_InitializePropertyState
0x576EA8: mov     ecx, esi
0x576EAA: call    NiNode_UpdateDynamicEffectState
0x576EAF: fldz
0x576EB1: push    1; a3
0x576EB3: push    ecx
0x576EB4: mov     ecx, esi; this
0x576EB6: fstp    [esp+94h+a2]; a2
0x576EB9: call    NiAVObject_UpdateNiAVObject
0x576EBE: mov     edx, [edi]
0x576EC0: mov     eax, [edx+84h]
0x576EC6: push    1
0x576EC8: push    esi
0x576EC9: mov     ecx, edi
0x576ECB: call    eax
0x576ECD: cmp     [esp+8Ch+var_38], ebx
0x576ED1: jnz     loc_576E40
0x576ED7: mov     [esp+8Ch+var_44], offset ??_7?$NiTPointerListBase@V?$DFALL@PAVNiTriShape@@@@PAVNiTriShape@@@@6B@; const NiTPointerListBase<DFALL<NiTriShape *>,NiTriShape *>::`vftable'
0x576EDF: mov     esi, [esp+8Ch+var_40]
0x576EE3: cmp     esi, ebx
0x576EE5: mov     [esp+8Ch+var_4], 2
0x576EF0: jz      short loc_576F08
0x576EF2: mov     edx, [esp+8Ch+var_44]
0x576EF6: mov     eax, esi
0x576EF8: mov     esi, [esi]
0x576EFA: push    eax
0x576EFB: mov     eax, [edx+8]
0x576EFE: lea     ecx, [esp+90h+var_44]
0x576F02: call    eax
0x576F04: cmp     esi, ebx
0x576F06: jnz     short loc_576EF2
0x576F08: mov     ecx, dword ptr [esp+8Ch+var_C]
0x576F0F: mov     large fs:0, ecx
0x576F16: pop     ecx
0x576F17: pop     edi
0x576F18: pop     esi
0x576F19: pop     ebp
0x576F1A: pop     ebx
0x576F1B: add     esp, 78h
0x576F1E: retn    8
