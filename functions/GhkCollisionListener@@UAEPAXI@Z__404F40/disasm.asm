0x404F40: test    byte ptr [esp+arg_0], 1
0x404F45: push    esi
0x404F46: mov     esi, ecx
0x404F48: mov     dword ptr [esi], offset ??_7hkCollisionListener@@6B@; const hkCollisionListener::`vftable'
0x404F4E: jz      short loc_404F59
0x404F50: push    esi
0x404F51: call    FormHeapFree
0x404F56: add     esp, 4
0x404F59: mov     eax, esi
0x404F5B: pop     esi
0x404F5C: retn    4
