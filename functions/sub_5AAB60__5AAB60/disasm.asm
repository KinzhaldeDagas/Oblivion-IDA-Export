0x5AAB60: push    0FFFFFFFFh
0x5AAB62: push    offset SEH_5AAB60
0x5AAB67: mov     eax, large fs:0
0x5AAB6D: push    eax
0x5AAB6E: sub     esp, 114h
0x5AAB74: mov     eax, ds:0B30AACh
0x5AAB79: xor     eax, esp
0x5AAB7B: mov     [esp+120h+var_10], eax
0x5AAB82: push    ebx
0x5AAB83: push    ebp
0x5AAB84: push    esi; a3
0x5AAB85: push    edi; a3
0x5AAB86: mov     eax, ds:0B30AACh
0x5AAB8B: xor     eax, esp
0x5AAB8D: push    eax; a3
0x5AAB8E: lea     eax, [esp+134h+var_C]
0x5AAB95: mov     large fs:0, eax
0x5AAB9B: mov     eax, [esp+134h+a2]
0x5AABA2: mov     edi, [esp+134h+arg_4]
0x5AABA9: xor     ebx, ebx
0x5AABAB: push    ebx; a3
0x5AABAC: mov     esi, ecx
0x5AABAE: push    eax; a2
0x5AABAF: lea     ecx, [esp+13Ch+var_120]; this
0x5AABB3: mov     [esp+13Ch+var_120.m_data], ebx
0x5AABB7: mov     [esp+13Ch+var_120.m_dataLen], bx
0x5AABBC: mov     [esp+13Ch+var_120.m_bufLen], bx
0x5AABC1: call    BSStringT_Set
0x5AABC6: push    ebx; a3
0x5AABC7: push    offset aItem_template; "item_template"
0x5AABCC: lea     ecx, [esp+13Ch+var_118]; this
0x5AABD0: mov     [esp+13Ch+var_4], ebx
0x5AABD7: mov     [esp+13Ch+var_118.m_data], ebx
0x5AABDB: mov     [esp+13Ch+var_118.m_dataLen], bx
0x5AABE0: mov     [esp+13Ch+var_118.m_bufLen], bx
0x5AABE5: call    BSStringT_Set
0x5AABEA: mov     ebp, [esp+134h+var_118.m_data]
0x5AABEE: mov     eax, [esi+2Ch]
0x5AABF1: push    ebx
0x5AABF2: push    ebp
0x5AABF3: push    eax
0x5AABF4: mov     ecx, esi
0x5AABF6: mov     byte ptr [esp+140h+var_4], 1
0x5AABFE: call    Menu_CreateTileFromTemplate
0x5AAC03: mov     esi, eax
0x5AAC05: cmp     esi, ebx
0x5AAC07: jz      loc_5AACAD
0x5AAC0D: push    edi
0x5AAC0E: push    0FAFh
0x5AAC13: mov     ecx, esi
0x5AAC15: call    Tile_SetString
0x5AAC1A: lea     ecx, [esp+134h+var_110]
0x5AAC1E: xor     edx, edx
0x5AAC20: sub     edi, ecx
0x5AAC22: lea     eax, [esp+edx+134h+var_110]
0x5AAC26: mov     cl, [edi+eax]
0x5AAC29: cmp     cl, 20h ; ' '
0x5AAC2C: mov     [eax], cl
0x5AAC2E: jnz     short loc_5AAC33
0x5AAC30: mov     byte ptr [eax], 5Fh ; '_'
0x5AAC33: cmp     [eax], bl
0x5AAC35: jz      short loc_5AAC42
0x5AAC37: add     edx, 1
0x5AAC3A: cmp     edx, 100h
0x5AAC40: jl      short loc_5AAC22
0x5AAC42: push    ebx; a3
0x5AAC43: lea     edx, [esp+138h+var_110]
0x5AAC47: lea     ecx, [esi+8]; this
0x5AAC4A: push    edx; a2
0x5AAC4B: mov     [esp+13Ch+var_11], bl
0x5AAC52: call    BSStringT_Set
0x5AAC57: mov     eax, [esp+134h+var_120.m_data]
0x5AAC5B: push    eax
0x5AAC5C: push    0FB4h
0x5AAC61: mov     ecx, esi
0x5AAC63: call    Tile_SetString
0x5AAC68: fild    [esp+134h+arg_8]
0x5AAC6F: push    ecx
0x5AAC70: mov     ecx, esi; this
0x5AAC72: fstp    [esp+138h+var_138]; a3
0x5AAC75: push    0FB7h; a2
0x5AAC7A: call    Tile_SetFloat
0x5AAC7F: fild    [esp+134h+arg_C]
0x5AAC86: push    ecx
0x5AAC87: mov     ecx, esi; this
0x5AAC89: fstp    [esp+138h+var_138]; a3
0x5AAC8C: push    0FAAh; a2
0x5AAC91: call    Tile_SetFloat
0x5AAC96: fild    [esp+134h+arg_10]
0x5AAC9D: push    ecx
0x5AAC9E: mov     ecx, esi; this
0x5AACA0: fstp    [esp+138h+var_138]; a3
0x5AACA3: push    0FA8h; a2
0x5AACA8: call    Tile_SetFloat
0x5AACAD: push    ebp
0x5AACAE: call    FormHeapFree
0x5AACB3: mov     ecx, [esp+138h+var_120.m_data]
0x5AACB7: push    ecx
0x5AACB8: call    FormHeapFree
0x5AACBD: add     esp, 8
0x5AACC0: mov     eax, esi
0x5AACC2: mov     ecx, [esp+134h+var_C]
0x5AACC9: mov     large fs:0, ecx
0x5AACD0: pop     ecx
0x5AACD1: pop     edi
0x5AACD2: pop     esi
0x5AACD3: pop     ebp
0x5AACD4: pop     ebx
0x5AACD5: mov     ecx, [esp+120h+var_10]
0x5AACDC: xor     ecx, esp
0x5AACDE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5AACE3: add     esp, 120h
0x5AACE9: retn    14h
