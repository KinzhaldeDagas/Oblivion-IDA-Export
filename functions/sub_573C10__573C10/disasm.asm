0x573C10: mov     eax, [esp+arg_C]
0x573C14: and     eax, 0Fh
0x573C17: sub     eax, 2
0x573C1A: push    esi
0x573C1B: jz      short loc_573C61
0x573C1D: sub     eax, 2
0x573C20: jz      short loc_573C2E
0x573C22: fldz
0x573C24: mov     eax, [esp+4+arg_4]
0x573C28: fstp    dword ptr [eax]
0x573C2A: pop     esi
0x573C2B: retn    14h
0x573C2E: mov     edx, [esp+4+arg_10]
0x573C32: mov     esi, [esp+4+arg_4]
0x573C36: fld     dword ptr [esi]
0x573C38: mov     eax, [esp+4+arg_8]
0x573C3C: push    edx
0x573C3D: push    0
0x573C3F: push    ecx
0x573C40: fstp    [esp+10h+var_10]
0x573C43: push    0FFFFFFFEh
0x573C45: push    eax
0x573C46: mov     eax, [esp+18h+arg_0]
0x573C4A: lea     edx, [esp+18h+arg_4]
0x573C4E: push    edx
0x573C4F: push    eax
0x573C50: call    sub_5739C0
0x573C55: fld     [esp+4+arg_4]
0x573C59: fchs
0x573C5B: fstp    dword ptr [esi]
0x573C5D: pop     esi
0x573C5E: retn    14h
0x573C61: mov     edx, [esp+4+arg_10]
0x573C65: mov     esi, [esp+4+arg_4]
0x573C69: fld     dword ptr [esi]
0x573C6B: mov     eax, [esp+4+arg_8]
0x573C6F: push    edx
0x573C70: push    0
0x573C72: push    ecx
0x573C73: fstp    [esp+10h+var_10]
0x573C76: push    0FFFFFFFEh
0x573C78: push    eax
0x573C79: mov     eax, [esp+18h+arg_0]
0x573C7D: lea     edx, [esp+18h+arg_4]
0x573C81: push    edx
0x573C82: push    eax
0x573C83: call    sub_5739C0
0x573C88: fld     [esp+4+arg_4]
0x573C8C: fchs
0x573C8E: fmul    qword ptr ds:0A2FAA0h
0x573C94: fstp    dword ptr [esi]
0x573C96: pop     esi
0x573C97: retn    14h
