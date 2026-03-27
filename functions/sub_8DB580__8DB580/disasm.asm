0x8DB580: movzx   eax, word ptr [ecx+0Ch]
0x8DB584: mov     edx, [ecx+4Ch]
0x8DB587: add     edx, eax
0x8DB589: mov     eax, [esp+arg_0]
0x8DB58D: add     edx, eax
0x8DB58F: cmp     edx, 0FEh ; 'þ'
0x8DB595: jle     short loc_8DB59F
0x8DB597: mov     eax, 1
0x8DB59C: retn    4
0x8DB59F: mov     dl, [ecx+0Ch]
0x8DB5A2: add     dl, al
0x8DB5A4: movzx   ax, dl
0x8DB5A8: mov     [ecx+0Ch], ax
0x8DB5AC: xor     eax, eax
0x8DB5AE: retn    4
