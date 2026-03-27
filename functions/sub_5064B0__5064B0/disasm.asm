0x5064B0: mov     eax, [esp+arg_8]
0x5064B4: push    ebx
0x5064B5: push    esi
0x5064B6: mov     esi, [esp+8+arg_18]
0x5064BA: push    esi
0x5064BB: push    0
0x5064BD: push    0
0x5064BF: push    eax
0x5064C0: call    sub_4F5CB0
0x5064C5: add     esp, 10h
0x5064C8: cmp     byte ptr ds:0B361ACh, 0
0x5064CF: mov     bl, al
0x5064D1: jz      short loc_5064E8
0x5064D3: fld     qword ptr [esi]
0x5064D5: sub     esp, 8
0x5064D8: fstp    [esp+10h+var_10]
0x5064DB: push    offset aIsActorRidingH; "Is actor riding horse >> %0.2f"
0x5064E0: call    Interface_ConsolePrint
0x5064E5: add     esp, 0Ch
0x5064E8: pop     esi
0x5064E9: mov     al, bl
0x5064EB: pop     ebx
0x5064EC: retn
