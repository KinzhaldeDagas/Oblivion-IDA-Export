0x6ECC30: push    esi
0x6ECC31: mov     esi, [esp+4+arg_0]
0x6ECC35: push    edi
0x6ECC36: push    esi
0x6ECC37: call    sub_6CE3F0
0x6ECC3C: mov     eax, ds:0B3EEFCh
0x6ECC41: push    eax; ArgList
0x6ECC42: call    TESOutput_PrintString
0x6ECC47: movzx   edi, word ptr [esi+0Ah]
0x6ECC4B: movzx   ecx, word ptr [esi+8]
0x6ECC4F: add     esp, 4
0x6ECC52: cmp     edi, ecx
0x6ECC54: mov     [esp+8+arg_0], eax
0x6ECC58: jb      short loc_6ECC68
0x6ECC5A: movzx   edx, word ptr [esi+0Eh]
0x6ECC5E: add     edx, edi
0x6ECC60: push    edx
0x6ECC61: mov     ecx, esi
0x6ECC63: call    NiTArray_SetSize
0x6ECC68: lea     eax, [esp+8+arg_0]
0x6ECC6C: push    eax
0x6ECC6D: push    edi
0x6ECC6E: mov     ecx, esi
0x6ECC70: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6ECC75: pop     edi
0x6ECC76: pop     esi
0x6ECC77: retn    4
