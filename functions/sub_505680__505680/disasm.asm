0x505680: push    ecx
0x505681: mov     ecx, [esp+4+l]
0x505685: mov     edx, [esp+4+arg_10]
0x505689: push    esi
0x50568A: mov     esi, [esp+8+a4]
0x50568E: lea     eax, [esp+8+var_4]
0x505692: push    eax; UInt16
0x505693: mov     eax, [esp+0Ch+arg_C]
0x505697: push    ecx; l
0x505698: mov     ecx, [esp+10h+a3]
0x50569C: push    edx; a6
0x50569D: mov     edx, [esp+14h+arg_4]
0x5056A1: push    eax; a5
0x5056A2: mov     eax, [esp+18h+a1]
0x5056A6: push    esi; a4
0x5056A7: push    ecx; a3
0x5056A8: push    edx; a2
0x5056A9: push    eax; a1
0x5056AA: mov     dword ptr [esp+28h+var_4], 0
0x5056B2: call    Script_ExtractArgs
0x5056B7: add     esp, 20h
0x5056BA: test    al, al
0x5056BC: jnz     short loc_5056C1
0x5056BE: pop     esi
0x5056BF: pop     ecx
0x5056C0: retn
0x5056C1: test    esi, esi
0x5056C3: jz      short loc_5056E1
0x5056C5: cmp     dword ptr [esp+8+var_4], 0
0x5056CA: mov     ecx, esi
0x5056CC: jz      short loc_5056DA
0x5056CE: push    1
0x5056D0: call    sub_46AA50
0x5056D5: mov     al, 1
0x5056D7: pop     esi
0x5056D8: pop     ecx
0x5056D9: retn
0x5056DA: push    0
0x5056DC: call    sub_46AA50
0x5056E1: mov     al, 1
0x5056E3: pop     esi
0x5056E4: pop     ecx
0x5056E5: retn
