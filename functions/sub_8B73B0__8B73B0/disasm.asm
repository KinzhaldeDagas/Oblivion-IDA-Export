0x8B73B0: push    esi
0x8B73B1: mov     esi, [esp+4+arg_0]
0x8B73B5: push    edi
0x8B73B6: push    esi
0x8B73B7: call    sub_89F290
0x8B73BC: mov     eax, ds:0BA7FE0h
0x8B73C1: push    eax; ArgList
0x8B73C2: call    TESOutput_PrintString
0x8B73C7: movzx   edi, word ptr [esi+0Ah]
0x8B73CB: movzx   ecx, word ptr [esi+8]
0x8B73CF: add     esp, 4
0x8B73D2: cmp     edi, ecx
0x8B73D4: mov     [esp+8+arg_0], eax
0x8B73D8: jb      short loc_8B73E8
0x8B73DA: movzx   edx, word ptr [esi+0Eh]
0x8B73DE: add     edx, edi
0x8B73E0: push    edx
0x8B73E1: mov     ecx, esi
0x8B73E3: call    NiTArray_SetSize
0x8B73E8: lea     eax, [esp+8+arg_0]
0x8B73EC: push    eax
0x8B73ED: push    edi
0x8B73EE: mov     ecx, esi
0x8B73F0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B73F5: pop     edi
0x8B73F6: pop     esi
0x8B73F7: retn    4
