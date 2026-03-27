0x41E450: push    ebx
0x41E451: push    esi
0x41E452: push    edi
0x41E453: mov     ebx, ecx
0x41E455: push    offset aExtradatalis_6; "ExtraDataList::RemoveNonPersistentCellD"...
0x41E45A: mov     ecx, offset BSExtraDataCS
0x41E45F: call    NiEnterCriticalSection
0x41E464: mov     esi, [ebx+4]
0x41E467: xor     edi, edi
0x41E469: test    esi, esi
0x41E46B: jz      short loc_41E4B7
0x41E46D: lea     ecx, [ecx+0]
0x41E470: mov     ecx, esi
0x41E472: mov     al, [ecx+4]
0x41E475: cmp     al, 2
0x41E477: mov     esi, [esi+8]
0x41E47A: jb      short loc_41E49C
0x41E47C: cmp     al, 3
0x41E47E: jbe     short loc_41E488
0x41E480: cmp     al, 8
0x41E482: jnz     short loc_41E49C
0x41E484: mov     edi, ecx
0x41E486: jmp     short loc_41E4B3
0x41E488: mov     eax, SaveLoad_CurrentSavegame
0x41E48D: mov     edx, [eax+18h]
0x41E490: shr     edx, 2
0x41E493: test    dl, 1
0x41E496: jz      short loc_41E49C
0x41E498: mov     edi, ecx
0x41E49A: jmp     short loc_41E4B3
0x41E49C: cmp     ecx, [ebx+4]
0x41E49F: jnz     short loc_41E4A4
0x41E4A1: mov     [ebx+4], esi
0x41E4A4: test    edi, edi
0x41E4A6: jz      short loc_41E4AB
0x41E4A8: mov     [edi+8], esi
0x41E4AB: mov     eax, [ecx]
0x41E4AD: mov     edx, [eax]
0x41E4AF: push    1
0x41E4B1: call    edx
0x41E4B3: test    esi, esi
0x41E4B5: jnz     short loc_41E470
0x41E4B7: push    ebx
0x41E4B8: call    sub_41DE50
0x41E4BD: add     esp, 4
0x41E4C0: pop     edi
0x41E4C1: pop     esi
0x41E4C2: mov     ecx, offset BSExtraDataCS; lpCriticalSection
0x41E4C7: pop     ebx
0x41E4C8: jmp     NiLeaveCriticalSection_0
