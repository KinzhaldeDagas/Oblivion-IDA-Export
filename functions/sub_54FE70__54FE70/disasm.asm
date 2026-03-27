0x54FE70: mov     eax, ds:0B39B80h
0x54FE75: test    eax, eax
0x54FE77: jz      short locret_54FE8D
0x54FE79: cmp     dword ptr [eax+0DACh], 0
0x54FE80: jz      short locret_54FE8D
0x54FE82: mov     ecx, [eax+0DACh]
0x54FE88: jmp     loc_54F9C0
0x54FE8D: retn
