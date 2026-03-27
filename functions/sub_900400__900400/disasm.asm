0x900400: test    [esp+arg_0], 1
0x900405: push    esi
0x900406: mov     esi, ecx
0x900408: mov     dword ptr [esi], offset ??_7hkRayHitCollector@@6B@; const hkRayHitCollector::`vftable'
0x90040E: jz      short loc_900419
0x900410: push    esi
0x900411: call    FormHeapFree
0x900416: add     esp, 4
0x900419: mov     eax, esi
0x90041B: pop     esi
0x90041C: retn    4
