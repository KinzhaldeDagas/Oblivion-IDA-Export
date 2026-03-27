0x9A4B00: mov     eax, [esp+arg_8]
0x9A4B04: sub     esp, 40h
0x9A4B07: sub     eax, 7
0x9A4B0A: jz      loc_9A4CFE
0x9A4B10: sub     eax, 2
0x9A4B13: jz      short loc_9A4B29
0x9A4B15: sub     eax, 1
0x9A4B18: jz      loc_9A4CFE
0x9A4B1E: mov     eax, 1; jumptable 009A4B35 default case, cases 5,6,8
0x9A4B23: add     esp, 40h
0x9A4B26: retn    18h
0x9A4B29: mov     eax, [esp+40h+arg_C]
0x9A4B2D: add     eax, 0FFFFFFFDh; switch 8 cases
0x9A4B30: cmp     eax, 7
0x9A4B33: ja      short def_9A4B35; jumptable 009A4B35 default case, cases 5,6,8
0x9A4B35: jmp     ds:jpt_9A4B35[eax*4]; switch jump
0x9A4B3C: push    offset unk_BAAA20; jumptable 009A4B35 case 9
0x9A4B41: push    offset flt_BAA9E0
0x9A4B46: push    offset unk_BAA950
0x9A4B4B: call    D3DXMatrixMultiply_0
0x9A4B50: cmp     [esp+40h+arg_10], 0
0x9A4B55: jz      short loc_9A4B68
0x9A4B57: push    offset unk_BAA950
0x9A4B5C: push    0
0x9A4B5E: push    offset unk_BAA950
0x9A4B63: call    D3DXMatrixInverse_0
0x9A4B68: cmp     [esp+40h+arg_14], 0
0x9A4B6D: jz      short loc_9A4B7E
0x9A4B6F: push    offset unk_BAA950
0x9A4B74: push    offset unk_BAA950
0x9A4B79: call    D3DXMatrixTranspose_0
0x9A4B7E: push    0
0x9A4B80: push    offset unk_BAA950
0x9A4B85: mov     ecx, [esp+48h+arg_0]
0x9A4B89: mov     eax, [ecx]
0x9A4B8B: mov     edx, dword ptr [esp+48h+arg_4]
0x9A4B8F: mov     eax, [eax+28h]
0x9A4B92: push    edx
0x9A4B93: call    eax
0x9A4B95: neg     al
0x9A4B97: sbb     eax, eax
0x9A4B99: and     eax, 7FFFFFB0h
0x9A4B9E: add     eax, 80000050h
0x9A4BA3: add     esp, 40h
0x9A4BA6: retn    18h
0x9A4BA9: cmp     [esp+40h+arg_10], 0; jumptable 009A4B35 cases 3,4
0x9A4BAE: fld     flt_BAA9E0
0x9A4BB4: fld     flt_BAAA80
0x9A4BBA: push    esi
0x9A4BBB: fld     st
0x9A4BBD: push    edi
0x9A4BBE: fmulp   st(2), st
0x9A4BC0: mov     ecx, 10h
0x9A4BC5: fxch    st(1)
0x9A4BC7: lea     esi, [esp+48h+var_40]
0x9A4BCB: mov     edi, offset unk_BAA950
0x9A4BD0: fstp    [esp+48h+var_40]
0x9A4BD4: fld     flt_BAA9E4
0x9A4BDA: fmul    st, st(1)
0x9A4BDC: fstp    [esp+48h+var_3C]
0x9A4BE0: fld     flt_BAA9E8
0x9A4BE6: fmul    st, st(1)
0x9A4BE8: fstp    [esp+48h+var_38]
0x9A4BEC: fld     flt_BAA9EC
0x9A4BF2: fmul    st, st(1)
0x9A4BF4: fstp    [esp+48h+var_34]
0x9A4BF8: fld     flt_BAA9F0
0x9A4BFE: fmul    st, st(1)
0x9A4C00: fstp    [esp+48h+var_30]
0x9A4C04: fld     flt_BAA9F4
0x9A4C0A: fmul    st, st(1)
0x9A4C0C: fstp    [esp+48h+var_2C]
0x9A4C10: fld     flt_BAA9F8
0x9A4C16: fmul    st, st(1)
0x9A4C18: fstp    [esp+48h+var_28]
0x9A4C1C: fld     flt_BAA9FC
0x9A4C22: fmul    st, st(1)
0x9A4C24: fstp    [esp+48h+var_24]
0x9A4C28: fld     flt_BAAA00
0x9A4C2E: fmul    st, st(1)
0x9A4C30: fstp    [esp+48h+var_20]
0x9A4C34: fld     flt_BAAA04
0x9A4C3A: fmul    st, st(1)
0x9A4C3C: fstp    [esp+48h+var_1C]
0x9A4C40: fld     flt_BAAA08
0x9A4C46: fmul    st, st(1)
0x9A4C48: fstp    [esp+48h+var_18]
0x9A4C4C: fld     flt_BAAA0C
0x9A4C52: fmul    st, st(1)
0x9A4C54: fstp    [esp+48h+var_14]
0x9A4C58: fld     flt_BAAA10
0x9A4C5E: fmul    st, st(1)
0x9A4C60: fstp    [esp+48h+var_10]
0x9A4C64: fld     flt_BAAA14
0x9A4C6A: fmul    st, st(1)
0x9A4C6C: fstp    [esp+48h+var_C]
0x9A4C70: fld     flt_BAAA18
0x9A4C76: fmul    st, st(1)
0x9A4C78: fstp    [esp+48h+var_8]
0x9A4C7C: fmul    flt_BAAA1C
0x9A4C82: fstp    [esp+48h+var_4]
0x9A4C86: rep movsd
0x9A4C88: pop     edi
0x9A4C89: pop     esi
0x9A4C8A: jz      short loc_9A4C9D
0x9A4C8C: push    offset unk_BAA950
0x9A4C91: push    0
0x9A4C93: push    offset unk_BAA950
0x9A4C98: call    D3DXMatrixInverse_0
0x9A4C9D: cmp     [esp+40h+arg_14], 0
0x9A4CA2: jz      short loc_9A4CB3
0x9A4CA4: push    offset unk_BAA950
0x9A4CA9: push    offset unk_BAA950
0x9A4CAE: call    D3DXMatrixTranspose_0
0x9A4CB3: mov     ecx, [esp+40h+arg_0]
0x9A4CB7: mov     edx, [ecx]
0x9A4CB9: mov     eax, dword ptr [esp+40h+arg_4]
0x9A4CBD: mov     edx, [edx+28h]
0x9A4CC0: push    0
0x9A4CC2: push    offset unk_BAA950
0x9A4CC7: push    eax
0x9A4CC8: call    edx
0x9A4CCA: neg     al
0x9A4CCC: sbb     eax, eax
0x9A4CCE: and     eax, 7FFFFFB0h
0x9A4CD3: add     eax, 80000050h
0x9A4CD8: add     esp, 40h
0x9A4CDB: retn    18h
0x9A4CDE: push    offset flt_BAA9E0; jumptable 009A4B35 cases 7,10
0x9A4CE3: push    offset flt_BAAA80
0x9A4CE8: push    offset flt_BAAA60
0x9A4CED: call    D3DXVec4Transform_0
0x9A4CF2: push    0
0x9A4CF4: push    offset flt_BAAA60
0x9A4CF9: jmp     loc_9A4B85
0x9A4CFE: mov     eax, [esp+40h+arg_C]
0x9A4D02: add     eax, 0FFFFFFFDh; switch 8 cases
0x9A4D05: cmp     eax, 7
0x9A4D08: ja      def_9A4B35; jumptable 009A4B35 default case, cases 5,6,8
0x9A4D0E: jmp     ds:jpt_9A4D0E[eax*4]; switch jump
0x9A4D15: push    offset unk_BAAA20; jumptable 009A4D0E case 9
0x9A4D1A: push    offset flt_BAAA70
0x9A4D1F: push    offset flt_BAAA60
0x9A4D24: call    D3DXVec4Transform_0
0x9A4D29: mov     ecx, [esp+40h+arg_0]
0x9A4D2D: mov     edx, [ecx]
0x9A4D2F: mov     eax, dword ptr [esp+40h+arg_4]
0x9A4D33: mov     edx, [edx+28h]
0x9A4D36: push    0
0x9A4D38: push    offset flt_BAAA60
0x9A4D3D: push    eax
0x9A4D3E: call    edx
0x9A4D40: neg     al
0x9A4D42: sbb     eax, eax
0x9A4D44: and     eax, 7FFFFFB0h
0x9A4D49: add     eax, 80000050h
0x9A4D4E: add     esp, 40h
0x9A4D51: retn    18h
0x9A4D54: fld     flt_BAAA70; jumptable 009A4D0E cases 3,4
0x9A4D5A: push    0
0x9A4D5C: fld     flt_BAAA80
0x9A4D62: push    offset flt_BAAA60
0x9A4D67: fld     st
0x9A4D69: fmulp   st(2), st
0x9A4D6B: fxch    st(1)
0x9A4D6D: fstp    flt_BAAA60
0x9A4D73: fld     flt_BAAA74
0x9A4D79: fmul    st, st(1)
0x9A4D7B: fstp    flt_BAAA64
0x9A4D81: fld     flt_BAAA78
0x9A4D87: fmul    st, st(1)
0x9A4D89: fstp    flt_BAAA68
0x9A4D8F: fmul    flt_BAAA7C
0x9A4D95: fstp    flt_BAAA6C
0x9A4D9B: jmp     loc_9A4B85
0x9A4DA0: fld     flt_BAAA70; jumptable 009A4D0E cases 7,10
0x9A4DA6: fmul    flt_BAAA80
0x9A4DAC: fstp    flt_BAAA60
0x9A4DB2: fld     flt_BAAA84
0x9A4DB8: fmul    flt_BAAA74
0x9A4DBE: fstp    flt_BAAA64
0x9A4DC4: fld     flt_BAAA88
0x9A4DCA: fmul    flt_BAAA78
0x9A4DD0: fstp    flt_BAAA68
0x9A4DD6: fld     flt_BAAA8C
0x9A4DDC: fmul    flt_BAAA7C
0x9A4DE2: fstp    flt_BAAA6C
0x9A4DE8: jmp     loc_9A4D29
