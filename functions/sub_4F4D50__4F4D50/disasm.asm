0x4F4D50: fldz
0x4F4D52: push    esi
0x4F4D53: mov     esi, [esp+4+arg_C]
0x4F4D57: fstp    qword ptr [esi]
0x4F4D59: push    edi
0x4F4D5A: mov     edi, [esp+8+arg_4]
0x4F4D5E: test    edi, edi
0x4F4D60: jz      short loc_4F4D6F
0x4F4D62: call    sub_520EF0
0x4F4D67: cmp     eax, edi
0x4F4D69: jnz     short loc_4F4D6F
0x4F4D6B: fld1
0x4F4D6D: fstp    qword ptr [esi]
0x4F4D6F: cmp     byte ptr ds:0B361ACh, 0
0x4F4D76: jz      short loc_4F4D8D
0x4F4D78: fld     qword ptr [esi]
0x4F4D7A: sub     esp, 8
0x4F4D7D: fstp    [esp+10h+var_10]
0x4F4D80: push    offset aGetisuseditem0; "GetIsUsedItem >> %0.2f"
0x4F4D85: call    Interface_ConsolePrint
0x4F4D8A: add     esp, 0Ch
0x4F4D8D: pop     edi
0x4F4D8E: mov     al, 1
0x4F4D90: pop     esi
0x4F4D91: retn
