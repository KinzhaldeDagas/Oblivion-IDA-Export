0x4B4B50: push    esi
0x4B4B51: push    edi
0x4B4B52: mov     edi, dword ptr [esp+8+a2]
0x4B4B56: push    edi; a2
0x4B4B57: mov     esi, ecx
0x4B4B59: call    TESForm_SaveModifiedForm
0x4B4B5E: push    edi
0x4B4B5F: lea     ecx, [esi+4Ch]
0x4B4B62: call    TESValueForm_SaveModified
0x4B4B67: pop     edi
0x4B4B68: pop     esi
0x4B4B69: retn    4
