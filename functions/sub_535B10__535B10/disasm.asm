0x535B10: cmp     dword ptr ds:0B36598h, 0
0x535B17: jnz     short loc_535B26
0x535B19: cmp     dword ptr ds:0B36594h, 0
0x535B20: jz      locret_535BD9
0x535B26: mov     eax, [esp+arg_0]
0x535B2A: test    eax, eax
0x535B2C: jz      short loc_535B33
0x535B2E: mov     eax, [eax+0Ch]
0x535B31: jmp     short loc_535B35
0x535B33: xor     eax, eax
0x535B35: push    esi
0x535B36: push    eax
0x535B37: push    offset dword_BA7D84
0x535B3C: call    NiRTTI_Cast
0x535B41: mov     esi, eax
0x535B43: add     esp, 8
0x535B46: test    esi, esi
0x535B48: jz      loc_535BD8
0x535B4E: mov     ecx, esi
0x535B50: call    sub_535AC0
0x535B55: fcomp   dword ptr ds:0A2FAA8h
0x535B5B: fnstsw  ax
0x535B5D: test    ah, 41h
0x535B60: jnz     short loc_535BD8
0x535B62: cmp     dword ptr ds:0B36598h, 0
0x535B69: jnz     short loc_535B74
0x535B6B: cmp     dword ptr ds:0B36594h, 0
0x535B72: jz      short loc_535BD8
0x535B74: push    edi
0x535B75: mov     edi, offset dword_B36594
0x535B7A: mov     eax, edi
0x535B7C: lea     esp, [esp+0]
0x535B80: mov     edx, [eax+4]
0x535B83: test    edx, edx
0x535B85: jnz     short loc_535B8B
0x535B87: cmp     [eax], edx
0x535B89: jz      short loc_535BD7
0x535B8B: mov     ecx, [eax]
0x535B8D: test    ecx, ecx
0x535B8F: jz      short loc_535BCF
0x535B91: cmp     [ecx], esi
0x535B93: jnz     short loc_535BCF
0x535B95: push    ecx
0x535B96: mov     ecx, offset dword_B36594
0x535B9B: call    BSSimpleList_Remove
0x535BA0: mov     ecx, esi
0x535BA2: call    sub_47DE20
0x535BA7: push    eax
0x535BA8: call    sub_47FA60
0x535BAD: add     esp, 4
0x535BB0: test    eax, eax
0x535BB2: jz      short loc_535BCA
0x535BB4: mov     ecx, eax
0x535BB6: call    sub_452A60
0x535BBB: test    eax, eax
0x535BBD: jz      short loc_535BCA
0x535BBF: push    1
0x535BC1: push    eax
0x535BC2: call    sub_607E90
0x535BC7: add     esp, 8
0x535BCA: mov     eax, [edi+4]
0x535BCD: jmp     short loc_535BD3
0x535BCF: mov     edi, eax
0x535BD1: mov     eax, edx
0x535BD3: test    eax, eax
0x535BD5: jnz     short loc_535B80
0x535BD7: pop     edi
0x535BD8: pop     esi
0x535BD9: retn    4
