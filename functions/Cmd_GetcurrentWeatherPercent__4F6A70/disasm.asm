0x4F6A70: call    Sky_CreateOrGetGlobalObject
0x4F6A75: fld     dword ptr [eax+0D8h]
0x4F6A7B: mov     eax, [esp+arg_C]
0x4F6A7F: fst     qword ptr [eax]
0x4F6A81: cmp     byte ptr ds:0B361ACh, 0
0x4F6A88: jz      short loc_4F6AA0
0x4F6A8A: sub     esp, 8
0x4F6A8D: fstp    [esp+8+var_8]
0x4F6A90: push    offset aGetcurrentweat; "GetCurrentWeatherPercent >> %0.2f"
0x4F6A95: call    Interface_ConsolePrint
0x4F6A9A: add     esp, 0Ch
0x4F6A9D: mov     al, 1
0x4F6A9F: retn
0x4F6AA0: fstp    st
0x4F6AA2: mov     al, 1
0x4F6AA4: retn
