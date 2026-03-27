0x98BD5E: mov     ecx, [esp+Mask]
0x98BD62: mov     eax, dword_B310A8
0x98BD67: mov     edx, [esp+Flags]
0x98BD6B: and     edx, [esp+Mask]
0x98BD6F: not     ecx
0x98BD71: and     ecx, eax
0x98BD73: or      ecx, edx
0x98BD75: mov     dword_B310A8, ecx
0x98BD7B: retn
