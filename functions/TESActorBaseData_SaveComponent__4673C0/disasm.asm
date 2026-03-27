0x4673C0: push    esi
0x4673C1: mov     esi, ecx
0x4673C3: push    10h; Size
0x4673C5: lea     eax, [esi+4]
0x4673C8: push    eax; Src
0x4673C9: push    53424341h; int
0x4673CE: call    TESForm_PutFormRecordChunkData
0x4673D3: mov     esi, [esi+14h]
0x4673D6: add     esp, 0Ch
0x4673D9: test    esi, esi
0x4673DB: jz      short loc_4673EE
0x4673DD: mov     ecx, [esi+0Ch]
0x4673E0: push    ecx
0x4673E1: push    4D414E49h
0x4673E6: call    TESForm_PutCurrentChunkData4
0x4673EB: add     esp, 8
0x4673EE: pop     esi
0x4673EF: retn
