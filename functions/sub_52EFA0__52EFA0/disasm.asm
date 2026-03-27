0x52EFA0: lea     eax, [ecx+28h]
0x52EFA3: test    eax, eax
0x52EFA5: jz      short loc_52EFCA
0x52EFA7: mov     edx, [esp+arg_0]
0x52EFAB: jmp     short loc_52EFB0
0x52EFAD: align 10h
0x52EFB0: mov     ecx, [eax]
0x52EFB2: test    ecx, ecx
0x52EFB4: jz      short loc_52EFCA
0x52EFB6: cmp     [ecx], edx
0x52EFB8: mov     eax, [eax+4]
0x52EFBB: jnz     short loc_52EFC6
0x52EFBD: test    edx, edx
0x52EFBF: jnz     short loc_52EFCF
0x52EFC1: cmp     [ecx+1Ch], edx
0x52EFC4: jz      short loc_52EFCF
0x52EFC6: test    eax, eax
0x52EFC8: jnz     short loc_52EFB0
0x52EFCA: xor     eax, eax
0x52EFCC: retn    4
0x52EFCF: lea     eax, [ecx+4]
0x52EFD2: retn    4
