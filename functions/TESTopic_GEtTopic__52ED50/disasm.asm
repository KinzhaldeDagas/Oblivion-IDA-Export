0x52ED50: mov     eax, [esp+arg_4]
0x52ED54: test    eax, eax
0x52ED56: jge     short loc_52ED5B
0x52ED58: xor     eax, eax
0x52ED5A: retn
0x52ED5B: mov     ecx, [esp+arg_0]
0x52ED5F: cmp     eax, ds:0B110F4h[ecx*4]
0x52ED66: jge     short loc_52ED58
0x52ED68: mov     ecx, ds:0B111B8h[ecx*4]
0x52ED6F: lea     eax, [eax+eax*2]
0x52ED72: mov     eax, [ecx+eax*4]
0x52ED75: retn
