0x683BF0: test    byte ptr [esp+arg_0], 1
0x683BF5: push    esi
0x683BF6: mov     esi, ecx
0x683BF8: mov     dword ptr [esi], offset ??_7hkBroadPhaseCastCollector@@6B@; const hkBroadPhaseCastCollector::`vftable'
0x683BFE: jz      short loc_683C09
0x683C00: push    esi
0x683C01: call    FormHeapFree
0x683C06: add     esp, 4
0x683C09: mov     eax, esi
0x683C0B: pop     esi
0x683C0C: retn    4
