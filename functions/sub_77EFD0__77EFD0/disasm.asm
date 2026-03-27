0x77EFD0: cmp     dword ptr ds:0B428A8h, 0
0x77EFD7: jz      short locret_77EFFF
0x77EFD9: mov     ecx, [esp+arg_0]
0x77EFDD: test    ecx, ecx
0x77EFDF: jz      short locret_77EFFF
0x77EFE1: mov     eax, [ecx]
0x77EFE3: mov     edx, [eax+4]
0x77EFE6: call    edx
0x77EFE8: test    eax, eax
0x77EFEA: jz      short locret_77EFFF
0x77EFEC: mov     ecx, ds:0B428A8h
0x77EFF2: mov     ecx, [ecx+1Ch]
0x77EFF5: test    ecx, ecx
0x77EFF7: jz      short locret_77EFFF
0x77EFF9: push    eax
0x77EFFA: call    NiTMap_RemoveAt
0x77EFFF: retn
