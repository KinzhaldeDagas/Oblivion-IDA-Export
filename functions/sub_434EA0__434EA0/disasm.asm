0x434EA0: push    esi
0x434EA1: mov     esi, ecx
0x434EA3: mov     eax, [esi+24h]
0x434EA6: test    eax, eax
0x434EA8: push    edi
0x434EA9: jz      short loc_434EBB
0x434EAB: mov     ecx, dword_B35300
0x434EB1: push    0
0x434EB3: push    eax
0x434EB4: call    sub_4A1ED0
0x434EB9: jmp     short loc_434ED2
0x434EBB: mov     eax, [esi+20h]
0x434EBE: test    eax, eax
0x434EC0: jz      short loc_434EDB
0x434EC2: mov     ecx, dword_B35300
0x434EC8: mov     edx, [ecx]
0x434ECA: push    0
0x434ECC: push    eax
0x434ECD: mov     eax, [edx+4]
0x434ED0: call    eax
0x434ED2: push    eax; a2
0x434ED3: lea     ecx, [esi+28h]; this
0x434ED6: call    NiSmartPointer_Set??
0x434EDB: cmp     dword ptr [esi+28h], 0
0x434EDF: lea     edi, [esi+28h]
0x434EE2: jnz     loc_434F81
0x434EE8: mov     eax, [esi+20h]
0x434EEB: test    eax, eax
0x434EED: jz      short loc_434F0A
0x434EEF: push    1; char
0x434EF1: push    offset dword_B256D0; int
0x434EF6: push    eax; Src
0x434EF7: call    NiSourceTexture__LoadTextureByFilename
0x434EFC: add     esp, 0Ch
0x434EFF: push    eax; a2
0x434F00: mov     ecx, edi; this
0x434F02: call    NiSmartPointer_Set??
0x434F07: pop     edi
0x434F08: pop     esi
0x434F09: retn
0x434F0A: mov     eax, [esi+24h]
0x434F0D: test    eax, eax
0x434F0F: jz      short loc_434F3F
0x434F11: push    0; ArgList
0x434F13: push    0FFFFFFFFh; int
0x434F15: push    eax; int
0x434F16: push    1; int
0x434F18: call    sub_42EBC0
0x434F1D: add     esp, 10h
0x434F20: test    eax, eax
0x434F22: jz      short loc_434F3F
0x434F24: push    1
0x434F26: push    offset dword_B256D0
0x434F2B: push    eax
0x434F2C: call    NiSourceTexture__LoadTextureNothing
0x434F31: add     esp, 0Ch
0x434F34: push    eax; a2
0x434F35: mov     ecx, edi; this
0x434F37: call    NiSmartPointer_Set??
0x434F3C: pop     edi
0x434F3D: pop     esi
0x434F3E: retn
0x434F3F: cmp     dword ptr [esi+24h], 0
0x434F43: jz      short loc_434F6C
0x434F45: mov     esi, [esi+24h]
0x434F48: mov     ecx, [esi+8]
0x434F4B: mov     edx, [esi+0Ch]
0x434F4E: and     ecx, 3FFFFFFFh
0x434F54: push    ecx
0x434F55: and     edx, 7FFFFFFFh
0x434F5B: push    edx; ArgList
0x434F5C: push    offset aCouldNotGetFil; "Could not get file for texture with fil"...
0x434F61: call    PrintError
0x434F66: add     esp, 0Ch
0x434F69: pop     edi
0x434F6A: pop     esi
0x434F6B: retn
0x434F6C: mov     esi, [esi+20h]
0x434F6F: test    esi, esi
0x434F71: jz      short loc_434F81
0x434F73: push    esi; ArgList
0x434F74: push    offset aCouldNotGetF_0; "Could not get file for texture %s."
0x434F79: call    PrintError
0x434F7E: add     esp, 8
0x434F81: pop     edi
0x434F82: pop     esi
0x434F83: retn
