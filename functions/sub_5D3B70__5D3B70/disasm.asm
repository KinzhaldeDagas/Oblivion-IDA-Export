0x5D3B70: push    ecx
0x5D3B71: push    ebx
0x5D3B72: push    40Fh
0x5D3B77: call    Menu_GetOpenMenuTile
0x5D3B7C: add     esp, 4
0x5D3B7F: mov     ecx, eax
0x5D3B81: call    Tile_GetParentMenu
0x5D3B86: push    0; int
0x5D3B88: push    offset ??_R0?AVSaveMenu@@@8; struct TypeDescriptor *
0x5D3B8D: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5D3B92: push    0; int
0x5D3B94: push    eax; void *
0x5D3B95: call    OblivionDynamicCast
0x5D3B9A: add     esp, 14h
0x5D3B9D: mov     ebx, eax
0x5D3B9F: call    sub_578D70
0x5D3BA4: cmp     al, 2
0x5D3BA6: jnz     loc_5D3D0E
0x5D3BAC: mov     eax, [ebx+48h]
0x5D3BAF: push    ebp
0x5D3BB0: push    esi
0x5D3BB1: mov     esi, [eax+38h]
0x5D3BB4: push    edi
0x5D3BB5: xor     edi, edi
0x5D3BB7: xor     ebp, ebp
0x5D3BB9: test    esi, esi
0x5D3BBB: jz      loc_5D3C8E
0x5D3BC1: cmp     edi, [ebx+58h]
0x5D3BC4: jz      short loc_5D3C0B
0x5D3BC6: test    edi, edi
0x5D3BC8: jz      short loc_5D3BFE
0x5D3BCA: push    0FA1h
0x5D3BCF: mov     ecx, edi
0x5D3BD1: call    Tile_GetFloat
0x5D3BD6: fcomp   dword ptr ds:0A2F948h
0x5D3BDC: fnstsw  ax
0x5D3BDE: test    ah, 44h
0x5D3BE1: jnp     short loc_5D3BFE
0x5D3BE3: push    0FF0h
0x5D3BE8: mov     ecx, edi
0x5D3BEA: call    Tile_GetFloat
0x5D3BEF: fcomp   dword ptr ds:0A2FAA8h
0x5D3BF5: fnstsw  ax
0x5D3BF7: test    ah, 41h
0x5D3BFA: jnz     short loc_5D3BFE
0x5D3BFC: mov     ebp, edi
0x5D3BFE: mov     edi, [esi+8]
0x5D3C01: lea     eax, [esi+8]
0x5D3C04: mov     esi, [esi+4]
0x5D3C07: test    esi, esi
0x5D3C09: jnz     short loc_5D3BC1
0x5D3C0B: test    edi, edi
0x5D3C0D: jz      loc_5D3C8E
0x5D3C13: test    esi, esi
0x5D3C15: jz      short loc_5D3C73
0x5D3C17: mov     ebp, [esi+8]
0x5D3C1A: lea     eax, [esi+8]
0x5D3C1D: mov     esi, [esi+4]
0x5D3C20: test    esi, esi
0x5D3C22: jz      short loc_5D3C56
0x5D3C24: push    0FA1h
0x5D3C29: mov     ecx, ebp
0x5D3C2B: call    Tile_GetFloat
0x5D3C30: fcomp   dword ptr ds:0A2F948h
0x5D3C36: fnstsw  ax
0x5D3C38: test    ah, 44h
0x5D3C3B: jnp     short loc_5D3C17
0x5D3C3D: push    0FF0h
0x5D3C42: mov     ecx, edi
0x5D3C44: call    Tile_GetFloat
0x5D3C49: fcomp   dword ptr ds:0A2FAA8h
0x5D3C4F: fnstsw  ax
0x5D3C51: test    ah, 41h
0x5D3C54: jnp     short loc_5D3C17
0x5D3C56: test    ebp, ebp
0x5D3C58: jz      short loc_5D3C8E
0x5D3C5A: push    0FA1h
0x5D3C5F: mov     ecx, ebp
0x5D3C61: call    Tile_GetFloat
0x5D3C66: fcomp   dword ptr ds:0A2F948h
0x5D3C6C: fnstsw  ax
0x5D3C6E: test    ah, 44h
0x5D3C71: jnp     short loc_5D3C8E
0x5D3C73: test    ebp, ebp
0x5D3C75: jz      short loc_5D3C8E
0x5D3C77: push    0FB1h
0x5D3C7C: mov     ecx, ebp
0x5D3C7E: call    sub_588C10
0x5D3C83: push    0; a3
0x5D3C85: push    eax; a2
0x5D3C86: lea     ecx, [ebx+50h]; this
0x5D3C89: call    BSStringT_Set
0x5D3C8E: mov     ecx, [ebx+58h]
0x5D3C91: test    ecx, ecx
0x5D3C93: mov     esi, [ebx+4Ch]
0x5D3C96: jz      short loc_5D3CA4
0x5D3C98: push    0FAEh
0x5D3C9D: call    Tile_GetFloat
0x5D3CA2: jmp     short loc_5D3CAA
0x5D3CA4: fld     dword ptr ds:0A30634h
0x5D3CAA: fstp    [esp+14h+var_4]
0x5D3CAE: fld     [esp+14h+var_4]
0x5D3CB2: call    Double_To_SInt32
0x5D3CB7: test    esi, esi
0x5D3CB9: mov     ecx, 1
0x5D3CBE: jz      short loc_5D3CE5
0x5D3CC0: cmp     dword ptr [esi], 0
0x5D3CC3: jz      short loc_5D3CE5
0x5D3CC5: cmp     eax, ecx
0x5D3CC7: jz      short loc_5D3CD5
0x5D3CC9: mov     esi, [esi+4]
0x5D3CCC: add     ecx, 1
0x5D3CCF: test    esi, esi
0x5D3CD1: jnz     short loc_5D3CC0
0x5D3CD3: jmp     short loc_5D3CE5
0x5D3CD5: mov     ecx, [esi]
0x5D3CD7: push    0
0x5D3CD9: push    ecx
0x5D3CDA: mov     ecx, ds:0B33B00h
0x5D3CE0: call    DeleteSavegame
0x5D3CE5: fld     dword ptr ds:0A30634h
0x5D3CEB: mov     edx, ds:0B387E0h
0x5D3CF1: push    ecx
0x5D3CF2: fstp    [esp+18h+duration]; duration
0x5D3CF5: push    1; unk2
0x5D3CF7: push    0; unk1
0x5D3CF9: push    edx; string
0x5D3CFA: call    GameUI_QueueMessage
0x5D3CFF: add     esp, 10h
0x5D3D02: push    0
0x5D3D04: mov     ecx, ebx
0x5D3D06: call    sub_5D38C0
0x5D3D0B: pop     edi
0x5D3D0C: pop     esi
0x5D3D0D: pop     ebp
0x5D3D0E: mov     byte ptr [ebx+5Ch], 0
0x5D3D12: pop     ebx
0x5D3D13: pop     ecx
0x5D3D14: retn
