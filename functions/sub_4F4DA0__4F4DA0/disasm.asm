0x4F4DA0: push    ecx
0x4F4DA1: call    sub_520F10
0x4F4DA6: mov     [esp+4+var_4], eax
0x4F4DA9: fild    [esp+4+var_4]
0x4F4DAC: mov     eax, [esp+4+arg_C]
0x4F4DB0: fst     qword ptr [eax]
0x4F4DB2: cmp     byte ptr ds:0B361ACh, 0
0x4F4DB9: jz      short loc_4F4DD2
0x4F4DBB: sub     esp, 8
0x4F4DBE: fstp    [esp+0Ch+var_C]
0x4F4DC1: push    offset aGetisusediteml; "GetIsUsedItemLevel >> %0.2f"
0x4F4DC6: call    Interface_ConsolePrint
0x4F4DCB: add     esp, 0Ch
0x4F4DCE: mov     al, 1
0x4F4DD0: pop     ecx
0x4F4DD1: retn
0x4F4DD2: fstp    st
0x4F4DD4: mov     al, 1
0x4F4DD6: pop     ecx
0x4F4DD7: retn
