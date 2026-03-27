0x4F8F30: fldz
0x4F8F32: push    ebx
0x4F8F33: mov     ebx, [esp+4+arg_C]
0x4F8F37: fstp    qword ptr [ebx]
0x4F8F39: push    esi
0x4F8F3A: mov     esi, [esp+8+arg_0]
0x4F8F3E: push    edi
0x4F8F3F: xor     edi, edi
0x4F8F41: test    esi, esi
0x4F8F43: jz      short loc_4F8F6D
0x4F8F45: mov     eax, [esi]
0x4F8F47: mov     edx, [eax+190h]
0x4F8F4D: mov     ecx, esi
0x4F8F4F: call    edx
0x4F8F51: test    al, al
0x4F8F53: jz      short loc_4F8F6D
0x4F8F55: mov     eax, [esi]
0x4F8F57: mov     edx, [eax+334h]
0x4F8F5D: push    1
0x4F8F5F: mov     ecx, esi
0x4F8F61: mov     edi, esi
0x4F8F63: call    edx
0x4F8F65: test    al, al
0x4F8F67: jz      short loc_4F8F6D
0x4F8F69: fld1
0x4F8F6B: fstp    qword ptr [ebx]
0x4F8F6D: mov     ecx, ds:0B333C4h
0x4F8F73: cmp     edi, ecx
0x4F8F75: jnz     short loc_4F8F8B
0x4F8F77: push    0
0x4F8F79: call    PlayerCharacter_IsPlayerInCombat
0x4F8F7E: movzx   eax, al
0x4F8F81: mov     [esp+0Ch+arg_C], eax
0x4F8F85: fild    [esp+0Ch+arg_C]
0x4F8F89: fstp    qword ptr [ebx]
0x4F8F8B: cmp     byte ptr ds:0B361ACh, 0
0x4F8F92: jz      short loc_4F9000
0x4F8F94: fldz
0x4F8F96: push    0; int
0x4F8F98: fcomp   qword ptr [ebx]
0x4F8F9A: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x4F8F9F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4F8FA4: push    0; int
0x4F8FA6: push    edi; void *
0x4F8FA7: fnstsw  ax
0x4F8FA9: test    ah, 44h
0x4F8FAC: jnp     short loc_4F8FDA
0x4F8FAE: call    OblivionDynamicCast
0x4F8FB3: add     esp, 14h
0x4F8FB6: test    eax, eax
0x4F8FB8: jz      short loc_4F8FC1
0x4F8FBA: mov     eax, [eax+4]
0x4F8FBD: test    eax, eax
0x4F8FBF: jnz     short loc_4F8FC6
0x4F8FC1: mov     eax, offset EmptyString
0x4F8FC6: push    eax
0x4F8FC7: push    offset aSIsInCombat; "%s is in combat"
0x4F8FCC: call    Interface_ConsolePrint
0x4F8FD1: add     esp, 8
0x4F8FD4: pop     edi
0x4F8FD5: pop     esi
0x4F8FD6: mov     al, 1
0x4F8FD8: pop     ebx
0x4F8FD9: retn
0x4F8FDA: call    OblivionDynamicCast
0x4F8FDF: add     esp, 14h
0x4F8FE2: test    eax, eax
0x4F8FE4: jz      short loc_4F8FED
0x4F8FE6: mov     eax, [eax+4]
0x4F8FE9: test    eax, eax
0x4F8FEB: jnz     short loc_4F8FF2
0x4F8FED: mov     eax, offset EmptyString
0x4F8FF2: push    eax
0x4F8FF3: push    offset aSIsNotInComb_0; "%s is not in combat"
0x4F8FF8: call    Interface_ConsolePrint
0x4F8FFD: add     esp, 8
0x4F9000: pop     edi
0x4F9001: pop     esi
0x4F9002: mov     al, 1
0x4F9004: pop     ebx
0x4F9005: retn
