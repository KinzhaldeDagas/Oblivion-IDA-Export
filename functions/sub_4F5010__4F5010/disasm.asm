0x4F5010: fldz
0x4F5012: mov     eax, [esp+arg_4]
0x4F5016: test    eax, eax
0x4F5018: push    esi
0x4F5019: mov     esi, [esp+4+arg_C]
0x4F501D: fstp    qword ptr [esi]
0x4F501F: jz      short loc_4F505C
0x4F5021: mov     ecx, ds:0B333A0h
0x4F5027: push    eax
0x4F5028: call    sub_440F70
0x4F502D: movsx   eax, ax
0x4F5030: mov     [esp+4+arg_C], eax
0x4F5034: fild    [esp+4+arg_C]
0x4F5038: fst     qword ptr [esi]
0x4F503A: cmp     byte ptr ds:0B361ACh, 0
0x4F5041: jz      short loc_4F505A
0x4F5043: sub     esp, 8
0x4F5046: fstp    [esp+0Ch+var_C]
0x4F5049: push    offset aDeadCount0_2f; "Dead Count: %0.2f"
0x4F504E: call    Interface_ConsolePrint
0x4F5053: add     esp, 0Ch
0x4F5056: mov     al, 1
0x4F5058: pop     esi
0x4F5059: retn
0x4F505A: fstp    st
0x4F505C: mov     al, 1
0x4F505E: pop     esi
0x4F505F: retn
