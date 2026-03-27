0x5B8D00: sub     esp, 104h
0x5B8D06: mov     eax, ds:0B30AACh
0x5B8D0B: xor     eax, esp
0x5B8D0D: mov     [esp+104h+var_4], eax
0x5B8D14: mov     eax, [ecx+48h]
0x5B8D17: push    esi
0x5B8D18: mov     esi, [esp+108h+arg_0]
0x5B8D1F: push    edi; a3
0x5B8D20: push    0
0x5B8D22: push    offset aItem_template; "item_template"
0x5B8D27: push    eax
0x5B8D28: call    Menu_CreateTileFromTemplate
0x5B8D2D: mov     edi, eax
0x5B8D2F: test    edi, edi
0x5B8D31: jz      short loc_5B8D88
0x5B8D33: push    esi
0x5B8D34: push    0FAFh
0x5B8D39: mov     ecx, edi
0x5B8D3B: call    Tile_SetString
0x5B8D40: lea     ecx, [esp+10Ch+var_104]
0x5B8D44: xor     edx, edx
0x5B8D46: sub     esi, ecx
0x5B8D48: jmp     short loc_5B8D50
0x5B8D4A: align 10h
0x5B8D50: lea     eax, [esp+edx+10Ch+var_104]
0x5B8D54: mov     cl, [esi+eax]
0x5B8D57: cmp     cl, 20h ; ' '
0x5B8D5A: mov     [eax], cl
0x5B8D5C: jnz     short loc_5B8D61
0x5B8D5E: mov     byte ptr [eax], 5Fh ; '_'
0x5B8D61: cmp     byte ptr [eax], 0
0x5B8D64: jz      short loc_5B8D71
0x5B8D66: add     edx, 1
0x5B8D69: cmp     edx, 100h
0x5B8D6F: jl      short loc_5B8D50
0x5B8D71: push    0; a3
0x5B8D73: lea     edx, [esp+110h+var_104]
0x5B8D77: push    edx; a2
0x5B8D78: lea     ecx, [edi+8]; this
0x5B8D7B: mov     [esp+114h+var_5], 0
0x5B8D83: call    BSStringT_Set
0x5B8D88: fild    [esp+10Ch+arg_4]
0x5B8D8F: push    ecx
0x5B8D90: mov     ecx, edi; this
0x5B8D92: fstp    [esp+110h+a2]; a3
0x5B8D95: push    0FA8h; a2
0x5B8D9A: call    Tile_SetFloat
0x5B8D9F: mov     ecx, [esp+10Ch+var_4]
0x5B8DA6: mov     eax, edi
0x5B8DA8: pop     edi
0x5B8DA9: pop     esi
0x5B8DAA: xor     ecx, esp
0x5B8DAC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5B8DB1: add     esp, 104h
0x5B8DB7: retn    8
