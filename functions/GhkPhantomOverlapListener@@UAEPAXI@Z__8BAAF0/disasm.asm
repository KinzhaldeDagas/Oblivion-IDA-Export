0x8BAAF0: test    byte ptr [esp+arg_0], 1
0x8BAAF5: push    esi
0x8BAAF6: mov     esi, ecx
0x8BAAF8: mov     dword ptr [esi], offset ??_7hkPhantomOverlapListener@@6B@; const hkPhantomOverlapListener::`vftable'
0x8BAAFE: jz      short loc_8BAB09
0x8BAB00: push    esi
0x8BAB01: call    FormHeapFree
0x8BAB06: add     esp, 4
0x8BAB09: mov     eax, esi
0x8BAB0B: pop     esi
0x8BAB0C: retn    4
