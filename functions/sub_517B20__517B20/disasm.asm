0x517B20: mov     eax, [esp+arg_0]
0x517B24: mov     eax, [eax]
0x517B26: test    eax, eax
0x517B28: jz      short loc_517B46
0x517B2A: mov     ecx, [ecx]
0x517B2C: test    ecx, ecx
0x517B2E: jz      short loc_517B46
0x517B30: push    eax; Str2
0x517B31: push    ecx; Str1
0x517B32: call    __strcmp
0x517B37: xor     edx, edx
0x517B39: add     esp, 8
0x517B3C: test    eax, eax
0x517B3E: setnz   dl
0x517B41: mov     al, dl
0x517B43: retn    4
0x517B46: xor     ecx, ecx
0x517B48: test    eax, eax
0x517B4A: setz    cl
0x517B4D: xor     edx, edx
0x517B4F: lea     ecx, [ecx+ecx-1]
0x517B53: mov     eax, ecx
0x517B55: test    eax, eax
0x517B57: setnz   dl
0x517B5A: mov     al, dl
0x517B5C: retn    4
