0x6DAC40: mov     ecx, [ecx+18h]
0x6DAC43: xor     eax, eax
0x6DAC45: test    ecx, ecx
0x6DAC47: jz      short loc_6DAC6A
0x6DAC49: mov     eax, [ecx+8]
0x6DAC4C: mov     edx, [esp+arg_0]
0x6DAC50: mov     [edx], eax
0x6DAC52: mov     eax, [ecx+10h]
0x6DAC55: mov     edx, [esp+arg_4]
0x6DAC59: mov     [edx], eax
0x6DAC5B: mov     al, [ecx+14h]
0x6DAC5E: mov     edx, [esp+arg_8]
0x6DAC62: mov     [edx], al
0x6DAC64: mov     eax, [ecx+0Ch]
0x6DAC67: retn    0Ch
0x6DAC6A: mov     ecx, [esp+arg_0]
0x6DAC6E: mov     edx, [esp+arg_4]
0x6DAC72: mov     [ecx], eax
0x6DAC74: mov     ecx, [esp+arg_8]
0x6DAC78: mov     [edx], eax
0x6DAC7A: mov     [ecx], al
0x6DAC7C: retn    0Ch
