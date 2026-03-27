0x701A30: push    esi
0x701A31: mov     esi, [esp+4+a2]
0x701A35: push    edi
0x701A36: push    esi; a2
0x701A37: call    sub_7009A0
0x701A3C: mov     eax, ds:0B3F938h
0x701A41: push    eax; ArgList
0x701A42: call    TESOutput_PrintString
0x701A47: movzx   edi, word ptr [esi+0Ah]
0x701A4B: movzx   ecx, word ptr [esi+8]
0x701A4F: add     esp, 4
0x701A52: cmp     edi, ecx
0x701A54: mov     [esp+8+a2], eax
0x701A58: jb      short loc_701A68
0x701A5A: movzx   edx, word ptr [esi+0Eh]
0x701A5E: add     edx, edi
0x701A60: push    edx
0x701A61: mov     ecx, esi
0x701A63: call    NiTArray_SetSize
0x701A68: lea     eax, [esp+8+a2]
0x701A6C: push    eax
0x701A6D: push    edi
0x701A6E: mov     ecx, esi
0x701A70: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x701A75: pop     edi
0x701A76: pop     esi
0x701A77: retn    4
