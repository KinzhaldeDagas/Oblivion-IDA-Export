0x59E1D0: cmp     [esp+arg_0], 0
0x59E1D5: push    ebx
0x59E1D6: push    esi
0x59E1D7: mov     esi, ecx
0x59E1D9: jnz     short loc_59E1DF
0x59E1DB: push    0Ah
0x59E1DD: jmp     short loc_59E1E1
0x59E1DF: push    0Ch
0x59E1E1: push    5
0x59E1E3: call    TESTopic__GEtTopic
0x59E1E8: mov     ecx, ds:0B333C4h
0x59E1EE: mov     edx, [esi+60h]
0x59E1F1: add     esp, 8
0x59E1F4: push    0
0x59E1F6: push    0
0x59E1F8: push    ecx
0x59E1F9: push    edx
0x59E1FA: mov     ecx, eax
0x59E1FC: call    TESTopic__CreateDialogueInfo
0x59E201: mov     ebx, eax
0x59E203: test    ebx, ebx
0x59E205: jz      loc_59E2A5
0x59E20B: mov     ecx, ebx
0x59E20D: call    sub_6B7BA0
0x59E212: test    al, al
0x59E214: jz      short loc_59E295
0x59E216: push    edi
0x59E217: mov     ecx, ebx
0x59E219: call    sub_6B7C20
0x59E21E: fldz
0x59E220: mov     ecx, [esi+60h]
0x59E223: mov     edi, eax
0x59E225: mov     eax, [ecx]
0x59E227: mov     edx, [eax+304h]
0x59E22D: push    edi; a3
0x59E22E: push    ecx
0x59E22F: fstp    [esp+14h+a3]; a3
0x59E232: call    edx
0x59E234: fld     dword ptr ds:0A379B4h
0x59E23A: xor     eax, eax
0x59E23C: fstp    dword ptr [esi+84h]
0x59E242: mov     dword ptr [esi+80h], 2
0x59E24C: cmp     ds:0B13200h, al
0x59E252: push    ecx
0x59E253: mov     ecx, [esi+2Ch]; this
0x59E256: setnz   al
0x59E259: add     eax, 1
0x59E25C: mov     [esp+10h+arg_0], eax
0x59E260: fild    [esp+10h+arg_0]
0x59E264: fstp    [esp+10h+var_10]; a3
0x59E267: push    0FA1h; a2
0x59E26C: call    Tile_SetFloat
0x59E271: mov     ecx, [edi]
0x59E273: push    ecx
0x59E274: mov     ecx, [esi+2Ch]
0x59E277: push    0FDEh
0x59E27C: call    Tile_SetString
0x59E281: fld1
0x59E283: push    ecx
0x59E284: fstp    [esp+10h+var_10]; a3
0x59E287: mov     ecx, [esi+3Ch]; this
0x59E28A: push    0FA1h; a2
0x59E28F: call    Tile_SetFloat
0x59E294: pop     edi
0x59E295: mov     ecx, ebx
0x59E297: call    sub_6B81D0
0x59E29C: push    ebx
0x59E29D: call    FormHeapFree
0x59E2A2: add     esp, 4
0x59E2A5: pop     esi
0x59E2A6: pop     ebx
0x59E2A7: retn    4
