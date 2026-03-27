0x4F8CF0: fldz
0x4F8CF2: push    ebx
0x4F8CF3: mov     ebx, [esp+4+arg_C]
0x4F8CF7: fstp    qword ptr [ebx]
0x4F8CF9: push    esi
0x4F8CFA: push    edi
0x4F8CFB: mov     edi, [esp+0Ch+arg_0]
0x4F8CFF: xor     esi, esi
0x4F8D01: test    edi, edi
0x4F8D03: jz      short loc_4F8D17
0x4F8D05: mov     eax, [edi]
0x4F8D07: mov     edx, [eax+190h]
0x4F8D0D: mov     ecx, edi
0x4F8D0F: call    edx
0x4F8D11: test    al, al
0x4F8D13: jz      short loc_4F8D17
0x4F8D15: mov     esi, edi
0x4F8D17: mov     ecx, esi
0x4F8D19: call    Actor_IsSneaking
0x4F8D1E: test    al, al
0x4F8D20: jz      short loc_4F8D26
0x4F8D22: fld1
0x4F8D24: fstp    qword ptr [ebx]
0x4F8D26: cmp     byte ptr ds:0B361ACh, 0
0x4F8D2D: jz      short loc_4F8D9B
0x4F8D2F: fldz
0x4F8D31: push    0; int
0x4F8D33: fcomp   qword ptr [ebx]
0x4F8D35: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x4F8D3A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4F8D3F: push    0; int
0x4F8D41: push    esi; void *
0x4F8D42: fnstsw  ax
0x4F8D44: test    ah, 44h
0x4F8D47: jnp     short loc_4F8D75
0x4F8D49: call    OblivionDynamicCast
0x4F8D4E: add     esp, 14h
0x4F8D51: test    eax, eax
0x4F8D53: jz      short loc_4F8D5C
0x4F8D55: mov     eax, [eax+4]
0x4F8D58: test    eax, eax
0x4F8D5A: jnz     short loc_4F8D61
0x4F8D5C: mov     eax, offset EmptyString
0x4F8D61: push    eax
0x4F8D62: push    offset aSIsSneaking; "%s is sneaking"
0x4F8D67: call    Interface_ConsolePrint
0x4F8D6C: add     esp, 8
0x4F8D6F: pop     edi
0x4F8D70: pop     esi
0x4F8D71: mov     al, 1
0x4F8D73: pop     ebx
0x4F8D74: retn
0x4F8D75: call    OblivionDynamicCast
0x4F8D7A: add     esp, 14h
0x4F8D7D: test    eax, eax
0x4F8D7F: jz      short loc_4F8D88
0x4F8D81: mov     eax, [eax+4]
0x4F8D84: test    eax, eax
0x4F8D86: jnz     short loc_4F8D8D
0x4F8D88: mov     eax, offset EmptyString
0x4F8D8D: push    eax
0x4F8D8E: push    offset aSIsNotSneaking; "%s is not sneaking"
0x4F8D93: call    Interface_ConsolePrint
0x4F8D98: add     esp, 8
0x4F8D9B: pop     edi
0x4F8D9C: pop     esi
0x4F8D9D: mov     al, 1
0x4F8D9F: pop     ebx
0x4F8DA0: retn
