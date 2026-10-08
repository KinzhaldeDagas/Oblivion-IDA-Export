0x790490: mov     eax, [esp+first]; Oblivion binary evidence: initialized fill over [first,last), assigning the same four-byte value to each existing slot and returning last.
0x790494: mov     ecx, [esp+last]
0x790498: cmp     eax, ecx
0x79049A: jz      short locret_7904AD
0x79049C: mov     edx, [esp+value]
0x7904A0: push    esi
0x7904A1: mov     esi, [edx]
0x7904A3: mov     [eax], esi
0x7904A5: add     eax, 4
0x7904A8: cmp     eax, ecx
0x7904AA: jnz     short loc_7904A1
0x7904AC: pop     esi
0x7904AD: retn
