0x5B0D20: push    ebx
0x5B0D21: push    esi; a3
0x5B0D22: push    3F6h
0x5B0D27: mov     esi, ecx
0x5B0D29: call    InterfaceManager_MenuModeHasFocus
0x5B0D2E: add     esp, 4
0x5B0D31: test    al, al
0x5B0D33: jz      loc_5B0E63
0x5B0D39: fld     dword ptr ds:0A379B4h
0x5B0D3F: fcomp   [esp+8+arg_4]
0x5B0D43: fnstsw  ax
0x5B0D45: test    ah, 44h
0x5B0D48: jp      loc_5B0E63
0x5B0D4E: mov     eax, [esp+8+arg_0]
0x5B0D52: cmp     eax, 0Bh
0x5B0D55: jnz     loc_5B0E4A
0x5B0D5B: mov     eax, [esi+178h]
0x5B0D61: test    eax, eax
0x5B0D63: jz      loc_5B0E5C
0x5B0D69: cmp     dword ptr [eax+44h], 0
0x5B0D6D: jz      short loc_5B0D88
0x5B0D6F: mov     eax, ds:0B35ECCh
0x5B0D74: mov     ecx, ds:0B333C4h
0x5B0D7A: push    eax
0x5B0D7B: call    TESObjectREF_GetItemCount
0x5B0D80: test    eax, eax
0x5B0D82: jz      loc_5B0E63
0x5B0D88: mov     ebx, 1
0x5B0D8D: cmp     [esi+150h], ebx
0x5B0D93: jz      loc_5B0E63
0x5B0D99: fld1
0x5B0D9B: push    ecx
0x5B0D9C: mov     ecx, [esi+178h]; this
0x5B0DA2: fstp    [esp+0Ch+a2]; a3
0x5B0DA5: push    0FAEh; a2
0x5B0DAA: call    Tile_SetFloat
0x5B0DAF: mov     ecx, [esi+178h]
0x5B0DB5: push    0; float
0x5B0DB7: call    sub_58FBA0
0x5B0DBC: mov     ecx, [esi+38h]; this
0x5B0DBF: call    TESObjectREFR_GetOwner
0x5B0DC4: test    eax, eax
0x5B0DC6: jz      short loc_5B0E03
0x5B0DC8: cmp     byte ptr [esi+17Ch], 0
0x5B0DCF: jnz     short loc_5B0E03
0x5B0DD1: mov     ecx, ds:0B333C4h
0x5B0DD7: push    edi
0x5B0DD8: mov     edi, [ecx]
0x5B0DDA: mov     ecx, [esi+38h]; this
0x5B0DDD: push    0FFFFFFFFh
0x5B0DDF: call    TESObjectREFR_GetOwner
0x5B0DE4: mov     edx, [esi+38h]
0x5B0DE7: mov     ecx, ds:0B333C4h
0x5B0DED: push    eax
0x5B0DEE: mov     eax, [edi+248h]
0x5B0DF4: push    edx
0x5B0DF5: call    eax
0x5B0DF7: cmp     eax, 0FFFFFFFFh
0x5B0DFA: pop     edi
0x5B0DFB: jz      short loc_5B0E03
0x5B0DFD: mov     [esi+17Ch], bl
0x5B0E03: mov     ecx, esi
0x5B0E05: mov     ds:0B3B3F5h, bl
0x5B0E0B: call    sub_5B0260
0x5B0E10: test    al, al
0x5B0E12: jnz     short loc_5B0E22
0x5B0E14: mov     ecx, esi
0x5B0E16: call    sub_5AF200
0x5B0E1B: pop     esi
0x5B0E1C: mov     al, bl
0x5B0E1E: pop     ebx
0x5B0E1F: retn    8
0x5B0E22: lea     eax, [esi+94h]
0x5B0E28: mov     ecx, 5
0x5B0E2D: lea     ecx, [ecx+0]
0x5B0E30: mov     [eax+1], bl
0x5B0E33: mov     [eax], bl
0x5B0E35: add     eax, 28h ; '('
0x5B0E38: sub     ecx, ebx
0x5B0E3A: jnz     short loc_5B0E30
0x5B0E3C: mov     ecx, esi
0x5B0E3E: call    sub_5B03B0
0x5B0E43: pop     esi
0x5B0E44: mov     al, bl
0x5B0E46: pop     ebx
0x5B0E47: retn    8
0x5B0E4A: cmp     eax, 9
0x5B0E4D: jnz     short loc_5B0E63
0x5B0E4F: mov     edx, [esi]
0x5B0E51: mov     eax, [edx+0Ch]
0x5B0E54: push    0
0x5B0E56: push    0
0x5B0E58: mov     ecx, esi
0x5B0E5A: call    eax
0x5B0E5C: pop     esi
0x5B0E5D: mov     al, 1
0x5B0E5F: pop     ebx
0x5B0E60: retn    8
0x5B0E63: pop     esi
0x5B0E64: xor     al, al
0x5B0E66: pop     ebx
0x5B0E67: retn    8
