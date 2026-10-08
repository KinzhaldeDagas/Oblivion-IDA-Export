0x4533D0: mov     eax, [esp+form]
0x4533D4: mov     edx, [eax+8]
0x4533D7: shr     edx, 0Eh
0x4533DA: test    dl, 1
0x4533DD: jnz     short locret_4533EA
0x4533DF: mov     ecx, [ecx]; self
0x4533E1: mov     [esp+form], eax; form
0x4533E5: jmp     ChangesMap_RemoveFormChangeFlags;
0x4533EA: retn    8
