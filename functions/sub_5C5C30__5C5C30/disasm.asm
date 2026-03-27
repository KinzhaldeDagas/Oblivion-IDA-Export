0x5C5C30: push    0FFFFFFFFh
0x5C5C32: push    offset SEH_5C5C30
0x5C5C37: mov     eax, large fs:0
0x5C5C3D: push    eax
0x5C5C3E: sub     esp, 10h
0x5C5C41: push    ebx
0x5C5C42: push    ebp
0x5C5C43: push    esi
0x5C5C44: push    edi
0x5C5C45: mov     eax, ds:0B30AACh
0x5C5C4A: xor     eax, esp
0x5C5C4C: push    eax
0x5C5C4D: lea     eax, [esp+30h+var_C]
0x5C5C51: mov     large fs:0, eax
0x5C5C57: mov     esi, ecx
0x5C5C59: mov     eax, ds:0B38FC0h
0x5C5C5E: push    0FAEh
0x5C5C63: sub     esp, 8
0x5C5C66: mov     ecx, esp; this
0x5C5C68: xor     ebx, ebx
0x5C5C6A: mov     [esp+3Ch+var_10], esp
0x5C5C6E: push    ebx; a3
0x5C5C6F: push    eax; a2
0x5C5C70: mov     [ecx], ebx
0x5C5C72: mov     [ecx+4], bx
0x5C5C76: mov     [ecx+6], bx
0x5C5C7A: call    BSStringT_Set
0x5C5C7F: mov     eax, ds:0B38F88h
0x5C5C84: sub     esp, 8
0x5C5C87: mov     ecx, esp; this
0x5C5C89: mov     [esp+44h+var_14], esp
0x5C5C8D: push    ebx; a3
0x5C5C8E: push    eax; a2
0x5C5C8F: mov     [esp+4Ch+var_4], ebx
0x5C5C93: mov     [ecx], ebx
0x5C5C95: mov     [ecx+4], bx
0x5C5C99: mov     [ecx+6], bx
0x5C5C9D: call    BSStringT_Set
0x5C5CA2: or      edi, 0FFFFFFFFh
0x5C5CA5: mov     ecx, esi
0x5C5CA7: mov     [esp+44h+var_4], edi
0x5C5CAB: call    sub_5C3440
0x5C5CB0: mov     ecx, eax
0x5C5CB2: call    Tile_GetFloat
0x5C5CB7: fstp    [esp+30h+var_10]
0x5C5CBB: mov     eax, ds:0B38FC8h
0x5C5CC0: push    0FAEh
0x5C5CC5: sub     esp, 8
0x5C5CC8: mov     ecx, esp; this
0x5C5CCA: mov     [esp+3Ch+var_14], esp
0x5C5CCE: push    ebx; a3
0x5C5CCF: push    eax; a2
0x5C5CD0: mov     [ecx], ebx
0x5C5CD2: mov     [ecx+4], bx
0x5C5CD6: mov     [ecx+6], bx
0x5C5CDA: call    BSStringT_Set
0x5C5CDF: mov     eax, ds:0B38F88h
0x5C5CE4: sub     esp, 8
0x5C5CE7: mov     ecx, esp; this
0x5C5CE9: mov     [esp+44h+var_18], esp
0x5C5CED: push    ebx; a3
0x5C5CEE: push    eax; a2
0x5C5CEF: mov     [esp+4Ch+var_4], 1
0x5C5CF7: mov     [ecx], ebx
0x5C5CF9: mov     [ecx+4], bx
0x5C5CFD: mov     [ecx+6], bx
0x5C5D01: call    BSStringT_Set
0x5C5D06: mov     ecx, esi
0x5C5D08: mov     [esp+44h+var_4], edi
0x5C5D0C: call    sub_5C3440
0x5C5D11: mov     ecx, eax
0x5C5D13: call    Tile_GetFloat
0x5C5D18: fstp    [esp+30h+var_14]
0x5C5D1C: mov     eax, ds:0B38FD0h
0x5C5D21: push    0FAEh
0x5C5D26: sub     esp, 8
0x5C5D29: mov     ecx, esp; this
0x5C5D2B: mov     [esp+3Ch+var_18], esp
0x5C5D2F: push    ebx; a3
0x5C5D30: push    eax; a2
0x5C5D31: mov     [ecx], ebx
0x5C5D33: mov     [ecx+4], bx
0x5C5D37: mov     [ecx+6], bx
0x5C5D3B: call    BSStringT_Set
0x5C5D40: mov     eax, ds:0B38F88h
0x5C5D45: sub     esp, 8
0x5C5D48: mov     ecx, esp; this
0x5C5D4A: mov     [esp+44h+var_1C], esp
0x5C5D4E: mov     [esp+44h+var_4], 2
0x5C5D56: mov     [ecx], ebx
0x5C5D58: mov     [ecx+4], bx
0x5C5D5C: mov     [ecx+6], bx
0x5C5D60: push    ebx; a3
0x5C5D61: push    eax; a2
0x5C5D62: call    BSStringT_Set
0x5C5D67: mov     ecx, esi
0x5C5D69: mov     [esp+44h+var_4], edi
0x5C5D6D: call    sub_5C3440
0x5C5D72: mov     ecx, eax
0x5C5D74: call    Tile_GetFloat
0x5C5D79: fstp    [esp+30h+var_1C]
0x5C5D7D: fld     [esp+30h+var_1C]
0x5C5D81: xor     ecx, ecx
0x5C5D83: fld     qword ptr ds:0A3DDD8h
0x5C5D89: fnstcw  word ptr [esp+30h+var_1C]
0x5C5D8D: movzx   eax, word ptr [esp+30h+var_1C]
0x5C5D92: fmul    st(1), st
0x5C5D94: or      eax, 0C00h
0x5C5D99: fxch    st(1)
0x5C5D9B: mov     [esp+30h+var_18], eax
0x5C5D9F: fldcw   word ptr [esp+30h+var_18]
0x5C5DA3: fistp   [esp+30h+var_18]
0x5C5DA7: movzx   eax, byte ptr [esp+30h+var_18]
0x5C5DAC: mov     ch, al
0x5C5DAE: fldcw   word ptr [esp+30h+var_1C]
0x5C5DB2: fld     [esp+30h+var_14]
0x5C5DB6: fnstcw  word ptr [esp+30h+var_1C]
0x5C5DBA: fmul    st, st(1)
0x5C5DBC: movzx   eax, word ptr [esp+30h+var_1C]
0x5C5DC1: or      eax, 0C00h
0x5C5DC6: mov     [esp+30h+var_14], eax
0x5C5DCA: fldcw   word ptr [esp+30h+var_14]
0x5C5DCE: fistp   [esp+30h+var_14]
0x5C5DD2: mov     dl, byte ptr [esp+30h+var_14]
0x5C5DD6: mov     cl, dl
0x5C5DD8: fldcw   word ptr [esp+30h+var_1C]
0x5C5DDC: shl     ecx, 8
0x5C5DDF: fmul    [esp+30h+var_10]
0x5C5DE3: fnstcw  word ptr [esp+30h+var_1C]
0x5C5DE7: movzx   eax, word ptr [esp+30h+var_1C]
0x5C5DEC: or      eax, 0C00h
0x5C5DF1: mov     [esp+30h+var_10], eax
0x5C5DF5: fldcw   word ptr [esp+30h+var_10]
0x5C5DF9: fistp   [esp+30h+var_10]
0x5C5DFD: movzx   eax, byte ptr [esp+30h+var_10]
0x5C5E02: movzx   edx, al
0x5C5E05: fldcw   word ptr [esp+30h+var_1C]
0x5C5E09: or      ecx, edx
0x5C5E0B: mov     [esp+30h+var_10], ecx
0x5C5E0F: mov     ecx, ds:0B333C4h
0x5C5E15: mov     eax, [ecx]
0x5C5E17: mov     edx, [eax+170h]
0x5C5E1D: call    edx
0x5C5E1F: cmp     byte ptr [esp+30h+arg_0], bl
0x5C5E23: mov     ebp, eax
0x5C5E25: jz      loc_5C5ED0
0x5C5E2B: mov     ecx, [ebp+1C8h]
0x5C5E31: call    sub_51FE90
0x5C5E36: test    al, al
0x5C5E38: jnz     short loc_5C5E6E
0x5C5E3A: mov     eax, ds:0B394D8h
0x5C5E3F: push    eax
0x5C5E40: mov     eax, ds:0B39330h
0x5C5E45: push    0FB4h
0x5C5E4A: sub     esp, 8
0x5C5E4D: mov     ecx, esp; this
0x5C5E4F: mov     [esp+40h+arg_0], esp
0x5C5E53: push    ebx; a3
0x5C5E54: push    eax; a2
0x5C5E55: mov     [ecx], ebx
0x5C5E57: mov     [ecx+4], bx
0x5C5E5B: mov     [ecx+6], bx
0x5C5E5F: call    BSStringT_Set
0x5C5E64: mov     [esp+40h+var_4], 3
0x5C5E6C: jmp     short loc_5C5E9F
0x5C5E6E: mov     eax, ds:0B39330h
0x5C5E73: push    offset EmptyString
0x5C5E78: push    0FB4h
0x5C5E7D: sub     esp, 8
0x5C5E80: mov     ecx, esp; this
0x5C5E82: mov     [esp+40h+arg_0], esp
0x5C5E86: push    ebx; a3
0x5C5E87: push    eax; a2
0x5C5E88: mov     [ecx], ebx
0x5C5E8A: mov     [ecx+4], bx
0x5C5E8E: mov     [ecx+6], bx
0x5C5E92: call    BSStringT_Set
0x5C5E97: mov     [esp+40h+var_4], 4
0x5C5E9F: mov     eax, ds:0B38F88h
0x5C5EA4: sub     esp, 8
0x5C5EA7: mov     ecx, esp; this
0x5C5EA9: mov     [esp+48h+var_14], esp
0x5C5EAD: push    ebx; a3
0x5C5EAE: mov     [ecx], ebx
0x5C5EB0: mov     [ecx+4], bx
0x5C5EB4: push    eax; a2
0x5C5EB5: mov     [ecx+6], bx
0x5C5EB9: call    BSStringT_Set
0x5C5EBE: mov     ecx, esi
0x5C5EC0: mov     [esp+48h+var_4], edi
0x5C5EC4: call    sub_5C3440
0x5C5EC9: mov     ecx, eax
0x5C5ECB: call    Tile_SetString
0x5C5ED0: mov     ecx, [esp+30h+var_10]
0x5C5ED4: mov     [ebp+1E8h], ecx
0x5C5EDA: push    ebx
0x5C5EDB: mov     ecx, esi
0x5C5EDD: call    sub_5C50A0
0x5C5EE2: mov     ecx, [esp+30h+var_C]
0x5C5EE6: mov     large fs:0, ecx
0x5C5EED: pop     ecx
0x5C5EEE: pop     edi
0x5C5EEF: pop     esi
0x5C5EF0: pop     ebp
0x5C5EF1: pop     ebx
0x5C5EF2: add     esp, 1Ch
0x5C5EF5: retn    4
