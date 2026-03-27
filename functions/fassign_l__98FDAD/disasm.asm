0x98FDAD: push    ebp
0x98FDAE: mov     ebp, esp
0x98FDB0: push    ecx
0x98FDB1: push    ecx
0x98FDB2: cmp     [ebp+arg_0], 0
0x98FDB6: push    [ebp+arg_C]; struct localeinfo_struct *
0x98FDB9: push    [ebp+arg_8]; int
0x98FDBC: jz      short loc_98FDD7
0x98FDBE: lea     eax, [ebp+var_8]
0x98FDC1: push    eax; int
0x98FDC2: call    sub_99DF41
0x98FDC7: mov     ecx, [ebp+var_8]
0x98FDCA: mov     eax, [ebp+arg_4]
0x98FDCD: mov     [eax], ecx
0x98FDCF: mov     ecx, [ebp+var_4]
0x98FDD2: mov     [eax+4], ecx
0x98FDD5: jmp     short loc_98FDE8
0x98FDD7: lea     eax, [ebp+arg_0]
0x98FDDA: push    eax; int
0x98FDDB: call    sub_99DFE7
0x98FDE0: mov     eax, [ebp+arg_4]
0x98FDE3: mov     ecx, [ebp+arg_0]
0x98FDE6: mov     [eax], ecx
0x98FDE8: add     esp, 0Ch
0x98FDEB: leave
0x98FDEC: retn
