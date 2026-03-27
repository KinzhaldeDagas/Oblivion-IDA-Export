0x4511C0: push    esi
0x4511C1: mov     esi, ecx
0x4511C3: cmp     dword ptr [esi+23Ch], 0
0x4511CA: jnz     short loc_4511F4
0x4511CC: call    TESFile_LoadRecordHeader
0x4511D1: test    al, al
0x4511D3: jnz     short loc_4511D9
0x4511D5: xor     eax, eax
0x4511D7: pop     esi
0x4511D8: retn
0x4511D9: mov     ecx, esi; this
0x4511DB: mov     dword ptr [esi+250h], 0
0x4511E5: mov     dword ptr [esi+254h], 0
0x4511EF: call    TESFile_LoadChunkHeader
0x4511F4: mov     eax, [esi+23Ch]
0x4511FA: push    eax
0x4511FB: call    TESForm_GetFormTypeFromChunkType
0x451200: add     esp, 4
0x451203: pop     esi
0x451204: retn
