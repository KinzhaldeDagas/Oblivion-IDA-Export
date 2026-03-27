0x4970B0: push    esi
0x4970B1: mov     esi, ecx
0x4970B3: call    ??1?$NiTMap@PAXULOCK_DATA@ObjectThreadLock@@@@UAE@XZ; NiTMap<void *,ObjectThreadLock::LOCK_DATA>::~NiTMap<void *,ObjectThreadLock::LOCK_DATA>(void)
0x4970B8: test    [esp+4+arg_0], 1
0x4970BD: jz      short loc_4970C8
0x4970BF: push    esi
0x4970C0: call    FormHeapFree
0x4970C5: add     esp, 4
0x4970C8: mov     eax, esi
0x4970CA: pop     esi
0x4970CB: retn    4
