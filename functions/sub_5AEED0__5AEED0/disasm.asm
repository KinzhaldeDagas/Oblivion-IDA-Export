0x5AEED0: push    edi; a3
0x5AEED1: mov     edi, ecx
0x5AEED3: cmp     byte ptr [edi+64h], 0
0x5AEED7: jnz     loc_5AF06B
0x5AEEDD: mov     eax, [esp+4+arg_0]
0x5AEEE1: cmp     eax, 1
0x5AEEE4: jnz     short loc_5AEF57
0x5AEEE6: mov     ecx, [edi+40h]; this
0x5AEEE9: test    ecx, ecx
0x5AEEEB: jz      short loc_5AEEFD
0x5AEEED: fld1
0x5AEEEF: push    ecx
0x5AEEF0: fstp    [esp+8+a2]; a3
0x5AEEF3: push    0FA1h; a2
0x5AEEF8: call    Tile_SetFloat
0x5AEEFD: call    sub_5AE080
0x5AEF02: call    sub_5BDA20
0x5AEF07: mov     eax, ds:0B33B00h
0x5AEF0C: test    eax, eax
0x5AEF0E: jz      short loc_5AEF20
0x5AEF10: mov     eax, [eax+6Ch]
0x5AEF13: test    eax, eax
0x5AEF15: jz      short loc_5AEF20
0x5AEF17: cmp     dword ptr [eax], 0
0x5AEF1A: jz      short loc_5AEF20
0x5AEF1C: mov     al, 1
0x5AEF1E: jmp     short loc_5AEF22
0x5AEF20: xor     al, al
0x5AEF22: push    eax
0x5AEF23: call    sub_5B5B70
0x5AEF28: push    414h
0x5AEF2D: call    Menu_GetOpenMenuTile
0x5AEF32: add     esp, 8
0x5AEF35: test    eax, eax
0x5AEF37: jz      short loc_5AEF48
0x5AEF39: mov     ecx, eax
0x5AEF3B: call    Tile_GetParentMenu
0x5AEF40: test    eax, eax
0x5AEF42: jnz     loc_5AF06B
0x5AEF48: mov     ecx, ds:0B33B00h
0x5AEF4E: call    sub_459400
0x5AEF53: pop     edi
0x5AEF54: retn    8
0x5AEF57: cmp     eax, 65h ; 'e'
0x5AEF5A: jl      loc_5AF06B
0x5AEF60: push    ebx
0x5AEF61: mov     ebx, [esp+8+arg_4]
0x5AEF65: push    esi
0x5AEF66: mov     esi, [edi+54h]
0x5AEF69: push    0FAEh
0x5AEF6E: mov     ecx, ebx
0x5AEF70: call    Tile_GetFloat
0x5AEF75: call    Double_To_SInt32
0x5AEF7A: xor     ecx, ecx
0x5AEF7C: test    esi, esi
0x5AEF7E: jz      loc_5AF069
0x5AEF84: cmp     dword ptr [esi], 0
0x5AEF87: jz      loc_5AF069
0x5AEF8D: cmp     eax, ecx
0x5AEF8F: jz      short loc_5AEFA1
0x5AEF91: mov     esi, [esi+4]
0x5AEF94: add     ecx, 1
0x5AEF97: test    esi, esi
0x5AEF99: jnz     short loc_5AEF84
0x5AEF9B: pop     esi
0x5AEF9C: pop     ebx
0x5AEF9D: pop     edi
0x5AEF9E: retn    8
0x5AEFA1: mov     esi, [esi]
0x5AEFA3: test    esi, esi
0x5AEFA5: jz      loc_5AF069
0x5AEFAB: push    1; arg1
0x5AEFAD: push    0; canCreate
0x5AEFAF: mov     [edi+4Ch], esi
0x5AEFB2: call    InterfaceManager_GetSingleton
0x5AEFB7: mov     eax, [eax+118h]
0x5AEFBD: shr     eax, 2
0x5AEFC0: add     esp, 8
0x5AEFC3: test    al, 1
0x5AEFC5: jz      short loc_5AEFF9
0x5AEFC7: mov     [edi+58h], ebx
0x5AEFCA: mov     ecx, ds:0B38CF8h
0x5AEFD0: mov     edx, ds:0B38D00h
0x5AEFD6: mov     eax, ds:0B38760h
0x5AEFDB: push    0
0x5AEFDD: push    ecx
0x5AEFDE: push    edx
0x5AEFDF: push    1
0x5AEFE1: push    offset sub_5AECA0
0x5AEFE6: push    eax
0x5AEFE7: call    ShowUIMessageBox
0x5AEFEC: add     esp, 18h
0x5AEFEF: pop     esi
0x5AEFF0: pop     ebx
0x5AEFF1: mov     byte ptr [edi+64h], 1
0x5AEFF5: pop     edi
0x5AEFF6: retn    8
0x5AEFF9: mov     ecx, ds:0B333C4h
0x5AEFFF: test    ecx, ecx
0x5AF001: jz      short loc_5AF040
0x5AF003: mov     edx, [ecx]
0x5AF005: mov     eax, [edx+154h]
0x5AF00B: call    eax
0x5AF00D: test    eax, eax
0x5AF00F: jz      short loc_5AF040
0x5AF011: mov     ecx, ds:0B333C4h
0x5AF017: mov     edx, [ecx]
0x5AF019: mov     eax, [edx+198h]
0x5AF01F: push    0
0x5AF021: call    eax
0x5AF023: test    al, al
0x5AF025: jnz     short loc_5AF040
0x5AF027: mov     ecx, ds:0B38CF8h
0x5AF02D: mov     edx, ds:0B38D00h
0x5AF033: mov     eax, ds:0B38780h
0x5AF038: push    0
0x5AF03A: push    ecx
0x5AF03B: push    edx
0x5AF03C: push    2
0x5AF03E: jmp     short loc_5AF057
0x5AF040: mov     ecx, ds:0B38D00h
0x5AF046: mov     edx, ds:0B38CF8h
0x5AF04C: mov     eax, ds:0B38768h
0x5AF051: push    0
0x5AF053: push    ecx
0x5AF054: push    edx
0x5AF055: push    1
0x5AF057: push    offset LoadGameCallback
0x5AF05C: push    eax
0x5AF05D: call    ShowUIMessageBox
0x5AF062: add     esp, 18h
0x5AF065: mov     byte ptr [edi+64h], 1
0x5AF069: pop     esi
0x5AF06A: pop     ebx
0x5AF06B: pop     edi
0x5AF06C: retn    8
