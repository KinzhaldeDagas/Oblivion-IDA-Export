0x5AACF0: fild    [esp+arg_0]
0x5AACF4: push    esi; a3
0x5AACF5: push    ecx
0x5AACF6: mov     esi, ecx
0x5AACF8: mov     ecx, [esi+4]; this
0x5AACFB: fstp    [esp+8+a2]; a3
0x5AACFE: push    0FAEh; a2
0x5AAD03: call    Tile_SetFloat
0x5AAD08: push    1; arg1
0x5AAD0A: push    0; canCreate
0x5AAD0C: call    InterfaceManager_GetSingleton
0x5AAD11: mov     ecx, [esp+0Ch+arg_0]
0x5AAD15: add     esp, 8
0x5AAD18: cmp     ecx, 1
0x5AAD1B: mov     [eax+0Bh], cl
0x5AAD1E: jle     short loc_5AAD2F
0x5AAD20: add     ecx, 0FFFFFFFEh
0x5AAD23: mov     eax, 1
0x5AAD28: shl     eax, cl
0x5AAD2A: mov     [esi+40h], eax
0x5AAD2D: jmp     short loc_5AAD36
0x5AAD2F: mov     dword ptr [esi+40h], 1Fh
0x5AAD36: mov     ecx, [esi+40h]
0x5AAD39: push    ecx
0x5AAD3A: mov     ecx, esi
0x5AAD3C: call    sub_5AA3A0
0x5AAD41: push    1; arg1
0x5AAD43: push    0; canCreate
0x5AAD45: call    InterfaceManager_GetSingleton
0x5AAD4A: add     esp, 8
0x5AAD4D: cmp     byte ptr [eax+0B9h], 0
0x5AAD54: jz      short loc_5AAD80
0x5AAD56: fld     dword ptr ds:0A6B618h
0x5AAD5C: push    ecx
0x5AAD5D: mov     ecx, [esi+34h]; this
0x5AAD60: fstp    [esp+8+a2]; a3
0x5AAD63: push    0FB7h; a2
0x5AAD68: call    Tile_SetFloat
0x5AAD6D: fldz
0x5AAD6F: push    ecx
0x5AAD70: fstp    [esp+8+a2]; a3
0x5AAD73: mov     ecx, [esi+34h]; this
0x5AAD76: push    0FB7h; a2
0x5AAD7B: call    Tile_SetFloat
0x5AAD80: push    1; arg1
0x5AAD82: push    0; canCreate
0x5AAD84: call    InterfaceManager_GetSingleton
0x5AAD89: mov     ecx, [eax+88h]
0x5AAD8F: add     esp, 8
0x5AAD92: test    ecx, ecx
0x5AAD94: jz      short loc_5AADB2
0x5AAD96: push    edi
0x5AAD97: mov     edi, [esi]
0x5AAD99: push    ecx
0x5AAD9A: push    0FA8h
0x5AAD9F: call    Tile_GetFloat
0x5AADA4: call    Double_To_SInt32
0x5AADA9: mov     edx, [edi+14h]
0x5AADAC: push    eax
0x5AADAD: mov     ecx, esi
0x5AADAF: call    edx
0x5AADB1: pop     edi
0x5AADB2: pop     esi
0x5AADB3: retn    8
