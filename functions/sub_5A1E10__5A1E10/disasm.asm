0x5A1E10: sub     esp, 0Ch
0x5A1E13: push    ebx
0x5A1E14: mov     ebx, [ecx+28h]
0x5A1E17: push    edi
0x5A1E18: xor     edi, edi
0x5A1E1A: test    ebx, ebx
0x5A1E1C: jz      short loc_5A1E98
0x5A1E1E: push    ebp
0x5A1E1F: push    esi
0x5A1E20: xor     esi, esi
0x5A1E22: lea     ebp, [ebx+28h]
0x5A1E25: mov     eax, ebp
0x5A1E27: xor     ecx, ecx
0x5A1E29: test    eax, eax
0x5A1E2B: jz      short loc_5A1E96
0x5A1E2D: lea     ecx, [ecx+0]
0x5A1E30: cmp     dword ptr [eax], 0
0x5A1E33: jz      short loc_5A1E38
0x5A1E35: add     ecx, 1
0x5A1E38: mov     eax, [eax+4]
0x5A1E3B: test    eax, eax
0x5A1E3D: jnz     short loc_5A1E30
0x5A1E3F: cmp     esi, ecx
0x5A1E41: jnb     short loc_5A1E96
0x5A1E43: mov     ecx, [esp+1Ch+arg_0]
0x5A1E47: push    0FAEh
0x5A1E4C: call    Tile_GetFloat
0x5A1E51: fnstcw  [esp+1Ch+var_A]
0x5A1E55: movzx   eax, [esp+1Ch+var_A]
0x5A1E5A: or      eax, 0C00h
0x5A1E5F: mov     dword ptr [esp+1Ch+var_8], eax
0x5A1E63: fldcw   word ptr [esp+1Ch+var_8]
0x5A1E67: fistp   [esp+1Ch+var_8]
0x5A1E6B: mov     eax, dword ptr [esp+1Ch+var_8]
0x5A1E6F: cmp     esi, eax
0x5A1E71: fldcw   [esp+1Ch+var_A]
0x5A1E75: jnz     short loc_5A1E82
0x5A1E77: push    esi
0x5A1E78: lea     ecx, [ebx+24h]
0x5A1E7B: call    EffectItemList_GetItemByIndex2
0x5A1E80: mov     edi, eax
0x5A1E82: test    edi, edi
0x5A1E84: jz      short loc_5A1E91
0x5A1E86: push    0
0x5A1E88: push    edi
0x5A1E89: call    EffectSettingsMenu_Create
0x5A1E8E: add     esp, 8
0x5A1E91: add     esi, 1
0x5A1E94: jmp     short loc_5A1E25
0x5A1E96: pop     esi
0x5A1E97: pop     ebp
0x5A1E98: pop     edi
0x5A1E99: pop     ebx
0x5A1E9A: add     esp, 0Ch
0x5A1E9D: retn    4
