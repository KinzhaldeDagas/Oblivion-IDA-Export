0x46CE40: mov     edx, [eax+4]
0x46CE43: cmp     edx, ebx
0x46CE45: jnz     short loc_46CE4B
0x46CE47: cmp     [eax], ebx
0x46CE49: jz      short loc_46CE5E
0x46CE4B: mov     eax, [eax]
0x46CE4D: movzx   eax, word ptr [eax]
0x46CE50: cmp     ax, cx
0x46CE53: jbe     short TESLeveledList_CalcLeveledForm___FindMaxLevelLoop_next
0x46CE55: movzx   ecx, ax
