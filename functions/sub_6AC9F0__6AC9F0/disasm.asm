0x6AC9F0: push    ecx
0x6AC9F1: push    esi
0x6AC9F2: mov     esi, ecx
0x6AC9F4: mov     ecx, [esp+8+arg_0]
0x6AC9F8: lea     eax, [esp+8+var_4]
0x6AC9FC: push    eax
0x6AC9FD: push    ecx
0x6AC9FE: mov     ecx, [esi+300h]
0x6ACA04: mov     [esp+10h+var_4], 0
0x6ACA0C: call    NiTMap_GetAt
0x6ACA11: mov     eax, [esp+8+var_4]
0x6ACA15: test    eax, eax
0x6ACA17: mov     [esp+8+arg_0], eax
0x6ACA1B: jnz     short loc_6ACA27
0x6ACA1D: mov     eax, 80004005h
0x6ACA22: pop     esi
0x6ACA23: pop     ecx
0x6ACA24: retn    4
0x6ACA27: lea     edx, [esp+8+arg_0]
0x6ACA2B: push    edx
0x6ACA2C: mov     ecx, esi
0x6ACA2E: call    sub_6AA9C0
0x6ACA33: pop     esi
0x6ACA34: pop     ecx
0x6ACA35: retn    4
