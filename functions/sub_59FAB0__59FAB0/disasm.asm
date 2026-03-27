0x59FAB0: mov     eax, [esp+arg_0]
0x59FAB4: add     eax, 0FFFFFFFFh; switch 36 cases
0x59FAB7: cmp     eax, 23h
0x59FABA: ja      def_59FAC7; jumptable 0059FAC7 default case, cases 4-13,20,24-30,35
0x59FAC0: movzx   eax, ds:byte_59FBC0[eax]
0x59FAC7: jmp     ds:jpt_59FAC7[eax*4]; switch jump
0x59FACE: mov     edx, [esp+arg_4]; jumptable 0059FAC7 case 1
0x59FAD2: mov     [ecx+28h], edx
0x59FAD5: retn    8
0x59FAD8: mov     eax, [esp+arg_4]; jumptable 0059FAC7 case 2
0x59FADC: mov     [ecx+2Ch], eax
0x59FADF: retn    8
0x59FAE2: mov     edx, [esp+arg_4]; jumptable 0059FAC7 case 3
0x59FAE6: mov     [ecx+30h], edx
0x59FAE9: retn    8
0x59FAEC: mov     eax, [esp+arg_4]; jumptable 0059FAC7 case 31
0x59FAF0: mov     [ecx+34h], eax
0x59FAF3: retn    8
0x59FAF6: mov     edx, [esp+arg_4]; jumptable 0059FAC7 case 32
0x59FAFA: mov     [ecx+38h], edx
0x59FAFD: retn    8
0x59FB00: mov     eax, [esp+arg_4]; jumptable 0059FAC7 case 33
0x59FB04: mov     [ecx+3Ch], eax
0x59FB07: retn    8
0x59FB0A: mov     edx, [esp+arg_4]; jumptable 0059FAC7 case 34
0x59FB0E: mov     [ecx+40h], edx
0x59FB11: retn    8
0x59FB14: mov     eax, [esp+arg_4]; jumptable 0059FAC7 case 14
0x59FB18: mov     [ecx+44h], eax
0x59FB1B: retn    8
0x59FB1E: mov     edx, [esp+arg_4]; jumptable 0059FAC7 case 15
0x59FB22: mov     [ecx+48h], edx
0x59FB25: retn    8
0x59FB28: mov     eax, [esp+arg_4]; jumptable 0059FAC7 case 36
0x59FB2C: mov     [ecx+4Ch], eax
0x59FB2F: retn    8
0x59FB32: mov     edx, [esp+arg_4]; jumptable 0059FAC7 case 16
0x59FB36: mov     [ecx+50h], edx
0x59FB39: retn    8
0x59FB3C: mov     eax, [esp+arg_4]; jumptable 0059FAC7 case 17
0x59FB40: mov     [ecx+54h], eax
0x59FB43: retn    8
0x59FB46: mov     edx, [esp+arg_4]; jumptable 0059FAC7 case 18
0x59FB4A: mov     [ecx+58h], edx
0x59FB4D: retn    8
0x59FB50: mov     eax, [esp+arg_4]; jumptable 0059FAC7 case 19
0x59FB54: mov     [ecx+5Ch], eax
0x59FB57: retn    8
0x59FB5A: mov     edx, [esp+arg_4]; jumptable 0059FAC7 case 21
0x59FB5E: mov     [ecx+60h], edx
0x59FB61: retn    8
0x59FB64: mov     eax, [esp+arg_4]; jumptable 0059FAC7 case 22
0x59FB68: mov     [ecx+64h], eax
0x59FB6B: retn    8
0x59FB6E: mov     edx, [esp+arg_4]; jumptable 0059FAC7 case 23
0x59FB72: mov     [ecx+68h], edx
0x59FB75: retn    8; jumptable 0059FAC7 default case, cases 4-13,20,24-30,35
