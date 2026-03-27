0x412040: push    esi
0x412041: mov     esi, ecx
0x412043: mov     ecx, SaveLoad_CurrentSavegame
0x412049: push    20h ; ' '; Size
0x41204B: lea     eax, [esi+4]
0x41204E: push    eax; Src
0x41204F: call    SaveLoad_SaveData
0x412054: cmp     byte ptr [esp+4+Src], 0
0x412059: jnz     short loc_41208E
0x41205B: mov     [esp+4+Src], 1
0x412063: mov     eax, [esi+28h]
0x412066: test    eax, eax
0x412068: jz      short loc_41207C
0x41206A: lea     ebx, [ebx+0]
0x412070: add     [esp+4+Src], 1
0x412075: mov     eax, [eax+28h]
0x412078: test    eax, eax
0x41207A: jnz     short loc_412070
0x41207C: push    2; Size
0x41207E: lea     ecx, [esp+8+Src]
0x412082: push    ecx; Src
0x412083: mov     ecx, SaveLoad_CurrentSavegame
0x412089: call    SaveLoad_SaveData
0x41208E: mov     ecx, SaveLoad_CurrentSavegame
0x412094: push    1; Size
0x412096: lea     edx, [esi+24h]
0x412099: push    edx; Src
0x41209A: call    SaveLoad_SaveData
0x41209F: mov     ecx, SaveLoad_CurrentSavegame
0x4120A5: push    1; Size
0x4120A7: lea     eax, [esi+25h]
0x4120AA: push    eax; Src
0x4120AB: call    SaveLoad_SaveData
0x4120B0: cmp     dword ptr [esi+28h], 0
0x4120B4: jz      short loc_4120C9
0x4120B6: mov     ecx, [esi+28h]
0x4120B9: mov     edx, [ecx]
0x4120BB: pop     esi
0x4120BC: mov     [esp+Src], 1
0x4120C4: mov     eax, [edx+0Ch]
0x4120C7: jmp     eax
0x4120C9: pop     esi
0x4120CA: retn    4
