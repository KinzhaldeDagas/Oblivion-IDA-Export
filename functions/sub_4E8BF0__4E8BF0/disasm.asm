0x4E8BF0: push    ebx
0x4E8BF1: mov     ebx, dword ptr [esp+4+a2]
0x4E8BF5: test    bl, bl
0x4E8BF7: push    esi
0x4E8BF8: mov     esi, ecx
0x4E8BFA: jz      short loc_4E8C0F
0x4E8BFC: mov     ecx, [esi+2Ch]
0x4E8BFF: test    ecx, ecx
0x4E8C01: jz      short loc_4E8C0F
0x4E8C03: mov     eax, [ecx]
0x4E8C05: mov     edx, [eax+90h]
0x4E8C0B: push    1
0x4E8C0D: call    edx
0x4E8C0F: push    ebx; a2
0x4E8C10: mov     ecx, esi; this
0x4E8C12: call    TESForm_SetFromActiveFile
0x4E8C17: pop     esi
0x4E8C18: pop     ebx
0x4E8C19: retn    4
