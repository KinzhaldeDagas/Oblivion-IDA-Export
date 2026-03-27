0x6A85F0: cmp     dword ptr [ecx+38h], 8
0x6A85F4: jnz     short ValueModifierEffect_DoesHealthDmg___Return_False
0x6A85F6: mov     eax, [ecx+0Ch]
0x6A85F9: mov     ecx, [eax+1Ch]
0x6A85FC: mov     eax, [ecx+58h]
0x6A85FF: mov     edx, eax
0x6A8601: shr     edx, 2
0x6A8604: test    dl, 1
0x6A8607: jz      short ValueModifierEffect_DoesHealthDmg___Return_False
0x6A8609: shr     eax, 1
0x6A860B: test    al, 1
0x6A860D: jnz     short ValueModifierEffect_DoesHealthDmg___Return_False
0x6A860F: mov     eax, 1
0x6A8614: retn
