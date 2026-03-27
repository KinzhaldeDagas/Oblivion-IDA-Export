0x4CC5D0: push    esi
0x4CC5D1: push    edi
0x4CC5D2: mov     edi, [esp+8+arg_0]
0x4CC5D6: test    edi, edi
0x4CC5D8: mov     esi, ecx
0x4CC5DA: jz      short loc_4CC64A
0x4CC5DC: mov     ecx, edi
0x4CC5DE: call    TESFile_GetIsMaster
0x4CC5E3: test    al, al
0x4CC5E5: jz      short loc_4CC64A
0x4CC5E7: test    byte ptr [esi+24h], 1
0x4CC5EB: jz      short loc_4CC605
0x4CC5ED: mov     eax, [esi+3Ch]
0x4CC5F0: test    eax, eax
0x4CC5F2: jz      short loc_4CC62C
0x4CC5F4: mov     eax, [eax+24h]
0x4CC5F7: test    eax, eax
0x4CC5F9: jz      short loc_4CC62C
0x4CC5FB: push    eax; Buffer
0x4CC5FC: mov     ecx, edi
0x4CC5FE: call    TESFIle_JumpToRecord
0x4CC603: jmp     short loc_4CC62C
0x4CC605: mov     ecx, [esi+50h]
0x4CC608: test    ecx, ecx
0x4CC60A: jz      short loc_4CC62C
0x4CC60C: mov     eax, [esi+3Ch]
0x4CC60F: test    eax, eax
0x4CC611: jz      short loc_4CC618
0x4CC613: mov     edx, [eax+4]
0x4CC616: jmp     short loc_4CC61A
0x4CC618: xor     edx, edx
0x4CC61A: test    eax, eax
0x4CC61C: jz      short loc_4CC622
0x4CC61E: mov     eax, [eax]
0x4CC620: jmp     short loc_4CC624
0x4CC622: xor     eax, eax
0x4CC624: push    edx
0x4CC625: push    eax
0x4CC626: push    edi
0x4CC627: call    TESWorldSpace__FindCellInFile
0x4CC62C: mov     ecx, edi
0x4CC62E: call    TESFile_GetRecordType
0x4CC633: cmp     eax, 30h ; '0'
0x4CC636: jnz     short loc_4CC64A
0x4CC638: mov     eax, [edi+248h]
0x4CC63E: cmp     eax, [esi+0Ch]
0x4CC641: jnz     short loc_4CC64A
0x4CC643: pop     edi
0x4CC644: mov     al, 1
0x4CC646: pop     esi
0x4CC647: retn    4
0x4CC64A: pop     edi
0x4CC64B: xor     al, al
0x4CC64D: pop     esi
0x4CC64E: retn    4
