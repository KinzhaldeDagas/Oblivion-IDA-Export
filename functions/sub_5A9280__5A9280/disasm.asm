0x5A9280: push    ebp
0x5A9281: push    esi; a3
0x5A9282: mov     ebp, ecx
0x5A9284: push    edi; a3
0x5A9285: lea     edi, [ebp+2Ch]
0x5A9288: mov     esi, edi
0x5A928A: test    esi, esi
0x5A928C: jz      short loc_5A92B9
0x5A928E: push    ebx
0x5A928F: nop
0x5A9290: cmp     dword ptr [esi+4], 0
0x5A9294: jnz     short loc_5A929B
0x5A9296: cmp     dword ptr [esi], 0
0x5A9299: jz      short loc_5A92B8
0x5A929B: mov     ebx, [esi]
0x5A929D: test    ebx, ebx
0x5A929F: jz      short loc_5A92B1
0x5A92A1: mov     ecx, ebx
0x5A92A3: call    sub_5A9060
0x5A92A8: push    ebx
0x5A92A9: call    FormHeapFree
0x5A92AE: add     esp, 4
0x5A92B1: mov     esi, [esi+4]
0x5A92B4: test    esi, esi
0x5A92B6: jnz     short loc_5A9290
0x5A92B8: pop     ebx
0x5A92B9: cmp     dword ptr [edi+4], 0
0x5A92BD: jz      short loc_5A92D6
0x5A92BF: nop
0x5A92C0: mov     eax, [edi+4]
0x5A92C3: mov     esi, [eax+4]
0x5A92C6: push    eax
0x5A92C7: call    FormHeapFree
0x5A92CC: add     esp, 4
0x5A92CF: test    esi, esi
0x5A92D1: mov     [edi+4], esi
0x5A92D4: jnz     short loc_5A92C0
0x5A92D6: push    offset word_A36430
0x5A92DB: mov     dword ptr [edi], 0
0x5A92E1: mov     ecx, [ebp+34h]
0x5A92E4: push    0FDEh
0x5A92E9: call    Tile_SetString
0x5A92EE: fld1
0x5A92F0: push    ecx
0x5A92F1: fstp    [esp+10h+a2]; a3
0x5A92F4: mov     ecx, [ebp+34h]; this
0x5A92F7: push    0FB0h; a2
0x5A92FC: call    Tile_SetFloat
0x5A9301: fld1
0x5A9303: push    ecx
0x5A9304: fstp    [esp+10h+a2]; a3
0x5A9307: mov     ecx, [ebp+34h]; this
0x5A930A: push    0FA1h; a2
0x5A930F: call    Tile_SetFloat
0x5A9314: pop     edi
0x5A9315: pop     esi
0x5A9316: mov     ecx, ebp
0x5A9318: pop     ebp
0x5A9319: jmp     sub_5A8F30
