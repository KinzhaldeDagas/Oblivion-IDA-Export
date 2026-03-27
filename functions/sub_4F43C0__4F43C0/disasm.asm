0x4F43C0: mov     ecx, [esp+arg_0]
0x4F43C4: test    ecx, ecx
0x4F43C6: push    esi
0x4F43C7: mov     esi, [esp+4+arg_C]
0x4F43CB: jz      short loc_4F43DF
0x4F43CD: mov     eax, [esp+4+arg_4]
0x4F43D1: test    eax, eax
0x4F43D3: jz      short loc_4F43DF
0x4F43D5: push    1
0x4F43D7: push    eax
0x4F43D8: call    TesObjectREF_GetDistance
0x4F43DD: fstp    qword ptr [esi]
0x4F43DF: cmp     byte ptr ds:0B361ACh, 0
0x4F43E6: jz      short loc_4F43FD
0x4F43E8: fld     qword ptr [esi]
0x4F43EA: sub     esp, 8
0x4F43ED: fstp    [esp+0Ch+var_C]
0x4F43F0: push    offset aGetdistance0_2; "GetDistance >> %0.2f"
0x4F43F5: call    Interface_ConsolePrint
0x4F43FA: add     esp, 0Ch
0x4F43FD: mov     al, 1
0x4F43FF: pop     esi
0x4F4400: retn
