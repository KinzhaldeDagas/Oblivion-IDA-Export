0x75D390: push    esi
0x75D391: mov     esi, [esp+4+arg_0]
0x75D395: push    edi
0x75D396: push    esi
0x75D397: call    sub_75F730
0x75D39C: mov     eax, ds:0B41B78h
0x75D3A1: push    eax; ArgList
0x75D3A2: call    TESOutput_PrintString
0x75D3A7: movzx   edi, word ptr [esi+0Ah]
0x75D3AB: movzx   ecx, word ptr [esi+8]
0x75D3AF: add     esp, 4
0x75D3B2: cmp     edi, ecx
0x75D3B4: mov     [esp+8+arg_0], eax
0x75D3B8: jb      short loc_75D3C8
0x75D3BA: movzx   edx, word ptr [esi+0Eh]
0x75D3BE: add     edx, edi
0x75D3C0: push    edx
0x75D3C1: mov     ecx, esi
0x75D3C3: call    NiTArray_SetSize
0x75D3C8: lea     eax, [esp+8+arg_0]
0x75D3CC: push    eax
0x75D3CD: push    edi
0x75D3CE: mov     ecx, esi
0x75D3D0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75D3D5: pop     edi
0x75D3D6: pop     esi
0x75D3D7: retn    4
