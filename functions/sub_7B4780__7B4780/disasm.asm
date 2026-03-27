0x7B4780: cmp     [esp+arg_0], 0
0x7B4785: mov     eax, ds:0B42D74h
0x7B478A: jnz     short loc_7B4791
0x7B478C: mov     eax, ds:0B42F48h
0x7B4791: add     eax, 0FFFFFFFFh; switch 7 cases
0x7B4794: cmp     eax, 6
0x7B4797: ja      short def_7B4799
0x7B4799: jmp     ds:jpt_7B4799[eax*4]; switch jump
0x7B47A0: mov     eax, offset aPs_1_3; jumptable 007B4799 case 1
0x7B47A5: retn
0x7B47A6: mov     eax, offset aPs_2_0; jumptable 007B4799 case 2
0x7B47AB: retn
0x7B47AC: mov     eax, offset aPs_2_a; jumptable 007B4799 cases 3,5
0x7B47B1: retn
0x7B47B2: mov     eax, offset aPs_2_b; jumptable 007B4799 cases 4,6
0x7B47B7: retn
0x7B47B8: mov     eax, offset aPs_3_0; jumptable 007B4799 case 7
0x7B47BD: retn
