0x588CF0: sub     esp, 8
0x588CF3: push    esi
0x588CF4: push    0FACh
0x588CF9: mov     esi, ecx
0x588CFB: call    Tile_GetFloat
0x588D00: fstp    [esp+0Ch+var_8]
0x588D04: mov     esi, [esi+10h]
0x588D07: test    esi, esi
0x588D09: jz      short loc_588D7D
0x588D0B: fldz
0x588D0D: push    edi
0x588D0E: mov     edi, [esi+18h]
0x588D11: mov     eax, edi
0x588D13: test    eax, eax
0x588D15: jz      short loc_588D73
0x588D17: mov     edx, [eax+8]
0x588D1A: lea     ecx, [eax+8]
0x588D1D: movzx   ecx, word ptr [edx+18h]
0x588D21: cmp     cx, 0FA6h
0x588D26: mov     eax, [eax]
0x588D28: jz      short loc_588D32
0x588D2A: ja      short loc_588D73
0x588D2C: test    eax, eax
0x588D2E: jnz     short loc_588D17
0x588D30: jmp     short loc_588D73
0x588D32: fld     dword ptr [edx+4]
0x588D35: fstp    [esp+10h+var_4]
0x588D39: fcom    [esp+10h+var_4]
0x588D3D: fnstsw  ax
0x588D3F: test    ah, 44h
0x588D42: jnp     short loc_588D73
0x588D44: mov     eax, edi
0x588D46: test    eax, eax
0x588D48: jz      short loc_588D63
0x588D4A: mov     edx, [eax+8]
0x588D4D: lea     ecx, [eax+8]
0x588D50: movzx   ecx, word ptr [edx+18h]
0x588D54: cmp     cx, 0FACh
0x588D59: mov     eax, [eax]
0x588D5B: jz      short loc_588D86
0x588D5D: ja      short loc_588D63
0x588D5F: test    eax, eax
0x588D61: jnz     short loc_588D4A
0x588D63: fst     [esp+10h+var_4]
0x588D67: fld     [esp+10h+var_4]
0x588D6B: fadd    [esp+10h+var_8]
0x588D6F: fstp    [esp+10h+var_8]
0x588D73: mov     esi, [esi+10h]
0x588D76: test    esi, esi
0x588D78: jnz     short loc_588D0E
0x588D7A: fstp    st
0x588D7C: pop     edi
0x588D7D: fld     [esp+0Ch+var_8]
0x588D81: pop     esi
0x588D82: add     esp, 8
0x588D85: retn
0x588D86: fld     dword ptr [edx+4]
0x588D89: fstp    [esp+10h+var_4]
0x588D8D: jmp     short loc_588D67
