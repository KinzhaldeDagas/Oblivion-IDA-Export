0x469520: movzx   eax, [esp+arg_0]
0x469525: add     eax, 0FFFFFFEDh; switch 25 cases
0x469528: cmp     eax, 18h
0x46952B: ja      short TESContainer_IsInventoryItemType___def_469534; jumptable 00469534 default case, cases 23,24,28-32,35-37,41
0x46952D: movzx   eax, ds:byte_46954C[eax]
0x469534: jmp     ds:jpt_469534[eax*4]; switch jump
0x46953B: mov     al, 1; jumptable 00469534 cases 19-22,25-27,33,34,38-40,42,43
0x46953D: retn
0x46953E: xor     al, al; jumptable 00469534 default case, cases 23,24,28-32,35-37,41
0x469540: retn
