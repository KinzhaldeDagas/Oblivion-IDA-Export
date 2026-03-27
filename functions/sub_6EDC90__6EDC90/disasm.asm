0x6EDC90: push    ebp
0x6EDC91: mov     ebp, [esp+4+arg_4]
0x6EDC95: push    esi
0x6EDC96: mov     esi, [esp+8+arg_0]
0x6EDC9A: cmp     esi, ebp
0x6EDC9C: jz      short loc_6EDCC5
0x6EDC9E: push    ebx
0x6EDC9F: push    edi
0x6EDCA0: mov     edi, [esp+10h+arg_8]
0x6EDCA4: lea     ebx, [edi+18h]
0x6EDCA7: push    edi
0x6EDCA8: mov     ecx, esi
0x6EDCAA: call    sub_5520E0
0x6EDCAF: push    0FFFFFFFFh
0x6EDCB1: push    0
0x6EDCB3: push    ebx
0x6EDCB4: lea     ecx, [esi+18h]
0x6EDCB7: call    sub_414420
0x6EDCBC: add     esi, 34h ; '4'
0x6EDCBF: cmp     esi, ebp
0x6EDCC1: jnz     short loc_6EDCA7
0x6EDCC3: pop     edi
0x6EDCC4: pop     ebx
0x6EDCC5: pop     esi
0x6EDCC6: pop     ebp
0x6EDCC7: retn
