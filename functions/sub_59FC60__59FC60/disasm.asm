0x59FC60: push    edi
0x59FC61: push    413h
0x59FC66: call    Menu_GetOpenMenuTile
0x59FC6B: mov     edi, eax
0x59FC6D: add     esp, 4
0x59FC70: test    edi, edi
0x59FC72: jz      short loc_59FCCC
0x59FC74: push    esi; a3
0x59FC75: mov     ecx, edi
0x59FC77: call    Tile_GetParentMenu
0x59FC7C: mov     esi, eax
0x59FC7E: test    esi, esi
0x59FC80: jz      short loc_59FCCB
0x59FC82: mov     ecx, [esi+78h]
0x59FC85: test    ecx, ecx
0x59FC87: jz      short loc_59FC98
0x59FC89: call    sub_5D8180
0x59FC8E: mov     ecx, [esi+78h]
0x59FC91: call    sub_5D8370
0x59FC96: jmp     short loc_59FCAC
0x59FC98: mov     ecx, [esi+7Ch]
0x59FC9B: test    ecx, ecx
0x59FC9D: jz      short loc_59FCAC
0x59FC9F: call    sub_5A2160
0x59FCA4: mov     ecx, [esi+7Ch]
0x59FCA7: call    sub_5A2520
0x59FCAC: fld     dword ptr ds:0A379B4h
0x59FCB2: push    ecx
0x59FCB3: fstp    [esp+0Ch+a2]; a3
0x59FCB6: push    1772h; a2
0x59FCBB: mov     ecx, edi; this
0x59FCBD: call    Tile_SetFloat
0x59FCC2: mov     ecx, esi; int
0x59FCC4: pop     esi
0x59FCC5: pop     edi
0x59FCC6: jmp     sub_584740
0x59FCCB: pop     esi
0x59FCCC: pop     edi
0x59FCCD: retn
