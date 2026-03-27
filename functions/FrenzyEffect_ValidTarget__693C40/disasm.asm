0x693C40: mov     eax, [esp+arg_0]
0x693C44: push    esi
0x693C45: push    edi
0x693C46: push    0; int
0x693C48: push    offset ??_R0?AVCharacter@@@8; struct TypeDescriptor *
0x693C4D: push    offset ??_R0?AVMagicTarget@@@8; struct _s_RTTICompleteObjectLocator *
0x693C52: push    0; int
0x693C54: push    eax; void *
0x693C55: mov     edi, ecx
0x693C57: call    OblivionDynamicCast
0x693C5C: mov     esi, eax
0x693C5E: add     esp, 14h
0x693C61: test    esi, esi
0x693C63: jz      short loc_693CB4
0x693C65: mov     edx, [esi]
0x693C67: mov     eax, [edx+198h]
0x693C6D: push    0
0x693C6F: mov     ecx, esi
0x693C71: call    eax
0x693C73: test    al, al
0x693C75: jnz     short loc_693CB4
0x693C77: mov     edx, [esi]
0x693C79: mov     eax, [edx+1F8h]
0x693C7F: mov     ecx, esi
0x693C81: call    eax
0x693C83: test    al, al
0x693C85: jnz     short loc_693CB4
0x693C87: fld     dword ptr [edi+18h]
0x693C8A: push    ecx
0x693C8B: fstp    [esp+0Ch+arg_0]
0x693C8F: mov     ecx, esi
0x693C91: fld     [esp+0Ch+arg_0]
0x693C95: fstp    [esp+0Ch+var_C]; float
0x693C98: call    Actor_GetLevel
0x693C9D: movzx   ecx, ax
0x693CA0: push    ecx; int
0x693CA1: call    Calc_MagnitudeAffectsLevel
0x693CA6: add     esp, 8
0x693CA9: test    al, al
0x693CAB: jz      short loc_693CB4
0x693CAD: pop     edi
0x693CAE: mov     al, 1
0x693CB0: pop     esi
0x693CB1: retn    4
0x693CB4: pop     edi
0x693CB5: xor     al, al
0x693CB7: pop     esi
0x693CB8: retn    4
