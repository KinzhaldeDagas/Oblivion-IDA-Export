0x756710: mov     edx, [ecx+44h]
0x756713: mov     eax, [esp+arg_0]
0x756717: cmp     [edx+14h], al
0x75671A: jz      short locret_756729
0x75671C: mov     ecx, edx
0x75671E: mov     edx, [ecx]
0x756720: mov     [esp+arg_0], eax
0x756724: mov     eax, [edx+58h]
0x756727: jmp     eax
0x756729: retn    4
