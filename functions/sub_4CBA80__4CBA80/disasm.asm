0x4CBA80: cmp     [esp+arg_0], 0
0x4CBA85: push    ebp
0x4CBA86: mov     ebp, ecx
0x4CBA88: jnz     short loc_4CBA90
0x4CBA8A: xor     eax, eax
0x4CBA8C: pop     ebp
0x4CBA8D: retn    8
0x4CBA90: push    ebx
0x4CBA91: push    esi
0x4CBA92: push    edi
0x4CBA93: push    ebp; a2
0x4CBA94: mov     ecx, offset stru_B35C80; this
0x4CBA99: call    sub_496EA0
0x4CBA9E: lea     esi, [ebp+48h]
0x4CBAA1: test    esi, esi
0x4CBAA3: jz      short loc_4CBAE9
0x4CBAA5: mov     bl, [esp+10h+arg_4]
0x4CBAA9: lea     esp, [esp+0]
0x4CBAB0: cmp     dword ptr [esi+4], 0
0x4CBAB4: jnz     short loc_4CBABB
0x4CBAB6: cmp     dword ptr [esi], 0
0x4CBAB9: jz      short loc_4CBAE9
0x4CBABB: mov     edi, [esi]
0x4CBABD: mov     eax, [edi]
0x4CBABF: mov     edx, [eax+170h]
0x4CBAC5: mov     ecx, edi
0x4CBAC7: call    edx
0x4CBAC9: test    eax, eax
0x4CBACB: mov     esi, [esi+4]
0x4CBACE: jz      short loc_4CBAE5
0x4CBAD0: test    bl, bl
0x4CBAD2: jz      short loc_4CBADF
0x4CBAD4: mov     ecx, [edi+8]
0x4CBAD7: shr     ecx, 5
0x4CBADA: test    cl, 1
0x4CBADD: jnz     short loc_4CBAE5
0x4CBADF: cmp     eax, [esp+10h+arg_0]
0x4CBAE3: jz      short loc_4CBAFD
0x4CBAE5: test    esi, esi
0x4CBAE7: jnz     short loc_4CBAB0
0x4CBAE9: push    ebp; a2
0x4CBAEA: mov     ecx, offset stru_B35C80; this
0x4CBAEF: call    sub_496F50
0x4CBAF4: pop     edi
0x4CBAF5: pop     esi
0x4CBAF6: pop     ebx
0x4CBAF7: xor     eax, eax
0x4CBAF9: pop     ebp
0x4CBAFA: retn    8
0x4CBAFD: push    ebp; a2
0x4CBAFE: mov     ecx, offset stru_B35C80; this
0x4CBB03: call    sub_496F50
0x4CBB08: mov     eax, edi
0x4CBB0A: pop     edi
0x4CBB0B: pop     esi
0x4CBB0C: pop     ebx
0x4CBB0D: pop     ebp
0x4CBB0E: retn    8
