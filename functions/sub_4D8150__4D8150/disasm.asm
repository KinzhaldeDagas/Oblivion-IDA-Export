0x4D8150: add     ecx, 44h ; 'D'
0x4D8153: cmp     [esp+arg_0], 0
0x4D8158: jz      short loc_4D8161
0x4D815A: call    sub_41E670
0x4D815F: jmp     short loc_4D8166
0x4D8161: call    sub_41E650
0x4D8166: test    eax, eax
0x4D8168: jz      short locret_4D8182
0x4D816A: mov     eax, [eax]
0x4D816C: test    eax, eax
0x4D816E: jz      short locret_4D8182
0x4D8170: push    eax
0x4D8171: push    0
0x4D8173: call    GetShadowSceneNode
0x4D8178: add     esp, 4
0x4D817B: mov     ecx, eax
0x4D817D: call    sub_7C7DC0
0x4D8182: retn    4
