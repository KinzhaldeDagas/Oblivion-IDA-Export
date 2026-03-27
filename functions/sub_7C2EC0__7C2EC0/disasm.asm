0x7C2EC0: push    ecx
0x7C2EC1: mov     ecx, [esp+4+arg_0]
0x7C2EC5: lea     eax, [esp+4+var_4]
0x7C2EC8: push    eax
0x7C2EC9: push    ecx
0x7C2ECA: mov     ecx, offset off_B2CBC4
0x7C2ECF: mov     [esp+0Ch+var_4], 0
0x7C2ED7: call    NiTMap_GetAt
0x7C2EDC: test    al, al
0x7C2EDE: jz      short loc_7C2EFE
0x7C2EE0: mov     edx, [esp+4+var_4]
0x7C2EE3: mov     eax, [edx+38h]
0x7C2EE6: test    eax, eax
0x7C2EE8: jz      short loc_7C2EFE
0x7C2EEA: mov     edx, [esp+4+arg_4]
0x7C2EEE: mov     edi, edi
0x7C2EF0: cmp     [eax+8], edx
0x7C2EF3: lea     ecx, [eax+8]
0x7C2EF6: mov     eax, [eax]
0x7C2EF8: jz      short loc_7C2F02
0x7C2EFA: test    eax, eax
0x7C2EFC: jnz     short loc_7C2EF0
0x7C2EFE: xor     al, al
0x7C2F00: pop     ecx
0x7C2F01: retn
0x7C2F02: mov     al, 1
0x7C2F04: pop     ecx
0x7C2F05: retn
