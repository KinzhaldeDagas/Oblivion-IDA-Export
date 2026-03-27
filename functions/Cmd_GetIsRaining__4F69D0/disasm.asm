0x4F69D0: push    ecx
0x4F69D1: call    Sky_CreateOrGetGlobalObject
0x4F69D6: mov     ecx, eax
0x4F69D8: call    sub_4F5ED0
0x4F69DD: test    al, al
0x4F69DF: jz      short loc_4F69E5
0x4F69E1: fld1
0x4F69E3: jmp     short loc_4F69E7
0x4F69E5: fldz
0x4F69E7: mov     eax, [esp+4+arg_C]
0x4F69EB: fstp    [esp+4+var_4]
0x4F69EE: fld     [esp+4+var_4]
0x4F69F1: fst     qword ptr [eax]
0x4F69F3: cmp     byte ptr ds:0B361ACh, 0
0x4F69FA: jz      short loc_4F6A13
0x4F69FC: sub     esp, 8
0x4F69FF: fstp    [esp+0Ch+var_C]
0x4F6A02: push    offset aGetisraining0_; "GetIsRaining >> %0.2f"
0x4F6A07: call    Interface_ConsolePrint
0x4F6A0C: add     esp, 0Ch
0x4F6A0F: mov     al, 1
0x4F6A11: pop     ecx
0x4F6A12: retn
0x4F6A13: fstp    st
0x4F6A15: mov     al, 1
0x4F6A17: pop     ecx
0x4F6A18: retn
