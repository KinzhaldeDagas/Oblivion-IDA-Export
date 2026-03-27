0x4F67A0: fldz
0x4F67A2: mov     eax, [esp+arg_4]
0x4F67A6: test    eax, eax
0x4F67A8: mov     ecx, [esp+arg_C]
0x4F67AC: fstp    qword ptr [ecx]
0x4F67AE: jz      short loc_4F67BA
0x4F67B0: test    byte ptr [eax+3Ch], 1
0x4F67B4: jz      short loc_4F67BA
0x4F67B6: fld1
0x4F67B8: fstp    qword ptr [ecx]
0x4F67BA: cmp     byte ptr ds:0B361ACh, 0
0x4F67C1: jz      short loc_4F67D8
0x4F67C3: fld     qword ptr [ecx]
0x4F67C5: sub     esp, 8
0x4F67C8: fstp    [esp+8+var_8]
0x4F67CB: push    offset aGetquestrunnin; "GetQuestRunning >> %0.2f"
0x4F67D0: call    Interface_ConsolePrint
0x4F67D5: add     esp, 0Ch
0x4F67D8: mov     al, 1
0x4F67DA: retn
