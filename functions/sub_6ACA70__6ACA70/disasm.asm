0x6ACA70: push    ecx
0x6ACA71: cmp     byte ptr ds:0B16178h, 0
0x6ACA78: jz      short loc_6ACAA5
0x6ACA7A: mov     edx, [esp+4+arg_0]
0x6ACA7E: mov     ecx, [ecx+300h]
0x6ACA84: lea     eax, [esp+4+var_4]
0x6ACA87: push    eax
0x6ACA88: push    edx
0x6ACA89: mov     [esp+0Ch+var_4], 0
0x6ACA91: call    NiTMap_GetAt
0x6ACA96: mov     eax, [esp+4+var_4]
0x6ACA99: test    eax, eax
0x6ACA9B: jz      short loc_6ACAA5
0x6ACA9D: mov     ax, [eax+1Ch]
0x6ACAA1: pop     ecx
0x6ACAA2: retn    4
0x6ACAA5: xor     ax, ax
0x6ACAA8: pop     ecx
0x6ACAA9: retn    4
