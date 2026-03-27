0x770980: sub     esp, 14h
0x770983: push    ebx
0x770984: push    ebp
0x770985: push    esi
0x770986: mov     esi, [esp+20h+arg_0]
0x77098A: mov     ebx, [esi+10h]
0x77098D: xor     ebp, ebp
0x77098F: cmp     ebx, ebp
0x770991: push    edi
0x770992: mov     edi, [esi+24h]
0x770995: mov     [esp+24h+var_14], ebp
0x770999: jnz     short loc_7709D3
0x77099B: cmp     [esi+8], bp
0x77099F: jbe     loc_770A96
0x7709A5: mov     eax, [esi+1Ch]
0x7709A8: push    eax
0x7709A9: push    0
0x7709AB: push    edi
0x7709AC: call    __memset
0x7709B1: mov     eax, [esi+1Ch]
0x7709B4: add     edi, [esi+20h]
0x7709B7: add     [esp+30h+var_14], eax
0x7709BB: add     ebp, 1
0x7709BE: add     esp, 0Ch
0x7709C1: cmp     bp, [esi+8]
0x7709C5: jb      short loc_7709A8
0x7709C7: mov     eax, [esp+24h+var_14]
0x7709CB: pop     edi
0x7709CC: pop     esi
0x7709CD: pop     ebp
0x7709CE: pop     ebx
0x7709CF: add     esp, 14h
0x7709D2: retn
0x7709D3: movzx   eax, word ptr [esi+4]
0x7709D7: lea     ecx, [eax-4]
0x7709DA: test    cx, cx
0x7709DD: jle     short loc_7709E9
0x7709DF: mov     [esp+24h+var_10], 4
0x7709E7: jmp     short loc_7709F0
0x7709E9: movzx   edx, ax
0x7709EC: mov     [esp+24h+var_10], edx
0x7709F0: cmp     [esi+8], bp
0x7709F4: mov     [esp+24h+var_8], ebp
0x7709F8: jbe     loc_770A96
0x7709FE: mov     edi, edi
0x770A00: mov     ebp, [esp+24h+var_10]
0x770A04: xor     eax, eax
0x770A06: test    bp, bp
0x770A09: mov     edx, ebx
0x770A0B: mov     ecx, edi
0x770A0D: jbe     short loc_770A5E
0x770A0F: movzx   ebp, bp
0x770A12: movzx   eax, bp
0x770A15: mov     [esp+24h+var_C], eax
0x770A19: lea     esp, [esp+0]
0x770A20: fld     dword ptr [edx]
0x770A22: add     ecx, 1
0x770A25: fnstcw  word ptr [esp+24h+arg_0]
0x770A29: add     edx, 4
0x770A2C: movzx   eax, word ptr [esp+24h+arg_0]
0x770A31: or      eax, 0C00h
0x770A36: sub     ebp, 1
0x770A39: mov     [esp+24h+var_4], eax
0x770A3D: fldcw   word ptr [esp+24h+var_4]
0x770A41: fistp   [esp+24h+var_4]
0x770A45: mov     al, byte ptr [esp+24h+var_4]
0x770A49: mov     [ecx-1], al
0x770A4C: fldcw   word ptr [esp+24h+arg_0]
0x770A50: jnz     short loc_770A20
0x770A52: cmp     word ptr [esp+24h+var_C], 4
0x770A58: jnb     short loc_770A74
0x770A5A: mov     eax, [esp+24h+var_C]
0x770A5E: mov     edx, 4
0x770A63: sub     edx, eax
0x770A65: movzx   eax, dx
0x770A68: push    eax
0x770A69: push    0
0x770A6B: push    ecx
0x770A6C: call    __memset
0x770A71: add     esp, 0Ch
0x770A74: mov     eax, [esp+24h+var_8]
0x770A78: mov     ecx, [esi+1Ch]
0x770A7B: add     ebx, [esi+18h]
0x770A7E: add     edi, [esi+20h]
0x770A81: add     [esp+24h+var_14], ecx
0x770A85: add     eax, 1
0x770A88: cmp     ax, [esi+8]
0x770A8C: mov     [esp+24h+var_8], eax
0x770A90: jb      loc_770A00
0x770A96: mov     eax, [esp+24h+var_14]
0x770A9A: pop     edi
0x770A9B: pop     esi
0x770A9C: pop     ebp
0x770A9D: pop     ebx
0x770A9E: add     esp, 14h
0x770AA1: retn
