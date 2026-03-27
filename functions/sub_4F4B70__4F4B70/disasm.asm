0x4F4B70: fldz
0x4F4B72: mov     ecx, [esp+arg_4]
0x4F4B76: test    ecx, ecx
0x4F4B78: push    esi
0x4F4B79: mov     esi, [esp+4+arg_C]
0x4F4B7D: fstp    qword ptr [esi]
0x4F4B7F: jz      short loc_4F4B9A
0x4F4B81: call    sub_529750
0x4F4B86: test    eax, eax
0x4F4B88: mov     [esp+4+arg_C], eax
0x4F4B8C: fild    [esp+4+arg_C]
0x4F4B90: jge     short loc_4F4B98
0x4F4B92: fadd    dword ptr ds:0A2FC78h
0x4F4B98: fstp    qword ptr [esi]
0x4F4B9A: cmp     byte ptr ds:0B361ACh, 0
0x4F4BA1: jz      short loc_4F4BB8
0x4F4BA3: fld     qword ptr [esi]
0x4F4BA5: sub     esp, 8
0x4F4BA8: fstp    [esp+0Ch+var_C]
0x4F4BAB: push    offset aGetstage0_2f; "GetStage >> %0.2f"
0x4F4BB0: call    Interface_ConsolePrint
0x4F4BB5: add     esp, 0Ch
0x4F4BB8: mov     al, 1
0x4F4BBA: pop     esi
0x4F4BBB: retn
