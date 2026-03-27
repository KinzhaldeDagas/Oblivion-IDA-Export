0x4518B0: push    esi
0x4518B1: mov     esi, ecx
0x4518B3: mov     eax, [esi+414h]
0x4518B9: test    eax, eax
0x4518BB: jz      short loc_4518DC
0x4518BD: push    eax; void *
0x4518BE: mov     ecx, offset FormHeap
0x4518C3: call    MemoryHeap_Free_checked
0x4518C8: mov     dword ptr [esi+414h], 0
0x4518D2: mov     dword ptr [esi+418h], 0
0x4518DC: mov     ecx, esi
0x4518DE: call    TESFile_NextRecord
0x4518E3: test    al, al
0x4518E5: jz      short loc_45191B
0x4518E7: cmp     [esp+4+arg_0], 0
0x4518EC: jz      short loc_45191B
0x4518EE: mov     ecx, [esi+23Ch]
0x4518F4: cmp     ecx, ds:0B05E20h
0x4518FA: jz      short loc_45191B
0x4518FC: cmp     ecx, ds:0B06138h
0x451902: jz      short loc_45191B
0x451904: test    dword ptr [esi+244h], 1000h
0x45190E: jz      short loc_45191B
0x451910: mov     ecx, esi
0x451912: call    TESFile_NextRecord
0x451917: test    al, al
0x451919: jnz     short loc_4518E7
0x45191B: pop     esi
0x45191C: retn    4
