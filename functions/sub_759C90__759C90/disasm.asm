0x759C90: push    ebp
0x759C91: mov     ebp, [esp+4+arg_0]
0x759C95: push    edi
0x759C96: push    ebp
0x759C97: mov     edi, ecx
0x759C99: call    sub_73F270
0x759C9E: test    al, al
0x759CA0: jnz     short loc_759CA9
0x759CA2: pop     edi
0x759CA3: xor     al, al
0x759CA5: pop     ebp
0x759CA6: retn    4
0x759CA9: mov     eax, [edi+60h]
0x759CAC: test    eax, eax
0x759CAE: jz      short loc_759CBA
0x759CB0: cmp     dword ptr [ebp+60h], 0
0x759CB4: jz      short loc_759CA2
0x759CB6: test    eax, eax
0x759CB8: jnz     short loc_759CC0
0x759CBA: cmp     dword ptr [ebp+60h], 0
0x759CBE: jnz     short loc_759CA2
0x759CC0: push    ebx
0x759CC1: xor     ebx, ebx
0x759CC3: cmp     [edi+48h], bx
0x759CC7: push    esi
0x759CC8: jbe     short loc_759D16
0x759CCA: lea     ebx, [ebx+0]
0x759CD0: mov     ecx, [ebp+5Ch]
0x759CD3: movzx   esi, bx
0x759CD6: lea     eax, ds:0[esi*8]
0x759CDD: sub     eax, esi
0x759CDF: add     eax, eax
0x759CE1: add     eax, eax
0x759CE3: add     ecx, eax
0x759CE5: push    ecx
0x759CE6: mov     ecx, [edi+5Ch]
0x759CE9: add     ecx, eax
0x759CEB: call    sub_75F7C0
0x759CF0: test    al, al
0x759CF2: jz      short loc_759D33
0x759CF4: mov     eax, [edi+60h]
0x759CF7: test    eax, eax
0x759CF9: jz      short loc_759D0D
0x759CFB: fld     dword ptr [eax+esi*4]
0x759CFE: mov     edx, [ebp+60h]
0x759D01: fld     dword ptr [edx+esi*4]
0x759D04: fucompp
0x759D06: fnstsw  ax
0x759D08: test    ah, 44h
0x759D0B: jp      short loc_759D33
0x759D0D: add     ebx, 1
0x759D10: cmp     bx, [edi+48h]
0x759D14: jb      short loc_759CD0
0x759D16: mov     ax, [edi+64h]
0x759D1A: cmp     ax, [ebp+64h]
0x759D1E: jnz     short loc_759D33
0x759D20: mov     cx, [edi+66h]
0x759D24: cmp     cx, [ebp+66h]
0x759D28: jnz     short loc_759D33
0x759D2A: pop     esi
0x759D2B: pop     ebx
0x759D2C: pop     edi
0x759D2D: mov     al, 1
0x759D2F: pop     ebp
0x759D30: retn    4
0x759D33: pop     esi
0x759D34: pop     ebx
0x759D35: pop     edi
0x759D36: xor     al, al
0x759D38: pop     ebp
0x759D39: retn    4
