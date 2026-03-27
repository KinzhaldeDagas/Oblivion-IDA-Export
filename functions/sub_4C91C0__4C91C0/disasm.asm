0x4C91C0: push    esi
0x4C91C1: push    edi
0x4C91C2: mov     edi, ecx
0x4C91C4: call    TESForm_InitializeFormRecord
0x4C91C9: push    4E4F4349h
0x4C91CE: lea     ecx, [edi+18h]
0x4C91D1: call    TESTexture_Save
0x4C91D6: push    3; Size
0x4C91D8: lea     eax, [edi+28h]
0x4C91DB: push    eax; Src
0x4C91DC: push    4D414E48h; int
0x4C91E1: call    TESForm_PutFormRecordChunkData
0x4C91E6: push    1; Size
0x4C91E8: lea     ecx, [edi+2Bh]
0x4C91EB: push    ecx; Src
0x4C91EC: push    4D414E53h; int
0x4C91F1: call    TESForm_PutFormRecordChunkData
0x4C91F6: lea     esi, [edi+2Ch]
0x4C91F9: add     esp, 18h
0x4C91FC: test    esi, esi
0x4C91FE: jz      short loc_4C9225
0x4C9200: cmp     dword ptr [esi+4], 0
0x4C9204: jnz     short loc_4C920B
0x4C9206: cmp     dword ptr [esi], 0
0x4C9209: jz      short loc_4C9225
0x4C920B: mov     edx, [esi]
0x4C920D: mov     eax, [edx+0Ch]
0x4C9210: push    eax
0x4C9211: push    4D414E47h
0x4C9216: call    TESForm_PutCurrentChunkData4
0x4C921B: mov     esi, [esi+4]
0x4C921E: add     esp, 8
0x4C9221: test    esi, esi
0x4C9223: jnz     short loc_4C9200
0x4C9225: mov     ecx, edi
0x4C9227: pop     edi
0x4C9228: pop     esi
0x4C9229: jmp     TESForm_FinalizeFormRecord
