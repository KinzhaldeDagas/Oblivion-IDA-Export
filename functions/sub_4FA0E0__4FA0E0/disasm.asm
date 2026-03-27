0x4FA0E0: mov     eax, [ecx+8]
0x4FA0E3: xor     edx, edx
0x4FA0E5: cmp     eax, edx
0x4FA0E7: jz      short locret_4FA100
0x4FA0E9: lea     esp, [esp+0]
0x4FA0F0: mov     ecx, [eax]
0x4FA0F2: cmp     ecx, edx
0x4FA0F4: jz      short locret_4FA100
0x4FA0F6: mov     eax, [eax+4]
0x4FA0F9: cmp     eax, edx
0x4FA0FB: mov     [ecx+4], edx
0x4FA0FE: jnz     short loc_4FA0F0
0x4FA100: retn
