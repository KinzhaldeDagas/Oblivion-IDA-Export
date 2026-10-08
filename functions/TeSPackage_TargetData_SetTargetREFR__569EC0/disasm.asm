0x569EC0: cmp     byte ptr [ecx], 0; 3DTheft decode: TargetData_SetTargetREFR only writes the reference field when targetType is 0 (reference target). It does not set count.
0x569EC3: jnz     short locret_569ECC
0x569EC5: mov     eax, [esp+arg_0]
0x569EC9: mov     [ecx+4], eax
0x569ECC: retn    4
