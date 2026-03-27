0x5C9AB0: sub     esp, 0Ch
0x5C9AB3: mov     eax, [esp+0Ch+arg_0]
0x5C9AB7: push    ebx
0x5C9AB8: push    ebp
0x5C9AB9: push    edi
0x5C9ABA: mov     edi, [eax+34h]
0x5C9ABD: xor     ebp, ebp
0x5C9ABF: test    edi, edi
0x5C9AC1: mov     ebx, ecx
0x5C9AC3: mov     [esp+18h+var_A], 0
0x5C9AC8: mov     [esp+18h+var_9], 0
0x5C9ACD: jz      loc_5C9B90
0x5C9AD3: push    esi
0x5C9AD4: mov     esi, [edi+8]
0x5C9AD7: push    0FC2h
0x5C9ADC: mov     ecx, esi
0x5C9ADE: call    Tile_GetFloat
0x5C9AE3: fcomp   dword ptr ds:0A2F948h
0x5C9AE9: fnstsw  ax
0x5C9AEB: test    ah, 44h
0x5C9AEE: jp      short loc_5C9B55
0x5C9AF0: push    0FAEh
0x5C9AF5: mov     ecx, esi
0x5C9AF7: call    Tile_GetFloat
0x5C9AFC: fstp    [esp+1Ch+var_8]
0x5C9B00: push    0FB8h
0x5C9B05: mov     ecx, esi
0x5C9B07: call    Tile_GetFloat
0x5C9B0C: fcomp   [esp+1Ch+var_8]
0x5C9B10: fnstsw  ax
0x5C9B12: test    ah, 44h
0x5C9B15: jnp     short loc_5C9B55
0x5C9B17: push    0FB4h
0x5C9B1C: mov     ecx, esi
0x5C9B1E: call    Tile_GetFloat
0x5C9B23: call    Double_To_SInt32
0x5C9B28: push    eax
0x5C9B29: mov     ecx, ebx
0x5C9B2B: call    sub_5C6390
0x5C9B30: push    0FB6h
0x5C9B35: mov     ecx, esi
0x5C9B37: mov     [esp+20h+var_9], 1
0x5C9B3C: mov     ebp, esi
0x5C9B3E: call    Tile_GetFloat
0x5C9B43: fcomp   dword ptr ds:0A2F948h
0x5C9B49: fnstsw  ax
0x5C9B4B: test    ah, 44h
0x5C9B4E: jp      short loc_5C9B55
0x5C9B50: mov     [esp+1Ch+var_A], 1
0x5C9B55: mov     edi, [edi]
0x5C9B57: test    edi, edi
0x5C9B59: jnz     loc_5C9AD4
0x5C9B5F: cmp     [esp+1Ch+var_A], 0
0x5C9B64: pop     esi
0x5C9B65: jz      short loc_5C9B71
0x5C9B67: call    sub_5C7800
0x5C9B6C: call    UpdatePlayerHead
0x5C9B71: cmp     [esp+18h+var_9], 0
0x5C9B76: jz      short loc_5C9B90
0x5C9B78: mov     ecx, [esp+18h+arg_0]
0x5C9B7C: push    ebp
0x5C9B7D: push    ecx
0x5C9B7E: mov     ecx, ebx
0x5C9B80: call    sub_5C6AF0
0x5C9B85: pop     edi
0x5C9B86: pop     ebp
0x5C9B87: mov     al, 1
0x5C9B89: pop     ebx
0x5C9B8A: add     esp, 0Ch
0x5C9B8D: retn    4
0x5C9B90: pop     edi
0x5C9B91: pop     ebp
0x5C9B92: xor     al, al
0x5C9B94: pop     ebx
0x5C9B95: add     esp, 0Ch
0x5C9B98: retn    4
