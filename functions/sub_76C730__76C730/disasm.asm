0x76C730: push    esi
0x76C731: mov     esi, ecx
0x76C733: cmp     dword ptr [esi+30h], 0
0x76C737: jnz     short loc_76C741
0x76C739: call    sub_772DF0
0x76C73E: mov     [esi+30h], eax
0x76C741: mov     eax, [esp+4+arg_8]
0x76C745: mov     ecx, [esp+4+arg_4]
0x76C749: mov     edx, [esp+4+arg_0]
0x76C74D: push    eax
0x76C74E: push    ecx
0x76C74F: mov     ecx, [esi+30h]
0x76C752: push    edx
0x76C753: call    sub_772CD0
0x76C758: pop     esi
0x76C759: retn    0Ch
