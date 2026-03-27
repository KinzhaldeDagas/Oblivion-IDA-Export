0x494E90: push    edi
0x494E91: mov     edi, [esp+4+arg_0]
0x494E95: or      eax, 0FFFFFFFFh
0x494E98: test    edi, edi
0x494E9A: jz      short loc_494EC6
0x494E9C: push    esi
0x494E9D: mov     esi, [ecx+0Ch]
0x494EA0: test    esi, esi
0x494EA2: jz      short loc_494EC5
0x494EA4: xor     edx, edx
0x494EA6: test    esi, esi
0x494EA8: jbe     short loc_494EC5
0x494EAA: mov     ecx, [ecx+4]
0x494EAD: lea     ecx, [ecx+0]
0x494EB0: cmp     [ecx], edi
0x494EB2: jz      short loc_494EC3
0x494EB4: add     edx, 1
0x494EB7: add     ecx, 4
0x494EBA: cmp     edx, esi
0x494EBC: jb      short loc_494EB0
0x494EBE: pop     esi
0x494EBF: pop     edi
0x494EC0: retn    4
0x494EC3: mov     eax, edx
0x494EC5: pop     esi
0x494EC6: pop     edi
0x494EC7: retn    4
