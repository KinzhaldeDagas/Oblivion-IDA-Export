0x7A6E00: push    esi
0x7A6E01: mov     esi, ecx
0x7A6E03: mov     eax, 1
0x7A6E08: mov     dword ptr [esi], offset ??_7Normal@@6B@; const Normal::`vftable'
0x7A6E0E: sub     ds:0B42C9Ch, eax
0x7A6E14: jz      short loc_7A6E19
0x7A6E16: mov     [esi+10h], al
0x7A6E19: cmp     byte ptr [esi+10h], 0
0x7A6E1D: mov     dword ptr [esi], offset ??_7PosGen@@6B@; const PosGen::`vftable'
0x7A6E23: jnz     short loc_7A6E3A
0x7A6E25: mov     eax, [esi+8]
0x7A6E28: push    eax
0x7A6E29: call    FormHeapFree
0x7A6E2E: mov     ecx, [esi+0Ch]
0x7A6E31: push    ecx
0x7A6E32: call    FormHeapFree
0x7A6E37: add     esp, 8
0x7A6E3A: mov     dword ptr [esi], offset ??_7Random@@6B@; const Random::`vftable'
0x7A6E40: pop     esi
0x7A6E41: retn
