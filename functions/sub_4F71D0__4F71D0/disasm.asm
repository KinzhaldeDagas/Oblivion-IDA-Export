0x4F71D0: fldz
0x4F71D2: push    ebx
0x4F71D3: mov     bl, [esp+4+arg_4]
0x4F71D7: test    bl, bl
0x4F71D9: push    esi
0x4F71DA: mov     esi, [esp+8+arg_C]
0x4F71DE: fstp    qword ptr [esi]
0x4F71E0: jz      short loc_4F71F9
0x4F71E2: call    sub_520EF0
0x4F71E7: test    eax, eax
0x4F71E9: jz      short loc_4F71F9
0x4F71EB: call    sub_520EF0
0x4F71F0: cmp     [eax+4], bl
0x4F71F3: jnz     short loc_4F71F9
0x4F71F5: fld1
0x4F71F7: fstp    qword ptr [esi]
0x4F71F9: cmp     byte ptr ds:0B361ACh, 0
0x4F7200: jz      short loc_4F7217
0x4F7202: fld     qword ptr [esi]
0x4F7204: sub     esp, 8
0x4F7207: fstp    [esp+10h+var_10]
0x4F720A: push    offset aGetisuseditemt; "GetIsUsedItemType >> %0.2f"
0x4F720F: call    Interface_ConsolePrint
0x4F7214: add     esp, 0Ch
0x4F7217: pop     esi
0x4F7218: mov     al, 1
0x4F721A: pop     ebx
0x4F721B: retn
