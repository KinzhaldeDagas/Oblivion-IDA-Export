0x725DB0: test    byte ptr [esp+arg_0], 1
0x725DB5: push    esi
0x725DB6: mov     esi, ecx
0x725DB8: mov     dword ptr [esi], offset ??_7NiGeometryGroupManager@@6B@; const NiGeometryGroupManager::`vftable'
0x725DBE: mov     dword ptr ds:0B3FD8Ch, 0
0x725DC8: jz      short loc_725DD3
0x725DCA: push    esi
0x725DCB: call    FormHeapFree
0x725DD0: add     esp, 4
0x725DD3: mov     eax, esi
0x725DD5: pop     esi
0x725DD6: retn    4
