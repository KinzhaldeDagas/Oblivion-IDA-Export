0x593810: sub     esp, 118h
0x593816: mov     eax, ds:0B30AACh
0x59381B: xor     eax, esp
0x59381D: mov     [esp+118h+var_4], eax
0x593824: mov     eax, [esp+118h+arg_8]
0x59382B: mov     ecx, [esp+118h+arg_C]
0x593832: push    ebx
0x593833: mov     ebx, [esp+11Ch+arg_4]
0x59383A: push    ebp
0x59383B: push    esi
0x59383C: push    edi
0x59383D: mov     edi, [esp+128h+arg_0]
0x593844: push    410h
0x593849: mov     [esp+12Ch+var_110], eax
0x59384D: mov     [esp+12Ch+var_114], ecx
0x593851: call    Menu_GetOpenMenuTile
0x593856: add     esp, 4
0x593859: test    eax, eax
0x59385B: jz      short loc_593867
0x59385D: mov     edx, [eax]
0x59385F: mov     ecx, eax
0x593861: mov     eax, [edx]
0x593863: push    1; a3
0x593865: call    eax
0x593867: push    1; arg1
0x593869: push    0; canCreate
0x59386B: call    InterfaceManager_GetSingleton
0x593870: add     esp, 8
0x593873: mov     esi, eax
0x593875: call    InterfaceManager_GetDepth
0x59387A: fstp    [esp+12Ch+var_110]
0x59387E: mov     ecx, [esi+68h]; TileWindow *
0x593881: push    offset aDataMenusDia_0; "Data\\Menus\\dialog\\Alchemy.xml"
0x593886: call    Menu_LoadXML
0x59388B: mov     esi, eax
0x59388D: mov     ecx, esi
0x59388F: mov     [esp+12Ch+var_11C], esi
0x593893: call    Tile_GetParentMenu
0x593898: mov     ebp, eax
0x59389A: test    ebp, ebp
0x59389C: jz      loc_593AD4
0x5938A2: mov     edx, [ebp+0]
0x5938A5: mov     eax, [edx+34h]
0x5938A8: mov     ecx, ebp
0x5938AA: call    eax
0x5938AC: cmp     eax, 410h
0x5938B1: jnz     loc_593AC3
0x5938B7: push    0; int
0x5938B9: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5938BE: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5938C3: push    0; int
0x5938C5: push    esi; void *
0x5938C6: call    OblivionDynamicCast
0x5938CB: add     esp, 14h
0x5938CE: push    eax
0x5938CF: mov     ecx, ebp
0x5938D1: call    Menu_SetTileMenu
0x5938D6: push    0; int
0x5938D8: push    offset ??_R0?AVAlchemyMenu@@@8; struct TypeDescriptor *
0x5938DD: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5938E2: push    0; int
0x5938E4: push    ebp; void *
0x5938E5: call    OblivionDynamicCast
0x5938EA: mov     esi, eax
0x5938EC: add     esp, 14h
0x5938EF: test    esi, esi
0x5938F1: jz      loc_593AD4
0x5938F7: mov     ecx, [esp+12Ch+var_11C]
0x5938FB: push    0FA5h
0x593900: call    Tile_GetFloat
0x593905: fcomp   dword ptr ds:0A69770h
0x59390B: fnstsw  ax
0x59390D: test    ah, 44h
0x593910: jnp     short loc_59392D
0x593912: mov     ecx, [esp+12Ch+var_11C]
0x593916: push    0FA5h
0x59391B: call    Tile_GetFloat
0x593920: fcomp   qword ptr ds:0A69778h
0x593926: fnstsw  ax
0x593928: test    ah, 44h
0x59392B: jp      short AlchMenu_Create___HandleMPST
0x59392D: fld     [esp+12Ch+var_110]
0x593931: push    ecx
0x593932: mov     ecx, [esp+130h+var_11C]; this
0x593936: fstp    [esp+130h+a2]; a3
0x593939: push    0FABh; a2
0x59393E: call    Tile_SetFloat
