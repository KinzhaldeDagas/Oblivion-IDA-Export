0x57A650: push    1; arg1
0x57A652: push    0; canCreate
0x57A654: call    InterfaceManager_GetSingleton
0x57A659: add     esp, 8
0x57A65C: test    eax, eax
0x57A65E: jz      short loc_57A6DF
0x57A660: push    1; arg1
0x57A662: push    0; canCreate
0x57A664: call    InterfaceManager_GetSingleton
0x57A669: add     esp, 8
0x57A66C: cmp     dword ptr [eax+1Ch], 0
0x57A670: jz      short loc_57A6DF
0x57A672: push    1; arg1
0x57A674: push    0; canCreate
0x57A676: call    InterfaceManager_GetSingleton
0x57A67B: add     esp, 8
0x57A67E: cmp     dword ptr [eax+68h], 0
0x57A682: jz      short loc_57A6DF
0x57A684: push    1; arg1
0x57A686: push    0; canCreate
0x57A688: call    InterfaceManager_GetSingleton
0x57A68D: mov     eax, [eax+68h]
0x57A690: add     esp, 8
0x57A693: push    0FAEh
0x57A698: mov     ecx, eax
0x57A69A: call    Tile_GetFloat
0x57A69F: fcomp   dword ptr ds:0A379B4h
0x57A6A5: fnstsw  ax
0x57A6A7: test    ah, 44h
0x57A6AA: jp      short loc_57A6DF
0x57A6AC: push    3EBh
0x57A6B1: call    Menu_GetOpenMenuTile
0x57A6B6: add     esp, 4
0x57A6B9: test    eax, eax
0x57A6BB: jz      short loc_57A6DC
0x57A6BD: push    0FA1h
0x57A6C2: mov     ecx, eax
0x57A6C4: call    Tile_GetFloat
0x57A6C9: fcomp   dword ptr ds:0A2F948h
0x57A6CF: fnstsw  ax
0x57A6D1: test    ah, 44h
0x57A6D4: jnp     short loc_57A6DC
0x57A6D6: mov     eax, 1
0x57A6DB: retn
0x57A6DC: xor     eax, eax
0x57A6DE: retn
0x57A6DF: xor     al, al
0x57A6E1: retn
