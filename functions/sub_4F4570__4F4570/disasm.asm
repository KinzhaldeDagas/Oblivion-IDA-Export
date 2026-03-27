0x4F4570: fldz
0x4F4572: push    esi
0x4F4573: mov     esi, [esp+4+arg_C]
0x4F4577: fstp    qword ptr [esi]
0x4F4579: push    edi
0x4F457A: mov     edi, [esp+8+arg_4]
0x4F457E: test    edi, edi
0x4F4580: jnz     short loc_4F4594
0x4F4582: call    InterfaceManager_IsMenuMode
0x4F4587: movzx   eax, al
0x4F458A: mov     [esp+8+arg_C], eax
0x4F458E: fild    [esp+8+arg_C]
0x4F4592: jmp     short loc_4F45A3
0x4F4594: push    edi
0x4F4595: call    InterfaceManager_MenuModeHasFocus
0x4F459A: add     esp, 4
0x4F459D: test    al, al
0x4F459F: jz      short loc_4F45A5
0x4F45A1: fld1
0x4F45A3: fstp    qword ptr [esi]
0x4F45A5: cmp     byte ptr ds:0B361ACh, 0
0x4F45AC: jz      short loc_4F45C4
0x4F45AE: fld     qword ptr [esi]
0x4F45B0: sub     esp, 8
0x4F45B3: fstp    [esp+10h+var_10]
0x4F45B6: push    edi
0x4F45B7: push    offset aMenumodeD0_2f; "MenuMode %d >> %0.2f"
0x4F45BC: call    Interface_ConsolePrint
0x4F45C1: add     esp, 10h
0x4F45C4: pop     edi
0x4F45C5: mov     al, 1
0x4F45C7: pop     esi
0x4F45C8: retn
