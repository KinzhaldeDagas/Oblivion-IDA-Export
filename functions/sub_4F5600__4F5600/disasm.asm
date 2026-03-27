0x4F5600: fldz
0x4F5602: push    esi
0x4F5603: mov     esi, [esp+4+arg_C]
0x4F5607: fstp    qword ptr [esi]
0x4F5609: mov     ecx, ds:0B333C4h
0x4F560F: call    sub_65DAC0
0x4F5614: test    al, al
0x4F5616: jz      short loc_4F561C
0x4F5618: fld1
0x4F561A: jmp     short loc_4F561E
0x4F561C: fldz
0x4F561E: fstp    [esp+4+arg_C]
0x4F5622: fld     [esp+4+arg_C]
0x4F5626: fst     qword ptr [esi]
0x4F5628: cmp     byte ptr ds:0B361ACh, 0
0x4F562F: pop     esi
0x4F5630: jz      short loc_4F5648
0x4F5632: sub     esp, 8
0x4F5635: fstp    [esp+8+var_8]
0x4F5638: push    offset aIsplayeramurde; "IsPlayerAMurderer >> %0.2f"
0x4F563D: call    Interface_ConsolePrint
0x4F5642: add     esp, 0Ch
0x4F5645: mov     al, 1
0x4F5647: retn
0x4F5648: fstp    st
0x4F564A: mov     al, 1
0x4F564C: retn
