0x55FA50: sub     esp, 30h
0x55FA53: push    ebx; int
0x55FA54: mov     bl, byte ptr [esp+34h+arg_4]
0x55FA58: test    bl, bl
0x55FA5A: jnz     short loc_55FA80
0x55FA5C: fld     dword ptr ds:0B33E9Ch
0x55FA62: push    ecx
0x55FA63: fadd    dword ptr ds:0B39F18h
0x55FA69: fstp    dword ptr ds:0B39F18h
0x55FA6F: fld     dword ptr ds:0B39F18h
0x55FA75: fstp    [esp+38h+var_38]; float
0x55FA78: call    sub_78D3F0
0x55FA7D: add     esp, 4
0x55FA80: mov     eax, [esp+34h+arg_0]
0x55FA84: test    eax, eax
0x55FA86: jz      loc_55FB0D
0x55FA8C: fld     dword ptr [eax+88h]
0x55FA92: lea     ecx, [esp+34h+var_C]
0x55FA96: fstp    [esp+34h+var_C]
0x55FA9A: fld     dword ptr [eax+8Ch]
0x55FAA0: fstp    [esp+34h+var_8]
0x55FAA4: fld     dword ptr [eax+90h]
0x55FAAA: fstp    [esp+34h+var_4]
0x55FAAE: fld     dword ptr [eax+64h]
0x55FAB1: fstp    [esp+34h+var_30]
0x55FAB5: fld     dword ptr [eax+70h]
0x55FAB8: fstp    [esp+34h+var_2C]
0x55FABC: fld     dword ptr [eax+7Ch]
0x55FABF: lea     eax, [esp+34h+var_18]
0x55FAC3: fstp    [esp+34h+var_28]
0x55FAC7: push    eax
0x55FAC8: fld     [esp+38h+var_30]
0x55FACC: push    ecx
0x55FACD: fld     qword ptr ds:0A3D360h
0x55FAD3: fmul    st(1), st
0x55FAD5: fxch    st(1)
0x55FAD7: fstp    [esp+3Ch+var_24]
0x55FADB: fld     [esp+3Ch+var_2C]
0x55FADF: fmul    st, st(1)
0x55FAE1: fstp    [esp+3Ch+var_20]
0x55FAE5: fmul    [esp+3Ch+var_28]
0x55FAE9: fstp    [esp+3Ch+var_1C]
0x55FAED: fld     [esp+3Ch+var_24]
0x55FAF1: fstp    [esp+3Ch+var_18]
0x55FAF5: fld     [esp+3Ch+var_20]
0x55FAF9: fstp    [esp+3Ch+var_14]
0x55FAFD: fld     [esp+3Ch+var_1C]
0x55FB01: fstp    [esp+3Ch+var_10]
0x55FB05: call    sub_78D140
0x55FB0A: add     esp, 8
0x55FB0D: test    bl, bl
0x55FB0F: jnz     loc_55FC55
0x55FB15: mov     ecx, ds:0B333A0h
0x55FB1B: test    ecx, ecx
0x55FB1D: jz      loc_55FC37
0x55FB23: mov     eax, [ecx+5Ch]
0x55FB26: test    eax, eax
0x55FB28: jz      loc_55FC37
0x55FB2E: cmp     dword ptr [ecx+34h], 0
0x55FB32: jz      short loc_55FB54
0x55FB34: cmp     dword ptr ds:0B39E04h, 0
0x55FB3B: jnz     short loc_55FB47
0x55FB3D: push    0
0x55FB3F: call    sub_55F750
0x55FB44: add     esp, 4
0x55FB47: fldz
0x55FB49: mov     edx, ds:0B39E04h
0x55FB4F: fstp    dword ptr [edx+1Ch]
0x55FB52: jmp     short loc_55FB7D
0x55FB54: cmp     dword ptr ds:0B39E04h, 0
0x55FB5B: fld     dword ptr [eax+0C0h]
0x55FB61: fstp    [esp+34h+arg_4]
0x55FB65: jnz     short loc_55FB71
0x55FB67: push    0
0x55FB69: call    sub_55F750
0x55FB6E: add     esp, 4
0x55FB71: fld     [esp+34h+arg_4]
0x55FB75: mov     eax, ds:0B39E04h
0x55FB7A: fstp    dword ptr [eax+1Ch]
0x55FB7D: mov     ecx, ds:0B39E04h
0x55FB83: cmp     dword ptr [ecx+0Ch], 0
0x55FB87: jz      loc_55FC37
0x55FB8D: mov     edx, ds:0B333A0h
0x55FB93: mov     ecx, [edx+5Ch]
0x55FB96: call    sub_53FB50
0x55FB9B: test    eax, eax
0x55FB9D: jz      loc_55FC37
0x55FBA3: mov     eax, ds:0B333A0h
0x55FBA8: mov     ecx, [eax+5Ch]
0x55FBAB: push    esi
0x55FBAC: push    edi
0x55FBAD: call    sub_53FB50
0x55FBB2: cmp     dword ptr ds:0B39E04h, 0
0x55FBB9: mov     esi, [eax+20h]
0x55FBBC: mov     edi, [eax+24h]
0x55FBBF: mov     ebx, [eax+28h]
0x55FBC2: jnz     short loc_55FBCE
0x55FBC4: push    0
0x55FBC6: call    sub_55F750
0x55FBCB: add     esp, 4
0x55FBCE: mov     ecx, ds:0B39E04h
0x55FBD4: mov     eax, [ecx+0Ch]
0x55FBD7: add     dword ptr [eax+54h], 1
0x55FBDB: mov     [eax+1Ch], esi
0x55FBDE: mov     [eax+20h], edi
0x55FBE1: mov     [eax+24h], ebx
0x55FBE4: cmp     dword ptr ds:0B39E04h, 0
0x55FBEB: jnz     short loc_55FBF7
0x55FBED: push    0
0x55FBEF: call    sub_55F750
0x55FBF4: add     esp, 4
0x55FBF7: mov     edx, ds:0B39E04h
0x55FBFD: mov     eax, [edx+0Ch]
0x55FC00: add     dword ptr [eax+54h], 1
0x55FC04: mov     [eax+28h], esi
0x55FC07: mov     [eax+2Ch], edi
0x55FC0A: mov     [eax+30h], ebx
0x55FC0D: cmp     dword ptr ds:0B39E04h, 0
0x55FC14: jnz     short loc_55FC20
0x55FC16: push    0
0x55FC18: call    sub_55F750
0x55FC1D: add     esp, 4
0x55FC20: mov     eax, ds:0B39E04h
0x55FC25: mov     eax, [eax+0Ch]
0x55FC28: add     dword ptr [eax+54h], 1
0x55FC2C: mov     [eax+40h], esi
0x55FC2F: mov     [eax+44h], edi
0x55FC32: pop     edi
0x55FC33: mov     [eax+48h], ebx
0x55FC36: pop     esi
0x55FC37: cmp     dword ptr ds:0B39E04h, 0
0x55FC3E: jnz     short loc_55FC4A
0x55FC40: push    0
0x55FC42: call    sub_55F750
0x55FC47: add     esp, 4
0x55FC4A: mov     ecx, ds:0B39E04h
0x55FC50: call    sub_55E060
0x55FC55: mov     ecx, ds:0B12630h
0x55FC5B: fild    dword ptr ds:0B12630h
0x55FC61: test    ecx, ecx
0x55FC63: jge     short loc_55FC6B
0x55FC65: fadd    dword ptr ds:0A2FC78h
0x55FC6B: fstp    dword ptr ds:0B44F04h
0x55FC71: pop     ebx
0x55FC72: fldz
0x55FC74: fld     dword ptr ds:0B12638h
0x55FC7A: fcom    st(1)
0x55FC7C: fnstsw  ax
0x55FC7E: test    ah, 1
0x55FC81: jnz     short loc_55FC9C
0x55FC83: fstp    st(1)
0x55FC85: fld1
0x55FC87: fcom    st(1)
0x55FC89: fnstsw  ax
0x55FC8B: test    ah, 1
0x55FC8E: jz      short loc_55FC9C
0x55FC90: fstp    st(1)
0x55FC92: fstp    dword ptr ds:0B2D860h
0x55FC98: add     esp, 30h
0x55FC9B: retn
0x55FC9C: fstp    st
0x55FC9E: fstp    dword ptr ds:0B2D860h
0x55FCA4: add     esp, 30h
0x55FCA7: retn
