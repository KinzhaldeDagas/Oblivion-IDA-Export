0x75C170: push    esi
0x75C171: mov     esi, [esp+4+arg_0]
0x75C175: push    edi
0x75C176: push    esi
0x75C177: call    sub_75F730
0x75C17C: mov     eax, ds:0B41AC4h
0x75C181: push    eax; ArgList
0x75C182: call    TESOutput_PrintString
0x75C187: movzx   edi, word ptr [esi+0Ah]
0x75C18B: movzx   ecx, word ptr [esi+8]
0x75C18F: add     esp, 4
0x75C192: cmp     edi, ecx
0x75C194: mov     [esp+8+arg_0], eax
0x75C198: jb      short loc_75C1A8
0x75C19A: movzx   edx, word ptr [esi+0Eh]
0x75C19E: add     edx, edi
0x75C1A0: push    edx
0x75C1A1: mov     ecx, esi
0x75C1A3: call    NiTArray_SetSize
0x75C1A8: lea     eax, [esp+8+arg_0]
0x75C1AC: push    eax
0x75C1AD: push    edi
0x75C1AE: mov     ecx, esi
0x75C1B0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75C1B5: pop     edi
0x75C1B6: pop     esi
0x75C1B7: retn    4
