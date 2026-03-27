0x989500: mov     eax, [ecx]
0x989502: mov     edx, 7EFEFEFFh
0x989507: add     edx, eax
0x989509: xor     eax, 0FFFFFFFFh
0x98950C: xor     eax, edx
0x98950E: add     ecx, 4
0x989511: test    eax, 81010100h
0x989516: jz      short _strlen___main_loop_3
0x989518: mov     eax, [ecx-4]
0x98951B: test    al, al
0x98951D: jz      short loc_989551
0x98951F: test    ah, ah
0x989521: jz      short loc_989547
0x989523: test    eax, 0FF0000h
0x989528: jz      short loc_98953D
0x98952A: test    eax, 0FF000000h
0x98952F: jz      short loc_989533
0x989531: jmp     short _strlen___main_loop_3
0x989533: lea     eax, [ecx-1]
0x989536: mov     ecx, [esp+arg_0]
0x98953A: sub     eax, ecx
0x98953C: retn
0x98953D: lea     eax, [ecx-2]
0x989540: mov     ecx, [esp+arg_0]
0x989544: sub     eax, ecx
0x989546: retn
0x989547: lea     eax, [ecx-3]
0x98954A: mov     ecx, [esp+arg_0]
0x98954E: sub     eax, ecx
0x989550: retn
0x989551: lea     eax, [ecx-4]
0x989554: mov     ecx, [esp+arg_0]
0x989558: sub     eax, ecx
0x98955A: retn
