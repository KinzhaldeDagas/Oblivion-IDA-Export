0x4B95D0: push    ebx
0x4B95D1: mov     ebx, [esp+4+Dst]
0x4B95D5: push    esi
0x4B95D6: push    edi
0x4B95D7: mov     edi, [esp+0Ch+Size]
0x4B95DB: push    edi; a3
0x4B95DC: push    ebx; Dst
0x4B95DD: mov     esi, ecx
0x4B95DF: call    TESForm_LoadModifiedForm
0x4B95E4: push    edi; Size
0x4B95E5: push    ebx; Dst
0x4B95E6: lea     ecx, [esi+60h]
0x4B95E9: call    TESValueForm_LoadModified
0x4B95EE: pop     edi
0x4B95EF: pop     esi
0x4B95F0: pop     ebx
0x4B95F1: retn    8
