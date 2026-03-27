0x54FE20: mov     eax, ds:0B39B80h
0x54FE25: test    eax, eax
0x54FE27: jz      short locret_54FE64
0x54FE29: cmp     dword ptr [eax+0DACh], 0
0x54FE30: jz      short locret_54FE64
0x54FE32: mov     ecx, [eax+0DACh]
0x54FE38: call    sub_54F840
0x54FE3D: mov     eax, ds:0B39B80h
0x54FE42: mov     ecx, [eax+0DACh]
0x54FE48: test    ecx, ecx
0x54FE4A: jz      short loc_54FE54
0x54FE4C: mov     edx, [ecx]
0x54FE4E: mov     eax, [edx]
0x54FE50: push    1
0x54FE52: call    eax
0x54FE54: mov     ecx, ds:0B39B80h
0x54FE5A: mov     dword ptr [ecx+0DACh], 0
0x54FE64: retn
