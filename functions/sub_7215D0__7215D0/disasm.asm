0x7215D0: push    esi
0x7215D1: mov     esi, ecx
0x7215D3: mov     eax, [esi+8]
0x7215D6: push    eax
0x7215D7: mov     dword ptr [esi], offset ??_7NiExtraData@@6B@; const NiExtraData::`vftable'
0x7215DD: call    FormHeapFree
0x7215E2: add     esp, 4
0x7215E5: mov     ecx, esi
0x7215E7: mov     dword ptr [esi+8], 0
0x7215EE: call    NiRefObject_destr
0x7215F3: test    [esp+4+arg_0], 1
0x7215F8: jz      short loc_721603
0x7215FA: push    esi
0x7215FB: call    FormHeapFree
0x721600: add     esp, 4
0x721603: mov     eax, esi
0x721605: pop     esi
0x721606: retn    4
