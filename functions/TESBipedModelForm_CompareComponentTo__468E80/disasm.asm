0x468E80: mov     eax, [esp+arg_0]
0x468E84: push    ebx
0x468E85: push    edi
0x468E86: push    0; int
0x468E88: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x468E8D: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x468E92: push    0; int
0x468E94: push    eax; void *
0x468E95: mov     ebx, ecx
0x468E97: call    OblivionDynamicCast
0x468E9C: mov     edi, eax
0x468E9E: add     esp, 14h
0x468EA1: test    edi, edi
0x468EA3: jnz     short loc_468EAC
0x468EA5: pop     edi
0x468EA6: mov     al, 1
0x468EA8: pop     ebx
0x468EA9: retn    4
0x468EAC: push    ebp
0x468EAD: mov     eax, 4
0x468EB2: lea     ecx, [edi+4]
0x468EB5: lea     edx, [ebx+4]
0x468EB8: push    esi
0x468EB9: lea     esp, [esp+0]
0x468EC0: mov     esi, [edx]
0x468EC2: cmp     esi, [ecx]
0x468EC4: jnz     short loc_468ED8
0x468EC6: sub     eax, 4
0x468EC9: add     ecx, 4
0x468ECC: add     edx, 4
0x468ECF: cmp     eax, 4
0x468ED2: jnb     short loc_468EC0
0x468ED4: test    eax, eax
0x468ED6: jz      short loc_468F35
0x468ED8: movzx   esi, byte ptr [edx]
0x468EDB: movzx   ebp, byte ptr [ecx]
0x468EDE: sub     esi, ebp
0x468EE0: jnz     short loc_468F27
0x468EE2: sub     eax, 1
0x468EE5: add     ecx, 1
0x468EE8: add     edx, 1
0x468EEB: test    eax, eax
0x468EED: jz      short loc_468F35
0x468EEF: movzx   esi, byte ptr [edx]
0x468EF2: movzx   ebp, byte ptr [ecx]
0x468EF5: sub     esi, ebp
0x468EF7: jnz     short loc_468F27
0x468EF9: sub     eax, 1
0x468EFC: add     ecx, 1
0x468EFF: add     edx, 1
0x468F02: test    eax, eax
0x468F04: jz      short loc_468F35
0x468F06: movzx   esi, byte ptr [edx]
0x468F09: movzx   ebp, byte ptr [ecx]
0x468F0C: sub     esi, ebp
0x468F0E: jnz     short loc_468F27
0x468F10: sub     eax, 1
0x468F13: add     ecx, 1
0x468F16: add     edx, 1
0x468F19: test    eax, eax
0x468F1B: jz      short loc_468F35
0x468F1D: movzx   esi, byte ptr [edx]
0x468F20: movzx   ecx, byte ptr [ecx]
0x468F23: sub     esi, ecx
0x468F25: jz      short loc_468F35
0x468F27: test    esi, esi
0x468F29: mov     eax, 1
0x468F2E: jg      short loc_468F37
0x468F30: or      eax, 0FFFFFFFFh
0x468F33: jmp     short loc_468F37
0x468F35: xor     eax, eax
0x468F37: test    eax, eax
0x468F39: pop     esi
0x468F3A: pop     ebp
0x468F3B: jnz     loc_468EA5
0x468F41: mov     edx, [ebx+8]
0x468F44: mov     edx, [edx+0Ch]
0x468F47: lea     ecx, [ebx+8]
0x468F4A: lea     eax, [edi+8]
0x468F4D: push    eax
0x468F4E: call    edx
0x468F50: test    al, al
0x468F52: jnz     loc_468EA5
0x468F58: mov     eax, [ebx+38h]
0x468F5B: mov     eax, [eax+0Ch]
0x468F5E: lea     ecx, [ebx+38h]
0x468F61: lea     edx, [edi+38h]
0x468F64: push    edx
0x468F65: call    eax
0x468F67: test    al, al
0x468F69: jnz     loc_468EA5
0x468F6F: mov     edx, [ebx+68h]
0x468F72: mov     edx, [edx+0Ch]
0x468F75: lea     ecx, [ebx+68h]
0x468F78: lea     eax, [edi+68h]
0x468F7B: push    eax
0x468F7C: call    edx
0x468F7E: test    al, al
0x468F80: jnz     loc_468EA5
0x468F86: mov     eax, [ebx+20h]
0x468F89: mov     eax, [eax+0Ch]
0x468F8C: lea     ecx, [ebx+20h]
0x468F8F: lea     edx, [edi+20h]
0x468F92: push    edx
0x468F93: call    eax
0x468F95: test    al, al
0x468F97: jnz     loc_468EA5
0x468F9D: mov     edx, [ebx+50h]
0x468FA0: mov     edx, [edx+0Ch]
0x468FA3: lea     ecx, [ebx+50h]
0x468FA6: lea     eax, [edi+50h]
0x468FA9: push    eax
0x468FAA: call    edx
0x468FAC: test    al, al
0x468FAE: jnz     loc_468EA5
0x468FB4: mov     eax, [ebx+74h]
0x468FB7: mov     edx, [eax+0Ch]
0x468FBA: lea     ecx, [ebx+74h]
0x468FBD: add     edi, 74h ; 't'
0x468FC0: push    edi
0x468FC1: call    edx
0x468FC3: test    al, al
0x468FC5: pop     edi
0x468FC6: setnz   al
0x468FC9: pop     ebx
0x468FCA: retn    4
