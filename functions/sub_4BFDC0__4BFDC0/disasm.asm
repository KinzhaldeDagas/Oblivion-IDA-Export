0x4BFDC0: push    esi
0x4BFDC1: mov     esi, ecx
0x4BFDC3: mov     ecx, [esp+4+a2]; this
0x4BFDC7: test    ecx, ecx
0x4BFDC9: mov     [esi+20h], ecx
0x4BFDCC: jz      short loc_4BFDF4
0x4BFDCE: call    TESObjectCELL_GetWorldSpace
0x4BFDD3: test    eax, eax
0x4BFDD5: jz      short loc_4BFDED
0x4BFDD7: mov     ecx, eax
0x4BFDD9: call    TESWorldSpace_GetParentWorldpsace
0x4BFDDE: test    eax, eax
0x4BFDE0: jz      short loc_4BFDED
0x4BFDE2: or      dword ptr [esi+1Ch], 400h
0x4BFDE9: pop     esi
0x4BFDEA: retn    4
0x4BFDED: and     dword ptr [esi+1Ch], 0FFFFFBFFh
0x4BFDF4: pop     esi
0x4BFDF5: retn    4
