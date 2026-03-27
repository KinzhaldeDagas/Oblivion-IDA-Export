0x55A0A0: test    byte ptr [esp+arg_0], 1
0x55A0A5: push    esi
0x55A0A6: mov     esi, ecx
0x55A0A8: mov     dword ptr [esi], offset ??_7BSFaceGenMorph@@6B@; const BSFaceGenMorph::`vftable'
0x55A0AE: jz      short loc_55A0B9
0x55A0B0: push    esi
0x55A0B1: call    FormHeapFree
0x55A0B6: add     esp, 4
0x55A0B9: mov     eax, esi
0x55A0BB: pop     esi
0x55A0BC: retn    4
