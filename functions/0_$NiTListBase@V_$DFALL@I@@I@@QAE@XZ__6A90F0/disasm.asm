0x6A90F0: test    [esp+arg_0], 1
0x6A90F5: push    esi
0x6A90F6: mov     esi, ecx
0x6A90F8: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@I@@I@@6B@; const NiTListBase<DFALL<uint>,uint>::`vftable'
0x6A90FE: jz      short loc_6A9109
0x6A9100: push    esi
0x6A9101: call    FormHeapFree
0x6A9106: add     esp, 4
0x6A9109: mov     eax, esi
0x6A910B: pop     esi
0x6A910C: retn    4
