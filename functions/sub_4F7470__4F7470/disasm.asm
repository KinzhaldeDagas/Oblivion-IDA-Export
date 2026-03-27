0x4F7470: fldz
0x4F7472: mov     eax, [esp+arg_C]
0x4F7476: fstp    qword ptr [eax]
0x4F7478: mov     ecx, ds:0B333C4h
0x4F747E: cmp     byte ptr [ecx+5C0h], 0
0x4F7485: jz      short loc_4F748B
0x4F7487: fld1
0x4F7489: fstp    qword ptr [eax]
0x4F748B: cmp     byte ptr ds:0B361ACh, 0
0x4F7492: jz      short loc_4F74A9
0x4F7494: fld     qword ptr [eax]
0x4F7496: sub     esp, 8
0x4F7499: fstp    [esp+8+var_8]
0x4F749C: push    offset aGetplayercontr; "GetPlayerControlsDisabled: %0.2f"
0x4F74A1: call    Interface_ConsolePrint
0x4F74A6: add     esp, 0Ch
0x4F74A9: mov     al, 1
0x4F74AB: retn
