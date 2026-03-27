0x88E2C0: push    esi
0x88E2C1: mov     esi, [esp+4+arg_0]
0x88E2C5: push    edi
0x88E2C6: push    esi
0x88E2C7: call    sub_8BA8D0
0x88E2CC: mov     eax, ds:0BA7A0Ch
0x88E2D1: push    eax; ArgList
0x88E2D2: call    TESOutput_PrintString
0x88E2D7: movzx   edi, word ptr [esi+0Ah]
0x88E2DB: movzx   ecx, word ptr [esi+8]
0x88E2DF: add     esp, 4
0x88E2E2: cmp     edi, ecx
0x88E2E4: mov     [esp+8+arg_0], eax
0x88E2E8: jb      short loc_88E2F8
0x88E2EA: movzx   edx, word ptr [esi+0Eh]
0x88E2EE: add     edx, edi
0x88E2F0: push    edx
0x88E2F1: mov     ecx, esi
0x88E2F3: call    NiTArray_SetSize
0x88E2F8: lea     eax, [esp+8+arg_0]
0x88E2FC: push    eax
0x88E2FD: push    edi
0x88E2FE: mov     ecx, esi
0x88E300: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x88E305: pop     edi
0x88E306: pop     esi
0x88E307: retn    4
