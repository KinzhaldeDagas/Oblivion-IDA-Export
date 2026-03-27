0x6E0EA0: push    esi
0x6E0EA1: mov     esi, [esp+4+arg_0]
0x6E0EA5: push    edi
0x6E0EA6: push    esi
0x6E0EA7: call    sub_6ECC30
0x6E0EAC: mov     eax, ds:0B3E00Ch
0x6E0EB1: push    eax; ArgList
0x6E0EB2: call    TESOutput_PrintString
0x6E0EB7: movzx   edi, word ptr [esi+0Ah]
0x6E0EBB: movzx   ecx, word ptr [esi+8]
0x6E0EBF: add     esp, 4
0x6E0EC2: cmp     edi, ecx
0x6E0EC4: mov     [esp+8+arg_0], eax
0x6E0EC8: jb      short loc_6E0ED8
0x6E0ECA: movzx   edx, word ptr [esi+0Eh]
0x6E0ECE: add     edx, edi
0x6E0ED0: push    edx
0x6E0ED1: mov     ecx, esi
0x6E0ED3: call    NiTArray_SetSize
0x6E0ED8: lea     eax, [esp+8+arg_0]
0x6E0EDC: push    eax
0x6E0EDD: push    edi
0x6E0EDE: mov     ecx, esi
0x6E0EE0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E0EE5: pop     edi
0x6E0EE6: pop     esi
0x6E0EE7: retn    4
