0x90BA40: mov     eax, [esp+arg_0]
0x90BA44: inc     eax; switch 31 cases
0x90BA45: cmp     eax, 1Eh
0x90BA48: ja      def_90BA4E; jumptable 0090BA4E default case, case 0
0x90BA4E: jmp     ds:jpt_90BA4E[eax*4]; switch jump
0x90BA55: mov     eax, offset aHk_shape_all; jumptable 0090BA4E case -1
0x90BA5A: retn
0x90BA5B: mov     eax, offset aHk_shape_conve; jumptable 0090BA4E case 1
0x90BA60: retn
0x90BA61: mov     eax, offset aHk_shape_colle; jumptable 0090BA4E case 2
0x90BA66: retn
0x90BA67: mov     eax, offset aHk_shape_bv_tr; jumptable 0090BA4E case 3
0x90BA6C: retn
0x90BA6D: mov     eax, offset aHk_shape_spher; jumptable 0090BA4E case 4
0x90BA72: retn
0x90BA73: mov     eax, offset aHk_shape_trian; jumptable 0090BA4E case 6
0x90BA78: retn
0x90BA79: mov     eax, offset aHk_shape_box; jumptable 0090BA4E case 7
0x90BA7E: retn
0x90BA7F: mov     eax, offset aHk_shape_capsu; jumptable 0090BA4E case 8
0x90BA84: retn
0x90BA85: mov     eax, offset aHk_shape_cylin; jumptable 0090BA4E case 5
0x90BA8A: retn
0x90BA8B: mov     eax, offset aHk_shape_con_0; jumptable 0090BA4E case 9
0x90BA90: retn
0x90BA91: mov     eax, offset aHk_shape_con_1; jumptable 0090BA4E case 10
0x90BA96: retn
0x90BA97: mov     eax, offset aHk_shape_multi; jumptable 0090BA4E case 11
0x90BA9C: retn
0x90BA9D: mov     eax, offset aHk_shape_list; jumptable 0090BA4E case 12
0x90BAA2: retn
0x90BAA3: mov     eax, offset aHk_shape_con_2; jumptable 0090BA4E case 13
0x90BAA8: retn
0x90BAA9: mov     eax, offset aHk_shape_tri_0; jumptable 0090BA4E case 16
0x90BAAE: retn
0x90BAAF: mov     eax, offset aHk_shape_mul_0; jumptable 0090BA4E case 17
0x90BAB4: retn
0x90BAB5: mov     eax, offset aHk_shape_heigh; jumptable 0090BA4E case 18
0x90BABA: retn
0x90BABB: mov     eax, offset aHk_shape_sampl; jumptable 0090BA4E case 19
0x90BAC0: retn
0x90BAC1: mov     eax, offset aHk_shape_sph_0; jumptable 0090BA4E case 21
0x90BAC6: retn
0x90BAC7: mov     eax, offset aHk_shape_tri_p; jumptable 0090BA4E case 20
0x90BACC: retn
0x90BACD: mov     eax, offset aHk_shape_bv; jumptable 0090BA4E case 22
0x90BAD2: retn
0x90BAD3: mov     eax, offset aHk_shape_plane; jumptable 0090BA4E case 23
0x90BAD8: retn
0x90BAD9: mov     eax, offset aHk_shape_mopp; jumptable 0090BA4E case 24
0x90BADE: retn
0x90BADF: mov     eax, offset aHk_shape_trans; jumptable 0090BA4E case 25
0x90BAE4: retn
0x90BAE5: mov     eax, offset aHk_shape_con_3; jumptable 0090BA4E case 14
0x90BAEA: retn
0x90BAEB: mov     eax, offset aHk_shape_con_4; jumptable 0090BA4E case 15
0x90BAF0: retn
0x90BAF1: mov     eax, offset aHk_shape_phant; jumptable 0090BA4E case 26
0x90BAF6: retn
0x90BAF7: mov     eax, offset aHk_shape_user0; jumptable 0090BA4E case 27
0x90BAFC: retn
0x90BAFD: mov     eax, offset aHk_shape_user1; jumptable 0090BA4E case 28
0x90BB02: retn
0x90BB03: mov     eax, offset aHk_shape_user2; jumptable 0090BA4E case 29
0x90BB08: retn
0x90BB09: mov     eax, offset aUnknown_3; jumptable 0090BA4E default case, case 0
0x90BB0E: retn
