0x7A6F70: push    esi
0x7A6F71: mov     esi, ecx
0x7A6F73: mov     dword ptr [esi], offset ??_7Normal@@6B@; const Normal::`vftable'
0x7A6F79: sub     dword ptr ds:0B42C9Ch, 1
0x7A6F80: jz      short loc_7A6F86
0x7A6F82: mov     byte ptr [esi+10h], 1
0x7A6F86: cmp     byte ptr [esi+10h], 0
0x7A6F8A: mov     dword ptr [esi], offset ??_7PosGen@@6B@; const PosGen::`vftable'
0x7A6F90: jnz     short loc_7A6FA7
0x7A6F92: mov     eax, [esi+8]
0x7A6F95: push    eax
0x7A6F96: call    FormHeapFree
0x7A6F9B: mov     ecx, [esi+0Ch]
0x7A6F9E: push    ecx
0x7A6F9F: call    FormHeapFree
0x7A6FA4: add     esp, 8
0x7A6FA7: test    [esp+4+arg_0], 1
0x7A6FAC: mov     dword ptr [esi], offset ??_7Random@@6B@; const Random::`vftable'
0x7A6FB2: jz      short loc_7A6FBD
0x7A6FB4: push    esi
0x7A6FB5: call    FormHeapFree
0x7A6FBA: add     esp, 4
0x7A6FBD: mov     eax, esi
0x7A6FBF: pop     esi
0x7A6FC0: retn    4
