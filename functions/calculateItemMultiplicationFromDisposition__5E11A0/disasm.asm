0x5E11A0: push    esi
0x5E11A1: mov     esi, [esp+4+targetNpc]
0x5E11A5: mov     eax, [esi]
0x5E11A7: mov     edx, [eax+284h]
0x5E11AD: push    7
0x5E11AF: mov     ecx, esi
0x5E11B1: call    edx
0x5E11B3: push    eax
0x5E11B4: mov     eax, [esi]
0x5E11B6: mov     edx, [eax+284h]
0x5E11BC: push    1Dh
0x5E11BE: mov     ecx, esi
0x5E11C0: call    edx
0x5E11C2: push    eax
0x5E11C3: call    Calc_LuckModifiedSkill
0x5E11C8: fstp    dword ptr [esp+10h]
0x5E11CC: mov     eax, [esi]
0x5E11CE: mov     edx, [eax+224h]
0x5E11D4: add     esp, 8
0x5E11D7: push    esi
0x5E11D8: mov     ecx, esi
0x5E11DA: call    edx
0x5E11DC: fld     [esp+4+targetNpc]
0x5E11E0: push    eax; disposition
0x5E11E1: call    Double_To_SInt32
0x5E11E6: push    eax; merchantileLuckLevelArg
0x5E11E7: call    calcMultiplierFromMerchantLevelDispo
0x5E11EC: add     esp, 8
0x5E11EF: pop     esi
0x5E11F0: retn    4
