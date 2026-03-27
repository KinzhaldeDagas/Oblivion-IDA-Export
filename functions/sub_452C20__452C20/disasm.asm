0x452C20: mov     eax, [esp+arg_0]
0x452C24: push    ebx
0x452C25: mov     ebx, [eax+0Ch]
0x452C28: push    esi
0x452C29: push    edi
0x452C2A: mov     edi, ecx
0x452C2C: lea     ecx, [esp+0Ch+arg_0]
0x452C30: push    ecx
0x452C31: push    ebx
0x452C32: mov     ecx, edi
0x452C34: call    NiTMap_GetAt
0x452C39: test    al, al
0x452C3B: jnz     short loc_452C74
0x452C3D: push    8; Size
0x452C3F: call    FormHeapAlloc
0x452C44: add     esp, 4
0x452C47: test    eax, eax
0x452C49: jz      short loc_452C65
0x452C4B: push    eax; a3
0x452C4C: push    ebx; a2
0x452C4D: mov     ecx, edi; this
0x452C4F: mov     dword ptr [eax], 0
0x452C55: mov     dword ptr [eax+4], 0
0x452C5C: mov     esi, eax
0x452C5E: call    NiTMap_SetAt
0x452C63: jmp     short loc_452C78
0x452C65: xor     eax, eax
0x452C67: push    eax; a3
0x452C68: push    ebx; a2
0x452C69: mov     ecx, edi; this
0x452C6B: mov     esi, eax
0x452C6D: call    NiTMap_SetAt
0x452C72: jmp     short loc_452C78
0x452C74: mov     esi, [esp+0Ch+arg_0]
0x452C78: cmp     dword ptr [esi+4], 0
0x452C7C: mov     eax, esi
0x452C7E: jnz     short loc_452C86
0x452C80: mov     edx, [esp+0Ch+arg_4]
0x452C84: or      [esi], edx
0x452C86: pop     edi
0x452C87: pop     esi
0x452C88: pop     ebx
0x452C89: retn    8
