0x990B04: push    ebp
0x990B05: mov     ebp, esp
0x990B07: add     esp, 0FFFFFFF4h
0x990B0A: push    ebx
0x990B0B: mov     ax, [ebp+arg_6]
0x990B0F: mov     bx, ax
0x990B12: and     ax, 7FF0h
0x990B16: cmp     ax, 7FF0h
0x990B1A: jnz     short unknown_libname_111___unknown_libname_112
0x990B1C: or      bx, 7FFFh
0x990B21: mov     word ptr [ebp+var_A+8], bx
0x990B25: mov     eax, [ebp+0Ch]
0x990B28: mov     ebx, [ebp+arg_0]
0x990B2B: shld    eax, ebx, 0Bh
0x990B2F: mov     dword ptr [ebp+var_A+4], eax
0x990B32: mov     dword ptr [ebp+var_A], ebx
0x990B35: fld     [ebp+var_A]
0x990B38: jmp     short unknown_libname_111___unknown_libname_113
