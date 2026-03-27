0x770AB0: sub     esp, 0Ch
0x770AB3: push    ebx
0x770AB4: push    ebp
0x770AB5: push    esi
0x770AB6: mov     esi, [esp+18h+arg_0]
0x770ABA: mov     ebx, [esi+10h]
0x770ABD: xor     ebp, ebp
0x770ABF: cmp     ebx, ebp
0x770AC1: push    edi
0x770AC2: mov     edi, [esi+24h]
0x770AC5: mov     [esp+1Ch+var_C], ebp
0x770AC9: jnz     short loc_770B03
0x770ACB: cmp     [esi+8], bp
0x770ACF: jbe     loc_770B9D
0x770AD5: mov     eax, [esi+1Ch]
0x770AD8: push    eax
0x770AD9: push    0
0x770ADB: push    edi
0x770ADC: call    __memset
0x770AE1: mov     eax, [esi+1Ch]
0x770AE4: add     edi, [esi+20h]
0x770AE7: add     [esp+28h+var_C], eax
0x770AEB: add     ebp, 1
0x770AEE: add     esp, 0Ch
0x770AF1: cmp     bp, [esi+8]
0x770AF5: jb      short loc_770AD8
0x770AF7: mov     eax, [esp+1Ch+var_C]
0x770AFB: pop     edi
0x770AFC: pop     esi
0x770AFD: pop     ebp
0x770AFE: pop     ebx
0x770AFF: add     esp, 0Ch
0x770B02: retn
0x770B03: mov     ax, [esi+4]
0x770B07: sub     ax, 4
0x770B0B: movzx   eax, ax
0x770B0E: lea     ecx, [eax-4]
0x770B11: test    cx, cx
0x770B14: jle     short loc_770B20
0x770B16: mov     [esp+1Ch+arg_0], 4
0x770B1E: jmp     short loc_770B27
0x770B20: movzx   edx, ax
0x770B23: mov     [esp+1Ch+arg_0], edx
0x770B27: cmp     [esi+8], bp
0x770B2B: mov     [esp+1Ch+var_8], ebp
0x770B2F: jbe     short loc_770B9D
0x770B31: mov     ebp, [esp+1Ch+arg_0]
0x770B35: xor     edx, edx
0x770B37: test    bp, bp
0x770B3A: mov     ecx, ebx
0x770B3C: mov     eax, edi
0x770B3E: jbe     short loc_770B69
0x770B40: movzx   ebp, bp
0x770B43: movzx   edx, bp
0x770B46: mov     [esp+1Ch+var_4], edx
0x770B4A: lea     ebx, [ebx+0]
0x770B50: mov     dl, [ecx]
0x770B52: mov     [eax], dl
0x770B54: add     eax, 1
0x770B57: add     ecx, 4
0x770B5A: sub     ebp, 1
0x770B5D: jnz     short loc_770B50
0x770B5F: mov     edx, [esp+1Ch+var_4]
0x770B63: cmp     dx, 4
0x770B67: jnb     short loc_770B7F
0x770B69: mov     ecx, 4
0x770B6E: sub     ecx, edx
0x770B70: movzx   edx, cx
0x770B73: push    edx
0x770B74: push    0
0x770B76: push    eax
0x770B77: call    __memset
0x770B7C: add     esp, 0Ch
0x770B7F: mov     eax, [esi+1Ch]
0x770B82: add     [esp+1Ch+var_C], eax
0x770B86: mov     eax, [esp+1Ch+var_8]
0x770B8A: add     ebx, [esi+18h]
0x770B8D: add     edi, [esi+20h]
0x770B90: add     eax, 1
0x770B93: cmp     ax, [esi+8]
0x770B97: mov     [esp+1Ch+var_8], eax
0x770B9B: jb      short loc_770B31
0x770B9D: mov     eax, [esp+1Ch+var_C]
0x770BA1: pop     edi
0x770BA2: pop     esi
0x770BA3: pop     ebp
0x770BA4: pop     ebx
0x770BA5: add     esp, 0Ch
0x770BA8: retn
