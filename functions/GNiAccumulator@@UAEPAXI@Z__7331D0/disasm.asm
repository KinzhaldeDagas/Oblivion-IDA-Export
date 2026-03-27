0x7331D0: push    esi
0x7331D1: mov     esi, ecx
0x7331D3: mov     dword ptr [esi], offset ??_7NiAccumulator@@6B@; const NiAccumulator::`vftable'
0x7331D9: call    NiRefObject_destr
0x7331DE: test    byte ptr [esp+4+arg_0], 1
0x7331E3: jz      short loc_7331EE
0x7331E5: push    esi
0x7331E6: call    FormHeapFree
0x7331EB: add     esp, 4
0x7331EE: mov     eax, esi
0x7331F0: pop     esi
0x7331F1: retn    4
