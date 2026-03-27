0x5C19C0: push    ecx
0x5C19C1: cmp     [esp+4+arg_0], 33h ; '3'
0x5C19C6: jl      loc_5C1A69
0x5C19CC: push    esi
0x5C19CD: mov     esi, [esp+8+arg_4]
0x5C19D1: push    0FB8h
0x5C19D6: mov     ecx, esi
0x5C19D8: call    Tile_GetFloat
0x5C19DD: fstp    [esp+8+var_4]
0x5C19E1: push    0FB9h
0x5C19E6: mov     ecx, esi
0x5C19E8: call    Tile_GetFloat
0x5C19ED: fnstcw  word ptr [esp+8+arg_0]
0x5C19F1: movzx   eax, word ptr [esp+8+arg_0]
0x5C19F6: or      eax, 0C00h
0x5C19FB: mov     [esp+8+arg_4], eax
0x5C19FF: pop     esi
0x5C1A00: fldcw   word ptr [esp+4+arg_4]
0x5C1A04: fistp   [esp+4+arg_4]
0x5C1A08: mov     ax, word ptr [esp+4+arg_4]
0x5C1A0D: movzx   ecx, ax
0x5C1A10: shl     ecx, 10h
0x5C1A13: fldcw   word ptr [esp+4+arg_0]
0x5C1A17: fld     [esp+4+var_4]
0x5C1A1A: fnstcw  word ptr [esp+4+arg_0]
0x5C1A1E: movzx   eax, word ptr [esp+4+arg_0]
0x5C1A23: or      eax, 0C00h
0x5C1A28: mov     [esp+4+arg_4], eax
0x5C1A2C: fldcw   word ptr [esp+4+arg_4]
0x5C1A30: fistp   [esp+4+arg_4]
0x5C1A34: mov     dx, word ptr [esp+4+arg_4]
0x5C1A39: movzx   eax, dx
0x5C1A3C: or      ecx, eax
0x5C1A3E: fldcw   word ptr [esp+4+arg_0]
0x5C1A42: mov     [esp+4+arg_0], ecx
0x5C1A46: jz      short loc_5C1A69
0x5C1A48: lea     ecx, [esp+4+arg_0]
0x5C1A4C: push    ecx
0x5C1A4D: call    sub_5C1100
0x5C1A52: mov     ecx, eax
0x5C1A54: shl     ecx, 4
0x5C1A57: add     ecx, offset quickKeyList_ptr
0x5C1A5D: call    sub_776690
0x5C1A62: mov     byte ptr ds:0B3B43Ch, 1
0x5C1A69: pop     ecx
0x5C1A6A: retn    8
