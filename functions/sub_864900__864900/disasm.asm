0x864900: push    esi
0x864901: mov     esi, [esp+4+arg_0]
0x864905: push    edi
0x864906: push    esi
0x864907: call    sub_7EE5D0
0x86490C: mov     eax, ds:0B4335Ch
0x864911: push    eax; ArgList
0x864912: call    TESOutput_PrintString
0x864917: movzx   edi, word ptr [esi+0Ah]
0x86491B: movzx   ecx, word ptr [esi+8]
0x86491F: add     esp, 4
0x864922: cmp     edi, ecx
0x864924: mov     [esp+8+arg_0], eax
0x864928: jb      short loc_864938
0x86492A: movzx   edx, word ptr [esi+0Eh]
0x86492E: add     edx, edi
0x864930: push    edx
0x864931: mov     ecx, esi
0x864933: call    NiTArray_SetSize
0x864938: lea     eax, [esp+8+arg_0]
0x86493C: push    eax
0x86493D: push    edi
0x86493E: mov     ecx, esi
0x864940: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x864945: pop     edi
0x864946: pop     esi
0x864947: retn    4
