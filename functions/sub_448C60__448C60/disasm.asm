0x448C60: mov     ecx, [esp+arg_0]
0x448C64: test    ecx, ecx
0x448C66: push    ebx
0x448C67: mov     bl, 1
0x448C69: jz      short loc_448C8E
0x448C6B: call    TESFile_GetIsMaster
0x448C70: test    al, al
0x448C72: jnz     short loc_448C8E
0x448C74: mov     ecx, ds:0B33B00h
0x448C7A: test    ecx, ecx
0x448C7C: jz      short loc_448C88
0x448C7E: mov     eax, [ecx+18h]
0x448C81: shr     eax, 0Ch
0x448C84: test    bl, al
0x448C86: jnz     short loc_448C94
0x448C88: mov     al, 1
0x448C8A: pop     ebx
0x448C8B: retn    8
0x448C8E: mov     ecx, ds:0B33B00h
0x448C94: mov     edx, [esp+4+arg_4]
0x448C98: test    edx, edx
0x448C9A: jz      short def_448CD8; jumptable 00448CD8 default case, cases 4,6,19-22,26,27,33-36,38,39,42,44,48-56,59
0x448C9C: mov     eax, [edx+0Ch]
0x448C9F: cmp     eax, 4
0x448CA2: jb      short loc_448CAE
0x448CA4: cmp     eax, 5
0x448CA7: jbe     short loc_448CDF; jumptable 00448CD8 cases 3,5,7-18,23-25,28-32,37,40,41,43,45-47,57,58,60-68
0x448CA9: cmp     eax, 9
0x448CAC: jz      short loc_448CDF; jumptable 00448CD8 cases 3,5,7-18,23-25,28-32,37,40,41,43,45-47,57,58,60-68
0x448CAE: test    ecx, ecx
0x448CB0: jz      short def_448CD8; jumptable 00448CD8 default case, cases 4,6,19-22,26,27,33-36,38,39,42,44,48-56,59
0x448CB2: mov     ecx, [ecx+18h]
0x448CB5: shr     ecx, 0Ch
0x448CB8: test    cl, 1
0x448CBB: jz      short def_448CD8; jumptable 00448CD8 default case, cases 4,6,19-22,26,27,33-36,38,39,42,44,48-56,59
0x448CBD: mov     edx, [edx+8]
0x448CC0: push    edx
0x448CC1: call    TESForm_GetFormTypeFromChunkType
0x448CC6: add     eax, 0FFFFFFFDh; switch 66 cases
0x448CC9: add     esp, 4
0x448CCC: cmp     eax, 41h
0x448CCF: ja      short def_448CD8; jumptable 00448CD8 default case, cases 4,6,19-22,26,27,33-36,38,39,42,44,48-56,59
0x448CD1: movzx   eax, ds:byte_448CF0[eax]
0x448CD8: jmp     ds:jpt_448CD8[eax*4]; switch jump
0x448CDF: xor     bl, bl; jumptable 00448CD8 cases 3,5,7-18,23-25,28-32,37,40,41,43,45-47,57,58,60-68
0x448CE1: mov     al, bl; jumptable 00448CD8 default case, cases 4,6,19-22,26,27,33-36,38,39,42,44,48-56,59
0x448CE3: pop     ebx
0x448CE4: retn    8
