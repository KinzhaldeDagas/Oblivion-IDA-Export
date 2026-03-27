0x59EAA0: fld1
0x59EAA2: push    esi; a3
0x59EAA3: push    edi; a3
0x59EAA4: push    ecx
0x59EAA5: mov     esi, ecx
0x59EAA7: fstp    [esp+0Ch+a2]; a3
0x59EAAA: mov     ecx, [esi+38h]; this
0x59EAAD: push    0FA1h; a2
0x59EAB2: call    Tile_SetFloat
0x59EAB7: mov     edi, [esp+8+arg_0]
0x59EABB: test    edi, edi
0x59EABD: jz      loc_59EB7F
0x59EAC3: mov     ecx, edi
0x59EAC5: call    sub_6B7BA0
0x59EACA: test    al, al
0x59EACC: jz      loc_59EB54
0x59EAD2: mov     ecx, edi
0x59EAD4: call    sub_6B7C20
0x59EAD9: fldz
0x59EADB: mov     ecx, [esi+60h]
0x59EADE: mov     edi, eax
0x59EAE0: mov     eax, [ecx]
0x59EAE2: mov     edx, [eax+304h]
0x59EAE8: push    edi; a3
0x59EAE9: push    ecx
0x59EAEA: fstp    [esp+10h+var_10]; a3
0x59EAED: call    edx
0x59EAEF: fld     dword ptr ds:0A379B4h
0x59EAF5: xor     eax, eax
0x59EAF7: fstp    dword ptr [esi+84h]
0x59EAFD: mov     dword ptr [esi+80h], 2
0x59EB07: cmp     ds:0B13200h, al
0x59EB0D: push    ecx
0x59EB0E: mov     ecx, [esi+2Ch]; this
0x59EB11: setnz   al
0x59EB14: add     eax, 1
0x59EB17: mov     [esp+0Ch+arg_0], eax
0x59EB1B: fild    [esp+0Ch+arg_0]
0x59EB1F: fstp    [esp+0Ch+a2]; a3
0x59EB22: push    0FA1h; a2
0x59EB27: call    Tile_SetFloat
0x59EB2C: mov     ecx, [edi]
0x59EB2E: push    ecx
0x59EB2F: mov     ecx, [esi+2Ch]
0x59EB32: push    0FDEh
0x59EB37: call    Tile_SetString
0x59EB3C: fld1
0x59EB3E: push    ecx
0x59EB3F: fstp    [esp+0Ch+a2]; a3
0x59EB42: mov     ecx, [esi+3Ch]; this
0x59EB45: push    0FA1h; a2
0x59EB4A: call    Tile_SetFloat
0x59EB4F: pop     edi
0x59EB50: pop     esi
0x59EB51: retn    4
0x59EB54: fld     dword ptr ds:0A379B4h
0x59EB5A: push    ecx
0x59EB5B: mov     ecx, [esi+3Ch]; this
0x59EB5E: fstp    [esp+0Ch+a2]; a3
0x59EB61: push    0FA1h; a2
0x59EB66: call    Tile_SetFloat
0x59EB6B: push    1
0x59EB6D: mov     ecx, esi
0x59EB6F: call    sub_59E2B0
0x59EB74: push    0
0x59EB76: push    1
0x59EB78: mov     ecx, esi
0x59EB7A: call    sub_59EA10
0x59EB7F: pop     edi
0x59EB80: pop     esi
0x59EB81: retn    4
