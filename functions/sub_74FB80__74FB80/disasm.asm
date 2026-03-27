0x74FB80: mov     ax, [esp+arg_4]
0x74FB85: test    ax, ax
0x74FB88: push    esi
0x74FB89: jnz     short loc_74FBDA
0x74FB8B: mov     esi, [esp+4+arg_0]
0x74FB8F: test    esi, esi
0x74FB91: jz      loc_74FC15
0x74FB97: mov     eax, [esi]
0x74FB99: mov     edx, [eax+4]
0x74FB9C: mov     ecx, esi
0x74FB9E: call    edx
0x74FBA0: test    eax, eax
0x74FBA2: jz      short loc_74FBB2
0x74FBA4: cmp     eax, offset dword_B3CFBC
0x74FBA9: jz      short loc_74FBD4
0x74FBAB: mov     eax, [eax+4]
0x74FBAE: test    eax, eax
0x74FBB0: jnz     short loc_74FBA4
0x74FBB2: mov     eax, [esi]
0x74FBB4: mov     edx, [eax+4]
0x74FBB7: mov     ecx, esi
0x74FBB9: call    edx
0x74FBBB: test    eax, eax
0x74FBBD: jz      short loc_74FC15
0x74FBBF: nop
0x74FBC0: cmp     eax, offset dword_B3CF5C
0x74FBC5: jz      short loc_74FBD4
0x74FBC7: mov     eax, [eax+4]
0x74FBCA: test    eax, eax
0x74FBCC: jnz     short loc_74FBC0
0x74FBCE: xor     al, al
0x74FBD0: pop     esi
0x74FBD1: retn    8
0x74FBD4: mov     al, 1
0x74FBD6: pop     esi
0x74FBD7: retn    8
0x74FBDA: cmp     ax, 1
0x74FBDE: jnz     short loc_74FC15
0x74FBE0: mov     esi, [esp+4+arg_0]
0x74FBE4: test    esi, esi
0x74FBE6: jz      short loc_74FC03
0x74FBE8: mov     eax, [esi]
0x74FBEA: mov     edx, [eax+4]
0x74FBED: mov     ecx, esi
0x74FBEF: call    edx
0x74FBF1: test    eax, eax
0x74FBF3: jz      short loc_74FC03
0x74FBF5: cmp     eax, offset dword_B3E7E8
0x74FBFA: jz      short loc_74FBD4
0x74FBFC: mov     eax, [eax+4]
0x74FBFF: test    eax, eax
0x74FC01: jnz     short loc_74FBF5
0x74FC03: push    esi
0x74FC04: push    offset dword_B3EA50
0x74FC09: call    NiRTTI__IsObjectOfRTTIType
0x74FC0E: add     esp, 8
0x74FC11: test    al, al
0x74FC13: jnz     short loc_74FBD4
0x74FC15: xor     al, al
0x74FC17: pop     esi
0x74FC18: retn    8
