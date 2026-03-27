0x4F5A80: push    esi
0x4F5A81: mov     esi, [esp+4+arg_0]
0x4F5A85: test    esi, esi
0x4F5A87: jz      short loc_4F5AD7
0x4F5A89: mov     eax, [esi]
0x4F5A8B: mov     edx, [eax+190h]
0x4F5A91: mov     ecx, esi
0x4F5A93: call    edx
0x4F5A95: test    al, al
0x4F5A97: jz      short loc_4F5AD7
0x4F5A99: mov     ecx, esi
0x4F5A9B: call    sub_5FAA70
0x4F5AA0: test    eax, eax
0x4F5AA2: mov     [esp+4+arg_0], eax
0x4F5AA6: fild    [esp+4+arg_0]
0x4F5AAA: jge     short loc_4F5AB2
0x4F5AAC: fadd    dword ptr ds:0A2FC78h
0x4F5AB2: mov     eax, [esp+4+arg_C]
0x4F5AB6: fstp    qword ptr [eax]
0x4F5AB8: cmp     byte ptr ds:0B361ACh, 0
0x4F5ABF: jz      short loc_4F5AD7
0x4F5AC1: mov     ecx, esi
0x4F5AC3: call    sub_5FAA70
0x4F5AC8: push    eax
0x4F5AC9: push    esi
0x4F5ACA: push    offset aSHasDBarterGol; "%s  has %d barter gold currently"
0x4F5ACF: call    Interface_ConsolePrint
0x4F5AD4: add     esp, 0Ch
0x4F5AD7: mov     al, 1
0x4F5AD9: pop     esi
0x4F5ADA: retn
