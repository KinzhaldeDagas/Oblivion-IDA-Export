0x473BF0: push    ebx
0x473BF1: push    edi
0x473BF2: mov     edi, [esp+8+arg_4]
0x473BF6: test    edi, edi
0x473BF8: mov     ebx, 2
0x473BFD: jz      short loc_473C28
0x473BFF: push    esi
0x473C00: mov     esi, [esp+0Ch+arg_0]
0x473C04: mov     eax, [esi]
0x473C06: mov     edx, [eax+198h]
0x473C0C: push    0
0x473C0E: mov     ecx, esi
0x473C10: call    edx
0x473C12: test    al, al
0x473C14: jnz     short loc_473C2E
0x473C16: push    esi
0x473C17: mov     ecx, edi
0x473C19: call    sub_473420
0x473C1E: pop     esi
0x473C1F: add     ax, bx
0x473C22: pop     edi
0x473C23: movzx   eax, ax
0x473C26: pop     ebx
0x473C27: retn
0x473C28: pop     edi
0x473C29: mov     ax, bx
0x473C2C: pop     ebx
0x473C2D: retn
0x473C2E: pop     esi
0x473C2F: pop     edi
0x473C30: mov     ax, bx
0x473C33: pop     ebx
0x473C34: retn
