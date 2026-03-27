0x589FA0: push    0FFFFFFFFh
0x589FA2: push    offset SEH_589FA0
0x589FA7: mov     eax, large fs:0
0x589FAD: push    eax
0x589FAE: push    ecx
0x589FAF: push    esi
0x589FB0: mov     eax, ds:0B30AACh
0x589FB5: xor     eax, esp
0x589FB7: push    eax
0x589FB8: lea     eax, [esp+18h+var_C]
0x589FBC: mov     large fs:0, eax
0x589FC2: mov     esi, ecx
0x589FC4: mov     [esp+18h+var_10], esi
0x589FC8: lea     ecx, [esi+8]; this
0x589FCB: xor     eax, eax
0x589FCD: mov     [ecx], eax
0x589FCF: mov     [ecx+4], ax
0x589FD3: mov     [ecx+6], ax
0x589FD7: fld     [esp+18h+arg_4]
0x589FDB: mov     edx, [esp+18h+arg_0]
0x589FDF: fstp    dword ptr [esi+4]
0x589FE2: push    eax; a3
0x589FE3: mov     [esp+1Ch+var_4], eax
0x589FE7: mov     eax, [esp+1Ch+a2]
0x589FEB: push    eax; a2
0x589FEC: mov     [esi], edx
0x589FEE: call    BSStringT_Set
0x589FF3: mov     ecx, [esp+18h+arg_C]
0x589FF7: mov     edx, [esp+18h+arg_10]
0x589FFB: mov     [esi+10h], ecx
0x589FFE: mov     [esi+14h], edx
0x58A001: mov     eax, esi
0x58A003: mov     ecx, [esp+18h+var_C]
0x58A007: mov     large fs:0, ecx
0x58A00E: pop     ecx
0x58A00F: pop     esi
0x58A010: add     esp, 10h
0x58A013: retn    14h
