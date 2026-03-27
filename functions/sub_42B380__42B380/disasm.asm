0x42B380: push    esi
0x42B381: mov     esi, ecx
0x42B383: push    1; Size
0x42B385: lea     eax, [esi+0Ch]
0x42B388: push    eax; Src
0x42B389: push    4D414E46h; int
0x42B38E: call    TESForm_PutFormRecordChunkData
0x42B393: movzx   eax, word ptr [esi+8]
0x42B397: add     esp, 0Ch
0x42B39A: cmp     ax, 0FFFFh
0x42B39E: jnz     short loc_42B3B3
0x42B3A0: mov     eax, [esi+4]
0x42B3A3: lea     edx, [eax+1]
0x42B3A6: mov     cl, [eax]
0x42B3A8: add     eax, 1
0x42B3AB: test    cl, cl
0x42B3AD: jnz     short loc_42B3A6
0x42B3AF: sub     eax, edx
0x42B3B1: jmp     short loc_42B3B6
0x42B3B3: movzx   eax, ax
0x42B3B6: mov     ecx, [esi+4]
0x42B3B9: test    ecx, ecx
0x42B3BB: jnz     short loc_42B3C2
0x42B3BD: mov     ecx, offset EmptyString
0x42B3C2: add     eax, 1
0x42B3C5: push    eax
0x42B3C6: push    ecx
0x42B3C7: push    4C4C5546h
0x42B3CC: call    j_TESForm_PutCurrentChunkData
0x42B3D1: push    2; Size
0x42B3D3: add     esi, 0Eh
0x42B3D6: push    esi; Src
0x42B3D7: push    4D414E54h; int
0x42B3DC: call    TESForm_PutFormRecordChunkData
0x42B3E1: add     esp, 18h
0x42B3E4: pop     esi
0x42B3E5: retn
