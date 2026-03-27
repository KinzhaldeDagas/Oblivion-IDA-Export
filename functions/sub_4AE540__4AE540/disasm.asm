0x4AE540: push    esi
0x4AE541: mov     esi, ecx
0x4AE543: call    TESForm_InitializeFormRecord
0x4AE548: lea     ecx, [esi+24h]
0x4AE54B: call    TESFullName_Save
0x4AE550: push    54444F4Dh
0x4AE555: push    42444F4Dh
0x4AE55A: push    4C444F4Dh
0x4AE55F: lea     ecx, [esi+30h]
0x4AE562: call    TESModel_Save
0x4AE567: lea     ecx, [esi+48h]
0x4AE56A: call    TESScriptableForm_Save
0x4AE56F: push    4; Size
0x4AE571: lea     eax, [esi+58h]
0x4AE574: push    eax; Src
0x4AE575: push    4D414E4Dh; int
0x4AE57A: call    TESForm_PutFormRecordChunkData
0x4AE57F: add     esp, 0Ch
0x4AE582: mov     ecx, esi
0x4AE584: pop     esi
0x4AE585: jmp     TESForm_FinalizeFormRecord
