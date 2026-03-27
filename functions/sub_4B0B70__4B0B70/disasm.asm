0x4B0B70: push    esi
0x4B0B71: push    edi
0x4B0B72: mov     edi, dword ptr [esp+8+a2]
0x4B0B76: push    edi; a2
0x4B0B77: mov     esi, ecx
0x4B0B79: call    TESForm_SaveModifiedForm
0x4B0B7E: push    edi
0x4B0B7F: lea     ecx, [esi+68h]
0x4B0B82: call    TESValueForm_SaveModified
0x4B0B87: pop     edi
0x4B0B88: pop     esi
0x4B0B89: retn    4
