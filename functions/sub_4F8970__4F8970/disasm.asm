0x4F8970: fldz
0x4F8972: push    esi
0x4F8973: mov     esi, [esp+4+arg_0]
0x4F8977: test    esi, esi
0x4F8979: push    edi
0x4F897A: mov     edi, [esp+8+arg_C]
0x4F897E: fstp    qword ptr [edi]
0x4F8980: jz      short loc_4F89B9
0x4F8982: mov     eax, [esi]
0x4F8984: mov     edx, [eax+190h]
0x4F898A: mov     ecx, esi
0x4F898C: call    edx
0x4F898E: test    al, al
0x4F8990: jz      short loc_4F89B9
0x4F8992: mov     eax, [esi+3Ch]
0x4F8995: push    offset aBip01Spine; "Bip01 Spine"
0x4F899A: push    eax
0x4F899B: mov     ecx, esi
0x4F899D: call    sub_4D96F0
0x4F89A2: test    eax, eax
0x4F89A4: jz      short loc_4F89B5
0x4F89A6: push    0
0x4F89A8: push    eax
0x4F89A9: call    sub_897580
0x4F89AE: add     esp, 8
0x4F89B1: test    al, al
0x4F89B3: jz      short loc_4F89B9
0x4F89B5: fld1
0x4F89B7: fstp    qword ptr [edi]
0x4F89B9: cmp     byte ptr ds:0B361ACh, 0
0x4F89C0: jz      short loc_4F89D7
0x4F89C2: fld     qword ptr [edi]
0x4F89C4: sub     esp, 8
0x4F89C7: fstp    [esp+10h+var_10]
0x4F89CA: push    offset aIsFacingUp0_2f; "Is Facing Up >> %0.2f"
0x4F89CF: call    Interface_ConsolePrint
0x4F89D4: add     esp, 0Ch
0x4F89D7: pop     edi
0x4F89D8: mov     al, 1
0x4F89DA: pop     esi
0x4F89DB: retn
