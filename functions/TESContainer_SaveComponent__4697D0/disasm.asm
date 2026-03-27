0x4697D0: sub     esp, 8
0x4697D3: cmp     dword ptr [ecx+8], 0
0x4697D7: push    esi
0x4697D8: lea     esi, [ecx+8]
0x4697DB: jz      short loc_469818
0x4697DD: lea     ecx, [ecx+0]
0x4697E0: mov     eax, [esi]
0x4697E2: mov     ecx, [eax+4]
0x4697E5: mov     edx, [ecx+8]
0x4697E8: shr     edx, 5
0x4697EB: test    dl, 1
0x4697EE: jnz     short loc_469811
0x4697F0: mov     eax, [eax]
0x4697F2: push    8; Size
0x4697F4: lea     edx, [esp+10h+Src]
0x4697F8: mov     [esp+10h+var_4], eax
0x4697FC: mov     ecx, [ecx+0Ch]
0x4697FF: push    edx; Src
0x469800: push    4F544E43h; int
0x469805: mov     [esp+18h+Src], ecx
0x469809: call    TESForm_PutFormRecordChunkData
0x46980E: add     esp, 0Ch
0x469811: mov     esi, [esi+4]
0x469814: test    esi, esi
0x469816: jnz     short loc_4697E0
0x469818: pop     esi
0x469819: add     esp, 8
0x46981C: retn
