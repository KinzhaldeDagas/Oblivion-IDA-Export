0x533D00: cmp     dword ptr [ecx+8], 0
0x533D04: mov     eax, 1
0x533D09: jz      short locret_533D21
0x533D0B: mov     edx, [esp+arg_4]
0x533D0F: mov     ecx, [ecx+8]
0x533D12: mov     eax, [ecx]
0x533D14: mov     eax, [eax+0Ch]
0x533D17: push    edx
0x533D18: mov     edx, [esp+4+arg_0]
0x533D1C: push    edx
0x533D1D: call    eax
0x533D1F: xor     eax, eax
0x533D21: retn    8
