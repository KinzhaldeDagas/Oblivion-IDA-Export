0x4F4800: fldz
0x4F4802: mov     eax, [esp+arg_C]
0x4F4806: fst     qword ptr [eax]
0x4F4808: cmp     byte ptr ds:0B361ACh, 0
0x4F480F: jz      short loc_4F4827
0x4F4811: sub     esp, 8
0x4F4814: fstp    [esp+8+var_8]
0x4F4817: push    offset aUnimplementedG; "UNIMPLEMENTED: GetDisease >> %0.2f"
0x4F481C: call    Interface_ConsolePrint
0x4F4821: add     esp, 0Ch
0x4F4824: mov     al, 1
0x4F4826: retn
0x4F4827: fstp    st
0x4F4829: mov     al, 1
0x4F482B: retn
