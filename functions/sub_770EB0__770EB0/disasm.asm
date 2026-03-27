0x770EB0: sub     esp, 8
0x770EB3: push    ebx
0x770EB4: push    ebp
0x770EB5: push    esi
0x770EB6: mov     esi, [esp+14h+Size]
0x770EBA: mov     ebx, [esi+10h]
0x770EBD: xor     ebp, ebp
0x770EBF: cmp     ebx, ebp
0x770EC1: push    edi
0x770EC2: mov     edi, [esi+24h]
0x770EC5: jnz     short loc_770EFD
0x770EC7: xor     ebx, ebx
0x770EC9: cmp     [esi+8], bp
0x770ECD: jbe     loc_770F8C
0x770ED3: mov     eax, [esi+1Ch]
0x770ED6: push    eax
0x770ED7: push    0
0x770ED9: push    edi
0x770EDA: call    __memset
0x770EDF: mov     eax, [esi+1Ch]
0x770EE2: add     edi, [esi+20h]
0x770EE5: add     ebx, 1
0x770EE8: add     esp, 0Ch
0x770EEB: add     ebp, eax
0x770EED: cmp     bx, [esi+8]
0x770EF1: jb      short loc_770ED6
0x770EF3: pop     edi
0x770EF4: pop     esi
0x770EF5: mov     eax, ebp
0x770EF7: pop     ebp
0x770EF8: pop     ebx
0x770EF9: add     esp, 8
0x770EFC: retn
0x770EFD: mov     ax, [esi+4]
0x770F01: sub     ax, 14h
0x770F05: movzx   eax, ax
0x770F08: lea     ecx, [eax-4]
0x770F0B: test    cx, cx
0x770F0E: jle     short loc_770F21
0x770F10: mov     edx, [esi+1Ch]
0x770F13: mov     [esp+18h+var_8], 4
0x770F1B: mov     [esp+18h+Size], edx
0x770F1F: jmp     short loc_770F2F
0x770F21: mov     ecx, [esi+14h]
0x770F24: movzx   eax, ax
0x770F27: mov     [esp+18h+var_8], eax
0x770F2B: mov     [esp+18h+Size], ecx
0x770F2F: cmp     [esi+8], bp
0x770F33: mov     [esp+18h+var_4], ebp
0x770F37: jbe     short loc_770F8C
0x770F39: lea     esp, [esp+0]
0x770F40: mov     edx, [esp+18h+Size]
0x770F44: push    edx; Size
0x770F45: push    ebx; Src
0x770F46: push    edi; Dst
0x770F47: call    _memcpy
0x770F4C: mov     ecx, [esp+24h+var_8]
0x770F50: add     esp, 0Ch
0x770F53: cmp     cx, 4
0x770F57: lea     eax, [edi+1]
0x770F5A: jnb     short loc_770F72
0x770F5C: mov     edx, 4
0x770F61: sub     edx, ecx
0x770F63: movzx   ecx, dx
0x770F66: push    ecx
0x770F67: push    0
0x770F69: push    eax
0x770F6A: call    __memset
0x770F6F: add     esp, 0Ch
0x770F72: mov     eax, [esp+18h+var_4]
0x770F76: add     ebx, [esi+18h]
0x770F79: add     edi, [esi+20h]
0x770F7C: add     ebp, [esi+1Ch]
0x770F7F: add     eax, 1
0x770F82: cmp     ax, [esi+8]
0x770F86: mov     [esp+18h+var_4], eax
0x770F8A: jb      short loc_770F40
0x770F8C: pop     edi
0x770F8D: pop     esi
0x770F8E: mov     eax, ebp
0x770F90: pop     ebp
0x770F91: pop     ebx
0x770F92: add     esp, 8
0x770F95: retn
