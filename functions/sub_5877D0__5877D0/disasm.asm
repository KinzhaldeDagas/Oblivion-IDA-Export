0x5877D0: push    ecx
0x5877D1: fld     dword ptr ds:0A6A044h
0x5877D7: push    ebx
0x5877D8: push    edi
0x5877D9: fstp    [esp+0Ch+var_4]
0x5877DD: xor     ebx, ebx
0x5877DF: push    1; arg1
0x5877E1: push    ebx; canCreate
0x5877E2: call    InterfaceManager_GetSingleton
0x5877E7: mov     eax, [eax+68h]
0x5877EA: mov     edi, [eax+34h]
0x5877ED: add     esp, 8
0x5877F0: test    edi, edi
0x5877F2: jz      loc_5878A0
0x5877F8: push    esi
0x5877F9: lea     esp, [esp+0]
0x587800: push    1; arg1
0x587802: push    0; canCreate
0x587804: call    InterfaceManager_GetSingleton
0x587809: mov     ecx, [edi+8]
0x58780C: add     esp, 8
0x58780F: test    ecx, ecx
0x587811: jz      short loc_587889
0x587813: call    Tile_GetParentMenu
0x587818: mov     esi, eax
0x58781A: test    esi, esi
0x58781C: jz      short loc_587889
0x58781E: mov     ecx, [esi+4]
0x587821: test    ecx, ecx
0x587823: jz      short loc_587889
0x587825: push    0FA1h
0x58782A: call    Tile_GetFloat
0x58782F: fcomp   dword ptr ds:0A2F948h
0x587835: fnstsw  ax
0x587837: test    ah, 44h
0x58783A: jnp     short loc_587889
0x58783C: mov     ecx, [esi+4]
0x58783F: push    0FABh
0x587844: call    Tile_GetFloat
0x587849: fld     [esp+10h+var_4]
0x58784D: fcompp
0x58784F: fnstsw  ax
0x587851: test    ah, 5
0x587854: jp      short loc_587889
0x587856: mov     ecx, [esi+4]
0x587859: push    0FA5h
0x58785E: call    Tile_GetFloat
0x587863: fcomp   dword ptr ds:0A6A040h
0x587869: fnstsw  ax
0x58786B: test    ah, 44h
0x58786E: jnp     short loc_587889
0x587870: cmp     dword ptr [esi+24h], 2
0x587874: jz      short loc_587889
0x587876: mov     ecx, [esi+4]
0x587879: push    0FABh
0x58787E: call    Tile_GetFloat
0x587883: fstp    [esp+10h+var_4]
0x587887: mov     ebx, esi
0x587889: push    1; arg1
0x58788B: push    0; canCreate
0x58788D: call    InterfaceManager_GetSingleton
0x587892: mov     edi, [edi]
0x587894: add     esp, 8
0x587897: test    edi, edi
0x587899: jnz     loc_587800
0x58789F: pop     esi
0x5878A0: pop     edi
0x5878A1: mov     eax, ebx
0x5878A3: pop     ebx
0x5878A4: pop     ecx
0x5878A5: retn
