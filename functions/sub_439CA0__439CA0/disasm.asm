0x439CA0: push    esi
0x439CA1: mov     esi, ecx
0x439CA3: mov     eax, [esi+8]
0x439CA6: push    eax
0x439CA7: mov     dword ptr [esi], offset ??_7LockFreeStringMapIterator@?$LockFreeStringMap@PAVModel@@@@6B@; const LockFreeStringMap<Model *>::LockFreeStringMapIterator::`vftable'
0x439CAD: call    FormHeapFree
0x439CB2: add     esp, 4
0x439CB5: test    [esp+4+arg_0], 1
0x439CBA: mov     dword ptr [esi+8], 0
0x439CC1: mov     dword ptr [esi], offset ??_7LockFreeMapIterator@?$LockFreeMap@PBDPAVModel@@@@6B@; const LockFreeMap<char const *,Model *>::LockFreeMapIterator::`vftable'
0x439CC7: jz      short loc_439CD2
0x439CC9: push    esi
0x439CCA: call    FormHeapFree
0x439CCF: add     esp, 4
0x439CD2: mov     eax, esi
0x439CD4: pop     esi
0x439CD5: retn    4
