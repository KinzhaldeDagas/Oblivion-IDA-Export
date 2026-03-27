0x4F4BC0: fldz
0x4F4BC2: mov     ecx, [esp+arg_4]
0x4F4BC6: test    ecx, ecx
0x4F4BC8: push    esi
0x4F4BC9: mov     esi, [esp+4+arg_C]
0x4F4BCD: fstp    qword ptr [esi]
0x4F4BCF: jz      short loc_4F4BE3
0x4F4BD1: mov     eax, [esp+4+arg_8]
0x4F4BD5: push    eax
0x4F4BD6: call    sub_529B30
0x4F4BDB: test    al, al
0x4F4BDD: jz      short loc_4F4BE3
0x4F4BDF: fld1
0x4F4BE1: fstp    qword ptr [esi]
0x4F4BE3: cmp     byte ptr ds:0B361ACh, 0
0x4F4BEA: jz      short loc_4F4C01
0x4F4BEC: fld     qword ptr [esi]
0x4F4BEE: sub     esp, 8
0x4F4BF1: fstp    [esp+0Ch+var_C]
0x4F4BF4: push    offset aGetstagedone0_; "GetStageDone >> %0.2f"
0x4F4BF9: call    Interface_ConsolePrint
0x4F4BFE: add     esp, 0Ch
0x4F4C01: mov     al, 1
0x4F4C03: pop     esi
0x4F4C04: retn
