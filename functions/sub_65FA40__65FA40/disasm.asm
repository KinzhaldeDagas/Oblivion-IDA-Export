0x65FA40: fldz
0x65FA42: push    esi
0x65FA43: fcom    [esp+4+arg_4]
0x65FA47: mov     esi, ecx
0x65FA49: fnstsw  ax
0x65FA4B: test    ah, 41h
0x65FA4E: jnz     short loc_65FA56
0x65FA50: fstp    [esp+4+arg_4]
0x65FA54: jmp     short loc_65FA58
0x65FA56: fstp    st
0x65FA58: mov     eax, [esp+4+arg_0]
0x65FA5C: lea     ecx, [eax-0Ch]
0x65FA5F: cmp     ecx, 14h
0x65FA62: ja      short loc_65FA7D
0x65FA64: push    eax
0x65FA65: push    2
0x65FA67: call    ActorValue_GetGroupOffsetFromAV
0x65FA6C: fld     [esp+0Ch+arg_4]
0x65FA70: movsx   edx, al
0x65FA73: add     esp, 8
0x65FA76: fstp    dword ptr [esi+edx*4+130h]
0x65FA7D: pop     esi
0x65FA7E: retn    8
