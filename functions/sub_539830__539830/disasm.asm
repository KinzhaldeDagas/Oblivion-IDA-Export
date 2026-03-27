0x539830: push    esi
0x539831: mov     esi, ecx
0x539833: call    sub_538C80
0x539838: test    [esp+4+arg_0], 1
0x53983D: jz      short loc_539848
0x53983F: push    esi
0x539840: call    FormHeapFree
0x539845: add     esp, 4
0x539848: mov     eax, esi
0x53984A: pop     esi
0x53984B: retn    4
