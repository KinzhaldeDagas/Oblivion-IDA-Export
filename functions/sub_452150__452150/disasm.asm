0x452150: mov     eax, [esp+arg_0]
0x452154: mov     ecx, [esp+arg_4]
0x452158: movzx   eax, word ptr [eax+0Ah]
0x45215C: movzx   ecx, word ptr [ecx+0Ah]
0x452160: cmp     ax, cx
0x452163: jbe     short loc_452169
0x452165: or      eax, 0FFFFFFFFh
0x452168: retn
0x452169: sbb     eax, eax
0x45216B: neg     eax
0x45216D: retn
