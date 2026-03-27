0x6AF790: mov     eax, [ecx]
0x6AF792: mov     edx, [ecx+0Ch]
0x6AF795: push    esi
0x6AF796: mov     esi, [esp+4+arg_0]
0x6AF79A: mov     [edx+eax*4], esi
0x6AF79D: mov     eax, [ecx]
0x6AF79F: add     eax, 1
0x6AF7A2: and     eax, 0FFFh
0x6AF7A7: mov     [ecx], eax
0x6AF7A9: pop     esi
0x6AF7AA: retn    4
