0x57D940: cmp     dword ptr ds:0B333C4h, 0
0x57D947: push    esi
0x57D948: mov     esi, ecx
0x57D94A: jz      loc_57DA0F
0x57D950: mov     ecx, [esi+80h]; this
0x57D956: push    ebx
0x57D957: xor     bl, bl
0x57D959: test    ecx, ecx
0x57D95B: push    edi; a3
0x57D95C: jz      short loc_57D99A
0x57D95E: fld     dword ptr ds:0A379B4h
0x57D964: push    ecx
0x57D965: fstp    [esp+10h+a2]; a3
0x57D968: push    0FA1h; a2
0x57D96D: call    Tile_SetFloat
0x57D972: call    sub_5A8260
0x57D977: test    eax, eax
0x57D979: jz      short loc_57D99A
0x57D97B: push    0FA1h
0x57D980: mov     ecx, eax
0x57D982: call    Tile_GetFloat
0x57D987: fcomp   dword ptr ds:0A2F948h
0x57D98D: fnstsw  ax
0x57D98F: test    ah, 44h
0x57D992: jnp     short loc_57D998
0x57D994: mov     bl, 1
0x57D996: jmp     short loc_57D99A
0x57D998: xor     bl, bl
0x57D99A: mov     ecx, [esi+80h]
0x57D9A0: test    ecx, ecx
0x57D9A2: mov     edi, [esp+0Ch+arg_0]
0x57D9A6: jz      short loc_57D9AD
0x57D9A8: cmp     edi, 2
0x57D9AB: jz      short loc_57D9B2
0x57D9AD: test    edi, edi
0x57D9AF: setnle  bl
0x57D9B2: test    ecx, ecx
0x57D9B4: jz      short loc_57D9CD
0x57D9B6: cmp     edi, 3
0x57D9B9: jnz     short loc_57D9CD
0x57D9BB: mov     eax, [ecx]
0x57D9BD: mov     edx, [eax]
0x57D9BF: push    1
0x57D9C1: call    edx
0x57D9C3: mov     dword ptr [esi+80h], 0
0x57D9CD: cmp     dword ptr [esi+80h], 0
0x57D9D4: jnz     short loc_57DA04
0x57D9D6: test    bl, bl
0x57D9D8: jz      short loc_57DA04
0x57D9DA: mov     byte ptr ds:0B3B0A2h, 1
0x57D9E1: mov     ecx, [esi+68h]; TileWindow *
0x57D9E4: push    offset aDataMenusMainH; "Data\\Menus\\Main\\hud_reticle.xml"
0x57D9E9: call    Menu_LoadXML
0x57D9EE: push    eax
0x57D9EF: mov     [esi+80h], eax
0x57D9F5: call    sub_5A8000
0x57D9FA: add     esp, 4
0x57D9FD: mov     byte ptr ds:0B3B0A2h, 0
0x57DA04: push    edi
0x57DA05: call    sub_5A8710
0x57DA0A: add     esp, 4
0x57DA0D: pop     edi
0x57DA0E: pop     ebx
0x57DA0F: pop     esi
0x57DA10: retn    4
