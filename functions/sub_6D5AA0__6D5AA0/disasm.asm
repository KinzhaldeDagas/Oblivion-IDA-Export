0x6D5AA0: mov     ax, [esp+arg_0]
0x6D5AA5: test    ax, ax
0x6D5AA8: jnz     short loc_6D5AB2
0x6D5AAA: mov     eax, 1
0x6D5AAF: retn    4
0x6D5AB2: cmp     ax, 1
0x6D5AB6: jnz     short loc_6D5AC0
0x6D5AB8: mov     eax, 2
0x6D5ABD: retn    4
0x6D5AC0: sub     ax, 2
0x6D5AC4: neg     ax
0x6D5AC7: sbb     eax, eax
0x6D5AC9: and     eax, 6
0x6D5ACC: retn    4
