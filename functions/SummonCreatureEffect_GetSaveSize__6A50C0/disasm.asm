0x6A50C0: mov     eax, [esp+arg_0]
0x6A50C4: push    esi
0x6A50C5: push    eax
0x6A50C6: mov     esi, ecx
0x6A50C8: call    AssociatedItemEffect_GetSaveSize
0x6A50CD: add     ax, 5
0x6A50D1: cmp     dword ptr [esi+3Ch], 0
0x6A50D5: movzx   eax, ax
0x6A50D8: pop     esi
0x6A50D9: jnz     short locret_6A50DE
0x6A50DB: add     eax, 1Ch
0x6A50DE: retn    4
