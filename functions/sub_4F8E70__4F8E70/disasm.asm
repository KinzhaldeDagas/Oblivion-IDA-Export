0x4F8E70: fldz
0x4F8E72: push    ebx
0x4F8E73: mov     ebx, [esp+4+arg_C]
0x4F8E77: fstp    qword ptr [ebx]
0x4F8E79: push    esi
0x4F8E7A: push    edi
0x4F8E7B: mov     edi, [esp+0Ch+arg_0]
0x4F8E7F: xor     esi, esi
0x4F8E81: test    edi, edi
0x4F8E83: jz      short loc_4F8E97
0x4F8E85: mov     eax, [edi]
0x4F8E87: mov     edx, [eax+190h]
0x4F8E8D: mov     ecx, edi
0x4F8E8F: call    edx
0x4F8E91: test    al, al
0x4F8E93: jz      short loc_4F8E97
0x4F8E95: mov     esi, edi
0x4F8E97: mov     edi, [esp+0Ch+arg_4]
0x4F8E9B: push    edi
0x4F8E9C: lea     ecx, [esi+44h]
0x4F8E9F: call    sub_420ED0
0x4F8EA4: mov     [esp+0Ch+arg_C], eax
0x4F8EA8: fild    [esp+0Ch+arg_C]
0x4F8EAC: fstp    qword ptr [ebx]
0x4F8EAE: cmp     byte ptr ds:0B361ACh, 0
0x4F8EB5: jz      short loc_4F8F25
0x4F8EB7: push    0; int
0x4F8EB9: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x4F8EBE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4F8EC3: push    0; int
0x4F8EC5: push    esi; void *
0x4F8EC6: call    OblivionDynamicCast
0x4F8ECB: add     esp, 14h
0x4F8ECE: test    eax, eax
0x4F8ED0: jz      short loc_4F8EE2
0x4F8ED2: mov     eax, [eax+4]
0x4F8ED5: test    eax, eax
0x4F8ED7: jnz     short loc_4F8EDE
0x4F8ED9: mov     eax, offset EmptyString
0x4F8EDE: mov     esi, eax
0x4F8EE0: jmp     short loc_4F8EE7
0x4F8EE2: mov     esi, offset EmptyString
0x4F8EE7: push    0; int
0x4F8EE9: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x4F8EEE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4F8EF3: push    0; int
0x4F8EF5: push    edi; void *
0x4F8EF6: call    OblivionDynamicCast
0x4F8EFB: add     esp, 14h
0x4F8EFE: test    eax, eax
0x4F8F00: jz      short loc_4F8F09
0x4F8F02: mov     eax, [eax+4]
0x4F8F05: test    eax, eax
0x4F8F07: jnz     short loc_4F8F0E
0x4F8F09: mov     eax, offset EmptyString
0x4F8F0E: fld     qword ptr [ebx]
0x4F8F10: sub     esp, 8
0x4F8F13: fstp    [esp+14h+var_14]
0x4F8F16: push    esi
0x4F8F17: push    eax
0x4F8F18: push    offset aSHasHitS0_2fTi; "%s has hit %s %0.2f times"
0x4F8F1D: call    Interface_ConsolePrint
0x4F8F22: add     esp, 14h
0x4F8F25: pop     edi
0x4F8F26: pop     esi
0x4F8F27: mov     al, 1
0x4F8F29: pop     ebx
0x4F8F2A: retn
