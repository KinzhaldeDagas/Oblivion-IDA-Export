0x4F46E0: mov     ecx, offset TimeGlobals
0x4F46E5: call    TimeGlobals_GetGameHour
0x4F46EA: mov     eax, [esp+arg_C]
0x4F46EE: fst     qword ptr [eax]
0x4F46F0: cmp     byte ptr ds:0B361ACh, 0
0x4F46F7: jz      short loc_4F470F
0x4F46F9: sub     esp, 8
0x4F46FC: fstp    [esp+8+var_8]
0x4F46FF: push    offset aGetcurrenttime; "GetCurrentTime >> %0.2f"
0x4F4704: call    Interface_ConsolePrint
0x4F4709: add     esp, 0Ch
0x4F470C: mov     al, 1
0x4F470E: retn
0x4F470F: fstp    st
0x4F4711: mov     al, 1
0x4F4713: retn
