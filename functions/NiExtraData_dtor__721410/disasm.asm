0x721410: push    esi
0x721411: mov     esi, ecx
0x721413: mov     eax, [esi+8]
0x721416: push    eax
0x721417: mov     dword ptr [esi], offset ??_7NiExtraData@@6B@; const NiExtraData::`vftable'
0x72141D: call    FormHeapFree
0x721422: add     esp, 4
0x721425: mov     dword ptr [esi+8], 0
0x72142C: mov     ecx, esi
0x72142E: pop     esi
0x72142F: jmp     NiRefObject_destr
