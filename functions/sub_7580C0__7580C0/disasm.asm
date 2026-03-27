0x7580C0: push    esi
0x7580C1: mov     esi, [esp+4+arg_0]
0x7580C5: push    edi
0x7580C6: push    esi
0x7580C7: call    sub_75F730
0x7580CC: mov     eax, ds:0B41658h
0x7580D1: push    eax; ArgList
0x7580D2: call    TESOutput_PrintString
0x7580D7: movzx   edi, word ptr [esi+0Ah]
0x7580DB: movzx   ecx, word ptr [esi+8]
0x7580DF: add     esp, 4
0x7580E2: cmp     edi, ecx
0x7580E4: mov     [esp+8+arg_0], eax
0x7580E8: jb      short loc_7580F8
0x7580EA: movzx   edx, word ptr [esi+0Eh]
0x7580EE: add     edx, edi
0x7580F0: push    edx
0x7580F1: mov     ecx, esi
0x7580F3: call    NiTArray_SetSize
0x7580F8: lea     eax, [esp+8+arg_0]
0x7580FC: push    eax
0x7580FD: push    edi
0x7580FE: mov     ecx, esi
0x758100: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x758105: pop     edi
0x758106: pop     esi
0x758107: retn    4
