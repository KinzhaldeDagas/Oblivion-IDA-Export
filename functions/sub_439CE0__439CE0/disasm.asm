0x439CE0: push    esi
0x439CE1: mov     esi, ecx
0x439CE3: mov     eax, [esi+8]
0x439CE6: push    eax
0x439CE7: mov     dword ptr [esi], offset ??_7LockFreeStringMapIterator@?$LockFreeStringMap@PAVKFModel@@@@6B@; const LockFreeStringMap<KFModel *>::LockFreeStringMapIterator::`vftable'
0x439CED: call    FormHeapFree
0x439CF2: add     esp, 4
0x439CF5: test    [esp+4+arg_0], 1
0x439CFA: mov     dword ptr [esi+8], 0
0x439D01: mov     dword ptr [esi], offset ??_7LockFreeMapIterator@?$LockFreeMap@PBDPAVKFModel@@@@6B@; const LockFreeMap<char const *,KFModel *>::LockFreeMapIterator::`vftable'
0x439D07: jz      short loc_439D12
0x439D09: push    esi
0x439D0A: call    FormHeapFree
0x439D0F: add     esp, 4
0x439D12: mov     eax, esi
0x439D14: pop     esi
0x439D15: retn    4
