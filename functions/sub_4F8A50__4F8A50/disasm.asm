0x4F8A50: fldz
0x4F8A52: mov     ecx, [esp+arg_0]
0x4F8A56: test    ecx, ecx
0x4F8A58: push    esi
0x4F8A59: mov     esi, [esp+4+arg_C]
0x4F8A5D: fstp    qword ptr [esi]
0x4F8A5F: jz      short loc_4F8AA3
0x4F8A61: mov     eax, [ecx]
0x4F8A63: mov     edx, [eax+154h]
0x4F8A69: push    offset dword_A7D0EC
0x4F8A6E: call    edx
0x4F8A70: mov     ecx, eax
0x4F8A72: call    NiObjectNET_GetExtraData
0x4F8A77: test    eax, eax
0x4F8A79: jz      short loc_4F8AA3
0x4F8A7B: push    eax
0x4F8A7C: push    offset dword_B3F484
0x4F8A81: call    NiRTTI_Cast
0x4F8A86: mov     eax, [eax+0Ch]
0x4F8A89: shr     eax, 4
0x4F8A8C: add     esp, 8
0x4F8A8F: test    al, 1
0x4F8A91: jz      short loc_4F8A97
0x4F8A93: fld1
0x4F8A95: jmp     short loc_4F8A99
0x4F8A97: fldz
0x4F8A99: fstp    [esp+4+arg_C]
0x4F8A9D: fld     [esp+4+arg_C]
0x4F8AA1: fstp    qword ptr [esi]
0x4F8AA3: cmp     byte ptr ds:0B361ACh, 0
0x4F8AAA: jz      short loc_4F8AC1
0x4F8AAC: fld     qword ptr [esi]
0x4F8AAE: sub     esp, 8
0x4F8AB1: fstp    [esp+0Ch+var_C]
0x4F8AB4: push    offset aCanhaveflames0; "CanHaveFlames >> %0.2f"
0x4F8AB9: call    Interface_ConsolePrint
0x4F8ABE: add     esp, 0Ch
0x4F8AC1: mov     al, 1
0x4F8AC3: pop     esi
0x4F8AC4: retn
