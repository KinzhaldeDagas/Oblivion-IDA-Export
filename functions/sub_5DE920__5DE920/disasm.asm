0x5DE920: push    ecx
0x5DE921: push    esi
0x5DE922: mov     esi, ecx
0x5DE924: mov     eax, [esi+0FCh]
0x5DE92A: push    eax
0x5DE92B: lea     ecx, [esp+0Ch+var_4]
0x5DE92F: push    offset off_A6DD20
0x5DE934: push    ecx
0x5DE935: call    __sprintf
0x5DE93A: add     esp, 0Ch
0x5DE93D: cmp     dword ptr [esi+0FCh], 0
0x5DE944: lea     eax, [esp+8+var_4]
0x5DE948: jnz     short loc_5DE94F
0x5DE94A: mov     eax, ds:0B38D80h
0x5DE94F: mov     ecx, [esi+4]
0x5DE952: push    eax
0x5DE953: push    0FB3h
0x5DE958: call    Tile_SetString
0x5DE95D: pop     esi
0x5DE95E: pop     ecx
0x5DE95F: retn
