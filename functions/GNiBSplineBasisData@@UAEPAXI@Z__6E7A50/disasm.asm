0x6E7A50: push    esi
0x6E7A51: mov     esi, ecx
0x6E7A53: mov     dword ptr [esi], offset ??_7NiBSplineBasisData@@6B@; const NiBSplineBasisData::`vftable'
0x6E7A59: call    NiRefObject_destr
0x6E7A5E: test    byte ptr [esp+4+arg_0], 1
0x6E7A63: jz      short loc_6E7A6E
0x6E7A65: push    esi
0x6E7A66: call    FormHeapFree
0x6E7A6B: add     esp, 4
0x6E7A6E: mov     eax, esi
0x6E7A70: pop     esi
0x6E7A71: retn    4
