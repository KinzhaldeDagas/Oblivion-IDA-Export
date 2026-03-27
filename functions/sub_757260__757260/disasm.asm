0x757260: push    esi
0x757261: mov     esi, [esp+4+arg_0]
0x757265: push    edi
0x757266: push    esi
0x757267: call    sub_75F730
0x75726C: mov     eax, ds:0B412ECh
0x757271: push    eax; ArgList
0x757272: call    TESOutput_PrintString
0x757277: movzx   edi, word ptr [esi+0Ah]
0x75727B: movzx   ecx, word ptr [esi+8]
0x75727F: add     esp, 4
0x757282: cmp     edi, ecx
0x757284: mov     [esp+8+arg_0], eax
0x757288: jb      short loc_757298
0x75728A: movzx   edx, word ptr [esi+0Eh]
0x75728E: add     edx, edi
0x757290: push    edx
0x757291: mov     ecx, esi
0x757293: call    NiTArray_SetSize
0x757298: lea     eax, [esp+8+arg_0]
0x75729C: push    eax
0x75729D: push    edi
0x75729E: mov     ecx, esi
0x7572A0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7572A5: pop     edi
0x7572A6: pop     esi
0x7572A7: retn    4
