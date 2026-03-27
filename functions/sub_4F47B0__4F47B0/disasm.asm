0x4F47B0: fldz
0x4F47B2: mov     ecx, [esp+arg_0]
0x4F47B6: test    ecx, ecx
0x4F47B8: push    esi
0x4F47B9: mov     esi, [esp+4+arg_C]
0x4F47BD: fstp    qword ptr [esi]
0x4F47BF: jz      short loc_4F47DB
0x4F47C1: call    sub_4D7740
0x4F47C6: test    eax, eax
0x4F47C8: jz      short loc_4F47DB
0x4F47CA: mov     ecx, eax
0x4F47CC: call    sub_429990
0x4F47D1: mov     [esp+4+arg_C], eax
0x4F47D5: fild    [esp+4+arg_C]
0x4F47D9: fstp    qword ptr [esi]
0x4F47DB: cmp     byte ptr ds:0B361ACh, 0
0x4F47E2: jz      short loc_4F47F9
0x4F47E4: fld     qword ptr [esi]
0x4F47E6: sub     esp, 8
0x4F47E9: fstp    [esp+0Ch+var_C]
0x4F47EC: push    offset aGetlocklevel0_; "GetLockLevel >> %0.f"
0x4F47F1: call    Interface_ConsolePrint
0x4F47F6: add     esp, 0Ch
0x4F47F9: mov     al, 1
0x4F47FB: pop     esi
0x4F47FC: retn
