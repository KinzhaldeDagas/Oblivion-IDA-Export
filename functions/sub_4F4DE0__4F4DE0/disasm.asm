0x4F4DE0: fldz
0x4F4DE2: push    esi
0x4F4DE3: mov     esi, [esp+4+arg_C]
0x4F4DE7: fstp    qword ptr [esi]
0x4F4DE9: call    sub_520F30
0x4F4DEE: test    al, al
0x4F4DF0: jz      short loc_4F4DF6
0x4F4DF2: fld1
0x4F4DF4: fstp    qword ptr [esi]
0x4F4DF6: cmp     byte ptr ds:0B361ACh, 0
0x4F4DFD: jz      short loc_4F4E14
0x4F4DFF: fld     qword ptr [esi]
0x4F4E01: sub     esp, 8
0x4F4E04: fstp    [esp+0Ch+var_C]
0x4F4E07: push    offset aGetisuseditema; "GetIsUsedItemActivate >> %0.2f"
0x4F4E0C: call    Interface_ConsolePrint
0x4F4E11: add     esp, 0Ch
0x4F4E14: mov     al, 1
0x4F4E16: pop     esi
0x4F4E17: retn
