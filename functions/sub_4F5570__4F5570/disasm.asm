0x4F5570: fldz
0x4F5572: push    esi
0x4F5573: mov     esi, [esp+4+arg_C]
0x4F5577: fstp    qword ptr [esi]
0x4F5579: mov     ecx, offset TimeGlobals
0x4F557E: call    TimeGlobals_GetGameDayOfWeek
0x4F5583: mov     [esp+4+arg_C], eax
0x4F5587: fild    [esp+4+arg_C]
0x4F558B: fst     qword ptr [esi]
0x4F558D: cmp     byte ptr ds:0B361ACh, 0
0x4F5594: pop     esi
0x4F5595: jz      short loc_4F55AD
0x4F5597: sub     esp, 8
0x4F559A: fstp    [esp+8+var_8]
0x4F559D: push    offset aGetdayofweek0_; "GetDayOfWeek >> %0.2f"
0x4F55A2: call    Interface_ConsolePrint
0x4F55A7: add     esp, 0Ch
0x4F55AA: mov     al, 1
0x4F55AC: retn
0x4F55AD: fstp    st
0x4F55AF: mov     al, 1
0x4F55B1: retn
