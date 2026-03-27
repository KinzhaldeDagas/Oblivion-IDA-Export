0x4B95B0: push    esi
0x4B95B1: push    edi
0x4B95B2: mov     edi, dword ptr [esp+8+a2]
0x4B95B6: push    edi; a2
0x4B95B7: mov     esi, ecx
0x4B95B9: call    TESForm_SaveModifiedForm
0x4B95BE: push    edi
0x4B95BF: lea     ecx, [esi+60h]
0x4B95C2: call    TESValueForm_SaveModified
0x4B95C7: pop     edi
0x4B95C8: pop     esi
0x4B95C9: retn    4
