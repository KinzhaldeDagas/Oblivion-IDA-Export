0x614190: mov     eax, [esp+arg_0]
0x614194: mov     ecx, [esp+arg_4]
0x614198: mov     eax, [eax+4]
0x61419B: mov     ecx, [ecx+4]
0x61419E: cmp     eax, ecx
0x6141A0: jle     short loc_6141A6
0x6141A2: or      eax, 0FFFFFFFFh
0x6141A5: retn
0x6141A6: xor     edx, edx
0x6141A8: cmp     eax, ecx
0x6141AA: setl    dl
0x6141AD: mov     eax, edx
0x6141AF: retn
