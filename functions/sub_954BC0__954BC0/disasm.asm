0x954BC0: mov     ecx, [ecx+10h]
0x954BC3: mov     eax, [ecx+0Ch]
0x954BC6: sub     eax, [esp+arg_0]
0x954BCA: test    eax, eax
0x954BCC: jle     short locret_954C09
0x954BCE: cmp     eax, 0FFh
0x954BD3: push    eax
0x954BD4: jge     short loc_954BE0
0x954BD6: push    5
0x954BD8: call    sub_956580
0x954BDD: retn    4
0x954BE0: cmp     eax, 0FFFFh
0x954BE5: jge     short loc_954BF1
0x954BE7: push    6
0x954BE9: call    sub_9565E0
0x954BEE: retn    4
0x954BF1: cmp     eax, 0FFFFFFh
0x954BF6: jge     short loc_954C02
0x954BF8: push    7
0x954BFA: call    sub_956670
0x954BFF: retn    4
0x954C02: push    8
0x954C04: call    sub_9567C0
0x954C09: retn    4
