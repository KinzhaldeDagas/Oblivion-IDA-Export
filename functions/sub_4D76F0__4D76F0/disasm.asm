0x4D76F0: add     ecx, 44h ; 'D'; this
0x4D76F3: call    ExtraDataList_GetTeleport
0x4D76F8: test    eax, eax
0x4D76FA: jz      short loc_4D771A
0x4D76FC: mov     ecx, eax
0x4D76FE: call    sub_42B410
0x4D7703: test    eax, eax
0x4D7705: jz      short loc_4D7721
0x4D7707: lea     ecx, [eax+44h]; this
0x4D770A: call    ExtraDataList_GetTeleport
0x4D770F: test    eax, eax
0x4D7711: jz      short loc_4D7721
0x4D7713: mov     ecx, eax
0x4D7715: jmp     sub_6899C0
0x4D771A: xor     ecx, ecx
0x4D771C: call    sub_6899C0
0x4D7721: mov     eax, offset Vector3_InitValue?
0x4D7726: retn
