0x4120D0: push    esi
0x4120D1: mov     esi, ecx
0x4120D3: mov     ecx, SaveLoad_CurrentSavegame
0x4120D9: push    20h ; ' '; Size
0x4120DB: lea     eax, [esi+4]
0x4120DE: push    eax; Dst
0x4120DF: call    SaveLoad_LoadData
0x4120E4: cmp     word ptr [esp+4+Dst], 0FFFFh
0x4120EB: jnz     short loc_4120FF
0x4120ED: push    2; Size
0x4120EF: lea     ecx, [esp+8+Dst]
0x4120F3: push    ecx; Dst
0x4120F4: mov     ecx, SaveLoad_CurrentSavegame
0x4120FA: call    SaveLoad_LoadData
0x4120FF: mov     ecx, SaveLoad_CurrentSavegame
0x412105: push    1; Size
0x412107: lea     edx, [esi+24h]
0x41210A: push    edx; Dst
0x41210B: call    SaveLoad_LoadData
0x412110: mov     ecx, SaveLoad_CurrentSavegame
0x412116: push    1; Size
0x412118: lea     eax, [esi+25h]
0x41211B: push    eax; Dst
0x41211C: call    SaveLoad_LoadData
0x412121: mov     eax, [esp+4+Dst]
0x412125: add     eax, 0FFFFh
0x41212A: test    ax, ax
0x41212D: mov     [esp+4+Dst], eax
0x412131: jbe     short loc_412192
0x412133: push    2Ch ; ','; Size
0x412135: call    FormHeapAlloc
0x41213A: add     esp, 4
0x41213D: test    eax, eax
0x41213F: jz      short loc_41217F
0x412141: xor     ecx, ecx
0x412143: mov     [eax+4], ecx
0x412146: mov     [eax+8], ecx
0x412149: mov     [eax+0Ch], ecx
0x41214C: mov     [eax+10h], ecx
0x41214F: mov     [eax+14h], ecx
0x412152: mov     [eax+18h], ecx
0x412155: mov     [eax+1Ch], ecx
0x412158: mov     [eax+20h], ecx
0x41215B: mov     [eax+24h], cl
0x41215E: mov     [eax+25h], cl
0x412161: mov     [eax+28h], ecx
0x412164: mov     dword ptr [eax], offset ??_7IntSeenData@@6B@; const IntSeenData::`vftable'
0x41216A: mov     ecx, [esp+4+Dst]
0x41216E: mov     [esi+28h], eax
0x412171: mov     edx, [eax]
0x412173: mov     edx, [edx+10h]
0x412176: push    ecx
0x412177: mov     ecx, eax
0x412179: call    edx
0x41217B: pop     esi
0x41217C: retn    4
0x41217F: mov     ecx, [esp+4+Dst]
0x412183: xor     eax, eax
0x412185: mov     [esi+28h], eax
0x412188: mov     edx, [eax]
0x41218A: mov     edx, [edx+10h]
0x41218D: push    ecx
0x41218E: mov     ecx, eax
0x412190: call    edx
0x412192: pop     esi
0x412193: retn    4
