0x794730: push    ecx
0x794731: push    esi
0x794732: mov     esi, ecx
0x794734: mov     eax, [esi+6Ch]
0x794737: test    eax, eax
0x794739: jz      short loc_794745
0x79473B: mov     ecx, [esi+70h]
0x79473E: sub     ecx, eax
0x794740: sar     ecx, 2
0x794743: jnz     short loc_79474A
0x794745: call    __invalid_parameter_noinfo
0x79474A: mov     eax, [esp+8+arg_0]
0x79474E: lea     edx, [eax+eax*2]
0x794751: mov     eax, [esi+6Ch]
0x794754: lea     eax, [eax+edx*4]
0x794757: pop     esi
0x794758: pop     ecx
0x794759: retn    4
