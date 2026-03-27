0x71FDE0: push    esi
0x71FDE1: push    edi
0x71FDE2: mov     edi, [esp+8+arg_0]
0x71FDE6: push    edi
0x71FDE7: mov     esi, ecx
0x71FDE9: call    sub_732E10
0x71FDEE: test    al, al
0x71FDF0: jnz     short loc_71FDF9
0x71FDF2: pop     edi
0x71FDF3: xor     al, al
0x71FDF5: pop     esi
0x71FDF6: retn    4
0x71FDF9: mov     eax, [esi+44h]
0x71FDFC: cmp     eax, [edi+44h]
0x71FDFF: jnz     short loc_71FDF2
0x71FE01: mov     ecx, [edi+48h]
0x71FE04: mov     edx, [esi+48h]
0x71FE07: add     eax, eax
0x71FE09: cmp     eax, 4
0x71FE0C: jb      short loc_71FE24
0x71FE0E: mov     edi, edi
0x71FE10: mov     esi, [edx]
0x71FE12: cmp     esi, [ecx]
0x71FE14: jnz     short loc_71FE28
0x71FE16: sub     eax, 4
0x71FE19: add     ecx, 4
0x71FE1C: add     edx, 4
0x71FE1F: cmp     eax, 4
0x71FE22: jnb     short loc_71FE10
0x71FE24: test    eax, eax
0x71FE26: jz      short loc_71FE8D
0x71FE28: movzx   edi, byte ptr [ecx]
0x71FE2B: movzx   esi, byte ptr [edx]
0x71FE2E: sub     esi, edi
0x71FE30: jnz     short loc_71FE77
0x71FE32: sub     eax, 1
0x71FE35: add     ecx, 1
0x71FE38: add     edx, 1
0x71FE3B: test    eax, eax
0x71FE3D: jz      short loc_71FE8D
0x71FE3F: movzx   edi, byte ptr [ecx]
0x71FE42: movzx   esi, byte ptr [edx]
0x71FE45: sub     esi, edi
0x71FE47: jnz     short loc_71FE77
0x71FE49: sub     eax, 1
0x71FE4C: add     ecx, 1
0x71FE4F: add     edx, 1
0x71FE52: test    eax, eax
0x71FE54: jz      short loc_71FE8D
0x71FE56: movzx   edi, byte ptr [ecx]
0x71FE59: movzx   esi, byte ptr [edx]
0x71FE5C: sub     esi, edi
0x71FE5E: jnz     short loc_71FE77
0x71FE60: sub     eax, 1
0x71FE63: add     ecx, 1
0x71FE66: add     edx, 1
0x71FE69: test    eax, eax
0x71FE6B: jz      short loc_71FE8D
0x71FE6D: movzx   eax, byte ptr [ecx]
0x71FE70: movzx   esi, byte ptr [edx]
0x71FE73: sub     esi, eax
0x71FE75: jz      short loc_71FE8D
0x71FE77: test    esi, esi
0x71FE79: mov     eax, 1
0x71FE7E: jg      short loc_71FE8F
0x71FE80: or      eax, 0FFFFFFFFh
0x71FE83: test    eax, eax
0x71FE85: pop     edi
0x71FE86: setz    al
0x71FE89: pop     esi
0x71FE8A: retn    4
0x71FE8D: xor     eax, eax
0x71FE8F: test    eax, eax
0x71FE91: pop     edi
0x71FE92: setz    al
0x71FE95: pop     esi
0x71FE96: retn    4
