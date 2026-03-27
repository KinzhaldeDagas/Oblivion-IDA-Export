0x5D46C0: push    esi
0x5D46C1: mov     esi, ecx
0x5D46C3: mov     ecx, [esi+74h]
0x5D46C6: call    sub_57D2F0
0x5D46CB: test    al, al
0x5D46CD: jz      short loc_5D46F8
0x5D46CF: mov     eax, [esp+4+arg_0]
0x5D46D3: mov     ecx, [esi+74h]
0x5D46D6: push    eax
0x5D46D7: call    sub_57FF50
0x5D46DC: mov     ecx, [esi+74h]
0x5D46DF: call    sub_580120
0x5D46E4: mov     ecx, [esi+30h]
0x5D46E7: push    eax
0x5D46E8: push    0FDEh
0x5D46ED: call    Tile_SetString
0x5D46F2: mov     al, 1
0x5D46F4: pop     esi
0x5D46F5: retn    4
0x5D46F8: xor     al, al
0x5D46FA: pop     esi
0x5D46FB: retn    4
