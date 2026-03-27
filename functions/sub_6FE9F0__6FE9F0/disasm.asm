0x6FE9F0: push    0FFFFFFFFh
0x6FE9F2: push    offset SEH_8C8900
0x6FE9F7: mov     eax, large fs:0
0x6FE9FD: push    eax
0x6FE9FE: push    ecx
0x6FE9FF: mov     eax, ds:0B30AACh
0x6FEA04: xor     eax, esp
0x6FEA06: push    eax
0x6FEA07: lea     eax, [esp+14h+var_C]
0x6FEA0B: mov     large fs:0, eax
0x6FEA11: push    68h ; 'h'; Size
0x6FEA13: call    FormHeapAlloc
0x6FEA18: add     esp, 4
0x6FEA1B: mov     [esp+14h+var_10], eax
0x6FEA1F: test    eax, eax
0x6FEA21: mov     [esp+14h+var_4], 0
0x6FEA29: jz      short loc_6FEA42
0x6FEA2B: mov     ecx, eax
0x6FEA2D: call    sub_6FE760
0x6FEA32: mov     ecx, [esp+14h+var_C]
0x6FEA36: mov     large fs:0, ecx
0x6FEA3D: pop     ecx
0x6FEA3E: add     esp, 10h
0x6FEA41: retn
0x6FEA42: xor     eax, eax
0x6FEA44: mov     ecx, [esp+14h+var_C]
0x6FEA48: mov     large fs:0, ecx
0x6FEA4F: pop     ecx
0x6FEA50: add     esp, 10h
0x6FEA53: retn
