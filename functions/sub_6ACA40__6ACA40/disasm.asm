0x6ACA40: push    ecx
0x6ACA41: mov     edx, [esp+4+arg_0]
0x6ACA45: mov     ecx, [ecx+300h]
0x6ACA4B: lea     eax, [esp+4+var_4]
0x6ACA4E: push    eax
0x6ACA4F: push    edx
0x6ACA50: mov     [esp+0Ch+var_4], 0
0x6ACA58: call    NiTMap_GetAt
0x6ACA5D: xor     eax, eax
0x6ACA5F: cmp     [esp+4+var_4], eax
0x6ACA62: setnz   al
0x6ACA65: pop     ecx
0x6ACA66: retn    4
