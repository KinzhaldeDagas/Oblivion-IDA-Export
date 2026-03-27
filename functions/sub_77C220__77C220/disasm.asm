0x77C220: push    esi
0x77C221: mov     esi, ecx
0x77C223: mov     eax, [esi+8]
0x77C226: push    eax
0x77C227: mov     dword ptr [esi], offset ??_7NiD3DGlobalConstantEntry@@6B@; const NiD3DGlobalConstantEntry::`vftable'
0x77C22D: call    FormHeapFree
0x77C232: mov     ecx, [esi+18h]
0x77C235: push    ecx
0x77C236: call    FormHeapFree
0x77C23B: add     esp, 8
0x77C23E: push    offset NiRefObject_objcount; lpAddend
0x77C243: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x77C249: call    dword ptr ds:0A2807Ch
0x77C24F: test    [esp+4+arg_0], 1
0x77C254: jz      short loc_77C25F
0x77C256: push    esi
0x77C257: call    FormHeapFree
0x77C25C: add     esp, 4
0x77C25F: mov     eax, esi
0x77C261: pop     esi
0x77C262: retn    4
