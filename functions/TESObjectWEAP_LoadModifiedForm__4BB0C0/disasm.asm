0x4BB0C0: push    ebx
0x4BB0C1: mov     ebx, [esp+4+Dst]
0x4BB0C5: push    esi
0x4BB0C6: push    edi
0x4BB0C7: mov     edi, [esp+0Ch+Size]
0x4BB0CB: push    edi; a3
0x4BB0CC: push    ebx; Dst
0x4BB0CD: mov     esi, ecx
0x4BB0CF: call    TESForm_LoadModifiedForm
0x4BB0D4: push    edi; Size
0x4BB0D5: push    ebx; Dst
0x4BB0D6: lea     ecx, [esi+70h]
0x4BB0D9: call    TESValueForm_LoadModified
0x4BB0DE: pop     edi
0x4BB0DF: pop     esi
0x4BB0E0: pop     ebx
0x4BB0E1: retn    8
