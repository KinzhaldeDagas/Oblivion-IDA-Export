0x412200: test    byte ptr [esp+arg_0], 1
0x412205: push    esi
0x412206: mov     esi, ecx
0x412208: mov     dword ptr [esi], offset ??_7SeenData@@6B@; const SeenData::`vftable'
0x41220E: jz      short loc_412219
0x412210: push    esi
0x412211: call    FormHeapFree
0x412216: add     esp, 4
0x412219: mov     eax, esi
0x41221B: pop     esi
0x41221C: retn    4
