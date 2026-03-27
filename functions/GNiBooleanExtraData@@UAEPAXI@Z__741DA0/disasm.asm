0x741DA0: push    esi
0x741DA1: mov     esi, ecx
0x741DA3: mov     dword ptr [esi], offset ??_7NiBooleanExtraData@@6B@; const NiBooleanExtraData::`vftable'
0x741DA9: call    NiExtraData_dtor
0x741DAE: test    byte ptr [esp+4+arg_0], 1
0x741DB3: jz      short loc_741DBE
0x741DB5: push    esi
0x741DB6: call    FormHeapFree
0x741DBB: add     esp, 4
0x741DBE: mov     eax, esi
0x741DC0: pop     esi
0x741DC1: retn    4
