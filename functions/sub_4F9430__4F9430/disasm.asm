0x4F9430: push    esi
0x4F9431: mov     esi, ecx
0x4F9433: call    TESForm_InitializeFormRecord
0x4F9438: push    1
0x4F943A: lea     eax, [esi+20h]
0x4F943D: push    eax
0x4F943E: push    4D414E46h
0x4F9443: call    j_TESForm_PutCurrentChunkData
0x4F9448: push    4; Size
0x4F944A: lea     ecx, [esi+24h]
0x4F944D: push    ecx; Src
0x4F944E: push    56544C46h; int
0x4F9453: call    TESForm_PutFormRecordChunkData; Verified helper contract: writes the 4-byte chunk code, 16-bit size, then memcpy-copies the supplied payload bytes unchanged. FormID conversion must therefore be performed by the caller; ExtraDataList_Save's XOWN branch supplies ownerForm->refID.
0x4F9458: add     esp, 18h
0x4F945B: mov     ecx, esi
0x4F945D: pop     esi
0x4F945E: jmp     TESForm_FinalizeFormRecord
