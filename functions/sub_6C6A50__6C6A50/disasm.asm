0x6C6A50: push    ecx
0x6C6A51: push    ebp
0x6C6A52: push    edi
0x6C6A53: xor     ebp, ebp
0x6C6A55: mov     edi, ecx
0x6C6A57: cmp     [edi+0Ch], ebp
0x6C6A5A: mov     [esp+0Ch+var_4], ebp
0x6C6A5E: jbe     short loc_6C6AB7
0x6C6A60: push    ebx
0x6C6A61: push    esi
0x6C6A62: mov     esi, [edi+14h]
0x6C6A65: mov     eax, [esi+ebp]
0x6C6A68: add     esi, ebp
0x6C6A6A: test    eax, eax
0x6C6A6C: jz      short loc_6C6AA2
0x6C6A6E: mov     ecx, [esi+8]
0x6C6A71: test    ecx, ecx
0x6C6A73: jz      short loc_6C6AA2
0x6C6A75: mov     dl, [esi+0Dh]
0x6C6A78: cmp     dl, 0FFh
0x6C6A7B: jnz     short loc_6C6A84
0x6C6A7D: movsx   edx, [esp+14h+arg_0]
0x6C6A82: jmp     short loc_6C6A87
0x6C6A84: movzx   edx, dl
0x6C6A87: fld1
0x6C6A89: mov     ebx, [ecx]
0x6C6A8B: push    ecx
0x6C6A8C: fstp    [esp+18h+var_18]
0x6C6A8F: fldz
0x6C6A91: push    edx
0x6C6A92: push    ecx
0x6C6A93: fstp    [esp+20h+var_20]
0x6C6A96: push    eax
0x6C6A97: mov     eax, [ebx+98h]
0x6C6A9D: call    eax
0x6C6A9F: mov     [esi+0Ch], al
0x6C6AA2: mov     eax, [esp+14h+var_4]
0x6C6AA6: add     eax, 1
0x6C6AA9: add     ebp, 10h
0x6C6AAC: cmp     eax, [edi+0Ch]
0x6C6AAF: mov     [esp+14h+var_4], eax
0x6C6AB3: jb      short loc_6C6A62
0x6C6AB5: pop     esi
0x6C6AB6: pop     ebx
0x6C6AB7: pop     edi
0x6C6AB8: pop     ebp
0x6C6AB9: pop     ecx
0x6C6ABA: retn    4
