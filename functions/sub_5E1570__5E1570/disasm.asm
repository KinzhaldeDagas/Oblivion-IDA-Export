0x5E1570: push    0FFFFFFFFh
0x5E1572: push    offset SEH_4A0200
0x5E1577: mov     eax, large fs:0
0x5E157D: push    eax
0x5E157E: push    ecx
0x5E157F: push    esi
0x5E1580: mov     eax, ds:0B30AACh
0x5E1585: xor     eax, esp
0x5E1587: push    eax
0x5E1588: lea     eax, [esp+18h+var_C]
0x5E158C: mov     large fs:0, eax
0x5E1592: mov     esi, ecx
0x5E1594: mov     [esp+18h+var_10], esi
0x5E1598: call    sub_721350
0x5E159D: fld     [esp+18h+arg_0]
0x5E15A1: fstp    dword ptr [esi+0Ch]
0x5E15A4: push    offset off_A3FA90; Src
0x5E15A9: mov     ecx, esi
0x5E15AB: mov     [esp+1Ch+var_4], 0
0x5E15B3: mov     dword ptr [esi], offset ??_7FadeNodeMaxAlphaExtraData@@6B@; const FadeNodeMaxAlphaExtraData::`vftable'
0x5E15B9: call    sub_721440
0x5E15BE: mov     eax, esi
0x5E15C0: mov     ecx, [esp+18h+var_C]
0x5E15C4: mov     large fs:0, ecx
0x5E15CB: pop     ecx
0x5E15CC: pop     esi
0x5E15CD: add     esp, 10h
0x5E15D0: retn    4
