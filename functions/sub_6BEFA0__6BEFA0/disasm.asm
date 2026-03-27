0x6BEFA0: push    edi
0x6BEFA1: mov     edi, [esp+4+arg_8]
0x6BEFA5: test    edi, edi
0x6BEFA7: jbe     short loc_6BEFC7
0x6BEFA9: push    ebx
0x6BEFAA: mov     ebx, [esp+8+arg_0]
0x6BEFAE: push    esi
0x6BEFAF: mov     esi, [esp+0Ch+arg_4]
0x6BEFB3: push    esi
0x6BEFB4: push    ebx
0x6BEFB5: call    sub_6BE390
0x6BEFBA: add     esp, 8
0x6BEFBD: add     esi, 14h
0x6BEFC0: sub     edi, 1
0x6BEFC3: jnz     short loc_6BEFB3
0x6BEFC5: pop     esi
0x6BEFC6: pop     ebx
0x6BEFC7: pop     edi
0x6BEFC8: retn
