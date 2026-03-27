0x717630: mov     eax, [ecx+0B4h]
0x717636: mov     ecx, [eax+1Ch]
0x717639: mov     edx, [eax+48h]
0x71763C: mov     eax, [esp+arg_0]
0x717640: push    esi
0x717641: lea     eax, [eax+eax*2]
0x717644: movzx   eax, ax
0x717647: movzx   esi, ax
0x71764A: movzx   esi, word ptr [edx+esi*2]
0x71764E: lea     esi, [esi+esi*2]
0x717651: lea     esi, [ecx+esi*4]
0x717654: push    edi
0x717655: mov     edi, [esp+8+arg_4]
0x717659: mov     [edi], esi
0x71765B: mov     edi, [esp+8+arg_8]
0x71765F: add     eax, 1
0x717662: movzx   esi, ax
0x717665: movzx   esi, word ptr [edx+esi*2]
0x717669: add     eax, 1
0x71766C: lea     esi, [esi+esi*2]
0x71766F: lea     esi, [ecx+esi*4]
0x717672: movzx   eax, ax
0x717675: mov     [edi], esi
0x717677: movzx   eax, word ptr [edx+eax*2]
0x71767B: lea     edx, [eax+eax*2]
0x71767E: lea     eax, [ecx+edx*4]
0x717681: mov     ecx, [esp+8+arg_C]
0x717685: pop     edi
0x717686: mov     [ecx], eax
0x717688: pop     esi
0x717689: retn    10h
