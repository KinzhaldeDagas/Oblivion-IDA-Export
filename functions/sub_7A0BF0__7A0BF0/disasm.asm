0x7A0BF0: push    esi
0x7A0BF1: mov     esi, [esp+4+arg_0]
0x7A0BF5: push    edi
0x7A0BF6: mov     edi, [esp+8+arg_4]
0x7A0BFA: cmp     esi, edi
0x7A0BFC: jz      short loc_7A0C13
0x7A0BFE: push    ebx
0x7A0BFF: mov     ebx, [esp+0Ch+arg_8]
0x7A0C03: push    ebx
0x7A0C04: mov     ecx, esi
0x7A0C06: call    sub_79FB80
0x7A0C0B: add     esi, 10h
0x7A0C0E: cmp     esi, edi
0x7A0C10: jnz     short loc_7A0C03
0x7A0C12: pop     ebx
0x7A0C13: pop     edi
0x7A0C14: pop     esi
0x7A0C15: retn
