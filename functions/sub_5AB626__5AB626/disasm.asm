0x5AB626: push    esi; void *
0x5AB627: call    OblivionDynamicCast
0x5AB62C: add     esp, 14h
0x5AB62F: push    eax
0x5AB630: mov     ecx, edi
0x5AB632: call    Menu_SetTileMenu
0x5AB637: push    0; int
0x5AB639: push    offset ??_R0?AVInventoryMenu@@@8; struct TypeDescriptor *
0x5AB63E: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5AB643: push    0; int
0x5AB645: push    edi; void *
0x5AB646: call    OblivionDynamicCast
0x5AB64B: mov     ebx, eax
0x5AB64D: add     esp, 14h
0x5AB650: cmp     dword ptr [ebx+2Ch], 0
0x5AB654: jz      short loc_5AB66E
0x5AB656: cmp     dword ptr [ebx+28h], 0
0x5AB65A: jz      short loc_5AB66E
0x5AB65C: cmp     dword ptr [ebx+30h], 0
0x5AB660: jz      short loc_5AB66E
0x5AB662: cmp     dword ptr [ebx+34h], 0
0x5AB666: jz      short loc_5AB66E
0x5AB668: cmp     dword ptr [ebx+38h], 0
0x5AB66C: jnz     short loc_5AB682
0x5AB66E: push    offset aInventoryMenuC; "Inventory Menu Creation Failed... Are y"...
0x5AB673: call    PrintError
0x5AB678: add     esp, 4
0x5AB67B: pop     ebx
0x5AB67C: pop     edi
0x5AB67D: xor     eax, eax
0x5AB67F: pop     esi
0x5AB680: pop     ecx
0x5AB681: retn
0x5AB682: push    0FA5h
0x5AB687: mov     ecx, esi
0x5AB689: call    Tile_GetFloat
0x5AB68E: fcomp   dword ptr ds:0A69770h
0x5AB694: fnstsw  ax
0x5AB696: test    ah, 44h
0x5AB699: jnp     short loc_5AB6B4
0x5AB69B: push    0FA5h
0x5AB6A0: mov     ecx, esi
0x5AB6A2: call    Tile_GetFloat
0x5AB6A7: fcomp   qword ptr ds:0A69778h
0x5AB6AD: fnstsw  ax
0x5AB6AF: test    ah, 44h
0x5AB6B2: jp      short loc_5AB6C8
0x5AB6B4: fld     [esp-10h+arg_18]
0x5AB6B8: push    ecx
0x5AB6B9: fstp    [esp-0Ch+a2]; a3
0x5AB6BC: push    0FABh; a2
0x5AB6C1: mov     ecx, esi; this
0x5AB6C3: call    Tile_SetFloat
0x5AB6C8: fld     dword ptr ds:0A53954h
0x5AB6CE: push    ecx
0x5AB6CF: fstp    [esp-0Ch+a2]; a3
0x5AB6D2: push    0FAFh; a2
0x5AB6D7: mov     ecx, esi; this
0x5AB6D9: call    Tile_SetFloat
0x5AB6DE: fld     dword ptr ds:0A53954h
0x5AB6E4: push    ecx
0x5AB6E5: fstp    [esp-0Ch+a2]; a3
0x5AB6E8: push    0FB0h; a2
0x5AB6ED: mov     ecx, esi; this
0x5AB6EF: call    Tile_SetFloat
0x5AB6F4: fld     dword ptr ds:0A53954h
0x5AB6FA: push    ecx
0x5AB6FB: fstp    [esp-0Ch+a2]; a3
0x5AB6FE: push    0FB1h; a2
0x5AB703: mov     ecx, esi; this
0x5AB705: call    Tile_SetFloat
0x5AB70A: fld     dword ptr ds:0A53954h
0x5AB710: push    ecx
0x5AB711: fstp    [esp-0Ch+a2]; a3
0x5AB714: push    0FB2h; a2
0x5AB719: mov     ecx, esi; this
0x5AB71B: call    Tile_SetFloat
0x5AB720: fldz
0x5AB722: push    ecx
0x5AB723: fstp    [esp-0Ch+a2]; a3
0x5AB726: push    0FB3h; a2
0x5AB72B: mov     ecx, esi; this
0x5AB72D: call    Tile_SetFloat
0x5AB732: fldz
0x5AB734: push    ecx
0x5AB735: fstp    [esp-0Ch+a2]; a3
0x5AB738: push    0FB4h; a2
0x5AB73D: mov     ecx, esi; this
0x5AB73F: call    Tile_SetFloat
0x5AB744: fldz
0x5AB746: push    ecx
0x5AB747: fstp    [esp-0Ch+a2]; a3
0x5AB74A: push    0FB5h; a2
0x5AB74F: mov     ecx, esi; this
0x5AB751: call    Tile_SetFloat
0x5AB756: fldz
0x5AB758: push    ecx
0x5AB759: fstp    [esp-0Ch+a2]; a3
0x5AB75C: push    0FB6h; a2
0x5AB761: mov     ecx, esi; this
0x5AB763: call    Tile_SetFloat
0x5AB768: fldz
0x5AB76A: push    ecx
0x5AB76B: fstp    [esp-0Ch+a2]; a3
0x5AB76E: push    0FB7h; a2
0x5AB773: mov     ecx, esi; this
0x5AB775: call    Tile_SetFloat
0x5AB77A: call    InventoryMenu_InitializeOrUpdate
0x5AB77F: push    1; arg1
0x5AB781: push    0; canCreate
0x5AB783: mov     byte ptr ds:0B3B3D9h, 0
0x5AB78A: call    InterfaceManager_GetSingleton
0x5AB78F: mov     al, [eax+0Bh]
0x5AB792: add     esp, 8
0x5AB795: cmp     al, 0FFh
0x5AB797: jz      short loc_5AB7A6
0x5AB799: movsx   ecx, al
0x5AB79C: push    0
0x5AB79E: push    ecx
0x5AB79F: mov     ecx, ebx
0x5AB7A1: call    sub_5AACF0
0x5AB7A6: fld     dword ptr ds:0A6906Ch
0x5AB7AC: push    ecx
0x5AB7AD: mov     ecx, [ebx+30h]; this
0x5AB7B0: fstp    [esp-0Ch+a2]; a3
0x5AB7B3: push    0FB3h; a2
0x5AB7B8: call    Tile_SetFloat
0x5AB7BD: fldz
0x5AB7BF: push    ecx
0x5AB7C0: fstp    [esp-0Ch+a2]; a3
0x5AB7C3: mov     ecx, [ebx+30h]; this
0x5AB7C6: push    0FB3h; a2
0x5AB7CB: call    Tile_SetFloat
0x5AB7D0: push    1; char
0x5AB7D2: mov     ecx, edi; int
0x5AB7D4: call    EnableMenu
0x5AB7D9: pop     ebx
0x5AB7DA: pop     edi
0x5AB7DB: mov     eax, esi
0x5AB7DD: pop     esi
0x5AB7DE: pop     ecx
0x5AB7DF: retn
