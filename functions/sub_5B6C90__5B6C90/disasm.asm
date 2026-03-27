0x5B6C90: mov     eax, [esp+arg_0]
0x5B6C94: sub     esp, 0Ch
0x5B6C97: cmp     eax, 33h ; '3'
0x5B6C9A: push    esi; a3
0x5B6C9B: push    edi; a3
0x5B6C9C: mov     esi, ecx
0x5B6C9E: jz      loc_5B6E21
0x5B6CA4: cmp     eax, 34h ; '4'
0x5B6CA7: jz      loc_5B6E21
0x5B6CAD: cmp     eax, 2Bh ; '+'
0x5B6CB0: jnz     loc_5B6D7E
0x5B6CB6: fld     dword ptr ds:0A2FE7Ch
0x5B6CBC: mov     edi, [esp+14h+arg_4]
0x5B6CC0: push    ecx
0x5B6CC1: fstp    [esp+18h+a2]; a3
0x5B6CC4: push    0FB5h; a2
0x5B6CC9: mov     ecx, edi; this
0x5B6CCB: call    Tile_SetFloat
0x5B6CD0: mov     ecx, edi
0x5B6CD2: call    sub_588D90
0x5B6CD7: push    ecx
0x5B6CD8: mov     ecx, [esi+5Ch]; this
0x5B6CDB: fstp    [esp+18h+a2]; a3
0x5B6CDE: push    0FAEh; a2
0x5B6CE3: call    Tile_SetFloat
0x5B6CE8: mov     ecx, edi
0x5B6CEA: call    sub_588C50
0x5B6CEF: push    ecx
0x5B6CF0: mov     ecx, [esi+5Ch]; this
0x5B6CF3: fstp    [esp+18h+a2]; a3
0x5B6CF6: push    0FAFh; a2
0x5B6CFB: call    Tile_SetFloat
0x5B6D00: mov     ecx, edi
0x5B6D02: call    sub_588CF0
0x5B6D07: push    ecx
0x5B6D08: mov     ecx, [esi+5Ch]; this
0x5B6D0B: fstp    [esp+18h+a2]; a3
0x5B6D0E: push    0FB0h; a2
0x5B6D13: call    Tile_SetFloat
0x5B6D18: push    0FB2h
0x5B6D1D: mov     ecx, edi
0x5B6D1F: call    sub_588C10
0x5B6D24: mov     ecx, [esi+5Ch]
0x5B6D27: push    eax
0x5B6D28: push    0FDEh
0x5B6D2D: call    Tile_SetString
0x5B6D32: fld     dword ptr ds:0A379B4h
0x5B6D38: push    ecx
0x5B6D39: mov     ecx, [esi+5Ch]; this
0x5B6D3C: fstp    [esp+18h+a2]; a3
0x5B6D3F: push    0FA1h; a2
0x5B6D44: call    Tile_SetFloat
0x5B6D49: push    0FB4h
0x5B6D4E: mov     ecx, edi
0x5B6D50: call    Tile_GetFloat
0x5B6D55: push    ecx
0x5B6D56: mov     ecx, [esi+5Ch]; this
0x5B6D59: fstp    [esp+18h+a2]; a3
0x5B6D5C: push    0FB4h; a2
0x5B6D61: call    Tile_SetFloat
0x5B6D66: mov     ecx, [esi+5Ch]
0x5B6D69: push    0; float
0x5B6D6B: call    sub_58FBA0
0x5B6D70: mov     [esi+0F4h], edi
0x5B6D76: pop     edi
0x5B6D77: pop     esi
0x5B6D78: add     esp, 0Ch
0x5B6D7B: retn    8
0x5B6D7E: cmp     eax, 31h ; '1'
0x5B6D81: jnz     loc_5B6F8D
0x5B6D87: fld     dword ptr ds:0A2FE7Ch
0x5B6D8D: mov     edi, [esp+14h+arg_4]
0x5B6D91: push    ecx
0x5B6D92: fstp    [esp+18h+a2]; a3
0x5B6D95: push    0FB5h; a2
0x5B6D9A: mov     ecx, edi; this
0x5B6D9C: call    Tile_SetFloat
0x5B6DA1: mov     ecx, edi
0x5B6DA3: call    sub_588D90
0x5B6DA8: push    ecx
0x5B6DA9: mov     ecx, [esi+5Ch]; this
0x5B6DAC: fstp    [esp+18h+a2]; a3
0x5B6DAF: push    0FAEh; a2
0x5B6DB4: call    Tile_SetFloat
0x5B6DB9: mov     ecx, edi
0x5B6DBB: call    sub_588C50
0x5B6DC0: push    ecx
0x5B6DC1: mov     ecx, [esi+5Ch]; this
0x5B6DC4: fstp    [esp+18h+a2]; a3
0x5B6DC7: push    0FAFh; a2
0x5B6DCC: call    Tile_SetFloat
0x5B6DD1: mov     ecx, edi
0x5B6DD3: call    sub_588CF0
0x5B6DD8: push    ecx
0x5B6DD9: mov     ecx, [esi+5Ch]; this
0x5B6DDC: fstp    [esp+18h+a2]; a3
0x5B6DDF: push    0FB0h; a2
0x5B6DE4: call    Tile_SetFloat
0x5B6DE9: push    0FB2h
0x5B6DEE: mov     ecx, edi
0x5B6DF0: call    sub_588C10
0x5B6DF5: mov     ecx, [esi+5Ch]
0x5B6DF8: push    eax
0x5B6DF9: push    0FDEh
0x5B6DFE: call    Tile_SetString
0x5B6E03: fld     dword ptr ds:0A379B4h
0x5B6E09: push    ecx
0x5B6E0A: mov     ecx, [esi+5Ch]; this
0x5B6E0D: fstp    [esp+18h+a2]; a3
0x5B6E10: push    0FA1h; a2
0x5B6E15: call    Tile_SetFloat
0x5B6E1A: fld1
0x5B6E1C: jmp     loc_5B6D55
0x5B6E21: mov     edi, [esp+14h+arg_4]
0x5B6E25: push    ebx; a3
0x5B6E26: push    ebp; a3
0x5B6E27: push    0FE0h
0x5B6E2C: mov     ecx, edi
0x5B6E2E: call    Tile_GetFloat
0x5B6E33: call    Double_To_SInt32
0x5B6E38: mov     [esp+1Ch+var_8], eax
0x5B6E3C: add     eax, eax
0x5B6E3E: mov     [esp+1Ch+arg_4], eax
0x5B6E42: fild    [esp+1Ch+arg_4]
0x5B6E46: push    0FCAh
0x5B6E4B: mov     ecx, edi
0x5B6E4D: fstp    [esp+20h+arg_0]
0x5B6E51: call    Tile_GetFloat
0x5B6E56: fsub    [esp+1Ch+arg_0]
0x5B6E5A: call    Double_To_SInt32
0x5B6E5F: fild    [esp+1Ch+var_8]
0x5B6E63: mov     ecx, edi
0x5B6E65: mov     [esp+1Ch+arg_4], eax
0x5B6E69: fstp    [esp+1Ch+var_C]; a3
0x5B6E6D: call    sub_588CF0
0x5B6E72: fadd    [esp+1Ch+var_C]
0x5B6E76: call    Double_To_SInt32
0x5B6E7B: mov     ecx, [esi+48h]
0x5B6E7E: mov     ecx, [ecx+10h]
0x5B6E81: mov     ebx, eax
0x5B6E83: mov     [esp+1Ch+var_8], ebx
0x5B6E87: call    sub_588CF0
0x5B6E8C: call    Double_To_SInt32
0x5B6E91: mov     ebp, eax
0x5B6E93: cmp     ebx, ebp
0x5B6E95: jge     short loc_5B6EA3
0x5B6E97: sub     ebx, ebp
0x5B6E99: add     [esp+1Ch+arg_4], ebx
0x5B6E9D: mov     ebx, ebp
0x5B6E9F: mov     [esp+1Ch+var_8], ebp; a3
0x5B6EA3: mov     edx, [esi+48h]
0x5B6EA6: mov     ecx, [edx+10h]
0x5B6EA9: push    0FCAh
0x5B6EAE: call    Tile_GetFloat
0x5B6EB3: call    Double_To_SInt32
0x5B6EB8: mov     edx, [esp+1Ch+arg_4]
0x5B6EBC: lea     ecx, [eax+ebp]
0x5B6EBF: add     edx, ebx
0x5B6EC1: cmp     edx, ecx
0x5B6EC3: jle     short loc_5B6ECD
0x5B6EC5: sub     eax, ebx
0x5B6EC7: add     eax, ebp
0x5B6EC9: mov     [esp+1Ch+arg_4], eax
0x5B6ECD: mov     ecx, edi
0x5B6ECF: call    sub_588D90
0x5B6ED4: fsub    qword ptr ds:0A2FAA0h
0x5B6EDA: push    ecx
0x5B6EDB: mov     ecx, [esi+4Ch]; this
0x5B6EDE: fstp    [esp+20h+var_4]
0x5B6EE2: fld     [esp+20h+var_4]
0x5B6EE6: fstp    [esp+20h+var_20]; a3
0x5B6EE9: push    0FABh; a2
0x5B6EEE: call    Tile_SetFloat
0x5B6EF3: push    0FCBh
0x5B6EF8: mov     ecx, edi
0x5B6EFA: call    Tile_GetFloat
0x5B6EFF: fsub    [esp+1Ch+arg_0]
0x5B6F03: push    ecx
0x5B6F04: mov     ecx, [esi+4Ch]; this
0x5B6F07: fstp    [esp+20h+arg_0]
0x5B6F0B: fld     [esp+20h+arg_0]
0x5B6F0F: fstp    [esp+20h+var_20]; a3
0x5B6F12: push    0FCBh; a2
0x5B6F17: call    Tile_SetFloat
0x5B6F1C: fild    [esp+1Ch+arg_4]
0x5B6F20: push    ecx
0x5B6F21: mov     ecx, [esi+4Ch]; this
0x5B6F24: fstp    [esp+20h+var_20]; a3
0x5B6F27: push    0FCAh; a2
0x5B6F2C: call    Tile_SetFloat
0x5B6F31: mov     ecx, edi
0x5B6F33: call    sub_588C50
0x5B6F38: fadd    [esp+1Ch+var_C]
0x5B6F3C: push    ecx
0x5B6F3D: mov     ecx, [esi+4Ch]; this
0x5B6F40: fstp    [esp+20h+arg_4]
0x5B6F44: fld     [esp+20h+arg_4]
0x5B6F48: fstp    [esp+20h+var_20]; a3
0x5B6F4B: push    0FADh; a2
0x5B6F50: call    Tile_SetFloat
0x5B6F55: fild    [esp+1Ch+var_8]
0x5B6F59: push    ecx
0x5B6F5A: mov     ecx, [esi+4Ch]; this
0x5B6F5D: fstp    [esp+20h+var_20]; a3
0x5B6F60: push    0FACh; a2
0x5B6F65: call    Tile_SetFloat
0x5B6F6A: fld     dword ptr ds:0A379B4h
0x5B6F70: push    ecx
0x5B6F71: mov     ecx, [esi+4Ch]; this
0x5B6F74: fstp    [esp+20h+var_20]; a3
0x5B6F77: push    0FA1h; a2
0x5B6F7C: call    Tile_SetFloat
0x5B6F81: pop     ebp
0x5B6F82: mov     [esi+78h], edi
0x5B6F85: mov     byte ptr [esi+84h], 0FFh
0x5B6F8C: pop     ebx
0x5B6F8D: pop     edi
0x5B6F8E: pop     esi
0x5B6F8F: add     esp, 0Ch
0x5B6F92: retn    8
