0x9A2690: mov     edx, [esp+Src]
0x9A2694: sub     esp, 8
0x9A2697: lea     eax, [esp+8+var_4]
0x9A269B: push    eax; int
0x9A269C: lea     ecx, [esp+0Ch+var_8]
0x9A26A0: push    ecx; int
0x9A26A1: push    edx; Src
0x9A26A2: call    sub_9A2570
0x9A26A7: add     esp, 0Ch
0x9A26AA: test    al, al
0x9A26AC: jz      short loc_9A26D4
0x9A26AE: mov     eax, [esp+8+var_8]
0x9A26B1: test    eax, eax
0x9A26B3: jz      short loc_9A26D4
0x9A26B5: add     eax, 0FFFFFFFFh
0x9A26B8: cmp     eax, 0Bh
0x9A26BB: ja      short loc_9A26D4
0x9A26BD: movzx   eax, ds:byte_9A26E0[eax]
0x9A26C4: jmp     ds:jpt_9A26C4[eax*4]; switch 1 cases
0x9A26CB: mov     eax, 7; jumptable 009A26C4 case 0
0x9A26D0: add     esp, 8
0x9A26D3: retn
0x9A26D4: xor     eax, eax
0x9A26D6: add     esp, 8
0x9A26D9: retn
