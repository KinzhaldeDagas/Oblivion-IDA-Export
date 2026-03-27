0x5878B0: push    ebx
0x5878B1: push    esi
0x5878B2: push    edi
0x5878B3: push    1; arg1
0x5878B5: push    0; canCreate
0x5878B7: call    InterfaceManager_GetSingleton
0x5878BC: mov     eax, [eax+68h]
0x5878BF: mov     esi, [eax+34h]
0x5878C2: add     esp, 8
0x5878C5: test    esi, esi
0x5878C7: jz      short loc_58790A
0x5878C9: mov     ebx, [esp+0Ch+arg_0]
0x5878CD: lea     ecx, [ecx+0]
0x5878D0: push    1; arg1
0x5878D2: push    0; canCreate
0x5878D4: call    InterfaceManager_GetSingleton
0x5878D9: mov     ecx, [esi+8]
0x5878DC: lea     eax, [esi+8]
0x5878DF: mov     esi, [esi]
0x5878E1: add     esp, 8
0x5878E4: test    ecx, ecx
0x5878E6: jz      short loc_587906
0x5878E8: call    Tile_GetParentMenu
0x5878ED: mov     edi, eax
0x5878EF: test    edi, edi
0x5878F1: jz      short loc_587906
0x5878F3: cmp     dword ptr [edi+4], 0
0x5878F7: jz      short loc_587906
0x5878F9: mov     edx, [edi]
0x5878FB: mov     eax, [edx+34h]
0x5878FE: mov     ecx, edi
0x587900: call    eax
0x587902: cmp     eax, ebx
0x587904: jz      short loc_587912
0x587906: test    esi, esi
0x587908: jnz     short loc_5878D0
0x58790A: pop     edi
0x58790B: pop     esi
0x58790C: xor     al, al
0x58790E: pop     ebx
0x58790F: retn    4
0x587912: mov     ecx, [edi+4]
0x587915: push    0FA1h
0x58791A: call    Tile_GetFloat
0x58791F: fcomp   dword ptr ds:0A2F948h
0x587925: fnstsw  ax
0x587927: test    ah, 44h
0x58792A: jnp     short loc_58790A
0x58792C: cmp     dword ptr [edi+24h], 2
0x587930: jz      short loc_58790A
0x587932: pop     edi
0x587933: pop     esi
0x587934: mov     al, 1
0x587936: pop     ebx
0x587937: retn    4
