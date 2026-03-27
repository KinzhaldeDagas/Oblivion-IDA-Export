0x725EF0: mov     eax, [ecx+4]
0x725EF3: mov     edx, [esp+arg_0]
0x725EF7: cmp     eax, [edx+4]
0x725EFA: jz      short loc_725F01
0x725EFC: xor     al, al
0x725EFE: retn    4
0x725F01: cmp     eax, 4
0x725F04: mov     edx, [edx+8]
0x725F07: mov     ecx, [ecx+8]
0x725F0A: push    esi
0x725F0B: push    edi
0x725F0C: jb      short loc_725F24
0x725F0E: mov     edi, edi
0x725F10: mov     esi, [ecx]
0x725F12: cmp     esi, [edx]
0x725F14: jnz     short loc_725F28
0x725F16: sub     eax, 4
0x725F19: add     edx, 4
0x725F1C: add     ecx, 4
0x725F1F: cmp     eax, 4
0x725F22: jnb     short loc_725F10
0x725F24: test    eax, eax
0x725F26: jz      short loc_725F8D
0x725F28: movzx   esi, byte ptr [ecx]
0x725F2B: movzx   edi, byte ptr [edx]
0x725F2E: sub     esi, edi
0x725F30: jnz     short loc_725F77
0x725F32: sub     eax, 1
0x725F35: add     edx, 1
0x725F38: add     ecx, 1
0x725F3B: test    eax, eax
0x725F3D: jz      short loc_725F8D
0x725F3F: movzx   esi, byte ptr [ecx]
0x725F42: movzx   edi, byte ptr [edx]
0x725F45: sub     esi, edi
0x725F47: jnz     short loc_725F77
0x725F49: sub     eax, 1
0x725F4C: add     edx, 1
0x725F4F: add     ecx, 1
0x725F52: test    eax, eax
0x725F54: jz      short loc_725F8D
0x725F56: movzx   esi, byte ptr [ecx]
0x725F59: movzx   edi, byte ptr [edx]
0x725F5C: sub     esi, edi
0x725F5E: jnz     short loc_725F77
0x725F60: sub     eax, 1
0x725F63: add     edx, 1
0x725F66: add     ecx, 1
0x725F69: test    eax, eax
0x725F6B: jz      short loc_725F8D
0x725F6D: movzx   esi, byte ptr [ecx]
0x725F70: movzx   eax, byte ptr [edx]
0x725F73: sub     esi, eax
0x725F75: jz      short loc_725F8D
0x725F77: test    esi, esi
0x725F79: mov     eax, 1
0x725F7E: jg      short loc_725F8F
0x725F80: or      eax, 0FFFFFFFFh
0x725F83: test    eax, eax
0x725F85: pop     edi
0x725F86: setz    al
0x725F89: pop     esi
0x725F8A: retn    4
0x725F8D: xor     eax, eax
0x725F8F: test    eax, eax
0x725F91: pop     edi
0x725F92: setz    al
0x725F95: pop     esi
0x725F96: retn    4
