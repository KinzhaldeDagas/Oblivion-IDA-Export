0x77EFA0: cmp     dword ptr ds:0B428A8h, 0
0x77EFA7: jz      short locret_77EFCF
0x77EFA9: mov     ecx, [esp+arg_0]
0x77EFAD: test    ecx, ecx
0x77EFAF: jz      short locret_77EFCF
0x77EFB1: mov     eax, [ecx]
0x77EFB3: mov     edx, [eax+4]
0x77EFB6: call    edx
0x77EFB8: test    eax, eax
0x77EFBA: jz      short locret_77EFCF
0x77EFBC: mov     ecx, ds:0B428A8h
0x77EFC2: mov     ecx, [ecx+18h]
0x77EFC5: test    ecx, ecx
0x77EFC7: jz      short locret_77EFCF
0x77EFC9: push    eax
0x77EFCA: call    NiTMap_RemoveAt
0x77EFCF: retn
