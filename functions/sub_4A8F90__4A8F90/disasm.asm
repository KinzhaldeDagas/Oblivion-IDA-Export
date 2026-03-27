0x4A8F90: push    esi
0x4A8F91: push    edi
0x4A8F92: mov     edi, dword ptr [esp+8+a2]
0x4A8F96: push    edi; a2
0x4A8F97: mov     esi, ecx
0x4A8F99: call    TESForm_SaveModifiedForm
0x4A8F9E: push    edi
0x4A8F9F: lea     ecx, [esi+64h]
0x4A8FA2: call    TESValueForm_SaveModified
0x4A8FA7: pop     edi
0x4A8FA8: pop     esi
0x4A8FA9: retn    4
