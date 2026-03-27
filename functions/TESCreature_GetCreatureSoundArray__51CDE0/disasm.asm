0x51CDE0: push    0FFFFFFFFh
0x51CDE2: push    offset SEH_8C62B0
0x51CDE7: mov     eax, large fs:0
0x51CDED: push    eax
0x51CDEE: push    ecx
0x51CDEF: push    esi
0x51CDF0: mov     eax, ds:0B30AACh
0x51CDF5: xor     eax, esp
0x51CDF7: push    eax
0x51CDF8: lea     eax, [esp+18h+var_C]
0x51CDFC: mov     large fs:0, eax
0x51CE02: mov     esi, ecx
0x51CE04: mov     eax, [esi+28h]
0x51CE07: shr     eax, 8
0x51CE0A: test    al, 1
0x51CE0C: jz      short TESCreature_GetCreatureSoundArray___MakeSoundArray
0x51CE0E: cmp     dword ptr [esi+100h], 0
0x51CE15: jnz     short loc_51CE56
