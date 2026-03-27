0x4F80A0: fldz
0x4F80A2: mov     eax, [esp+arg_C]
0x4F80A6: fstp    qword ptr [eax]
0x4F80A8: mov     ecx, ds:0B333C4h
0x4F80AE: fild    dword ptr [ecx+614h]
0x4F80B4: fst     qword ptr [eax]
0x4F80B6: cmp     byte ptr ds:0B361ACh, 0
0x4F80BD: jz      short loc_4F80D5
0x4F80BF: sub     esp, 8
0x4F80C2: fstp    [esp+8+var_8]
0x4F80C5: push    offset aAmountStolenThePlayerSold0_2f; "Amount stolen the player sold >> %0.2f"
0x4F80CA: call    Interface_ConsolePrint
0x4F80CF: add     esp, 0Ch
0x4F80D2: mov     al, 1
0x4F80D4: retn
0x4F80D5: fstp    st
0x4F80D7: mov     al, 1
0x4F80D9: retn
