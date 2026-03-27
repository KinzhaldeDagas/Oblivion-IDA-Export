0x696CE0: push    0FFFFFFFFh
0x696CE2: push    offset SEH_696CE0
0x696CE7: mov     eax, large fs:0
0x696CED: push    eax
0x696CEE: sub     esp, 38h
0x696CF1: push    ebp
0x696CF2: push    esi
0x696CF3: push    edi
0x696CF4: mov     eax, ds:0B30AACh
0x696CF9: xor     eax, esp
0x696CFB: push    eax
0x696CFC: lea     eax, [esp+54h+var_C]
0x696D00: mov     large fs:0, eax
0x696D06: mov     ebp, ecx
0x696D08: push    0DCh ; 'Ü'; Size
0x696D0D: call    FormHeapAlloc
0x696D12: add     esp, 4
0x696D15: mov     [esp+54h+var_44], eax
0x696D19: xor     edi, edi
0x696D1B: cmp     eax, edi
0x696D1D: mov     [esp+54h+var_4], edi
0x696D21: jz      short loc_696D2D
0x696D23: push    edi
0x696D24: mov     ecx, eax; this
0x696D26: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x696D2B: mov     edi, eax
0x696D2D: mov     esi, [ebp+94h]
0x696D33: cmp     esi, edi
0x696D35: mov     [esp+54h+var_4], 0FFFFFFFFh
0x696D3D: jz      short loc_696D73
0x696D3F: test    esi, esi
0x696D41: jz      short loc_696D5F
0x696D43: lea     eax, [esi+4]
0x696D46: push    eax; lpAddend
0x696D47: call    dword ptr ds:0A2807Ch
0x696D4D: test    eax, eax
0x696D4F: jnz     short loc_696D5F
0x696D51: test    esi, esi
0x696D53: jz      short loc_696D5F
0x696D55: mov     edx, [esi]
0x696D57: mov     eax, [edx]
0x696D59: push    1
0x696D5B: mov     ecx, esi
0x696D5D: call    eax
0x696D5F: test    edi, edi
0x696D61: mov     [ebp+94h], edi
0x696D67: jz      short loc_696D73
0x696D69: add     edi, 4
0x696D6C: push    edi; lpAddend
0x696D6D: call    dword ptr ds:0A28078h
0x696D73: mov     edx, [ebp+0]
0x696D76: mov     eax, [edx+174h]
0x696D7C: mov     esi, [ebp+94h]
0x696D82: mov     ecx, ebp
0x696D84: call    eax
0x696D86: mov     ecx, [eax]
0x696D88: mov     [esi+88h], ecx
0x696D8E: mov     edx, [eax+4]
0x696D91: mov     [esi+8Ch], edx
0x696D97: mov     eax, [eax+8]
0x696D9A: push    0DCh ; 'Ü'; Size
0x696D9F: mov     [esi+90h], eax
0x696DA5: call    FormHeapAlloc
0x696DAA: add     esp, 4
0x696DAD: mov     [esp+54h+var_44], eax
0x696DB1: test    eax, eax
0x696DB3: mov     [esp+54h+var_4], 1
0x696DBB: jz      short loc_696DCA
0x696DBD: push    0
0x696DBF: mov     ecx, eax; this
0x696DC1: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x696DC6: mov     edi, eax
0x696DC8: jmp     short loc_696DCC
0x696DCA: xor     edi, edi
0x696DCC: mov     esi, [ebp+88h]
0x696DD2: cmp     esi, edi
0x696DD4: mov     [esp+54h+var_4], 0FFFFFFFFh
0x696DDC: jz      short loc_696E12
0x696DDE: test    esi, esi
0x696DE0: jz      short loc_696DFE
0x696DE2: lea     ecx, [esi+4]
0x696DE5: push    ecx; lpAddend
0x696DE6: call    dword ptr ds:0A2807Ch
0x696DEC: test    eax, eax
0x696DEE: jnz     short loc_696DFE
0x696DF0: test    esi, esi
0x696DF2: jz      short loc_696DFE
0x696DF4: mov     edx, [esi]
0x696DF6: mov     eax, [edx]
0x696DF8: push    1
0x696DFA: mov     ecx, esi
0x696DFC: call    eax
0x696DFE: test    edi, edi
0x696E00: mov     [ebp+88h], edi
0x696E06: jz      short loc_696E12
0x696E08: add     edi, 4
0x696E0B: push    edi; lpAddend
0x696E0C: call    dword ptr ds:0A28078h
0x696E12: mov     edx, [ebp+0]
0x696E15: mov     eax, [edx+174h]
0x696E1B: mov     esi, [ebp+88h]
0x696E21: mov     ecx, ebp
0x696E23: call    eax
0x696E25: mov     ecx, [eax]
0x696E27: mov     [esi+54h], ecx
0x696E2A: mov     edx, [eax+4]
0x696E2D: mov     [esi+58h], edx
0x696E30: mov     eax, [eax+8]
0x696E33: mov     [esi+5Ch], eax
0x696E36: mov     ecx, [ebp+88h]
0x696E3C: push    offset dword_A7D0EC
0x696E41: call    NiObjectNET_GetExtraData
0x696E46: mov     esi, eax
0x696E48: test    esi, esi
0x696E4A: jnz     short loc_696E8C
0x696E4C: push    10h; Size
0x696E4E: call    FormHeapAlloc
0x696E53: add     esp, 4
0x696E56: mov     [esp+54h+var_44], eax
0x696E5A: test    eax, eax
0x696E5C: mov     [esp+54h+var_4], 2
0x696E64: jz      short loc_696E6F
0x696E66: mov     ecx, eax
0x696E68: call    BSXFlags_constr
0x696E6D: jmp     short loc_696E71
0x696E6F: xor     eax, eax
0x696E71: mov     ecx, [ebp+88h]
0x696E77: push    eax
0x696E78: push    offset dword_A7D0EC
0x696E7D: mov     [esp+5Ch+var_4], 0FFFFFFFFh
0x696E85: mov     esi, eax
0x696E87: call    sub_6FF820
0x696E8C: or      dword ptr [esi+0Ch], 1
0x696E90: mov     esi, [ebp+7Ch]
0x696E93: test    esi, esi
0x696E95: jz      short loc_696EBA
0x696E97: lea     ecx, [esi+4]
0x696E9A: push    ecx; lpAddend
0x696E9B: call    dword ptr ds:0A2807Ch
0x696EA1: test    eax, eax
0x696EA3: jnz     short loc_696EB3
0x696EA5: test    esi, esi
0x696EA7: jz      short loc_696EB3
0x696EA9: mov     edx, [esi]
0x696EAB: mov     eax, [edx]
0x696EAD: push    1
0x696EAF: mov     ecx, esi
0x696EB1: call    eax
0x696EB3: mov     dword ptr [ebp+7Ch], 0
0x696EBA: mov     edx, [ebp+24h]
0x696EBD: mov     ecx, [ebp+20h]
0x696EC0: mov     eax, [ebp+28h]
0x696EC3: sub     esp, 0Ch
0x696EC6: mov     dword ptr [esp+60h+var_3C], edx
0x696ECA: fld     dword ptr [esp+60h+var_3C]
0x696ECE: fstp    [esp+60h+var_58]; float
0x696ED2: mov     [esp+60h+var_40], ecx
0x696ED6: fld     [esp+60h+var_40]
0x696EDA: mov     [esp+60h+var_38], eax
0x696EDE: fstp    [esp+60h+var_5C]; float
0x696EE2: lea     ecx, [esp+60h+var_30]
0x696EE6: fld     [esp+60h+var_38]
0x696EEA: fstp    [esp+60h+var_60]; float
0x696EED: call    sub_7117C0
0x696EF2: mov     edi, [ebp+88h]
0x696EF8: add     edi, 30h ; '0'
0x696EFB: mov     ecx, 9
0x696F00: lea     esi, [esp+54h+var_30]
0x696F04: rep movsd
0x696F06: mov     eax, [ebp+88h]
0x696F0C: push    1
0x696F0E: push    eax
0x696F0F: call    sub_7F4D60
0x696F14: mov     esi, [ebp+7Ch]
0x696F17: mov     edi, eax
0x696F19: add     esp, 8
0x696F1C: cmp     esi, edi
0x696F1E: jz      short loc_696F51
0x696F20: test    esi, esi
0x696F22: jz      short loc_696F40
0x696F24: lea     ecx, [esi+4]
0x696F27: push    ecx; lpAddend
0x696F28: call    dword ptr ds:0A2807Ch
0x696F2E: test    eax, eax
0x696F30: jnz     short loc_696F40
0x696F32: test    esi, esi
0x696F34: jz      short loc_696F40
0x696F36: mov     edx, [esi]
0x696F38: mov     eax, [edx]
0x696F3A: push    1
0x696F3C: mov     ecx, esi
0x696F3E: call    eax
0x696F40: test    edi, edi
0x696F42: mov     [ebp+7Ch], edi
0x696F45: jz      short loc_696F51
0x696F47: add     edi, 4
0x696F4A: push    edi; lpAddend
0x696F4B: call    dword ptr ds:0A28078h
0x696F51: mov     eax, [ebp+7Ch]
0x696F54: test    eax, eax
0x696F56: jz      loc_69708B
0x696F5C: mov     ecx, ds:0B38148h
0x696F62: mov     [eax+134h], ecx
0x696F68: fld     dword ptr ds:0B38128h
0x696F6E: mov     edx, [ebp+7Ch]
0x696F71: fstp    dword ptr [edx+13Ch]
0x696F77: mov     eax, [ebp+7Ch]
0x696F7A: fld     dword ptr ds:0B38130h
0x696F80: fstp    dword ptr [eax+140h]
0x696F86: mov     ecx, [ebp+7Ch]
0x696F89: fld     dword ptr ds:0B38138h
0x696F8F: fstp    dword ptr [ecx+144h]
0x696F95: mov     edx, [ebp+7Ch]
0x696F98: fld     dword ptr ds:0B38140h
0x696F9E: fstp    dword ptr [edx+148h]
0x696FA4: mov     eax, [ebp+7Ch]
0x696FA7: fld     dword ptr ds:0B38158h
0x696FAD: add     eax, 160h
0x696FB2: fstp    [esp+54h+var_40]
0x696FB6: mov     ecx, [esp+54h+var_40]
0x696FBA: fld     dword ptr ds:0B38160h
0x696FC0: fstp    dword ptr [esp+54h+var_3C]
0x696FC4: mov     edx, dword ptr [esp+54h+var_3C]
0x696FC8: fld     dword ptr ds:0B38168h
0x696FCE: mov     [eax], ecx
0x696FD0: mov     [eax+4], edx
0x696FD3: fstp    [esp+54h+var_38]
0x696FD7: fld1
0x696FD9: mov     ecx, [esp+54h+var_38]
0x696FDD: mov     [eax+8], ecx
0x696FE0: fst     [esp+54h+var_34]
0x696FE4: mov     edx, [esp+54h+var_34]
0x696FE8: mov     [eax+0Ch], edx
0x696FEB: fld     dword ptr ds:0B38170h
0x696FF1: mov     eax, [ebp+7Ch]
0x696FF4: fstp    [esp+54h+var_40]
0x696FF8: fld     dword ptr ds:0B38178h
0x696FFE: mov     ecx, [esp+54h+var_40]
0x697002: fstp    dword ptr [esp+54h+var_3C]
0x697006: mov     edx, dword ptr [esp+54h+var_3C]
0x69700A: fld     dword ptr ds:0B38180h
0x697010: mov     [eax+170h], ecx
0x697016: mov     [eax+174h], edx
0x69701C: fstp    [esp+54h+var_38]
0x697020: mov     ecx, [esp+54h+var_38]
0x697024: mov     [eax+178h], ecx
0x69702A: fstp    [esp+54h+var_34]
0x69702E: mov     edx, [esp+54h+var_34]
0x697032: mov     [eax+17Ch], edx
0x697038: fld     dword ptr ds:0B38190h
0x69703E: add     eax, 170h
0x697043: mov     eax, [ebp+7Ch]
0x697046: fstp    dword ptr [eax+150h]
0x69704C: mov     ecx, [ebp+7Ch]
0x69704F: mov     edx, ds:0B38188h
0x697055: mov     [ecx+14Ch], edx
0x69705B: fld     dword ptr ds:0B38198h
0x697061: mov     eax, [ebp+7Ch]
0x697064: fstp    dword ptr [eax+154h]
0x69706A: mov     ecx, [ebp+7Ch]
0x69706D: fld     dword ptr ds:0B381A8h
0x697073: fstp    dword ptr [ecx+15Ch]
0x697079: mov     edx, [ebp+7Ch]
0x69707C: mov     byte ptr [edx+183h], 1
0x697083: mov     ecx, [ebp+7Ch]
0x697086: call    sub_7F2EC0
0x69708B: mov     ecx, [esp+54h+var_C]
0x69708F: mov     large fs:0, ecx
0x697096: pop     ecx
0x697097: pop     edi
0x697098: pop     esi
0x697099: pop     ebp
0x69709A: add     esp, 44h
0x69709D: retn
