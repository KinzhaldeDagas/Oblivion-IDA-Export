0x5DC950: sub     esp, 110h
0x5DC956: mov     eax, ds:0B30AACh
0x5DC95B: xor     eax, esp
0x5DC95D: mov     [esp+110h+var_4], eax
0x5DC964: push    ebx
0x5DC965: push    esi
0x5DC966: push    0; int
0x5DC968: mov     ebx, ecx
0x5DC96A: mov     ecx, ds:0B333C4h
0x5DC970: mov     eax, [ecx]
0x5DC972: mov     edx, [eax+170h]
0x5DC978: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x5DC97D: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5DC982: push    0; int
0x5DC984: mov     [esp+128h+var_108], ebx
0x5DC988: mov     [esp+128h+var_110], 0
0x5DC990: call    edx
0x5DC992: push    eax; void *
0x5DC993: call    OblivionDynamicCast
0x5DC998: mov     esi, eax
0x5DC99A: add     esp, 14h
0x5DC99D: test    esi, esi
0x5DC99F: jz      loc_5DCB4D
0x5DC9A5: mov     ecx, [ebx+44h]
0x5DC9A8: call    sub_5893F0
0x5DC9AD: lea     eax, [esi+3Ch]
0x5DC9B0: test    eax, eax
0x5DC9B2: jz      loc_5DCB43
0x5DC9B8: push    ebp
0x5DC9B9: push    edi
0x5DC9BA: jmp     short loc_5DC9C4
0x5DC9BC: align 10h
0x5DC9C0: mov     eax, [esp+120h+var_10C]
0x5DC9C4: mov     esi, [eax]
0x5DC9C6: test    esi, esi
0x5DC9C8: jz      loc_5DCB41
0x5DC9CE: mov     eax, [eax+4]
0x5DC9D1: mov     ecx, [esi]
0x5DC9D3: mov     [esp+120h+var_10C], eax
0x5DC9D7: mov     al, [ecx+34h]
0x5DC9DA: movzx   edx, al
0x5DC9DD: shr     edx, 3
0x5DC9E0: test    dl, 1
0x5DC9E3: jnz     loc_5DCB36
0x5DC9E9: test    al, 1
0x5DC9EB: jnz     loc_5DCB36
0x5DC9F1: mov     ecx, ds:0B333C4h; this
0x5DC9F7: call    Actor_IsFemale
0x5DC9FC: mov     ecx, [esi]
0x5DC9FE: push    eax
0x5DC9FF: movsx   eax, byte ptr [esi+4]
0x5DCA03: push    eax
0x5DCA04: call    sub_51F350
0x5DCA09: push    offset aDummy; "DUMMY"
0x5DCA0E: push    eax; unsigned __int8 *
0x5DCA0F: call    __mbscmp
0x5DCA14: add     esp, 8
0x5DCA17: test    eax, eax
0x5DCA19: jz      loc_5DCB36
0x5DCA1F: mov     ecx, [ebx+44h]
0x5DCA22: push    0
0x5DCA24: push    offset aStat_faction_t; "stat_faction_template"
0x5DCA29: push    ecx
0x5DCA2A: mov     ecx, ebx
0x5DCA2C: call    Menu_CreateTileFromTemplate
0x5DCA31: mov     edi, eax
0x5DCA33: test    edi, edi
0x5DCA35: jz      loc_5DCB36
0x5DCA3B: fild    [esp+120h+var_110]
0x5DCA3F: push    ecx
0x5DCA40: mov     ecx, edi; this
0x5DCA42: fstp    [esp+124h+a2]; a3
0x5DCA45: push    0FAAh; a2
0x5DCA4A: call    Tile_SetFloat
0x5DCA4F: mov     eax, [esi]
0x5DCA51: add     [esp+120h+var_110], 1
0x5DCA56: add     eax, 18h
0x5DCA59: mov     eax, [eax+4]
0x5DCA5C: test    eax, eax
0x5DCA5E: mov     ebx, eax
0x5DCA60: jnz     short loc_5DCA67
0x5DCA62: mov     ebx, offset EmptyString
0x5DCA67: mov     ebp, ebx
0x5DCA69: lea     eax, [esp+120h+var_104]
0x5DCA6D: xor     edx, edx
0x5DCA6F: sub     ebp, eax
0x5DCA71: lea     eax, [esp+edx+120h+var_104]
0x5DCA75: mov     cl, [eax+ebp]
0x5DCA78: cmp     cl, 20h ; ' '
0x5DCA7B: mov     [eax], cl
0x5DCA7D: jnz     short loc_5DCA82
0x5DCA7F: mov     byte ptr [eax], 5Fh ; '_'
0x5DCA82: cmp     byte ptr [eax], 0
0x5DCA85: jz      short loc_5DCA92
0x5DCA87: add     edx, 1
0x5DCA8A: cmp     edx, 100h
0x5DCA90: jl      short loc_5DCA71
0x5DCA92: push    0; a3
0x5DCA94: lea     ecx, [esp+124h+var_104]
0x5DCA98: push    ecx; a2
0x5DCA99: lea     ecx, [edi+8]; this
0x5DCA9C: mov     [esp+128h+var_5], 0
0x5DCAA4: call    BSStringT_Set
0x5DCAA9: push    ebx
0x5DCAAA: push    0FAFh
0x5DCAAF: mov     ecx, edi
0x5DCAB1: call    Tile_SetString
0x5DCAB6: mov     ecx, ds:0B333C4h; this
0x5DCABC: call    Actor_IsFemale
0x5DCAC1: movsx   edx, byte ptr [esi+4]
0x5DCAC5: mov     ecx, [esi]
0x5DCAC7: push    eax
0x5DCAC8: push    edx
0x5DCAC9: call    sub_51F350
0x5DCACE: push    eax
0x5DCACF: push    0FB0h
0x5DCAD4: mov     ecx, edi
0x5DCAD6: call    Tile_SetString
0x5DCADB: mov     ecx, ds:0B333C4h; this
0x5DCAE1: call    Actor_IsFemale
0x5DCAE6: mov     ecx, [esi]
0x5DCAE8: push    eax
0x5DCAE9: movsx   eax, byte ptr [esi+4]
0x5DCAED: add     eax, 1
0x5DCAF0: push    eax
0x5DCAF1: call    sub_51F350
0x5DCAF6: push    eax
0x5DCAF7: push    0FB1h
0x5DCAFC: mov     ecx, edi
0x5DCAFE: call    Tile_SetString
0x5DCB03: movsx   ecx, byte ptr [esi+4]
0x5DCB07: push    ecx
0x5DCB08: mov     ecx, [esi]
0x5DCB0A: call    sub_51F370
0x5DCB0F: push    eax
0x5DCB10: push    0FB2h
0x5DCB15: mov     ecx, edi
0x5DCB17: call    Tile_SetString
0x5DCB1C: fld     dword ptr ds:0A379B4h
0x5DCB22: push    ecx
0x5DCB23: fstp    [esp+124h+a2]; a3
0x5DCB26: push    0FB3h; a2
0x5DCB2B: mov     ecx, edi; this
0x5DCB2D: call    Tile_SetFloat
0x5DCB32: mov     ebx, [esp+120h+var_108]
0x5DCB36: cmp     [esp+120h+var_10C], 0
0x5DCB3B: jnz     loc_5DC9C0
0x5DCB41: pop     edi
0x5DCB42: pop     ebp
0x5DCB43: mov     ecx, [ebx+44h]
0x5DCB46: push    0; float
0x5DCB48: call    sub_58FBA0
0x5DCB4D: mov     ecx, [esp+118h+var_4]
0x5DCB54: pop     esi
0x5DCB55: pop     ebx
0x5DCB56: xor     ecx, esp
0x5DCB58: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5DCB5D: add     esp, 110h
0x5DCB63: retn
