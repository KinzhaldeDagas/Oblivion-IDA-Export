0x889450: test    byte ptr [esp+arg_0], 1
0x889455: push    esi
0x889456: mov     esi, ecx
0x889458: mov     dword ptr [esi], offset ??_7hkMemory@@6B@; const hkMemory::`vftable'
0x88945E: jz      short loc_889469
0x889460: push    esi
0x889461: call    FormHeapFree
0x889466: add     esp, 4
0x889469: mov     eax, esi
0x88946B: pop     esi
0x88946C: retn    4
