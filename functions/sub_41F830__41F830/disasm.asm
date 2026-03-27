0x41F830: push    13h; a2
0x41F832: call    BaseExtraList_GetExtraData
0x41F837: test    eax, eax
0x41F839: jz      short loc_41F849
0x41F83B: movzx   eax, byte ptr [eax+0Ch]
0x41F83F: test    [esp+arg_0], eax
0x41F843: setnz   al
0x41F846: retn    4
0x41F849: mov     eax, 1
0x41F84E: test    [esp+arg_0], eax
0x41F852: setnz   al
0x41F855: retn    4
