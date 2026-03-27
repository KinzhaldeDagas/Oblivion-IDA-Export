0x5B1A40: sub     esp, 10h
0x5B1A43: push    ebp; a3
0x5B1A44: push    esi; a3
0x5B1A45: mov     esi, ecx
0x5B1A47: mov     eax, [esi+2Ch]
0x5B1A4A: push    edi; a3
0x5B1A4B: mov     edi, [eax+38h]
0x5B1A4E: mov     eax, [esp+1Ch+arg_0]
0x5B1A52: or      ebp, 0FFFFFFFFh
0x5B1A55: and     eax, 8
0x5B1A58: mov     [esp+1Ch+var_C], ebp
0x5B1A5C: mov     [esp+1Ch+a3], ebp
0x5B1A60: mov     [esp+1Ch+var_4], eax
0x5B1A64: jz      short loc_5B1A6C
0x5B1A66: xor     ebp, ebp
0x5B1A68: mov     [esp+1Ch+a3], ebp; a3
0x5B1A6C: fld     dword ptr ds:0A53954h
0x5B1A72: push    ecx
0x5B1A73: mov     ecx, [esi+4]; this
0x5B1A76: fstp    [esp+20h+a2]; a3
0x5B1A79: push    0FAFh; a2
0x5B1A7E: call    Tile_SetFloat
0x5B1A83: fld     dword ptr ds:0A53954h
0x5B1A89: push    ecx
0x5B1A8A: mov     ecx, [esi+4]; this
0x5B1A8D: fstp    [esp+20h+a2]; a3
0x5B1A90: push    0FB0h; a2
0x5B1A95: call    Tile_SetFloat
0x5B1A9A: fld     dword ptr ds:0A53954h
0x5B1AA0: push    ecx
0x5B1AA1: mov     ecx, [esi+4]; this
0x5B1AA4: fstp    [esp+20h+a2]; a3
0x5B1AA7: push    0FB1h; a2
0x5B1AAC: call    Tile_SetFloat
0x5B1AB1: fld     dword ptr ds:0A53954h
0x5B1AB7: push    ecx
0x5B1AB8: mov     ecx, [esi+4]; this
0x5B1ABB: fstp    [esp+20h+a2]; a3
0x5B1ABE: push    0FB2h; a2
0x5B1AC3: call    Tile_SetFloat
0x5B1AC8: test    edi, edi
0x5B1ACA: jz      loc_5B1BEF
0x5B1AD0: push    ebx
0x5B1AD1: jmp     short loc_5B1AD7
0x5B1AD3: mov     edi, [esp+20h+var_8]
0x5B1AD7: mov     ecx, [edi+4]
0x5B1ADA: lea     eax, [edi+8]
0x5B1ADD: mov     edi, [eax]
0x5B1ADF: mov     [esp+20h+var_8], ecx; a3
0x5B1AE3: push    0FB7h
0x5B1AE8: mov     ecx, edi
0x5B1AEA: call    Tile_GetFloat
0x5B1AEF: call    Double_To_SInt32
0x5B1AF4: mov     edx, [esp+20h+arg_0]
0x5B1AF8: test    edx, eax
0x5B1AFA: jz      loc_5B1BD1
0x5B1B00: push    0FA8h
0x5B1B05: mov     ecx, edi
0x5B1B07: call    Tile_GetFloat
0x5B1B0C: fcomp   qword ptr ds:0A6C1E0h
0x5B1B12: fnstsw  ax
0x5B1B14: test    ah, 1
0x5B1B17: jnz     loc_5B1BD1
0x5B1B1D: push    0FB5h
0x5B1B22: mov     ecx, edi
0x5B1B24: call    Tile_GetFloat
0x5B1B29: call    Double_To_SInt32
0x5B1B2E: cmp     [esp+20h+var_4], 0
0x5B1B33: mov     ebx, eax
0x5B1B35: jnz     short loc_5B1B9A
0x5B1B37: cmp     ebx, [esp+20h+var_C]
0x5B1B3B: jz      short loc_5B1B9A
0x5B1B3D: test    bl, 1
0x5B1B40: jz      short loc_5B1B51
0x5B1B42: fild    [esp+20h+a3]
0x5B1B46: push    ecx
0x5B1B47: fstp    [esp+24h+var_24]
0x5B1B4A: push    0FAFh
0x5B1B4F: jmp     short loc_5B1B8B
0x5B1B51: test    bl, 2
0x5B1B54: jz      short loc_5B1B65
0x5B1B56: fild    [esp+20h+a3]
0x5B1B5A: push    ecx
0x5B1B5B: fstp    [esp+24h+var_24]
0x5B1B5E: push    0FB0h
0x5B1B63: jmp     short loc_5B1B8B
0x5B1B65: test    bl, 4
0x5B1B68: jz      short loc_5B1B79
0x5B1B6A: fild    [esp+20h+a3]
0x5B1B6E: push    ecx
0x5B1B6F: fstp    [esp+24h+var_24]
0x5B1B72: push    0FB1h
0x5B1B77: jmp     short loc_5B1B8B
0x5B1B79: test    bl, 8
0x5B1B7C: jz      short loc_5B1B9A
0x5B1B7E: fild    [esp+20h+a3]
0x5B1B82: push    ecx
0x5B1B83: fstp    [esp+24h+var_24]; a3
0x5B1B86: push    0FB2h; a2
0x5B1B8B: mov     ecx, [esi+4]; this
0x5B1B8E: call    Tile_SetFloat
0x5B1B93: add     ebp, 1
0x5B1B96: mov     [esp+20h+a3], ebp
0x5B1B9A: fld     dword ptr ds:0A379B4h
0x5B1BA0: push    ecx
0x5B1BA1: fstp    [esp+24h+var_24]; a3
0x5B1BA4: push    0FB6h; a2
0x5B1BA9: mov     ecx, edi; this
0x5B1BAB: mov     [esp+28h+var_C], ebx
0x5B1BAF: call    Tile_SetFloat
0x5B1BB4: fild    [esp+20h+a3]
0x5B1BB8: push    ecx
0x5B1BB9: mov     ecx, edi; this
0x5B1BBB: fstp    [esp+24h+var_24]; a3
0x5B1BBE: push    0FAAh; a2
0x5B1BC3: call    Tile_SetFloat
0x5B1BC8: add     ebp, 1
0x5B1BCB: mov     [esp+20h+a3], ebp
0x5B1BCF: jmp     short loc_5B1BE3
0x5B1BD1: fld1
0x5B1BD3: push    ecx
0x5B1BD4: fstp    [esp+24h+var_24]; a3
0x5B1BD7: mov     ecx, edi; this
0x5B1BD9: push    0FB6h; a2
0x5B1BDE: call    Tile_SetFloat
0x5B1BE3: cmp     [esp+20h+var_8], 0
0x5B1BE8: jnz     loc_5B1AD3
0x5B1BEE: pop     ebx
0x5B1BEF: xor     eax, eax
0x5B1BF1: lea     edi, [ebp-1]
0x5B1BF4: test    edi, edi
0x5B1BF6: setl    al
0x5B1BF9: push    ecx
0x5B1BFA: mov     ecx, [esi+2Ch]; this
0x5B1BFD: sub     eax, 1
0x5B1C00: and     eax, edi
0x5B1C02: mov     [esp+20h+arg_0], eax
0x5B1C06: fild    [esp+20h+arg_0]
0x5B1C0A: fstp    [esp+20h+a2]; a3
0x5B1C0D: push    0FAEh; a2
0x5B1C12: call    Tile_SetFloat
0x5B1C17: xor     ecx, ecx
0x5B1C19: test    edi, edi
0x5B1C1B: setl    cl
0x5B1C1E: sub     ecx, 1
0x5B1C21: and     ecx, edi
0x5B1C23: mov     [esp+1Ch+arg_0], ecx
0x5B1C27: fild    [esp+1Ch+arg_0]
0x5B1C2B: push    ecx
0x5B1C2C: mov     ecx, [esi+4]; this
0x5B1C2F: fstp    [esp+20h+a2]; a3
0x5B1C32: push    0FB3h; a2
0x5B1C37: call    Tile_SetFloat
0x5B1C3C: mov     ecx, [esi+4]
0x5B1C3F: push    0FB2h
0x5B1C44: call    Tile_GetFloat
0x5B1C49: fcomp   dword ptr ds:0A53954h
0x5B1C4F: fnstsw  ax
0x5B1C51: test    ah, 44h
0x5B1C54: jp      short loc_5B1C6D
0x5B1C56: fld     dword ptr ds:0A6C958h
0x5B1C5C: push    ecx
0x5B1C5D: mov     ecx, [esi+4]; this
0x5B1C60: fstp    [esp+20h+a2]; a3
0x5B1C63: push    0FB2h; a2
0x5B1C68: call    Tile_SetFloat
0x5B1C6D: mov     ecx, [esi+4]
0x5B1C70: push    0FB1h
0x5B1C75: call    Tile_GetFloat
0x5B1C7A: fcomp   dword ptr ds:0A53954h
0x5B1C80: fnstsw  ax
0x5B1C82: test    ah, 44h
0x5B1C85: jp      short loc_5B1CA6
0x5B1C87: mov     edi, [esi+4]
0x5B1C8A: push    0FB2h
0x5B1C8F: mov     ecx, edi
0x5B1C91: call    Tile_GetFloat
0x5B1C96: push    ecx
0x5B1C97: fstp    [esp+20h+a2]; a3
0x5B1C9A: push    0FB1h; a2
0x5B1C9F: mov     ecx, edi; this
0x5B1CA1: call    Tile_SetFloat
0x5B1CA6: mov     ecx, [esi+4]
0x5B1CA9: push    0FB0h
0x5B1CAE: call    Tile_GetFloat
0x5B1CB3: fcomp   dword ptr ds:0A53954h
0x5B1CB9: fnstsw  ax
0x5B1CBB: test    ah, 44h
0x5B1CBE: jp      short loc_5B1CDF
0x5B1CC0: mov     edi, [esi+4]
0x5B1CC3: push    0FB1h
0x5B1CC8: mov     ecx, edi
0x5B1CCA: call    Tile_GetFloat
0x5B1CCF: push    ecx
0x5B1CD0: fstp    [esp+20h+a2]; a3
0x5B1CD3: push    0FB0h; a2
0x5B1CD8: mov     ecx, edi; this
0x5B1CDA: call    Tile_SetFloat
0x5B1CDF: mov     ecx, [esi+4]
0x5B1CE2: push    0FAFh
0x5B1CE7: call    Tile_GetFloat
0x5B1CEC: fcomp   dword ptr ds:0A53954h
0x5B1CF2: fnstsw  ax
0x5B1CF4: test    ah, 44h
0x5B1CF7: jp      short loc_5B1D18
0x5B1CF9: mov     esi, [esi+4]
0x5B1CFC: push    0FB0h
0x5B1D01: mov     ecx, esi
0x5B1D03: call    Tile_GetFloat
0x5B1D08: push    ecx
0x5B1D09: fstp    [esp+20h+a2]; a3
0x5B1D0C: push    0FAFh; a2
0x5B1D11: mov     ecx, esi; this
0x5B1D13: call    Tile_SetFloat
0x5B1D18: push    1; arg1
0x5B1D1A: push    0; canCreate
0x5B1D1C: call    InterfaceManager_GetSingleton
0x5B1D21: add     esp, 8
0x5B1D24: cmp     byte ptr [eax+0B9h], 0
0x5B1D2B: pop     edi
0x5B1D2C: pop     esi
0x5B1D2D: pop     ebp
0x5B1D2E: jnz     short loc_5B1D5F
0x5B1D30: push    0
0x5B1D32: push    0FDDh
0x5B1D37: push    0
0x5B1D39: push    1; arg1
0x5B1D3B: push    0; canCreate
0x5B1D3D: call    InterfaceManager_GetSingleton
0x5B1D42: add     esp, 8
0x5B1D45: mov     ecx, eax
0x5B1D47: call    sub_57F9F0
0x5B1D4C: push    1; arg1
0x5B1D4E: push    0; canCreate
0x5B1D50: call    InterfaceManager_GetSingleton
0x5B1D55: add     esp, 8
0x5B1D58: mov     ecx, eax
0x5B1D5A: call    sub_57FD60
0x5B1D5F: add     esp, 10h
0x5B1D62: retn    4
