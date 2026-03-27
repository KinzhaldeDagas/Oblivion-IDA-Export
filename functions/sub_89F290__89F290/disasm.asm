0x89F290: push    esi
0x89F291: mov     esi, [esp+4+arg_0]
0x89F295: push    edi
0x89F296: push    esi
0x89F297: call    sub_898210
0x89F29C: mov     eax, ds:0BA7D2Ch
0x89F2A1: push    eax; ArgList
0x89F2A2: call    TESOutput_PrintString
0x89F2A7: movzx   edi, word ptr [esi+0Ah]
0x89F2AB: movzx   ecx, word ptr [esi+8]
0x89F2AF: add     esp, 4
0x89F2B2: cmp     edi, ecx
0x89F2B4: mov     [esp+8+arg_0], eax
0x89F2B8: jb      short loc_89F2C8
0x89F2BA: movzx   edx, word ptr [esi+0Eh]
0x89F2BE: add     edx, edi
0x89F2C0: push    edx
0x89F2C1: mov     ecx, esi
0x89F2C3: call    NiTArray_SetSize
0x89F2C8: lea     eax, [esp+8+arg_0]
0x89F2CC: push    eax
0x89F2CD: push    edi
0x89F2CE: mov     ecx, esi
0x89F2D0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x89F2D5: pop     edi
0x89F2D6: pop     esi
0x89F2D7: retn    4
