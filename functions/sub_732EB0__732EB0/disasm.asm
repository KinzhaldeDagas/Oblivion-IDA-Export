0x732EB0: push    esi
0x732EB1: push    edi
0x732EB2: mov     edi, [esp+8+arg_0]
0x732EB6: push    edi
0x732EB7: mov     esi, ecx
0x732EB9: call    sub_7299A0
0x732EBE: mov     eax, [edi+220h]
0x732EC4: mov     edx, [eax+8]
0x732EC7: push    1
0x732EC9: lea     ecx, [esp+0Ch+arg_0]
0x732ECD: push    ecx
0x732ECE: push    2
0x732ED0: add     esi, 40h ; '@'
0x732ED3: push    esi
0x732ED4: push    eax
0x732ED5: mov     [esp+1Ch+arg_0], 2
0x732EDD: call    edx
0x732EDF: add     esp, 14h
0x732EE2: pop     edi
0x732EE3: pop     esi
0x732EE4: retn    4
