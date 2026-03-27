0x489003: fld     dword ptr [ebx+94h]
0x489009: mov     esi, [esi+8]
0x48900C: test    esi, esi
0x48900E: mov     [esp+arg_10], eax
0x489012: fimul   [esp+arg_10]
0x489016: fadd    [esp+arg_C]
0x48901A: fstp    [esp+arg_C]
0x48901E: jz      loc_488EF4
0x489024: add     esi, 0FFFFFFFCh
0x489027: jnz     short sub_488FD3
0x489029: jmp     loc_488EF4
