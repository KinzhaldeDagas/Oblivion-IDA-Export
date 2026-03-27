0x4B0B90: push    ebx
0x4B0B91: mov     ebx, [esp+4+Dst]
0x4B0B95: push    esi
0x4B0B96: push    edi
0x4B0B97: mov     edi, [esp+0Ch+Size]
0x4B0B9B: push    edi; a3
0x4B0B9C: push    ebx; Dst
0x4B0B9D: mov     esi, ecx
0x4B0B9F: call    TESForm_LoadModifiedForm
0x4B0BA4: push    edi; Size
0x4B0BA5: push    ebx; Dst
0x4B0BA6: lea     ecx, [esi+68h]
0x4B0BA9: call    TESValueForm_LoadModified
0x4B0BAE: pop     edi
0x4B0BAF: pop     esi
0x4B0BB0: pop     ebx
0x4B0BB1: retn    8
