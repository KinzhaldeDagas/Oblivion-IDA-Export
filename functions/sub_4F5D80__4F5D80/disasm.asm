0x4F5D80: fldz
0x4F5D82: mov     eax, [esp+arg_C]
0x4F5D86: fst     qword ptr [eax]
0x4F5D88: cmp     byte ptr ds:0B361ACh, 0
0x4F5D8F: jz      short loc_4F5DA7
0x4F5D91: sub     esp, 8
0x4F5D94: fstp    [esp+8+var_8]
0x4F5D97: push    offset aIsxbox1_0f; "IsXBox >> %1.0f"
0x4F5D9C: call    Interface_ConsolePrint
0x4F5DA1: add     esp, 0Ch
0x4F5DA4: mov     al, 1
0x4F5DA6: retn
0x4F5DA7: fstp    st
0x4F5DA9: mov     al, 1
0x4F5DAB: retn
