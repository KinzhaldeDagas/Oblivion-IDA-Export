0x60D0C0: test    byte ptr [esp+arg_0], 1
0x60D0C5: push    esi
0x60D0C6: mov     esi, ecx
0x60D0C8: mov     dword ptr [esi], offset ??_7BaseProcess@@6B@; const BaseProcess::`vftable'
0x60D0CE: jz      short loc_60D0D9
0x60D0D0: push    esi
0x60D0D1: call    FormHeapFree
0x60D0D6: add     esp, 4
0x60D0D9: mov     eax, esi
0x60D0DB: pop     esi
0x60D0DC: retn    4
