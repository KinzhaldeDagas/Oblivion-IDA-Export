0x4691B0: mov     ecx, [esp+arg_0]
0x4691B4: xor     eax, eax
0x4691B6: test    ecx, ecx
0x4691B8: jz      short locret_4691CF
0x4691BA: movzx   edx, byte ptr [ecx+4]
0x4691BE: sub     edx, 14h
0x4691C1: jz      short loc_4691CC
0x4691C3: sub     edx, 2
0x4691C6: jnz     short locret_4691CF
0x4691C8: lea     eax, [ecx+5Ch]
0x4691CB: retn
0x4691CC: lea     eax, [ecx+64h]
0x4691CF: retn
