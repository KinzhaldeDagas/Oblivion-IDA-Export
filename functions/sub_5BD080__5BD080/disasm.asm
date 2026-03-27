0x5BD080: sub     esp, 138h
0x5BD086: mov     eax, ds:0B30AACh
0x5BD08B: xor     eax, esp
0x5BD08D: mov     [esp+138h+var_4], eax
0x5BD094: push    ebx
0x5BD095: mov     ebx, [esp+13Ch+arg_0]
0x5BD09C: push    ebp; a3
0x5BD09D: push    esi; a3
0x5BD09E: push    edi; a3
0x5BD09F: mov     edi, [esp+148h+arg_4]
0x5BD0A6: push    401h
0x5BD0AB: call    Menu_GetOpenMenuTile
0x5BD0B0: add     esp, 4
0x5BD0B3: test    eax, eax
0x5BD0B5: jz      short loc_5BD0C1
0x5BD0B7: mov     edx, [eax]
0x5BD0B9: mov     ecx, eax
0x5BD0BB: mov     eax, [edx]
0x5BD0BD: push    1; a3
0x5BD0BF: call    eax
0x5BD0C1: push    1; arg1
0x5BD0C3: push    0; canCreate
0x5BD0C5: call    InterfaceManager_GetSingleton
0x5BD0CA: add     esp, 8
0x5BD0CD: mov     esi, eax
0x5BD0CF: call    InterfaceManager_GetDepth
0x5BD0D4: fstp    [esp+148h+var_138]; a3
0x5BD0D8: mov     ecx, [esi+68h]; TileWindow *
0x5BD0DB: push    offset aDataMenusNegot; "Data\\Menus\\negotiate_menu.xml"
0x5BD0E0: call    Menu_LoadXML
0x5BD0E5: mov     ebp, eax
0x5BD0E7: mov     ecx, ebp
0x5BD0E9: call    Tile_GetParentMenu
0x5BD0EE: mov     esi, eax
0x5BD0F0: test    esi, esi
0x5BD0F2: mov     [esp+148h+var_134], esi
0x5BD0F6: jz      loc_5BD423
0x5BD0FC: mov     edx, [esi]
0x5BD0FE: mov     eax, [edx+34h]
0x5BD101: mov     ecx, esi
0x5BD103: call    eax
0x5BD105: cmp     eax, 401h
0x5BD10A: jnz     loc_5BD413
0x5BD110: push    0; int
0x5BD112: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5BD117: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5BD11C: push    0; int
0x5BD11E: push    ebp; void *
0x5BD11F: call    OblivionDynamicCast
0x5BD124: add     esp, 14h
0x5BD127: push    eax
0x5BD128: mov     ecx, esi
0x5BD12A: call    Menu_SetTileMenu
0x5BD12F: push    0; int
0x5BD131: push    offset ??_R0?AVNegotiateMenu@@@8; struct TypeDescriptor *
0x5BD136: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5BD13B: push    0; int
0x5BD13D: push    esi; void *
0x5BD13E: call    OblivionDynamicCast
0x5BD143: mov     esi, eax
0x5BD145: add     esp, 14h
0x5BD148: cmp     dword ptr [esi+2Ch], 0
0x5BD14C: jz      short loc_5BD16C
0x5BD14E: cmp     dword ptr [esi+28h], 0
0x5BD152: jz      short loc_5BD16C
0x5BD154: cmp     dword ptr [esi+30h], 0
0x5BD158: jz      short loc_5BD16C
0x5BD15A: cmp     dword ptr [esi+34h], 0
0x5BD15E: jz      short loc_5BD16C
0x5BD160: cmp     dword ptr [esi+38h], 0
0x5BD164: jz      short loc_5BD16C
0x5BD166: cmp     dword ptr [esi+3Ch], 0
0x5BD16A: jnz     short loc_5BD17E
0x5BD16C: push    offset aNegotiateMenuC; "Negotiate Menu Creation Failed... Are y"...
0x5BD171: call    PrintError
0x5BD176: add     esp, 4
0x5BD179: jmp     loc_5BD423
0x5BD17E: push    0FA5h
0x5BD183: mov     ecx, ebp
0x5BD185: call    Tile_GetFloat
0x5BD18A: fcomp   dword ptr ds:0A69770h
0x5BD190: fnstsw  ax
0x5BD192: test    ah, 44h
0x5BD195: jnp     short loc_5BD1B0
0x5BD197: push    0FA5h
0x5BD19C: mov     ecx, ebp
0x5BD19E: call    Tile_GetFloat
0x5BD1A3: fcomp   qword ptr ds:0A69778h
0x5BD1A9: fnstsw  ax
0x5BD1AB: test    ah, 44h
0x5BD1AE: jp      short loc_5BD1C4
0x5BD1B0: fld     [esp+148h+var_138]
0x5BD1B4: push    ecx
0x5BD1B5: fstp    [esp+14Ch+var_14C]; a3
0x5BD1B8: push    0FABh; a2
0x5BD1BD: mov     ecx, ebp; this
0x5BD1BF: call    Tile_SetFloat
0x5BD1C4: mov     ecx, [ebx]
0x5BD1C6: mov     dl, [esp+148h+arg_8]
0x5BD1CD: mov     [esi+54h], ecx
0x5BD1D0: mov     [esi+5Ch], dl
0x5BD1D3: fld     dword ptr ds:0B375C8h
0x5BD1D9: mov     eax, [ebx]
0x5BD1DB: mov     ds:0B3B410h, eax
0x5BD1E0: call    Double_To_SInt32
0x5BD1E5: fld     dword ptr ds:0A6B1F0h
0x5BD1EB: push    ecx
0x5BD1EC: mov     ecx, [esi+34h]; this
0x5BD1EF: fstp    [esp+14Ch+var_14C]; a3
0x5BD1F2: push    0FB7h; a2
0x5BD1F7: mov     [esp+150h+var_138], eax; a3
0x5BD1FB: mov     [esi+50h], edi
0x5BD1FE: call    Tile_SetFloat
0x5BD203: fldz
0x5BD205: push    ecx
0x5BD206: fstp    [esp+14Ch+var_14C]; a3
0x5BD209: mov     ecx, [esi+34h]; this
0x5BD20C: push    0FB7h; a2
0x5BD211: call    Tile_SetFloat
0x5BD216: fldz
0x5BD218: push    ecx
0x5BD219: fstp    [esp+14Ch+var_14C]; a3
0x5BD21C: mov     ecx, [esi+30h]; this
0x5BD21F: push    0FAFh; a2
0x5BD224: call    Tile_SetFloat
0x5BD229: fild    [esp+148h+var_138]
0x5BD22D: push    ecx
0x5BD22E: mov     ecx, [esi+30h]; this
0x5BD231: fstp    [esp+14Ch+var_14C]; a3
0x5BD234: push    0FB0h; a2
0x5BD239: call    Tile_SetFloat
0x5BD23E: fld     dword ptr ds:0A379CCh
0x5BD244: push    ecx
0x5BD245: mov     ecx, [esi+30h]; this
0x5BD248: fstp    [esp+14Ch+var_14C]; a3
0x5BD24B: push    0FB2h; a2
0x5BD250: call    Tile_SetFloat
0x5BD255: fild    dword ptr [ebx]
0x5BD257: push    ecx
0x5BD258: mov     ecx, [esi+30h]; this
0x5BD25B: fstp    [esp+14Ch+var_14C]; a3
0x5BD25E: push    0FB3h; a2
0x5BD263: call    Tile_SetFloat
0x5BD268: fldz
0x5BD26A: push    ecx
0x5BD26B: fstp    [esp+14Ch+var_14C]; a3
0x5BD26E: mov     ecx, [esi+30h]; this
0x5BD271: push    0FB3h; a2
0x5BD276: call    Tile_SetFloat
0x5BD27B: mov     ecx, ds:0B333C4h
0x5BD281: push    edi
0x5BD282: call    Player_GetActorBarterFactor?
0x5BD287: fmul    qword ptr ds:0A309F0h
0x5BD28D: call    Double_To_SInt32
0x5BD292: mov     ecx, ds:0B333C4h; this
0x5BD298: push    edi; targetNpc
0x5BD299: mov     ebx, eax
0x5BD29B: call    calculateItemMultiplicationFromDisposition
0x5BD2A0: fmul    qword ptr ds:0A309F0h
0x5BD2A6: call    Double_To_SInt32
0x5BD2AB: mov     ecx, ds:0B333C4h
0x5BD2B1: mov     ebp, eax
0x5BD2B3: mov     eax, [ecx+11Ch]
0x5BD2B9: sub     ebx, eax
0x5BD2BB: add     ebp, eax
0x5BD2BD: cmp     ebx, 64h ; 'd'
0x5BD2C0: jge     short loc_5BD2C7
0x5BD2C2: mov     ebx, 64h ; 'd'
0x5BD2C7: cmp     ebp, 64h ; 'd'
0x5BD2CA: jle     short loc_5BD2D1
0x5BD2CC: mov     ebp, 64h ; 'd'
0x5BD2D1: mov     ecx, [esi+40h]
0x5BD2D4: push    0FB0h
0x5BD2D9: call    sub_588C10
0x5BD2DE: mov     ecx, [esi+40h]
0x5BD2E1: push    eax
0x5BD2E2: push    ebx
0x5BD2E3: push    0FAFh
0x5BD2E8: call    sub_588C10
0x5BD2ED: push    eax
0x5BD2EE: lea     edx, [esp+154h+var_130]
0x5BD2F2: push    offset aSIS; "%s %i %s"
0x5BD2F7: push    edx
0x5BD2F8: call    __sprintf
0x5BD2FD: mov     ecx, [esi+40h]
0x5BD300: add     esp, 14h
0x5BD303: lea     eax, [esp+148h+var_130]
0x5BD307: push    eax
0x5BD308: push    0FDEh
0x5BD30D: call    Tile_SetString
0x5BD312: mov     ecx, [esi+44h]
0x5BD315: push    0FB0h
0x5BD31A: call    sub_588C10
0x5BD31F: mov     ecx, [esi+44h]
0x5BD322: push    eax
0x5BD323: push    ebp
0x5BD324: push    0FAFh
0x5BD329: call    sub_588C10
0x5BD32E: push    eax
0x5BD32F: lea     ecx, [esp+154h+var_130]
0x5BD333: push    offset aSIS; "%s %i %s"
0x5BD338: push    ecx
0x5BD339: call    __sprintf
0x5BD33E: mov     ecx, [esi+44h]
0x5BD341: add     esp, 14h
0x5BD344: lea     edx, [esp+148h+var_130]
0x5BD348: push    edx
0x5BD349: push    0FDEh
0x5BD34E: call    Tile_SetString
0x5BD353: mov     eax, [edi]
0x5BD355: mov     edx, [eax+284h]
0x5BD35B: push    1Dh
0x5BD35D: mov     ecx, edi
0x5BD35F: call    edx
0x5BD361: push    eax
0x5BD362: call    Calc_MasteryFromSkill
0x5BD367: push    eax
0x5BD368: call    ActorValue_GetMasteryName
0x5BD36D: mov     ecx, [esi+48h]
0x5BD370: add     esp, 8
0x5BD373: push    eax
0x5BD374: push    0FDEh
0x5BD379: call    sub_588C10
0x5BD37E: push    eax
0x5BD37F: lea     eax, [esp+150h+var_130]
0x5BD383: push    offset aSS; "%s %s"
0x5BD388: push    eax
0x5BD389: call    __sprintf
0x5BD38E: add     esp, 10h
0x5BD391: lea     ecx, [esp+148h+var_130]
0x5BD395: push    ecx
0x5BD396: mov     ecx, [esi+48h]
0x5BD399: push    0FDEh
0x5BD39E: call    Tile_SetString
0x5BD3A3: mov     ecx, edi; this
0x5BD3A5: call    TESObjectREFR_GetName
0x5BD3AA: mov     ecx, [esi+2Ch]
0x5BD3AD: push    eax
0x5BD3AE: push    0FDEh
0x5BD3B3: call    Tile_SetString
0x5BD3B8: mov     edx, [edi]
0x5BD3BA: mov     eax, ds:0B333C4h
0x5BD3BF: mov     edx, [edx+224h]
0x5BD3C5: push    eax
0x5BD3C6: mov     ecx, edi
0x5BD3C8: call    edx
0x5BD3CA: mov     ecx, [esi+4Ch]
0x5BD3CD: push    eax
0x5BD3CE: push    0FDEh
0x5BD3D3: call    sub_588C10
0x5BD3D8: push    eax
0x5BD3D9: push    offset aSI_0; "%s %i"
0x5BD3DE: lea     eax, [esp+154h+var_130]
0x5BD3E2: push    eax
0x5BD3E3: call    __sprintf
0x5BD3E8: add     esp, 10h
0x5BD3EB: lea     ecx, [esp+148h+var_130]
0x5BD3EF: push    ecx
0x5BD3F0: mov     ecx, [esi+4Ch]
0x5BD3F3: push    0FDEh
0x5BD3F8: call    Tile_SetString
0x5BD3FD: mov     ecx, esi
0x5BD3FF: call    sub_5BCF20
0x5BD404: mov     ecx, [esp+148h+var_134]; int
0x5BD408: push    0; char
0x5BD40A: call    EnableMenu
0x5BD40F: mov     al, 1
0x5BD411: jmp     short loc_5BD425
0x5BD413: cmp     dword ptr [esi+4], 0
0x5BD417: jz      short loc_5BD423
0x5BD419: mov     edx, [esi]
0x5BD41B: mov     eax, [edx]
0x5BD41D: push    1
0x5BD41F: mov     ecx, esi
0x5BD421: call    eax
0x5BD423: xor     al, al
0x5BD425: mov     ecx, [esp+148h+var_4]
0x5BD42C: pop     edi
0x5BD42D: pop     esi
0x5BD42E: pop     ebp
0x5BD42F: pop     ebx
0x5BD430: xor     ecx, esp
0x5BD432: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5BD437: add     esp, 138h
0x5BD43D: retn
