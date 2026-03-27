0x770DB0: sub     esp, 0Ch
0x770DB3: push    ebx
0x770DB4: push    ebp
0x770DB5: push    esi
0x770DB6: mov     esi, [esp+18h+arg_0]
0x770DBA: mov     ebx, [esi+10h]
0x770DBD: xor     ebp, ebp
0x770DBF: cmp     ebx, ebp
0x770DC1: push    edi
0x770DC2: mov     edi, [esi+24h]
0x770DC5: mov     [esp+1Ch+var_C], ebp
0x770DC9: jnz     short loc_770E03
0x770DCB: cmp     [esi+8], bp
0x770DCF: jbe     loc_770E9D
0x770DD5: mov     eax, [esi+1Ch]
0x770DD8: push    eax
0x770DD9: push    0
0x770DDB: push    edi
0x770DDC: call    __memset
0x770DE1: mov     eax, [esi+1Ch]
0x770DE4: add     edi, [esi+20h]
0x770DE7: add     [esp+28h+var_C], eax
0x770DEB: add     ebp, 1
0x770DEE: add     esp, 0Ch
0x770DF1: cmp     bp, [esi+8]
0x770DF5: jb      short loc_770DD8
0x770DF7: mov     eax, [esp+1Ch+var_C]
0x770DFB: pop     edi
0x770DFC: pop     esi
0x770DFD: pop     ebp
0x770DFE: pop     ebx
0x770DFF: add     esp, 0Ch
0x770E02: retn
0x770E03: mov     ax, [esi+4]
0x770E07: sub     ax, 10h
0x770E0B: movzx   eax, ax
0x770E0E: lea     ecx, [eax-4]
0x770E11: test    cx, cx
0x770E14: jle     short loc_770E20
0x770E16: mov     [esp+1Ch+arg_0], 4
0x770E1E: jmp     short loc_770E27
0x770E20: movzx   edx, ax
0x770E23: mov     [esp+1Ch+arg_0], edx
0x770E27: cmp     [esi+8], bp
0x770E2B: mov     [esp+1Ch+var_8], ebp
0x770E2F: jbe     short loc_770E9D
0x770E31: mov     ebp, [esp+1Ch+arg_0]
0x770E35: xor     edx, edx
0x770E37: test    bp, bp
0x770E3A: mov     ecx, ebx
0x770E3C: mov     eax, edi
0x770E3E: jbe     short loc_770E69
0x770E40: movzx   ebp, bp
0x770E43: movzx   edx, bp
0x770E46: mov     [esp+1Ch+var_4], edx
0x770E4A: lea     ebx, [ebx+0]
0x770E50: mov     dl, [ecx]
0x770E52: mov     [eax], dl
0x770E54: add     eax, 1
0x770E57: add     ecx, 2
0x770E5A: sub     ebp, 1
0x770E5D: jnz     short loc_770E50
0x770E5F: mov     edx, [esp+1Ch+var_4]
0x770E63: cmp     dx, 4
0x770E67: jnb     short loc_770E7F
0x770E69: mov     ecx, 4
0x770E6E: sub     ecx, edx
0x770E70: movzx   edx, cx
0x770E73: push    edx
0x770E74: push    0
0x770E76: push    eax
0x770E77: call    __memset
0x770E7C: add     esp, 0Ch
0x770E7F: mov     eax, [esi+1Ch]
0x770E82: add     [esp+1Ch+var_C], eax
0x770E86: mov     eax, [esp+1Ch+var_8]
0x770E8A: add     ebx, [esi+18h]
0x770E8D: add     edi, [esi+20h]
0x770E90: add     eax, 1
0x770E93: cmp     ax, [esi+8]
0x770E97: mov     [esp+1Ch+var_8], eax
0x770E9B: jb      short loc_770E31
0x770E9D: mov     eax, [esp+1Ch+var_C]
0x770EA1: pop     edi
0x770EA2: pop     esi
0x770EA3: pop     ebp
0x770EA4: pop     ebx
0x770EA5: add     esp, 0Ch
0x770EA8: retn
