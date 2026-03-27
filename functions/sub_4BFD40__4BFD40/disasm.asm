0x4BFD40: push    20h ; ' '; Size
0x4BFD42: call    FormHeapAlloc
0x4BFD47: xor     ecx, ecx
0x4BFD49: add     esp, 4
0x4BFD4C: cmp     eax, ecx
0x4BFD4E: jz      short loc_4BFD8D
0x4BFD50: mov     edx, [esp+arg_10]
0x4BFD54: mov     [eax], ecx
0x4BFD56: mov     [eax+4], ecx
0x4BFD59: mov     [eax+8], ecx
0x4BFD5C: mov     [eax+0Ch], ecx
0x4BFD5F: mov     [eax+14h], ecx
0x4BFD62: mov     [eax+10h], ecx
0x4BFD65: mov     [eax+18h], ecx
0x4BFD68: mov     [eax+1Ch], ecx
0x4BFD6B: mov     [eax], edx
0x4BFD6D: mov     edx, [esp+arg_0]
0x4BFD71: mov     [eax+4], edx
0x4BFD74: mov     edx, [esp+arg_4]
0x4BFD78: mov     [eax+8], edx
0x4BFD7B: mov     edx, [esp+arg_8]
0x4BFD7F: mov     [eax+0Ch], edx
0x4BFD82: mov     edx, [esp+arg_C]
0x4BFD86: mov     [eax+14h], edx
0x4BFD89: mov     [eax+10h], ecx
0x4BFD8C: retn
0x4BFD8D: xor     eax, eax
0x4BFD8F: retn
