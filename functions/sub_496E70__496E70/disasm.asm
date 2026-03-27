0x496E70: push    esi
0x496E71: mov     esi, ecx
0x496E73: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@ULOCK_DATA@ObjectThreadLock@@@@PAXULOCK_DATA@ObjectThreadLock@@@@6B@; const NiTMapBase<DFALL<ObjectThreadLock::LOCK_DATA>,void *,ObjectThreadLock::LOCK_DATA>::`vftable'
0x496E79: call    NiTMap_Clear
0x496E7E: mov     eax, [esi+8]
0x496E81: push    eax
0x496E82: call    FormHeapFree
0x496E87: add     esp, 4
0x496E8A: test    [esp+4+arg_0], 1
0x496E8F: jz      short loc_496E9A
0x496E91: push    esi
0x496E92: call    FormHeapFree
0x496E97: add     esp, 4
0x496E9A: mov     eax, esi
0x496E9C: pop     esi
0x496E9D: retn    4
