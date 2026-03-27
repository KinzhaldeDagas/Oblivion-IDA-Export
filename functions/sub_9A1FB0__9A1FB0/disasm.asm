0x9A1FB0: mov     eax, [ecx+1Ch]
0x9A1FB3: test    eax, eax
0x9A1FB5: jz      short loc_9A1FC5
0x9A1FB7: mov     ecx, [eax+10h]
0x9A1FBA: test    ecx, ecx
0x9A1FBC: jz      short loc_9A1FC5
0x9A1FBE: mov     eax, [ecx]
0x9A1FC0: mov     edx, [eax+0Ch]
0x9A1FC3: jmp     edx
0x9A1FC5: xor     eax, eax
0x9A1FC7: retn
