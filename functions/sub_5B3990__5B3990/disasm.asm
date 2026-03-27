0x5B3990: push    ecx
0x5B3991: push    ebx
0x5B3992: push    ebp
0x5B3993: push    esi
0x5B3994: push    edi; a3
0x5B3995: push    416h
0x5B399A: mov     [esp+18h+var_4], ecx
0x5B399E: call    Menu_GetOpenMenuTile
0x5B39A3: mov     ebp, [esp+18h+arg_4]
0x5B39A7: mov     esi, [esp+18h+arg_0]
0x5B39AB: mov     ebx, eax
0x5B39AD: add     esp, 4
0x5B39B0: test    ebx, ebx
0x5B39B2: jz      short def_5B39F8; jumptable 005B39F8 default case, cases 3,5-7
0x5B39B4: cmp     esi, 3E9h
0x5B39BA: jl      short def_5B39F8; jumptable 005B39F8 default case, cases 3,5-7
0x5B39BC: cmp     byte ptr ds:0B3B43Dh, 0
0x5B39C3: jz      short def_5B39F8; jumptable 005B39F8 default case, cases 3,5-7
0x5B39C5: push    0FBBh
0x5B39CA: mov     ecx, ebp
0x5B39CC: call    Tile_GetFloat
0x5B39D1: call    Double_To_SInt32
0x5B39D6: push    0FB5h
0x5B39DB: mov     ecx, ebp
0x5B39DD: mov     edi, eax
0x5B39DF: call    Tile_GetFloat
0x5B39E4: call    Double_To_SInt32
0x5B39E9: add     eax, 0FFFFFFFFh; switch 8 cases
0x5B39EC: cmp     eax, 7
0x5B39EF: ja      short def_5B39F8; jumptable 005B39F8 default case, cases 3,5-7
0x5B39F1: movzx   eax, ds:byte_5B3D24[eax]
0x5B39F8: jmp     ds:jpt_5B39F8[eax*4]; switch jump
0x5B39FF: mov     eax, ds:0B14360h; jumptable 005B39F8 case 8
0x5B3A04: test    eax, eax
0x5B3A06: jz      short def_5B39F8; jumptable 005B39F8 default case, cases 3,5-7
0x5B3A08: jmp     short loc_5B3A10
0x5B3A0A: align 10h
0x5B3A10: mov     esi, [eax+8]
0x5B3A13: cmp     [esi+4], edi
0x5B3A16: lea     ecx, [eax+8]
0x5B3A19: mov     eax, [eax]
0x5B3A1B: jz      short loc_5B3A59
0x5B3A1D: test    eax, eax
0x5B3A1F: jnz     short loc_5B3A10
0x5B3A21: mov     esi, [esp+14h+arg_0]
0x5B3A25: push    3F8h; jumptable 005B39F8 default case, cases 3,5-7
0x5B3A2A: call    Menu_GetOpenMenuTile
0x5B3A2F: add     esp, 4
0x5B3A32: test    eax, eax
0x5B3A34: jnz     loc_5B3D0E
0x5B3A3A: lea     ecx, [esi-1]
0x5B3A3D: cmp     ecx, 4
0x5B3A40: ja      loc_5B3B10
0x5B3A46: mov     ecx, [esp+14h+var_4]
0x5B3A4A: push    ebp
0x5B3A4B: push    esi
0x5B3A4C: call    sub_5B2060
0x5B3A51: pop     edi
0x5B3A52: pop     esi
0x5B3A53: pop     ebp
0x5B3A54: pop     ebx
0x5B3A55: pop     ecx
0x5B3A56: retn    8
0x5B3A59: mov     ecx, [esi]
0x5B3A5B: mov     eax, [ecx+8]
0x5B3A5E: push    0; int
0x5B3A60: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x5B3A65: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5B3A6A: push    0; int
0x5B3A6C: push    eax; void *
0x5B3A6D: call    OblivionDynamicCast
0x5B3A72: add     esp, 14h
0x5B3A75: test    eax, eax
0x5B3A77: jz      short loc_5B3A90
0x5B3A79: test    byte ptr [eax+88h], 1
0x5B3A80: jz      short loc_5B3A90
0x5B3A82: cmp     dword ptr [eax+64h], 0
0x5B3A86: jz      short loc_5B3A90
0x5B3A88: push    eax
0x5B3A89: mov     ecx, ebx
0x5B3A8B: call    sub_5C25C0
0x5B3A90: mov     esi, [esi]
0x5B3A92: test    esi, esi
0x5B3A94: jz      short loc_5B3A21
0x5B3A96: mov     ecx, ds:0B333C4h; this
0x5B3A9C: call    TESObjectREFR_GetContainer
0x5B3AA1: mov     edx, ds:0B333C4h
0x5B3AA7: push    eax
0x5B3AA8: push    edx; a1
0x5B3AA9: call    ContainerExtraData_GetContainerExtraDataForRef
0x5B3AAE: mov     ebx, eax
0x5B3AB0: add     esp, 8
0x5B3AB3: test    ebx, ebx
0x5B3AB5: jz      loc_5B3A21
0x5B3ABB: mov     eax, [esi]
0x5B3ABD: xor     edi, edi
0x5B3ABF: test    eax, eax
0x5B3AC1: jz      short loc_5B3AC5
0x5B3AC3: mov     edi, [eax]
0x5B3AC5: mov     esi, [esi+8]
0x5B3AC8: call    sub_5C1100
0x5B3ACD: push    eax
0x5B3ACE: push    edi
0x5B3ACF: push    esi
0x5B3AD0: mov     ecx, ebx
0x5B3AD2: call    sub_489820
0x5B3AD7: jmp     loc_5B3A21
0x5B3ADC: mov     eax, [esp+14h+var_4]; jumptable 005B39F8 cases 1,2,4
0x5B3AE0: add     eax, 38h ; '8'
0x5B3AE3: jz      def_5B39F8; jumptable 005B39F8 default case, cases 3,5-7
0x5B3AE9: lea     esp, [esp+0]
0x5B3AF0: sub     edi, 1
0x5B3AF3: jz      short loc_5B3B01
0x5B3AF5: mov     eax, [eax+4]
0x5B3AF8: test    eax, eax
0x5B3AFA: jnz     short loc_5B3AF0
0x5B3AFC: jmp     def_5B39F8; jumptable 005B39F8 default case, cases 3,5-7
0x5B3B01: mov     eax, [eax]
0x5B3B03: push    eax
0x5B3B04: mov     ecx, ebx
0x5B3B06: call    sub_5C25C0
0x5B3B0B: jmp     def_5B39F8; jumptable 005B39F8 default case, cases 3,5-7
0x5B3B10: cmp     esi, 7
0x5B3B13: jz      loc_5B3CA6
0x5B3B19: cmp     esi, 8
0x5B3B1C: jz      loc_5B3CA6
0x5B3B22: lea     edx, [esi-0Dh]
0x5B3B25: cmp     edx, 1
0x5B3B28: ja      short loc_5B3B6C
0x5B3B2A: movzx   ecx, byte ptr ds:0B3B404h
0x5B3B31: and     ecx, 7Fh
0x5B3B34: lea     eax, [esi-0Dh]
0x5B3B37: cmp     ecx, eax
0x5B3B39: mov     ecx, offset byte_B3B404
0x5B3B3E: jnz     short loc_5B3B52
0x5B3B40: call    sub_597A60
0x5B3B45: call    sub_5B2B70
0x5B3B4A: pop     edi
0x5B3B4B: pop     esi
0x5B3B4C: pop     ebp
0x5B3B4D: pop     ebx
0x5B3B4E: pop     ecx
0x5B3B4F: retn    8
0x5B3B52: push    eax
0x5B3B53: call    sub_597A40
0x5B3B58: and     byte ptr ds:0B3B404h, 7Fh
0x5B3B5F: call    sub_5B2B70
0x5B3B64: pop     edi
0x5B3B65: pop     esi
0x5B3B66: pop     ebp
0x5B3B67: pop     ebx
0x5B3B68: pop     ecx
0x5B3B69: retn    8
0x5B3B6C: cmp     esi, 3E9h
0x5B3B72: jl      loc_5B3D0E
0x5B3B78: push    0FB5h
0x5B3B7D: mov     ecx, ebp
0x5B3B7F: xor     bl, bl
0x5B3B81: call    Tile_GetFloat
0x5B3B86: call    Double_To_SInt32
0x5B3B8B: cmp     eax, 10h
0x5B3B8E: jz      loc_5B3D0E
0x5B3B94: cmp     eax, 8
0x5B3B97: push    0FBBh
0x5B3B9C: mov     ecx, ebp
0x5B3B9E: jnz     short loc_5B3C17
0x5B3BA0: call    Tile_GetFloat
0x5B3BA5: call    Double_To_SInt32
0x5B3BAA: mov     esi, ds:0B14360h
0x5B3BB0: test    esi, esi
0x5B3BB2: mov     edi, eax
0x5B3BB4: jz      loc_5B3D0E
0x5B3BBA: lea     ebx, [ebx+0]
0x5B3BC0: lea     eax, [esi+8]
0x5B3BC3: mov     eax, [eax]
0x5B3BC5: cmp     [eax+4], edi
0x5B3BC8: mov     esi, [esi]
0x5B3BCA: jnz     short loc_5B3BE9
0x5B3BCC: mov     edx, [eax]
0x5B3BCE: mov     eax, [edx+8]
0x5B3BD1: mov     ecx, ds:0B333C4h
0x5B3BD7: push    eax
0x5B3BD8: call    sub_664850
0x5B3BDD: push    17h; int
0x5B3BDF: call    sub_57DE50
0x5B3BE4: add     esp, 4
0x5B3BE7: mov     bl, 1
0x5B3BE9: test    esi, esi
0x5B3BEB: jnz     short loc_5B3BC0
0x5B3BED: test    bl, bl
0x5B3BEF: jz      loc_5B3D0E
0x5B3BF5: push    0
0x5B3BF7: push    1; arg1
0x5B3BF9: push    0; canCreate
0x5B3BFB: call    InterfaceManager_GetSingleton
0x5B3C00: add     esp, 8
0x5B3C03: mov     ecx, eax
0x5B3C05: call    sub_57D730
0x5B3C0A: call    sub_5B2B70
0x5B3C0F: pop     edi
0x5B3C10: pop     esi
0x5B3C11: pop     ebp
0x5B3C12: pop     ebx
0x5B3C13: pop     ecx
0x5B3C14: retn    8
0x5B3C17: call    Tile_GetFloat
0x5B3C1C: call    Double_To_SInt32
0x5B3C21: mov     ecx, [esp+14h+var_4]
0x5B3C25: xor     edx, edx
0x5B3C27: add     ecx, 38h ; '8'
0x5B3C2A: jz      short loc_5B3C44
0x5B3C2C: lea     esp, [esp+0]
0x5B3C30: mov     esi, [ecx]
0x5B3C32: mov     ecx, [ecx+4]
0x5B3C35: add     edx, 1
0x5B3C38: cmp     edx, eax
0x5B3C3A: jz      short loc_5B3C40
0x5B3C3C: test    ecx, ecx
0x5B3C3E: jnz     short loc_5B3C30
0x5B3C40: test    esi, esi
0x5B3C42: jnz     short loc_5B3C59
0x5B3C44: push    offset aSpellItemIndex; "Spell item index did was not in saved l"...
0x5B3C49: call    PrintError
0x5B3C4E: add     esp, 4
0x5B3C51: pop     edi
0x5B3C52: pop     esi
0x5B3C53: pop     ebp
0x5B3C54: pop     ebx
0x5B3C55: pop     ecx
0x5B3C56: retn    8
0x5B3C59: mov     ecx, ds:0B333C4h
0x5B3C5F: add     esi, 18h
0x5B3C62: call    Player_GetCurrentMagicItem
0x5B3C67: cmp     esi, eax
0x5B3C69: jz      loc_5B3D0E
0x5B3C6F: mov     ecx, ds:0B333C4h
0x5B3C75: call    sub_65D4C0
0x5B3C7A: test    eax, eax
0x5B3C7C: jz      short loc_5B3C8B
0x5B3C7E: mov     ecx, ds:0B333C4h
0x5B3C84: push    0
0x5B3C86: call    sub_664850
0x5B3C8B: mov     ecx, ds:0B333C4h
0x5B3C91: push    esi
0x5B3C92: call    PlayerCharacter_SetCurrentMagicItem
0x5B3C97: push    17h; int
0x5B3C99: call    sub_57DE50
0x5B3C9E: add     esp, 4
0x5B3CA1: jmp     loc_5B3BF5
0x5B3CA6: mov     ecx, [esp+14h+var_4]
0x5B3CAA: mov     ecx, [ecx+4]
0x5B3CAD: push    0FAEh
0x5B3CB2: call    Tile_GetFloat
0x5B3CB7: call    Double_To_SInt32
0x5B3CBC: cmp     [esp+14h+arg_0], 7
0x5B3CC1: mov     esi, eax
0x5B3CC3: jnz     short loc_5B3CCA
0x5B3CC5: sub     esi, 1
0x5B3CC8: jmp     short loc_5B3CCD
0x5B3CCA: add     esi, 1
0x5B3CCD: cmp     esi, 1
0x5B3CD0: mov     [esp+14h+arg_0], esi
0x5B3CD4: jge     short loc_5B3CDD
0x5B3CD6: mov     esi, 5
0x5B3CDB: jmp     short loc_5B3CE7
0x5B3CDD: cmp     esi, 5
0x5B3CE0: jle     short loc_5B3CEB
0x5B3CE2: mov     esi, 1
0x5B3CE7: mov     [esp+14h+arg_0], esi
0x5B3CEB: fild    [esp+14h+arg_0]
0x5B3CEF: mov     edi, [esp+14h+var_4]
0x5B3CF3: push    ecx
0x5B3CF4: mov     ecx, [edi+4]; this
0x5B3CF7: fstp    [esp+18h+a2]; a3
0x5B3CFA: push    0FAEh; a2
0x5B3CFF: call    Tile_SetFloat
0x5B3D04: push    0
0x5B3D06: mov     ecx, edi
0x5B3D08: push    esi
0x5B3D09: call    sub_5B2060
0x5B3D0E: pop     edi
0x5B3D0F: pop     esi
0x5B3D10: pop     ebp
0x5B3D11: pop     ebx
0x5B3D12: pop     ecx
0x5B3D13: retn    8
