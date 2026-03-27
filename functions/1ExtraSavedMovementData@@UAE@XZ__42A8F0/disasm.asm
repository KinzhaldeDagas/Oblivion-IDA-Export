0x42A8F0: push    0FFFFFFFFh
0x42A8F2: push    offset SEH_42B090
0x42A8F7: mov     eax, large fs:0
0x42A8FD: push    eax
0x42A8FE: push    ecx
0x42A8FF: push    esi
0x42A900: mov     eax, ___security_cookie
0x42A905: xor     eax, esp
0x42A907: push    eax
0x42A908: lea     eax, [esp+18h+var_C]
0x42A90C: mov     large fs:0, eax
0x42A912: mov     esi, ecx
0x42A914: mov     [esp+18h+var_10], esi
0x42A918: mov     dword ptr [esi], offset ??_7ExtraSavedMovementData@@6B@; const ExtraSavedMovementData::`vftable'
0x42A91E: mov     eax, [esi+10h]
0x42A921: test    eax, eax
0x42A923: mov     [esp+18h+var_4], 0
0x42A92B: jz      short loc_42A938
0x42A92D: push    eax; void *
0x42A92E: mov     ecx, offset FormHeap
0x42A933: call    MemoryHeap_Free_checked
0x42A938: mov     eax, [esi+14h]
0x42A93B: test    eax, eax
0x42A93D: jz      short loc_42A94A
0x42A93F: push    eax; void *
0x42A940: mov     ecx, offset FormHeap
0x42A945: call    MemoryHeap_Free_checked
0x42A94A: mov     eax, [esi+18h]
0x42A94D: test    eax, eax
0x42A94F: jz      short loc_42A95C
0x42A951: push    eax; void *
0x42A952: mov     ecx, offset FormHeap
0x42A957: call    MemoryHeap_Free_checked
0x42A95C: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x42A962: mov     ecx, [esp+18h+var_C]
0x42A966: mov     large fs:0, ecx
0x42A96D: pop     ecx
0x42A96E: pop     esi
0x42A96F: add     esp, 10h
0x42A972: retn
