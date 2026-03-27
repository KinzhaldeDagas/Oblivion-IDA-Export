0x914F30: push    esi
0x914F31: mov     esi, [esp+4+arg_0]
0x914F35: push    edi
0x914F36: push    esi
0x914F37: call    sub_8A2A50
0x914F3C: mov     eax, ds:0BA8404h
0x914F41: push    eax; ArgList
0x914F42: call    TESOutput_PrintString
0x914F47: movzx   edi, word ptr [esi+0Ah]
0x914F4B: movzx   ecx, word ptr [esi+8]
0x914F4F: add     esp, 4
0x914F52: cmp     edi, ecx
0x914F54: mov     [esp+8+arg_0], eax
0x914F58: jb      short loc_914F68
0x914F5A: movzx   edx, word ptr [esi+0Eh]
0x914F5E: add     edx, edi
0x914F60: push    edx
0x914F61: mov     ecx, esi
0x914F63: call    NiTArray_SetSize
0x914F68: lea     eax, [esp+8+arg_0]
0x914F6C: push    eax
0x914F6D: push    edi
0x914F6E: mov     ecx, esi
0x914F70: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x914F75: pop     edi
0x914F76: pop     esi
0x914F77: retn    4
