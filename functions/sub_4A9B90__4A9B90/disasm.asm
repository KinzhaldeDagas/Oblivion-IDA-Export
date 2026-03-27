0x4A9B90: push    esi
0x4A9B91: mov     esi, ecx
0x4A9B93: call    TESForm_InitializeFormRecord
0x4A9B98: push    7Ch ; '|'; Size
0x4A9B9A: lea     eax, [esi+18h]
0x4A9B9D: push    eax; Src
0x4A9B9E: push    44545343h; int
0x4A9BA3: call    TESForm_PutFormRecordChunkData
0x4A9BA8: mov     edx, [esi]
0x4A9BAA: mov     eax, [edx+16Ch]
0x4A9BB0: add     esp, 0Ch
0x4A9BB3: push    1
0x4A9BB5: mov     ecx, esi
0x4A9BB7: call    eax
0x4A9BB9: test    al, al
0x4A9BBB: jz      short loc_4A9BE3
0x4A9BBD: mov     eax, [esi+94h]
0x4A9BC3: test    eax, eax
0x4A9BC5: jz      short loc_4A9BDF
0x4A9BC7: push    54h ; 'T'; Size
0x4A9BC9: push    eax; Src
0x4A9BCA: push    44415343h; int
0x4A9BCF: call    TESForm_PutFormRecordChunkData
0x4A9BD4: add     esp, 0Ch
0x4A9BD7: mov     ecx, esi
0x4A9BD9: pop     esi
0x4A9BDA: jmp     TESForm_FinalizeFormRecord
0x4A9BDF: and     byte ptr [esi+68h], 0FEh
0x4A9BE3: mov     ecx, esi
0x4A9BE5: pop     esi
0x4A9BE6: jmp     TESForm_FinalizeFormRecord
