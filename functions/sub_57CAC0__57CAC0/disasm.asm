0x57CAC0: push    1; arg1
0x57CAC2: push    0; canCreate
0x57CAC4: call    InterfaceManager_GetSingleton
0x57CAC9: add     esp, 8
0x57CACC: test    eax, eax
0x57CACE: jz      locret_57CBD3
0x57CAD4: push    1; arg1
0x57CAD6: push    0; canCreate
0x57CAD8: call    InterfaceManager_GetSingleton
0x57CADD: add     esp, 8
0x57CAE0: cmp     dword ptr [eax+1Ch], 0
0x57CAE4: jz      locret_57CBD3
0x57CAEA: push    1; arg1
0x57CAEC: push    0; canCreate
0x57CAEE: call    InterfaceManager_GetSingleton
0x57CAF3: add     esp, 8
0x57CAF6: cmp     dword ptr [eax+68h], 0
0x57CAFA: jz      locret_57CBD3
0x57CB00: push    1; arg1
0x57CB02: push    0; canCreate
0x57CB04: call    InterfaceManager_GetSingleton
0x57CB09: mov     eax, [eax+68h]
0x57CB0C: add     esp, 8
0x57CB0F: push    0FAEh
0x57CB14: mov     ecx, eax
0x57CB16: call    Tile_GetFloat
0x57CB1B: fcomp   dword ptr ds:0A379B4h
0x57CB21: fnstsw  ax
0x57CB23: test    ah, 44h
0x57CB26: jp      locret_57CBD3
0x57CB2C: push    esi
0x57CB2D: push    edi
0x57CB2E: push    1; arg1
0x57CB30: push    0; canCreate
0x57CB32: call    InterfaceManager_GetSingleton
0x57CB37: add     esp, 8
0x57CB3A: mov     edi, eax
0x57CB3C: mov     ecx, [edi+68h]
0x57CB3F: push    1771h
0x57CB44: call    Tile_GetFloat
0x57CB49: call    Double_To_SInt32
0x57CB4E: mov     esi, eax
0x57CB50: test    esi, esi
0x57CB52: jnz     short loc_57CB6B
0x57CB54: push    1; arg1
0x57CB56: push    eax; canCreate
0x57CB57: call    InterfaceManager_GetSingleton
0x57CB5C: add     esp, 8
0x57CB5F: mov     ecx, eax
0x57CB61: call    sub_57E150
0x57CB66: mov     esi, 3EBh
0x57CB6B: push    10h; int
0x57CB6D: call    sub_57DE50
0x57CB72: lea     eax, [esi-3EAh]; switch 22 cases
0x57CB78: add     esp, 4
0x57CB7B: cmp     eax, 15h
0x57CB7E: ja      short def_57CB87; jumptable 0057CB87 default case, cases 1004-1021
0x57CB80: movzx   eax, ds:byte_57CBE8[eax]
0x57CB87: jmp     ds:jpt_57CB87[eax*4]; switch jump
0x57CB8E: push    0; jumptable 0057CB87 case 1023
0x57CB90: push    1
0x57CB92: call    sub_57C420
0x57CB97: jmp     short loc_57CBB8
0x57CB99: push    0; jumptable 0057CB87 case 1022
0x57CB9B: push    1
0x57CB9D: call    sub_57C5F0
0x57CBA2: jmp     short loc_57CBB8
0x57CBA4: push    0; jumptable 0057CB87 case 1002
0x57CBA6: push    1
0x57CBA8: call    sub_57C7C0
0x57CBAD: jmp     short loc_57CBB8
0x57CBAF: push    0; jumptable 0057CB87 case 1003
0x57CBB1: push    1
0x57CBB3: call    sub_57A480
0x57CBB8: add     esp, 8
0x57CBBB: mov     ecx, ds:0B333C4h; jumptable 0057CB87 default case, cases 1004-1021
0x57CBC1: push    0
0x57CBC3: push    0
0x57CBC5: call    HideEquipment
0x57CBCA: mov     ecx, edi
0x57CBCC: pop     edi
0x57CBCD: pop     esi
0x57CBCE: jmp     sub_57D5B0
0x57CBD3: retn
