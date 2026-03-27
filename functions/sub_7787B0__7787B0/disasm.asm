0x7787B0: push    esi
0x7787B1: mov     esi, ecx
0x7787B3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiDX9IBInfo@NiDX9IndexBufferManager@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'
0x7787B9: call    NiTMap_Clear
0x7787BE: mov     eax, [esi+8]
0x7787C1: push    eax
0x7787C2: call    FormHeapFree
0x7787C7: add     esp, 4
0x7787CA: test    [esp+4+arg_0], 1
0x7787CF: jz      short loc_7787DA
0x7787D1: push    esi
0x7787D2: call    FormHeapFree
0x7787D7: add     esp, 4
0x7787DA: mov     eax, esi
0x7787DC: pop     esi
0x7787DD: retn    4
