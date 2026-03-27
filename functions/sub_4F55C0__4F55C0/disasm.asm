0x4F55C0: fldz
0x4F55C2: push    esi
0x4F55C3: mov     esi, [esp+4+arg_C]
0x4F55C7: fstp    qword ptr [esi]
0x4F55C9: mov     ecx, ds:0B333C4h; this
0x4F55CF: call    PlayerCharacter__IsJailed; Check the meaning of JailedState
0x4F55D4: test    al, al
0x4F55D6: jz      short loc_4F55DC
0x4F55D8: fld1
0x4F55DA: fstp    qword ptr [esi]
0x4F55DC: cmp     byte ptr ds:0B361ACh, 0
0x4F55E3: jz      short loc_4F55FA
0x4F55E5: fld     qword ptr [esi]
0x4F55E7: sub     esp, 8
0x4F55EA: fstp    [esp+0Ch+var_C]
0x4F55ED: push    offset aIsplayerinjail; "IsPlayerInJail >> %0.2f"
0x4F55F2: call    Interface_ConsolePrint
0x4F55F7: add     esp, 0Ch
0x4F55FA: mov     al, 1
0x4F55FC: pop     esi
0x4F55FD: retn
