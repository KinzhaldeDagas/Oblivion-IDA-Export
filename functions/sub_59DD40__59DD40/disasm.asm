0x59DD40: push    ecx
0x59DD41: push    ebx
0x59DD42: push    ebp
0x59DD43: push    3F1h
0x59DD48: call    Menu_GetOpenMenuTile
0x59DD4D: add     esp, 4
0x59DD50: mov     ebp, eax
0x59DD52: call    sub_6B8660
0x59DD57: xor     ebx, ebx
0x59DD59: cmp     ebp, ebx
0x59DD5B: jz      loc_59DF64
0x59DD61: cmp     eax, ebx
0x59DD63: jz      loc_59DF64
0x59DD69: push    edi
0x59DD6A: mov     ecx, ebp
0x59DD6C: call    Tile_GetParentMenu
0x59DD71: mov     edi, eax
0x59DD73: cmp     edi, ebx
0x59DD75: jz      loc_59DF63
0x59DD7B: fldz
0x59DD7D: mov     al, [edi+88h]
0x59DD83: push    esi
0x59DD84: fstp    dword ptr [edi+68h]
0x59DD87: mov     esi, [edi+60h]
0x59DD8A: cmp     esi, ebx
0x59DD8C: mov     dword ptr [edi+6Ch], 0FFFFFFFFh
0x59DD93: mov     [esp+14h+var_1], al
0x59DD97: jz      short loc_59DDE1
0x59DD99: mov     edx, [esi]
0x59DD9B: mov     eax, [edx+130h]
0x59DDA1: push    ebx
0x59DDA2: mov     ecx, esi
0x59DDA4: call    eax
0x59DDA6: test    eax, eax
0x59DDA8: jz      short loc_59DDBD
0x59DDAA: mov     edx, [esi]
0x59DDAC: mov     eax, [edx+130h]
0x59DDB2: push    ebx
0x59DDB3: mov     ecx, esi
0x59DDB5: call    eax
0x59DDB7: mov     [eax+112h], bl
0x59DDBD: mov     edx, [esi]
0x59DDBF: mov     eax, [edx+134h]
0x59DDC5: push    ebx; a3
0x59DDC6: mov     ecx, esi
0x59DDC8: call    eax
0x59DDCA: test    eax, eax
0x59DDCC: jz      short loc_59DDE1
0x59DDCE: mov     edx, [esi]
0x59DDD0: mov     eax, [edx+134h]
0x59DDD6: push    ebx
0x59DDD7: mov     ecx, esi
0x59DDD9: call    eax
0x59DDDB: mov     [eax+112h], bl
0x59DDE1: fld     dword ptr ds:0A379B4h
0x59DDE7: push    ecx
0x59DDE8: fstp    [esp+18h+a2]; a3
0x59DDEB: push    1772h; a2
0x59DDF0: mov     ecx, ebp; this
0x59DDF2: call    Tile_SetFloat
0x59DDF7: mov     ecx, edi; int
0x59DDF9: call    sub_584740
0x59DDFE: mov     ecx, ds:0B3B294h
0x59DE04: cmp     ecx, ebx
0x59DE06: jz      short loc_59DE25
0x59DE08: cmp     [esp+14h+var_1], bl
0x59DE0C: jnz     short loc_59DE25
0x59DE0E: push    esi
0x59DE0F: call    sub_531470
0x59DE14: mov     ecx, ds:0B3B294h; int
0x59DE1A: call    sub_5308D0
0x59DE1F: mov     ds:0B3B294h, ebx
0x59DE25: mov     ecx, esi
0x59DE27: call    sub_5EF930
0x59DE2C: mov     edx, [esi]
0x59DE2E: mov     eax, [edx+234h]
0x59DE34: push    ebx
0x59DE35: mov     ecx, esi
0x59DE37: call    eax
0x59DE39: mov     ecx, ds:0B333C4h
0x59DE3F: mov     edx, [ecx]
0x59DE41: mov     eax, [edx+234h]
0x59DE47: push    ebx
0x59DE48: call    eax
0x59DE4A: mov     edx, [esi]
0x59DE4C: mov     eax, [edx+30Ch]
0x59DE52: mov     ecx, esi
0x59DE54: call    eax
0x59DE56: mov     ecx, [esi+58h]
0x59DE59: cmp     ecx, ebx
0x59DE5B: jz      short loc_59DE87
0x59DE5D: mov     edx, [ecx]
0x59DE5F: mov     eax, [edx+1E0h]
0x59DE65: push    ebx
0x59DE66: call    eax
0x59DE68: mov     edx, [esi]
0x59DE6A: mov     eax, [edx+334h]
0x59DE70: push    1
0x59DE72: mov     ecx, esi
0x59DE74: call    eax
0x59DE76: test    al, al
0x59DE78: jnz     short loc_59DE87
0x59DE7A: mov     ecx, [esi+58h]
0x59DE7D: mov     edx, [ecx]
0x59DE7F: mov     eax, [edx+18h]
0x59DE82: push    1
0x59DE84: push    esi
0x59DE85: call    eax
0x59DE87: cmp     [esp+13h], bl
0x59DE8B: mov     ecx, [esi+58h]
0x59DE8E: jnz     short loc_59DE99
0x59DE90: mov     byte ptr [ecx+1A0h], 1
0x59DE97: jmp     short loc_59DEA3
0x59DE99: mov     edx, [ecx]
0x59DE9B: mov     eax, [edx+4A8h]
0x59DEA1: call    eax
0x59DEA3: mov     ecx, [esi+58h]
0x59DEA6: fld     dword ptr ds:0B36AE8h
0x59DEAC: mov     edx, [ecx]
0x59DEAE: mov     eax, [edx+364h]
0x59DEB4: push    ecx
0x59DEB5: fstp    [esp+14h+var_14]
0x59DEB8: call    eax
0x59DEBA: push    30h ; '0'
0x59DEBC: mov     ecx, esi
0x59DEBE: call    sub_5E05F0
0x59DEC3: mov     ecx, ds:0B333C4h
0x59DEC9: call    sub_65DA10
0x59DECE: mov     ecx, ds:0B3B294h
0x59DED4: cmp     ecx, ebx
0x59DED6: jz      short loc_59DF56
0x59DED8: cmp     [esp+14h+var_1], bl
0x59DEDC: jz      short loc_59DF56
0x59DEDE: push    esi
0x59DEDF: call    sub_531470
0x59DEE4: mov     ecx, ds:0B3B294h; int
0x59DEEA: call    sub_5308D0
0x59DEEF: mov     edx, [esi]
0x59DEF1: mov     eax, [edx+334h]
0x59DEF7: push    1
0x59DEF9: mov     ecx, esi
0x59DEFB: mov     ds:0B3B294h, ebx
0x59DF01: call    eax
0x59DF03: test    al, al
0x59DF05: jnz     short loc_59DF18
0x59DF07: mov     ecx, [esi+58h]
0x59DF0A: cmp     ecx, ebx
0x59DF0C: jz      short loc_59DF18
0x59DF0E: mov     edx, [ecx]
0x59DF10: mov     eax, [edx+18h]
0x59DF13: push    1
0x59DF15: push    esi
0x59DF16: call    eax
0x59DF18: mov     edx, [esi]
0x59DF1A: mov     eax, [edx+380h]
0x59DF20: mov     ecx, esi
0x59DF22: call    eax
0x59DF24: cmp     eax, ebx
0x59DF26: jz      short loc_59DF56
0x59DF28: mov     edx, [eax]
0x59DF2A: mov     ecx, eax
0x59DF2C: mov     eax, [edx+164h]
0x59DF32: call    eax
0x59DF34: mov     edx, [esi]
0x59DF36: mov     edi, eax
0x59DF38: mov     eax, [edx+164h]
0x59DF3E: mov     ecx, esi
0x59DF40: call    eax
0x59DF42: cmp     edi, ebx
0x59DF44: jz      short loc_59DF56
0x59DF46: cmp     eax, ebx
0x59DF48: jz      short loc_59DF56
0x59DF4A: fld     dword ptr [eax+94h]
0x59DF50: fstp    dword ptr [edi+94h]
0x59DF56: call    sub_578DF0
0x59DF5B: mov     byte ptr ds:0B2D91Ch, 1
0x59DF62: pop     esi
0x59DF63: pop     edi
0x59DF64: pop     ebp
0x59DF65: pop     ebx
0x59DF66: pop     ecx
0x59DF67: retn
