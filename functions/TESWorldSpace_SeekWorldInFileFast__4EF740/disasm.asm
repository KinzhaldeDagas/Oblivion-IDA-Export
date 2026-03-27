0x4EF740: push    esi
0x4EF741: mov     esi, [esp+4+arg_0]
0x4EF745: test    esi, esi
0x4EF747: push    edi
0x4EF748: mov     edi, ecx
0x4EF74A: jz      short loc_4EF791
0x4EF74C: mov     ecx, esi
0x4EF74E: call    TESFile_GetIsMaster
0x4EF753: test    al, al
0x4EF755: jz      short loc_4EF791
0x4EF757: mov     eax, [edi+0BCh]
0x4EF75D: test    eax, eax
0x4EF75F: jz      short loc_4EF791
0x4EF761: push    eax; Buffer
0x4EF762: mov     ecx, esi
0x4EF764: call    TESFIle_JumpToRecord
0x4EF769: test    al, al
0x4EF76B: jz      short loc_4EF791
0x4EF76D: mov     ecx, esi
0x4EF76F: call    TESFile_GetRecordType
0x4EF774: movzx   ecx, byte ptr ds:0B0607Ch
0x4EF77B: cmp     eax, ecx
0x4EF77D: jnz     short loc_4EF791
0x4EF77F: mov     edx, [esi+248h]
0x4EF785: cmp     edx, [edi+0Ch]
0x4EF788: jnz     short loc_4EF791
0x4EF78A: pop     edi
0x4EF78B: mov     al, 1
0x4EF78D: pop     esi
0x4EF78E: retn    4
0x4EF791: pop     edi
0x4EF792: xor     al, al
0x4EF794: pop     esi
0x4EF795: retn    4
