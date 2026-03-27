0x506CC0: mov     eax, [esp+arg_8]
0x506CC4: push    esi
0x506CC5: mov     esi, [esp+4+arg_18]
0x506CC9: push    esi
0x506CCA: push    0
0x506CCC: push    0
0x506CCE: push    eax
0x506CCF: call    sub_4F5DF0
0x506CD4: add     esp, 10h
0x506CD7: cmp     byte ptr ds:0B361ACh, 0
0x506CDE: jz      short loc_506CF5
0x506CE0: fld     qword ptr [esi]
0x506CE2: sub     esp, 8
0x506CE5: fstp    [esp+0Ch+var_C]
0x506CE8: push    offset aIsessential0_2; "IsEssential >> %0.2f"
0x506CED: call    Interface_ConsolePrint
0x506CF2: add     esp, 0Ch
0x506CF5: mov     al, 1
0x506CF7: pop     esi
0x506CF8: retn
