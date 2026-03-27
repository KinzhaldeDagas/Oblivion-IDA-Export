0x4BB0A0: push    esi
0x4BB0A1: push    edi
0x4BB0A2: mov     edi, dword ptr [esp+8+a2]
0x4BB0A6: push    edi; a2
0x4BB0A7: mov     esi, ecx
0x4BB0A9: call    TESForm_SaveModifiedForm
0x4BB0AE: push    edi
0x4BB0AF: lea     ecx, [esi+70h]
0x4BB0B2: call    TESValueForm_SaveModified
0x4BB0B7: pop     edi
0x4BB0B8: pop     esi
0x4BB0B9: retn    4
