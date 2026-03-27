0x405AA0: test    [esp+arg_0], 1
0x405AA5: push    esi
0x405AA6: mov     esi, ecx
0x405AA8: mov     dword_BA7A00, 0
0x405AB2: mov     dword ptr [esi], offset ??_7hkCollisionListener@@6B@; const hkCollisionListener::`vftable'
0x405AB8: jz      short loc_405AC3
0x405ABA: push    esi
0x405ABB: call    FormHeapFree
0x405AC0: add     esp, 4
0x405AC3: mov     eax, esi
0x405AC5: pop     esi
0x405AC6: retn    4
