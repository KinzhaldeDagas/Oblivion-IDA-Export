0x5A64B0: push    esi
0x5A64B1: push    3ECh
0x5A64B6: call    Menu_GetOpenMenuTile
0x5A64BB: mov     esi, eax
0x5A64BD: add     esp, 4
0x5A64C0: test    esi, esi
0x5A64C2: jz      loc_5A65A0
0x5A64C8: push    edi
0x5A64C9: push    0; int
0x5A64CB: push    offset ??_R0?AVHUDMainMenu@@@8; struct TypeDescriptor *
0x5A64D0: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5A64D5: push    0; int
0x5A64D7: mov     ecx, esi
0x5A64D9: call    Tile_GetParentMenu
0x5A64DE: push    eax; void *
0x5A64DF: call    OblivionDynamicCast
0x5A64E4: mov     edi, eax
0x5A64E6: add     esp, 14h
0x5A64E9: test    edi, edi
0x5A64EB: jz      loc_5A659F
0x5A64F1: mov     ecx, [esp+8+arg_0]
0x5A64F5: mov     al, [ecx+0Ch]
0x5A64F8: test    al, al
0x5A64FA: jz      short loc_5A6515
0x5A64FC: mov     edx, [ecx]
0x5A64FE: cmp     edx, ds:0B3B340h
0x5A6504: jz      loc_5A659F
0x5A650A: test    al, al
0x5A650C: jz      short loc_5A6515
0x5A650E: mov     eax, edx
0x5A6510: mov     ds:0B3B340h, eax
0x5A6515: mov     eax, [ecx+4]
0x5A6518: test    eax, eax
0x5A651A: mov     ecx, esi
0x5A651C: jz      short loc_5A656C
0x5A651E: push    eax
0x5A651F: push    0FB6h
0x5A6524: call    Tile_SetString
0x5A6529: fld     dword ptr ds:0A41304h
0x5A652F: sub     esp, 8
0x5A6532: fstp    [esp+10h+var_C]; float
0x5A6536: mov     ecx, esi
0x5A6538: fld     dword ptr ds:0A6BED0h
0x5A653E: fstp    [esp+10h+var_10]; float
0x5A6541: push    0FB5h
0x5A6546: call    Tile_GetFloat
0x5A654B: push    ecx
0x5A654C: fstp    [esp+14h+var_14]; float
0x5A654F: push    0FB5h; int
0x5A6554: mov     ecx, esi; int
0x5A6556: call    sub_589980
0x5A655B: call    dword ptr ds:0A280D0h
0x5A6561: add     eax, 1388h
0x5A6566: mov     [edi+74h], eax
0x5A6569: pop     edi
0x5A656A: pop     esi
0x5A656B: retn
0x5A656C: fld     dword ptr ds:0A41304h
0x5A6572: sub     esp, 8
0x5A6575: fstp    [esp+10h+var_C]; float
0x5A6579: fldz
0x5A657B: fstp    [esp+10h+var_10]; float
0x5A657E: push    0FB5h
0x5A6583: call    Tile_GetFloat
0x5A6588: push    ecx
0x5A6589: fstp    [esp+14h+var_14]; float
0x5A658C: push    0FB5h; int
0x5A6591: mov     ecx, esi; int
0x5A6593: call    sub_589980
0x5A6598: mov     dword ptr [edi+74h], 0
0x5A659F: pop     edi
0x5A65A0: pop     esi
0x5A65A1: retn
