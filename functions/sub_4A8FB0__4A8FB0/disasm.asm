0x4A8FB0: push    ebx
0x4A8FB1: mov     ebx, [esp+4+Dst]
0x4A8FB5: push    esi
0x4A8FB6: push    edi
0x4A8FB7: mov     edi, [esp+0Ch+Size]
0x4A8FBB: push    edi; a3
0x4A8FBC: push    ebx; Dst
0x4A8FBD: mov     esi, ecx
0x4A8FBF: call    TESForm_LoadModifiedForm
0x4A8FC4: push    edi; Size
0x4A8FC5: push    ebx; Dst
0x4A8FC6: lea     ecx, [esi+64h]
0x4A8FC9: call    TESValueForm_LoadModified
0x4A8FCE: pop     edi
0x4A8FCF: pop     esi
0x4A8FD0: pop     ebx
0x4A8FD1: retn    8
