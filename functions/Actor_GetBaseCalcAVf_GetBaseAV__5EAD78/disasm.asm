0x5EAD78: mov     edx, [edi]
0x5EAD7A: mov     eax, [edx+128h]
0x5EAD80: push    ebp
0x5EAD81: mov     ecx, edi
0x5EAD83: call    eax
0x5EAD85: mov     [esp+4+arg_14], eax
0x5EAD89: fild    [esp+4+arg_14]
0x5EAD8D: pop     edi
0x5EAD8E: pop     ebx
0x5EAD8F: pop     esi
0x5EAD90: fadd    [esp-8+arg_C]
0x5EAD94: pop     ebp
0x5EAD95: fmul    [esp-0Ch+arg_8]
0x5EAD98: fstp    [esp-0Ch+arg_14]
0x5EAD9C: fld     [esp-0Ch+arg_14]
0x5EADA0: add     esp, 8
0x5EADA3: retn    4
