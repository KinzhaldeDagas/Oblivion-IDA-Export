0x8AED00: push    esi
0x8AED01: mov     esi, [esp+4+arg_0]
0x8AED05: push    edi
0x8AED06: push    esi
0x8AED07: call    sub_89FB70
0x8AED0C: mov     eax, ds:0BA7F60h
0x8AED11: push    eax; ArgList
0x8AED12: call    TESOutput_PrintString
0x8AED17: movzx   edi, word ptr [esi+0Ah]
0x8AED1B: movzx   ecx, word ptr [esi+8]
0x8AED1F: add     esp, 4
0x8AED22: cmp     edi, ecx
0x8AED24: mov     [esp+8+arg_0], eax
0x8AED28: jb      short loc_8AED38
0x8AED2A: movzx   edx, word ptr [esi+0Eh]
0x8AED2E: add     edx, edi
0x8AED30: push    edx
0x8AED31: mov     ecx, esi
0x8AED33: call    NiTArray_SetSize
0x8AED38: lea     eax, [esp+8+arg_0]
0x8AED3C: push    eax
0x8AED3D: push    edi
0x8AED3E: mov     ecx, esi
0x8AED40: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8AED45: pop     edi
0x8AED46: pop     esi
0x8AED47: retn    4
