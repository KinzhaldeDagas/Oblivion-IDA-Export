0x71FCC0: movzx   eax, [esp+arg_0]
0x71FCC5: mov     edx, [ecx+48h]
0x71FCC8: lea     eax, [eax+eax*2]
0x71FCCB: movzx   edx, word ptr [edx+eax*2]
0x71FCCF: push    esi
0x71FCD0: mov     esi, [esp+4+arg_4]
0x71FCD4: mov     [esi], dx
0x71FCD7: mov     edx, [ecx+48h]
0x71FCDA: movzx   edx, word ptr [edx+eax*2+2]
0x71FCDF: mov     esi, [esp+4+arg_8]
0x71FCE3: mov     [esi], dx
0x71FCE6: mov     ecx, [ecx+48h]
0x71FCE9: movzx   edx, word ptr [ecx+eax*2+4]
0x71FCEE: mov     eax, [esp+4+arg_C]
0x71FCF2: mov     [eax], dx
0x71FCF5: pop     esi
0x71FCF6: retn    10h
