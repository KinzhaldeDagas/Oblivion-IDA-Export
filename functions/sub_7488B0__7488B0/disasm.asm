0x7488B0: push    esi
0x7488B1: mov     esi, ecx
0x7488B3: cmp     dword ptr [esi+18h], 0
0x7488B7: mov     dword ptr [esi], offset ??_7NiMemStream@@6B@; const NiMemStream::`vftable'
0x7488BD: jbe     short loc_7488D1
0x7488BF: cmp     byte ptr [esi+1Dh], 0
0x7488C3: jnz     short loc_7488D1
0x7488C5: mov     eax, [esi+0Ch]
0x7488C8: push    eax
0x7488C9: call    FormHeapFree
0x7488CE: add     esp, 4
0x7488D1: mov     ecx, esi
0x7488D3: pop     esi
0x7488D4: jmp     NiBinaryStream_destr
