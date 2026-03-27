0x69FBD0: push    esi
0x69FBD1: mov     esi, ecx
0x69FBD3: call    sub_69FA60
0x69FBD8: test    [esp+4+arg_0], 1
0x69FBDD: jz      short loc_69FBE8
0x69FBDF: push    esi
0x69FBE0: call    FormHeapFree
0x69FBE5: add     esp, 4
0x69FBE8: mov     eax, esi
0x69FBEA: pop     esi
0x69FBEB: retn    4
