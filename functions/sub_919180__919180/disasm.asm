0x919180: test    [esp+arg_0], 1
0x919185: push    esi
0x919186: mov     esi, ecx
0x919188: mov     dword ptr [esi], offset off_A9D2B4
0x91918E: jz      short loc_919199
0x919190: push    esi
0x919191: call    FormHeapFree
0x919196: add     esp, 4
0x919199: mov     eax, esi
0x91919B: pop     esi
0x91919C: retn    4
