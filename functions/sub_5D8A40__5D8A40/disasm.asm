0x5D8A40: sub     esp, 14h
0x5D8A43: push    esi; a3
0x5D8A44: push    edi; a3
0x5D8A45: mov     edi, [esp+1Ch+arg_4]
0x5D8A49: test    edi, edi
0x5D8A4B: mov     esi, ecx
0x5D8A4D: jz      loc_5D8C54
0x5D8A53: push    ebp; a3
0x5D8A54: mov     ebp, dword ptr [esp+20h+arg_0]; char
0x5D8A58: cmp     ebp, 6
0x5D8A5B: jz      loc_5D8CE6
0x5D8A61: cmp     ebp, 2
0x5D8A64: jz      loc_5D8CE6
0x5D8A6A: cmp     ebp, 3E8h
0x5D8A70: jge     short loc_5D8A98
0x5D8A72: cmp     ebp, 9
0x5D8A75: jl      short loc_5D8A7C
0x5D8A77: cmp     ebp, 0Bh
0x5D8A7A: jle     short loc_5D8A98
0x5D8A7C: fld1
0x5D8A7E: push    ecx
0x5D8A7F: mov     ecx, [esi+44h]; this
0x5D8A82: fstp    [esp+24h+a2]; a3
0x5D8A85: push    0FA1h; a2
0x5D8A8A: call    Tile_SetFloat
0x5D8A8F: pop     ebp
0x5D8A90: pop     edi
0x5D8A91: pop     esi
0x5D8A92: add     esp, 14h
0x5D8A95: retn    8
0x5D8A98: cmp     dword ptr [esi+44h], 0
0x5D8A9C: mov     dword ptr [esi+48h], 0
0x5D8AA3: jz      loc_5D8C53
0x5D8AA9: push    ebx; a3
0x5D8AAA: push    4; int
0x5D8AAC: call    sub_57DE50
0x5D8AB1: add     esp, 4
0x5D8AB4: push    0FE0h
0x5D8AB9: mov     ecx, edi
0x5D8ABB: call    Tile_GetFloat
0x5D8AC0: call    Double_To_SInt32
0x5D8AC5: mov     ebx, eax
0x5D8AC7: mov     ecx, edi
0x5D8AC9: mov     [esp+24h+var_C], ebx
0x5D8ACD: call    sub_588D90
0x5D8AD2: fstp    qword ptr [esp+24h+a3]; a3
0x5D8AD6: mov     ecx, [esi+44h]
0x5D8AD9: push    0FBDh
0x5D8ADE: call    Tile_GetFloat
0x5D8AE3: fsubr   qword ptr [esp+24h+a3]
0x5D8AE7: push    ecx
0x5D8AE8: mov     ecx, [esi+44h]; this
0x5D8AEB: fstp    [esp+28h+arg_4]
0x5D8AEF: fld     [esp+28h+arg_4]
0x5D8AF3: fstp    [esp+28h+var_28]; a3
0x5D8AF6: push    0FABh; a2
0x5D8AFB: call    Tile_SetFloat
0x5D8B00: lea     eax, [ebx+ebx]
0x5D8B03: mov     [esp+24h+arg_4], eax
0x5D8B07: fild    [esp+24h+arg_4]
0x5D8B0B: push    0FCBh
0x5D8B10: mov     ecx, edi
0x5D8B12: fstp    [esp+28h+arg_4]
0x5D8B16: call    Tile_GetFloat
0x5D8B1B: fsub    [esp+24h+arg_4]
0x5D8B1F: push    ecx
0x5D8B20: mov     ecx, [esi+44h]; this
0x5D8B23: fstp    [esp+28h+a3]; a3
0x5D8B27: fld     [esp+28h+a3]
0x5D8B2B: fstp    [esp+28h+var_28]; a3
0x5D8B2E: push    0FCBh; a2
0x5D8B33: call    Tile_SetFloat
0x5D8B38: push    0FCAh
0x5D8B3D: mov     ecx, edi
0x5D8B3F: call    Tile_GetFloat
0x5D8B44: fsub    [esp+24h+arg_4]
0x5D8B48: push    ecx
0x5D8B49: mov     ecx, [esi+44h]; this
0x5D8B4C: fstp    [esp+28h+arg_4]
0x5D8B50: fld     [esp+28h+arg_4]
0x5D8B54: fstp    [esp+28h+var_28]; a3
0x5D8B57: push    0FCAh; a2
0x5D8B5C: call    Tile_SetFloat
0x5D8B61: fild    [esp+24h+var_C]
0x5D8B65: mov     ecx, edi
0x5D8B67: fstp    [esp+24h+arg_4]
0x5D8B6B: call    sub_588C50
0x5D8B70: fadd    [esp+24h+arg_4]
0x5D8B74: push    ecx
0x5D8B75: mov     ecx, [esi+44h]; this
0x5D8B78: fstp    [esp+28h+var_C]
0x5D8B7C: fld     [esp+28h+var_C]
0x5D8B80: fstp    [esp+28h+var_28]; a3
0x5D8B83: push    0FADh; a2
0x5D8B88: call    Tile_SetFloat
0x5D8B8D: mov     ecx, edi
0x5D8B8F: call    sub_588CF0
0x5D8B94: fadd    [esp+24h+arg_4]
0x5D8B98: push    ecx
0x5D8B99: mov     ecx, [esi+44h]; this
0x5D8B9C: fstp    [esp+28h+arg_4]
0x5D8BA0: fld     [esp+28h+arg_4]
0x5D8BA4: fstp    [esp+28h+var_28]; a3
0x5D8BA7: push    0FACh; a2
0x5D8BAC: call    Tile_SetFloat
0x5D8BB1: fld     dword ptr ds:0A379B4h
0x5D8BB7: push    ecx
0x5D8BB8: mov     ecx, [esi+44h]; this
0x5D8BBB: fstp    [esp+28h+var_28]; a3
0x5D8BBE: push    0FA1h; a2
0x5D8BC3: call    Tile_SetFloat
0x5D8BC8: cmp     ebp, 3E8h
0x5D8BCE: mov     [esi+48h], edi
0x5D8BD1: jl      short loc_5D8C52
0x5D8BD3: mov     ecx, ds:0B333C4h; this
0x5D8BD9: push    0; a2
0x5D8BDB: mov     [esp+28h+arg_4], 3E8h
0x5D8BE3: lea     ebp, [esi+60h]
0x5D8BE6: call    Actor_GetActorBaseForm
0x5D8BEB: add     eax, 58h ; 'X'
0x5D8BEE: test    ebp, ebp
0x5D8BF0: mov     [esp+24h+var_C], eax
0x5D8BF4: mov     [esp+24h+a3], 0
0x5D8BFC: jz      short loc_5D8C45
0x5D8BFE: mov     edi, edi
0x5D8C00: mov     ebx, [ebp+0]
0x5D8C03: test    ebx, ebx
0x5D8C05: jz      short loc_5D8C3E
0x5D8C07: mov     edx, [ebx+18h]
0x5D8C0A: mov     eax, [edx+18h]
0x5D8C0D: lea     ecx, [ebx+18h]
0x5D8C10: call    eax
0x5D8C12: test    eax, eax
0x5D8C14: jnz     short loc_5D8C37
0x5D8C16: mov     ecx, [esp+24h+var_C]
0x5D8C1A: push    ebx
0x5D8C1B: call    sub_446C30
0x5D8C20: test    al, al
0x5D8C22: jnz     short loc_5D8C37
0x5D8C24: mov     ecx, [esp+24h+arg_4]
0x5D8C28: cmp     ecx, dword ptr [esp+24h+arg_0]
0x5D8C2C: jnz     short loc_5D8C32
0x5D8C2E: mov     [esp+24h+a3], ebx
0x5D8C32: add     [esp+24h+arg_4], 1
0x5D8C37: mov     ebp, [ebp+4]
0x5D8C3A: test    ebp, ebp
0x5D8C3C: jnz     short loc_5D8C00
0x5D8C3E: cmp     [esp+24h+a3], 0
0x5D8C43: jnz     short loc_5D8C5C
0x5D8C45: push    offset aSpellItemIndex; "Spell item index did was not in saved l"...
0x5D8C4A: call    PrintError
0x5D8C4F: add     esp, 4
0x5D8C52: pop     ebx
0x5D8C53: pop     ebp
0x5D8C54: pop     edi
0x5D8C55: pop     esi
0x5D8C56: add     esp, 14h
0x5D8C59: retn    8
0x5D8C5C: mov     ecx, [esi+4]
0x5D8C5F: push    0FB8h
0x5D8C64: call    Tile_GetFloat
0x5D8C69: fstp    [esp+24h+var_C]
0x5D8C6D: mov     ecx, [esi+4]
0x5D8C70: call    sub_588D90
0x5D8C75: fstp    dword ptr [esp+24h+arg_0]
0x5D8C79: push    1; arg1
0x5D8C7B: push    0; canCreate
0x5D8C7D: call    InterfaceManager_GetSingleton
0x5D8C82: mov     esi, [esi+4]
0x5D8C85: add     esp, 8
0x5D8C88: call    sub_57D7F0
0x5D8C8D: fstp    [esp+24h+var_8]
0x5D8C91: push    0FBAh
0x5D8C96: mov     ecx, esi
0x5D8C98: call    Tile_GetFloat
0x5D8C9D: fsubr   [esp+24h+var_8]
0x5D8CA1: push    ecx
0x5D8CA2: fstp    [esp+28h+arg_4]
0x5D8CA6: fld     dword ptr [esp+28h+arg_0]
0x5D8CAA: fstp    [esp+28h+var_28]; float
0x5D8CAD: push    0; int
0x5D8CAF: fld     [esp+2Ch+arg_4]
0x5D8CB3: push    ecx
0x5D8CB4: mov     ecx, edi
0x5D8CB6: fstp    [esp+30h+var_30]; float
0x5D8CB9: call    sub_588CF0
0x5D8CBE: mov     edx, [esp+30h+a3]
0x5D8CC2: sub     esp, 8
0x5D8CC5: fstp    [esp+38h+var_34]; float
0x5D8CC9: add     edx, 18h
0x5D8CCC: fld     [esp+38h+var_C]
0x5D8CD0: fstp    [esp+38h+var_38]; float
0x5D8CD3: push    edx; int
0x5D8CD4: call    sub_57BB20
0x5D8CD9: add     esp, 18h
0x5D8CDC: pop     ebx
0x5D8CDD: pop     ebp
0x5D8CDE: pop     edi
0x5D8CDF: pop     esi
0x5D8CE0: add     esp, 14h
0x5D8CE3: retn    8
0x5D8CE6: fldz
0x5D8CE8: push    ecx
0x5D8CE9: fstp    [esp+24h+a2]; a3
0x5D8CEC: mov     ecx, edi; this
0x5D8CEE: push    0FA7h; a2
0x5D8CF3: call    Tile_SetFloat
0x5D8CF8: pop     ebp
0x5D8CF9: pop     edi
0x5D8CFA: pop     esi
0x5D8CFB: add     esp, 14h
0x5D8CFE: retn    8
