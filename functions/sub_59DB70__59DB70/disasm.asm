0x59DB70: cmp     [esp+a3], 64h ; 'd'
0x59DB75: push    edi; a3
0x59DB76: mov     edi, ecx
0x59DB78: jl      loc_59DC8E
0x59DB7E: push    esi; a3
0x59DB7F: push    4; int
0x59DB81: call    sub_57DE50
0x59DB86: mov     esi, [esp+0Ch+arg_4]
0x59DB8A: add     esp, 4
0x59DB8D: push    0FABh
0x59DB92: mov     ecx, esi
0x59DB94: call    Tile_GetFloat
0x59DB99: fstp    [esp+8+a3]
0x59DB9D: fld     [esp+8+a3]
0x59DBA1: push    ecx
0x59DBA2: fsub    qword ptr ds:0A2FAA0h
0x59DBA8: mov     ecx, [edi+38h]; this
0x59DBAB: fstp    [esp+0Ch+a3]; a3
0x59DBAF: fld     [esp+0Ch+a3]
0x59DBB3: fstp    [esp+0Ch+a2]; a3
0x59DBB6: push    0FABh; a2
0x59DBBB: call    Tile_SetFloat
0x59DBC0: push    0FCBh
0x59DBC5: mov     ecx, esi
0x59DBC7: call    Tile_GetFloat
0x59DBCC: push    ecx
0x59DBCD: mov     ecx, [edi+38h]; this
0x59DBD0: fstp    [esp+0Ch+a2]; a3
0x59DBD3: push    0FCBh; a2
0x59DBD8: call    Tile_SetFloat
0x59DBDD: push    0FADh
0x59DBE2: mov     ecx, esi
0x59DBE4: call    Tile_GetFloat
0x59DBE9: fstp    [esp+8+a3]
0x59DBED: push    0FACh
0x59DBF2: mov     ecx, esi
0x59DBF4: call    Tile_GetFloat
0x59DBF9: fstp    [esp+8+arg_4]
0x59DBFD: mov     esi, [esi+10h]
0x59DC00: test    esi, esi
0x59DC02: jz      short loc_59DC4C
0x59DC04: push    0FA6h
0x59DC09: mov     ecx, esi
0x59DC0B: call    Tile_GetFloat
0x59DC10: fcomp   dword ptr ds:0A379B4h
0x59DC16: fnstsw  ax
0x59DC18: test    ah, 44h
0x59DC1B: jp      short loc_59DC45
0x59DC1D: push    0FADh
0x59DC22: mov     ecx, esi
0x59DC24: call    Tile_GetFloat
0x59DC29: fadd    [esp+8+a3]
0x59DC2D: push    0FACh
0x59DC32: mov     ecx, esi
0x59DC34: fstp    [esp+0Ch+a3]
0x59DC38: call    Tile_GetFloat
0x59DC3D: fadd    [esp+8+arg_4]
0x59DC41: fstp    [esp+8+arg_4]
0x59DC45: mov     esi, [esi+10h]
0x59DC48: test    esi, esi
0x59DC4A: jnz     short loc_59DC04
0x59DC4C: fld     [esp+8+a3]
0x59DC50: push    ecx
0x59DC51: mov     ecx, [edi+38h]; this
0x59DC54: fstp    [esp+0Ch+a2]; a3
0x59DC57: push    0FADh; a2
0x59DC5C: call    Tile_SetFloat
0x59DC61: fld     [esp+8+arg_4]
0x59DC65: push    ecx
0x59DC66: mov     ecx, [edi+38h]; this
0x59DC69: fstp    [esp+0Ch+a2]; a3
0x59DC6C: push    0FACh; a2
0x59DC71: call    Tile_SetFloat
0x59DC76: fld     dword ptr ds:0A379B4h
0x59DC7C: push    ecx
0x59DC7D: mov     ecx, [edi+38h]; this
0x59DC80: fstp    [esp+0Ch+a2]; a3
0x59DC83: push    0FA1h; a2
0x59DC88: call    Tile_SetFloat
0x59DC8D: pop     esi
0x59DC8E: pop     edi
0x59DC8F: retn    8
