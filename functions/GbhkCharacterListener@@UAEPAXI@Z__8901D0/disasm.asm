0x8901D0: test    byte ptr [esp+arg_0], 1
0x8901D5: push    esi
0x8901D6: mov     esi, ecx
0x8901D8: mov     dword ptr [esi], offset ??_7hkCharacterProxyListener@@6B@; const hkCharacterProxyListener::`vftable'
0x8901DE: jz      short loc_8901F1
0x8901E0: movzx   eax, byte ptr [esi-1]
0x8901E4: sub     ecx, eax
0x8901E6: push    ecx; void *
0x8901E7: mov     ecx, offset FormHeap
0x8901EC: call    MemoryHeap_Free_checked
0x8901F1: mov     eax, esi
0x8901F3: pop     esi
0x8901F4: retn    4
