0x64ADA0: xor     al, al
0x64ADA2: cmp     dword ptr [ecx+34h], 0
0x64ADA6: jz      short locret_64ADB2
0x64ADA8: mov     ecx, [ecx+34h]
0x64ADAB: mov     eax, [ecx]
0x64ADAD: mov     edx, [eax+2Ch]
0x64ADB0: jmp     edx
0x64ADB2: retn
