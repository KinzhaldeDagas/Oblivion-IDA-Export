0x5D5D40: push    ebp
0x5D5D41: mov     ebp, esp
0x5D5D43: and     esp, 0FFFFFFF8h
0x5D5D46: sub     esp, 0Ch
0x5D5D49: push    ebx
0x5D5D4A: mov     ebx, ecx
0x5D5D4C: cmp     dword ptr [ebx+28h], 0
0x5D5D50: push    esi
0x5D5D51: push    edi; a3
0x5D5D52: jz      loc_5D5E35
0x5D5D58: mov     ecx, [ebx+4Ch]
0x5D5D5B: test    ecx, ecx
0x5D5D5D: jz      loc_5D5E35
0x5D5D63: mov     eax, [ebx+3Ch]
0x5D5D66: sub     eax, 0
0x5D5D69: mov     [esp+18h+var_8], 0
0x5D5D71: mov     [esp+18h+var_4], 0
0x5D5D79: jz      short loc_5D5DBC
0x5D5D7B: sub     eax, 1
0x5D5D7E: jz      short loc_5D5D97
0x5D5D80: sub     eax, 1
0x5D5D83: jnz     short loc_5D5DDF
0x5D5D85: mov     eax, [ecx+5Ch]
0x5D5D88: add     eax, 1
0x5D5D8B: push    eax
0x5D5D8C: lea     ecx, [esp+1Ch+var_8]
0x5D5D90: call    BSSimpleList_PushFront
0x5D5D95: jmp     short loc_5D5DDF
0x5D5D97: mov     ecx, [ecx+60h]
0x5D5D9A: add     ecx, 1
0x5D5D9D: push    ecx
0x5D5D9E: lea     ecx, [esp+1Ch+var_8]
0x5D5DA2: call    BSSimpleList_PushFront
0x5D5DA7: mov     edx, [ebx+4Ch]
0x5D5DAA: mov     eax, [edx+64h]
0x5D5DAD: add     eax, 1
0x5D5DB0: push    eax
0x5D5DB1: lea     ecx, [esp+1Ch+var_8]
0x5D5DB5: call    BSSimpleList_PushFront
0x5D5DBA: jmp     short loc_5D5DDF
0x5D5DBC: mov     esi, 68h ; 'h'
0x5D5DC1: mov     ecx, [ebx+4Ch]
0x5D5DC4: mov     edx, [esi+ecx]
0x5D5DC7: add     edx, 1
0x5D5DCA: push    edx
0x5D5DCB: lea     ecx, [esp+1Ch+var_8]
0x5D5DCF: call    BSSimpleList_PushFront
0x5D5DD4: add     esi, 4
0x5D5DD7: cmp     esi, 84h ; '„'
0x5D5DDD: jl      short loc_5D5DC1
0x5D5DDF: mov     eax, [ebx+28h]
0x5D5DE2: mov     edi, [eax+34h]
0x5D5DE5: test    edi, edi
0x5D5DE7: jz      short loc_5D5E35
0x5D5DE9: lea     esp, [esp+0]
0x5D5DF0: mov     esi, [edi+8]
0x5D5DF3: test    esi, esi
0x5D5DF5: lea     eax, [edi+8]
0x5D5DF8: mov     edi, [edi]
0x5D5DFA: jz      short loc_5D5E31
0x5D5DFC: push    0FB0h
0x5D5E01: mov     ecx, esi
0x5D5E03: call    Tile_GetFloat
0x5D5E08: call    Double_To_SInt32
0x5D5E0D: add     eax, 1
0x5D5E10: lea     ecx, [esp+18h+var_8]
0x5D5E14: cmp     [ecx], eax
0x5D5E16: jz      short loc_5D5E3C
0x5D5E18: mov     ecx, [ecx+4]
0x5D5E1B: test    ecx, ecx
0x5D5E1D: jnz     short loc_5D5E14
0x5D5E1F: fld1
0x5D5E21: push    ecx
0x5D5E22: fstp    [esp+1Ch+a2]; a3
0x5D5E25: push    0FB1h; a2
0x5D5E2A: mov     ecx, esi; this
0x5D5E2C: call    Tile_SetFloat
0x5D5E31: test    edi, edi
0x5D5E33: jnz     short loc_5D5DF0
0x5D5E35: pop     edi
0x5D5E36: pop     esi
0x5D5E37: pop     ebx
0x5D5E38: mov     esp, ebp
0x5D5E3A: pop     ebp
0x5D5E3B: retn
0x5D5E3C: cmp     dword ptr [ebx+3Ch], 2
0x5D5E40: jnz     short loc_5D5E45
0x5D5E42: mov     [ebx+48h], esi
0x5D5E45: fld     dword ptr ds:0A379B4h
0x5D5E4B: jmp     short loc_5D5E21
