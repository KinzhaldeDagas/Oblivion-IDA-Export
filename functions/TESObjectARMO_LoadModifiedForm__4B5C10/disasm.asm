0x4B5C10: push    ebx
0x4B5C11: mov     ebx, [esp+4+Dst]
0x4B5C15: push    esi
0x4B5C16: push    edi
0x4B5C17: mov     edi, [esp+0Ch+Size]
0x4B5C1B: push    edi; a3
0x4B5C1C: push    ebx; Dst
0x4B5C1D: mov     esi, ecx
0x4B5C1F: call    TESForm_LoadModifiedForm
0x4B5C24: push    edi; Size
0x4B5C25: push    ebx; Dst
0x4B5C26: lea     ecx, [esi+4Ch]
0x4B5C29: call    TESValueForm_LoadModified
0x4B5C2E: pop     edi
0x4B5C2F: pop     esi
0x4B5C30: pop     ebx
0x4B5C31: retn    8
