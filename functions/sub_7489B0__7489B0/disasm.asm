0x7489B0: push    esi
0x7489B1: mov     esi, ecx
0x7489B3: cmp     dword ptr [esi+18h], 0
0x7489B7: mov     dword ptr [esi], offset ??_7NiMemStream@@6B@; const NiMemStream::`vftable'
0x7489BD: jbe     short loc_7489D1
0x7489BF: cmp     byte ptr [esi+1Dh], 0
0x7489C3: jnz     short loc_7489D1
0x7489C5: mov     eax, [esi+0Ch]
0x7489C8: push    eax
0x7489C9: call    FormHeapFree
0x7489CE: add     esp, 4
0x7489D1: mov     ecx, esi
0x7489D3: call    NiBinaryStream_destr
0x7489D8: test    [esp+4+arg_0], 1
0x7489DD: jz      short loc_7489E8
0x7489DF: push    esi
0x7489E0: call    FormHeapFree
0x7489E5: add     esp, 4
0x7489E8: mov     eax, esi
0x7489EA: pop     esi
0x7489EB: retn    4
