0x4147D1: test    dword ptr [eax+58h], 1180000h
0x4147D8: jz      short loc_4147DF
0x4147DA: mov     ecx, [eax+60h]
0x4147DD: jmp     short loc_4147E4
0x4147DF: mov     ecx, 48h ; 'H'
0x4147E4: fld     ds:flt_A30634
0x4147EA: mov     [esi+14h], ecx
0x4147ED: fst     dword ptr [esi+20h]
0x4147F0: cmp     dword ptr [eax+98h], 46464553h
0x4147FA: jnz     short EffectItem_Initialize___NoSCITBlock
