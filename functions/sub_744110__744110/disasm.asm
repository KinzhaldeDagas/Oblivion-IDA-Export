0x744110: mov     ecx, [esi+30h]
0x744113: mov     eax, [esi+64h]
0x744116: push    ebp
0x744117: mov     ebp, [esp+4+arg_0]
0x74411B: mov     dl, [ecx+ebp]
0x74411E: add     eax, ecx
0x744120: add     ecx, ebp
0x744122: cmp     dl, [eax]
0x744124: push    edi
0x744125: lea     edi, [eax+102h]
0x74412B: jnz     loc_7441CA
0x744131: mov     dl, [ecx+1]
0x744134: cmp     dl, [eax+1]
0x744137: jnz     loc_7441CA
0x74413D: add     eax, 2
0x744140: add     ecx, 2
0x744143: mov     dl, [eax+1]
0x744146: add     eax, 1
0x744149: add     ecx, 1
0x74414C: cmp     dl, [ecx]
0x74414E: jnz     short loc_7441AF
0x744150: mov     dl, [eax+1]
0x744153: add     eax, 1
0x744156: add     ecx, 1
0x744159: cmp     dl, [ecx]
0x74415B: jnz     short loc_7441AF
0x74415D: mov     dl, [eax+1]
0x744160: add     eax, 1
0x744163: add     ecx, 1
0x744166: cmp     dl, [ecx]
0x744168: jnz     short loc_7441AF
0x74416A: mov     dl, [eax+1]
0x74416D: add     eax, 1
0x744170: add     ecx, 1
0x744173: cmp     dl, [ecx]
0x744175: jnz     short loc_7441AF
0x744177: mov     dl, [eax+1]
0x74417A: add     eax, 1
0x74417D: add     ecx, 1
0x744180: cmp     dl, [ecx]
0x744182: jnz     short loc_7441AF
0x744184: mov     dl, [eax+1]
0x744187: add     eax, 1
0x74418A: add     ecx, 1
0x74418D: cmp     dl, [ecx]
0x74418F: jnz     short loc_7441AF
0x744191: mov     dl, [eax+1]
0x744194: add     eax, 1
0x744197: add     ecx, 1
0x74419A: cmp     dl, [ecx]
0x74419C: jnz     short loc_7441AF
0x74419E: mov     dl, [eax+1]
0x7441A1: add     eax, 1
0x7441A4: add     ecx, 1
0x7441A7: cmp     dl, [ecx]
0x7441A9: jnz     short loc_7441AF
0x7441AB: cmp     eax, edi
0x7441AD: jb      short loc_744143
0x7441AF: sub     eax, edi
0x7441B1: add     eax, 102h
0x7441B6: cmp     eax, 3
0x7441B9: jl      short loc_7441CA
0x7441BB: mov     ecx, [esi+6Ch]
0x7441BE: cmp     eax, ecx
0x7441C0: mov     [esi+68h], ebp
0x7441C3: jbe     short loc_7441CF
0x7441C5: pop     edi
0x7441C6: mov     eax, ecx
0x7441C8: pop     ebp
0x7441C9: retn
0x7441CA: mov     eax, 2
0x7441CF: pop     edi
0x7441D0: pop     ebp
0x7441D1: retn
