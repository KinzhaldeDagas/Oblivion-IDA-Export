0x8B0BE0: push    esi
0x8B0BE1: mov     esi, [esp+4+arg_0]
0x8B0BE5: push    edi
0x8B0BE6: push    esi
0x8B0BE7: call    sub_8B04D0
0x8B0BEC: mov     eax, ds:0BA7FA8h
0x8B0BF1: push    eax; ArgList
0x8B0BF2: call    TESOutput_PrintString
0x8B0BF7: movzx   edi, word ptr [esi+0Ah]
0x8B0BFB: movzx   ecx, word ptr [esi+8]
0x8B0BFF: add     esp, 4
0x8B0C02: cmp     edi, ecx
0x8B0C04: mov     [esp+8+arg_0], eax
0x8B0C08: jb      short loc_8B0C18
0x8B0C0A: movzx   edx, word ptr [esi+0Eh]
0x8B0C0E: add     edx, edi
0x8B0C10: push    edx
0x8B0C11: mov     ecx, esi
0x8B0C13: call    NiTArray_SetSize
0x8B0C18: lea     eax, [esp+8+arg_0]
0x8B0C1C: push    eax
0x8B0C1D: push    edi
0x8B0C1E: mov     ecx, esi
0x8B0C20: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B0C25: pop     edi
0x8B0C26: pop     esi
0x8B0C27: retn    4
