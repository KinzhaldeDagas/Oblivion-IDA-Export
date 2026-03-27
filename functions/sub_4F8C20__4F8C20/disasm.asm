0x4F8C20: fldz
0x4F8C22: push    ebx
0x4F8C23: mov     ebx, [esp+4+arg_C]
0x4F8C27: fstp    qword ptr [ebx]
0x4F8C29: push    esi
0x4F8C2A: mov     esi, [esp+8+arg_0]
0x4F8C2E: push    edi
0x4F8C2F: xor     edi, edi
0x4F8C31: test    esi, esi
0x4F8C33: jz      short loc_4F8C6B
0x4F8C35: mov     eax, [esi]
0x4F8C37: mov     edx, [eax+190h]
0x4F8C3D: mov     ecx, esi
0x4F8C3F: call    edx
0x4F8C41: test    al, al
0x4F8C43: jz      short loc_4F8C6B
0x4F8C45: mov     ecx, esi
0x4F8C47: mov     edi, esi
0x4F8C49: call    sub_5E3290
0x4F8C4E: test    al, al
0x4F8C50: jz      short loc_4F8C6B
0x4F8C52: lea     ecx, [esi+44h]
0x4F8C55: call    ExtraDataList_GetCrimeGold
0x4F8C5A: fcomp   dword ptr ds:0A2FAA8h
0x4F8C60: fnstsw  ax
0x4F8C62: test    ah, 41h
0x4F8C65: jnz     short loc_4F8C6B
0x4F8C67: fld1
0x4F8C69: fstp    qword ptr [ebx]
0x4F8C6B: cmp     byte ptr ds:0B361ACh, 0
0x4F8C72: jz      short loc_4F8CE0
0x4F8C74: fldz
0x4F8C76: push    0; int
0x4F8C78: fcomp   qword ptr [ebx]
0x4F8C7A: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x4F8C7F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4F8C84: push    0; int
0x4F8C86: push    edi; void *
0x4F8C87: fnstsw  ax
0x4F8C89: test    ah, 44h
0x4F8C8C: jnp     short loc_4F8CBA
0x4F8C8E: call    OblivionDynamicCast
0x4F8C93: add     esp, 14h
0x4F8C96: test    eax, eax
0x4F8C98: jz      short loc_4F8CA1
0x4F8C9A: mov     eax, [eax+4]
0x4F8C9D: test    eax, eax
0x4F8C9F: jnz     short loc_4F8CA6
0x4F8CA1: mov     eax, offset EmptyString
0x4F8CA6: push    eax
0x4F8CA7: push    offset aSIsStolen; "%s is stolen"
0x4F8CAC: call    Interface_ConsolePrint
0x4F8CB1: add     esp, 8
0x4F8CB4: pop     edi
0x4F8CB5: pop     esi
0x4F8CB6: mov     al, 1
0x4F8CB8: pop     ebx
0x4F8CB9: retn
0x4F8CBA: call    OblivionDynamicCast
0x4F8CBF: add     esp, 14h
0x4F8CC2: test    eax, eax
0x4F8CC4: jz      short loc_4F8CCD
0x4F8CC6: mov     eax, [eax+4]
0x4F8CC9: test    eax, eax
0x4F8CCB: jnz     short loc_4F8CD2
0x4F8CCD: mov     eax, offset EmptyString
0x4F8CD2: push    eax
0x4F8CD3: push    offset aSIsNotStolen; "%s is not stolen"
0x4F8CD8: call    Interface_ConsolePrint
0x4F8CDD: add     esp, 8
0x4F8CE0: pop     edi
0x4F8CE1: pop     esi
0x4F8CE2: mov     al, 1
0x4F8CE4: pop     ebx
0x4F8CE5: retn
