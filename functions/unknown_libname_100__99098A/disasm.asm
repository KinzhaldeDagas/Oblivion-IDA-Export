0x99098A: cmp     dword_BA9DDC, 0
0x990991: jnz     short unknown_libname_100___unknown_libname_102
0x990993: fst     qword ptr [ebp-2D0h]
0x990999: mov     al, [ebp-90h]
0x99099F: or      al, al
0x9909A1: jz      short unknown_libname_100___unknown_libname_101
0x9909A3: cmp     al, 0FFh
0x9909A5: jz      short unknown_libname_100___unknown_libname_104
0x9909A7: cmp     al, 0FEh ; 'þ'
0x9909A9: jz      short unknown_libname_100___unknown_libname_103
0x9909AB: or      al, al
0x9909AD: jz      short unknown_libname_100___unknown_libname_102
0x9909AF: movsx   eax, al
0x9909B2: mov     [ebp-8Eh], eax
0x9909B8: jmp     unknown_libname_100___unknown_libname_107
