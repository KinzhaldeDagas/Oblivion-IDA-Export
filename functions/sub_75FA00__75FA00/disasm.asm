0x75FA00: mov     eax, [ecx+14h]
0x75FA03: mov     edx, [esp+arg_0]
0x75FA07: add     edx, eax
0x75FA09: cmp     ds:0B28CB0h, edx
0x75FA0F: jnb     short loc_75FA16
0x75FA11: xor     al, al
0x75FA13: retn    8
0x75FA16: mov     edx, ds:0B28CB4h
0x75FA1C: push    esi
0x75FA1D: mov     esi, [ecx+1Ch]
0x75FA20: mov     ecx, [esp+4+arg_4]
0x75FA24: add     esi, ecx
0x75FA26: cmp     edx, esi
0x75FA28: pop     esi
0x75FA29: jb      short loc_75FA11
0x75FA2B: add     eax, ecx
0x75FA2D: cmp     edx, eax
0x75FA2F: setnb   al
0x75FA32: retn    8
