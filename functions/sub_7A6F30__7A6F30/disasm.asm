0x7A6F30: push    esi
0x7A6F31: mov     esi, ecx
0x7A6F33: cmp     byte ptr [esi+10h], 0
0x7A6F37: mov     dword ptr [esi], offset ??_7PosGen@@6B@; const PosGen::`vftable'
0x7A6F3D: jnz     short loc_7A6F54
0x7A6F3F: mov     eax, [esi+8]
0x7A6F42: push    eax
0x7A6F43: call    FormHeapFree
0x7A6F48: mov     ecx, [esi+0Ch]
0x7A6F4B: push    ecx
0x7A6F4C: call    FormHeapFree
0x7A6F51: add     esp, 8
0x7A6F54: test    [esp+4+arg_0], 1
0x7A6F59: mov     dword ptr [esi], offset ??_7Random@@6B@; const Random::`vftable'
0x7A6F5F: jz      short loc_7A6F6A
0x7A6F61: push    esi
0x7A6F62: call    FormHeapFree
0x7A6F67: add     esp, 4
0x7A6F6A: mov     eax, esi
0x7A6F6C: pop     esi
0x7A6F6D: retn    4
