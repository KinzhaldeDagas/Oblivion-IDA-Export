0x46A7B0: push    ecx
0x46A7B1: push    esi
0x46A7B2: mov     esi, ecx
0x46A7B4: mov     eax, [esi+4]
0x46A7B7: test    eax, eax
0x46A7B9: jz      short loc_46A7D6
0x46A7BB: mov     eax, [eax+0Ch]
0x46A7BE: push    4; Size
0x46A7C0: lea     ecx, [esp+0Ch+Src]
0x46A7C4: push    ecx; Src
0x46A7C5: push    4D414E45h; int
0x46A7CA: mov     [esp+14h+Src], eax
0x46A7CE: call    TESForm_PutFormRecordChunkData
0x46A7D3: add     esp, 0Ch
0x46A7D6: movzx   eax, word ptr [esi+8]
0x46A7DA: test    ax, ax
0x46A7DD: pop     esi
0x46A7DE: jz      short loc_46A7FB
0x46A7E0: movzx   edx, ax
0x46A7E3: push    2; Size
0x46A7E5: lea     eax, [esp+8+Src]
0x46A7E9: push    eax; Src
0x46A7EA: push    4D414E41h; int
0x46A7EF: mov     [esp+10h+Src], edx
0x46A7F3: call    TESForm_PutFormRecordChunkData
0x46A7F8: add     esp, 0Ch
0x46A7FB: pop     ecx
0x46A7FC: retn
