0x4678E7: mov     edi, [edi+4]
0x4678EA: test    edi, edi
0x4678EC: jnz     short TESActorBaseData_GetFactionReaction_static___TargetFactionLoop
0x4678EE: test    ebp, ebp
0x4678F0: pop     esi
0x4678F1: jz      short loc_4678FB
0x4678F3: pop     edi
0x4678F4: mov     eax, ebp
0x4678F6: pop     ebp
0x4678F7: pop     ebx
0x4678F8: retn    8
0x4678FB: cmp     ebx, 2710h
0x467901: jz      short loc_46790B
0x467903: pop     edi
0x467904: pop     ebp
0x467905: mov     eax, ebx
0x467907: pop     ebx
0x467908: retn    8
0x46790B: xor     eax, eax
0x46790D: pop     edi
0x46790E: pop     ebp
0x46790F: pop     ebx
0x467910: retn    8
