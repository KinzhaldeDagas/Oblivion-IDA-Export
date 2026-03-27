0x6E7B00: push    esi
0x6E7B01: mov     esi, [esp+4+a2]
0x6E7B05: push    edi
0x6E7B06: push    esi; a2
0x6E7B07: call    sub_7009A0
0x6E7B0C: mov     eax, ds:0B3E728h
0x6E7B11: push    eax; ArgList
0x6E7B12: call    TESOutput_PrintString
0x6E7B17: movzx   edi, word ptr [esi+0Ah]
0x6E7B1B: movzx   ecx, word ptr [esi+8]
0x6E7B1F: add     esp, 4
0x6E7B22: cmp     edi, ecx
0x6E7B24: mov     [esp+8+a2], eax
0x6E7B28: jb      short loc_6E7B38
0x6E7B2A: movzx   edx, word ptr [esi+0Eh]
0x6E7B2E: add     edx, edi
0x6E7B30: push    edx
0x6E7B31: mov     ecx, esi
0x6E7B33: call    NiTArray_SetSize
0x6E7B38: lea     eax, [esp+8+a2]
0x6E7B3C: push    eax
0x6E7B3D: push    edi
0x6E7B3E: mov     ecx, esi
0x6E7B40: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E7B45: pop     edi
0x6E7B46: pop     esi
0x6E7B47: retn    4
