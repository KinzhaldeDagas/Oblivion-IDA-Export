0x9A0C8C: sub     esp, 10h
0x9A0C8F: push    ebx
0x9A0C90: push    ebp
0x9A0C91: push    esi
0x9A0C92: push    edi
0x9A0C93: fstcw   word ptr [esp+20h+var_C]
0x9A0C98: mov     ebx, [esp+20h+var_C]
0x9A0C9C: xor     edx, edx
0x9A0C9E: test    bl, 1
0x9A0CA1: jz      short loc_9A0CA6
0x9A0CA3: push    10h
0x9A0CA5: pop     edx
0x9A0CA6: test    bl, 4
0x9A0CA9: jz      short loc_9A0CAE
0x9A0CAB: or      edx, 8
0x9A0CAE: test    bl, 8
0x9A0CB1: jz      short loc_9A0CB6
0x9A0CB3: or      edx, 4
0x9A0CB6: test    bl, 10h
0x9A0CB9: jz      short loc_9A0CBE
0x9A0CBB: or      edx, 2
0x9A0CBE: test    bl, 20h
0x9A0CC1: jz      short loc_9A0CC6
0x9A0CC3: or      edx, 1
0x9A0CC6: test    bl, 2
0x9A0CC9: jz      short loc_9A0CD1
0x9A0CCB: or      edx, 80000h
0x9A0CD1: movzx   ecx, bx
0x9A0CD4: mov     eax, ecx
0x9A0CD6: mov     edi, 0C00h
0x9A0CDB: and     eax, edi
0x9A0CDD: mov     ebp, 300h
0x9A0CE2: mov     esi, 200h
0x9A0CE7: jz      short loc_9A0D09
0x9A0CE9: cmp     eax, 400h
0x9A0CEE: jz      short loc_9A0D03
0x9A0CF0: cmp     eax, 800h
0x9A0CF5: jz      short loc_9A0CFF
0x9A0CF7: cmp     eax, edi
0x9A0CF9: jnz     short loc_9A0D09
0x9A0CFB: or      edx, ebp
0x9A0CFD: jmp     short loc_9A0D09
0x9A0CFF: or      edx, esi
0x9A0D01: jmp     short loc_9A0D09
0x9A0D03: or      edx, 100h
0x9A0D09: and     ecx, ebp
0x9A0D0B: jz      short loc_9A0D19
0x9A0D0D: cmp     ecx, esi
0x9A0D0F: jnz     short loc_9A0D1F
0x9A0D11: or      edx, 10000h
0x9A0D17: jmp     short loc_9A0D1F
0x9A0D19: or      edx, 20000h
0x9A0D1F: test    bx, 1000h
0x9A0D24: jz      short loc_9A0D2C
0x9A0D26: or      edx, 40000h
0x9A0D2C: mov     esi, [esp+20h+Mask]
0x9A0D30: mov     ecx, [esp+20h+NewValue]
0x9A0D34: mov     eax, esi
0x9A0D36: not     eax
0x9A0D38: and     eax, edx
0x9A0D3A: and     ecx, esi
0x9A0D3C: or      eax, ecx
0x9A0D3E: cmp     eax, edx
0x9A0D40: mov     [esp+20h+var_4], eax
0x9A0D44: jz      loc_9A0DF4
0x9A0D4A: mov     ebx, eax
0x9A0D4C: call    __hw_cw
0x9A0D51: movzx   eax, ax
0x9A0D54: mov     [esp+20h+var_10], eax
0x9A0D58: fldcw   word ptr [esp+20h+var_10]
0x9A0D5C: fstcw   word ptr [esp+20h+var_10]
0x9A0D61: mov     ebx, [esp+20h+var_10]
0x9A0D65: xor     edx, edx
0x9A0D67: test    bl, 1
0x9A0D6A: jz      short loc_9A0D6F
0x9A0D6C: push    10h
0x9A0D6E: pop     edx
0x9A0D6F: test    bl, 4
0x9A0D72: jz      short loc_9A0D77
0x9A0D74: or      edx, 8
0x9A0D77: test    bl, 8
0x9A0D7A: jz      short loc_9A0D7F
0x9A0D7C: or      edx, 4
0x9A0D7F: test    bl, 10h
0x9A0D82: jz      short loc_9A0D87
0x9A0D84: or      edx, 2
0x9A0D87: test    bl, 20h
0x9A0D8A: jz      short loc_9A0D8F
0x9A0D8C: or      edx, 1
0x9A0D8F: test    bl, 2
0x9A0D92: jz      short loc_9A0D9A
0x9A0D94: or      edx, 80000h
0x9A0D9A: movzx   ecx, bx
0x9A0D9D: mov     eax, ecx
0x9A0D9F: and     eax, edi
0x9A0DA1: jz      short loc_9A0DC7
0x9A0DA3: cmp     eax, 400h
0x9A0DA8: jz      short loc_9A0DC1
0x9A0DAA: cmp     eax, 800h
0x9A0DAF: jz      short loc_9A0DB9
0x9A0DB1: cmp     eax, edi
0x9A0DB3: jnz     short loc_9A0DC7
0x9A0DB5: or      edx, ebp
0x9A0DB7: jmp     short loc_9A0DC7
0x9A0DB9: or      edx, 200h
0x9A0DBF: jmp     short loc_9A0DC7
0x9A0DC1: or      edx, 100h
0x9A0DC7: and     ecx, ebp
0x9A0DC9: jz      short loc_9A0DDB
0x9A0DCB: cmp     ecx, 200h
0x9A0DD1: jnz     short loc_9A0DE1
0x9A0DD3: or      edx, 10000h
0x9A0DD9: jmp     short loc_9A0DE1
0x9A0DDB: or      edx, 20000h
0x9A0DE1: test    bx, 1000h
0x9A0DE6: jz      short loc_9A0DEE
0x9A0DE8: or      edx, 40000h
0x9A0DEE: mov     eax, edx
0x9A0DF0: mov     [esp+20h+var_4], edx
0x9A0DF4: cmp     dword_BAABE0, 0
0x9A0DFB: jz      loc_9A0F87
0x9A0E01: and     esi, 308031Fh
0x9A0E07: mov     edi, esi
0x9A0E09: stmxcsr [esp+20h+var_8]
0x9A0E0E: mov     eax, [esp+20h+var_8]
0x9A0E12: xor     esi, esi
0x9A0E14: test    al, al
0x9A0E16: jns     short loc_9A0E1B
0x9A0E18: push    10h
0x9A0E1A: pop     esi
0x9A0E1B: test    ax, 200h
0x9A0E1F: jz      short loc_9A0E24
0x9A0E21: or      esi, 8
0x9A0E24: test    ax, 400h
0x9A0E28: jz      short loc_9A0E2D
0x9A0E2A: or      esi, 4
0x9A0E2D: test    ax, 800h
0x9A0E31: jz      short loc_9A0E36
0x9A0E33: or      esi, 2
0x9A0E36: test    ax, 1000h
0x9A0E3A: jz      short loc_9A0E3F
0x9A0E3C: or      esi, 1
0x9A0E3F: test    ax, 100h
0x9A0E43: jz      short loc_9A0E4B
0x9A0E45: or      esi, 80000h
0x9A0E4B: mov     ecx, eax
0x9A0E4D: mov     ebp, 6000h
0x9A0E52: and     ecx, ebp
0x9A0E54: jz      short loc_9A0E80
0x9A0E56: cmp     ecx, 2000h
0x9A0E5C: jz      short loc_9A0E7A
0x9A0E5E: cmp     ecx, 4000h
0x9A0E64: jz      short loc_9A0E72
0x9A0E66: cmp     ecx, ebp
0x9A0E68: jnz     short loc_9A0E80
0x9A0E6A: or      esi, 300h
0x9A0E70: jmp     short loc_9A0E80
0x9A0E72: or      esi, 200h
0x9A0E78: jmp     short loc_9A0E80
0x9A0E7A: or      esi, 100h
0x9A0E80: mov     ebx, 8040h
0x9A0E85: and     eax, ebx
0x9A0E87: sub     eax, 40h ; '@'
0x9A0E8A: jz      short loc_9A0EA8
0x9A0E8C: sub     eax, 7FC0h
0x9A0E91: jz      short loc_9A0EA0
0x9A0E93: sub     eax, 40h ; '@'
0x9A0E96: jnz     short loc_9A0EAE
0x9A0E98: or      esi, 1000000h
0x9A0E9E: jmp     short loc_9A0EAE
0x9A0EA0: or      esi, 3000000h
0x9A0EA6: jmp     short loc_9A0EAE
0x9A0EA8: or      esi, 2000000h
0x9A0EAE: mov     edx, edi
0x9A0EB0: and     edi, [esp+20h+NewValue]
0x9A0EB4: not     edx
0x9A0EB6: and     edx, esi
0x9A0EB8: or      edx, edi
0x9A0EBA: cmp     edx, esi
0x9A0EBC: jnz     short loc_9A0EC5
0x9A0EBE: mov     eax, esi
0x9A0EC0: jmp     loc_9A0F70
0x9A0EC5: call    ___hw_cw_sse2
0x9A0ECA: push    eax
0x9A0ECB: mov     [esp+24h+Mask], eax
0x9A0ECF: call    ___set_fpsr_sse2
0x9A0ED4: pop     ecx
0x9A0ED5: stmxcsr [esp+20h+Mask]
0x9A0EDA: mov     eax, [esp+20h+Mask]
0x9A0EDE: xor     edx, edx
0x9A0EE0: test    al, al
0x9A0EE2: jns     short loc_9A0EE7
0x9A0EE4: push    10h
0x9A0EE6: pop     edx
0x9A0EE7: mov     edi, 200h
0x9A0EEC: test    edi, eax
0x9A0EEE: jz      short loc_9A0EF3
0x9A0EF0: or      edx, 8
0x9A0EF3: test    ax, 400h
0x9A0EF7: jz      short loc_9A0EFC
0x9A0EF9: or      edx, 4
0x9A0EFC: test    ax, 800h
0x9A0F00: jz      short loc_9A0F05
0x9A0F02: or      edx, 2
0x9A0F05: test    ax, 1000h
0x9A0F09: jz      short loc_9A0F0E
0x9A0F0B: or      edx, 1
0x9A0F0E: mov     esi, 100h
0x9A0F13: test    esi, eax
0x9A0F15: jz      short loc_9A0F1D
0x9A0F17: or      edx, 80000h
0x9A0F1D: mov     ecx, eax
0x9A0F1F: and     ecx, ebp
0x9A0F21: jz      short loc_9A0F45
0x9A0F23: cmp     ecx, 2000h
0x9A0F29: jz      short loc_9A0F43
0x9A0F2B: cmp     ecx, 4000h
0x9A0F31: jz      short loc_9A0F3F
0x9A0F33: cmp     ecx, ebp
0x9A0F35: jnz     short loc_9A0F45
0x9A0F37: or      edx, 300h
0x9A0F3D: jmp     short loc_9A0F45
0x9A0F3F: or      edx, edi
0x9A0F41: jmp     short loc_9A0F45
0x9A0F43: or      edx, esi
0x9A0F45: and     eax, ebx
0x9A0F47: sub     eax, 40h ; '@'
0x9A0F4A: jz      short loc_9A0F68
0x9A0F4C: sub     eax, 7FC0h
0x9A0F51: jz      short loc_9A0F60
0x9A0F53: sub     eax, 40h ; '@'
0x9A0F56: jnz     short loc_9A0F6E
0x9A0F58: or      edx, 1000000h
0x9A0F5E: jmp     short loc_9A0F6E
0x9A0F60: or      edx, 3000000h
0x9A0F66: jmp     short loc_9A0F6E
0x9A0F68: or      edx, 2000000h
0x9A0F6E: mov     eax, edx
0x9A0F70: mov     ecx, [esp+20h+var_4]
0x9A0F74: mov     edx, eax
0x9A0F76: xor     edx, ecx
0x9A0F78: or      eax, ecx
0x9A0F7A: test    edx, 8031Fh
0x9A0F80: jz      short loc_9A0F87
0x9A0F82: or      eax, 80000000h
0x9A0F87: pop     edi
0x9A0F88: pop     esi
0x9A0F89: pop     ebp
0x9A0F8A: pop     ebx
0x9A0F8B: add     esp, 10h
0x9A0F8E: retn
