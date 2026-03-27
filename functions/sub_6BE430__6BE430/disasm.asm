0x6BE430: fldz
0x6BE432: push    esi
0x6BE433: sub     esp, 10h
0x6BE436: fst     [esp+14h+var_8]; float
0x6BE43A: fst     [esp+14h+var_C]; float
0x6BE43E: mov     esi, ecx
0x6BE440: fst     [esp+14h+var_10]; float
0x6BE444: lea     ecx, [esi+4]
0x6BE447: fstp    [esp+14h+var_14]; float
0x6BE44A: call    sub_714C40
0x6BE44F: xor     eax, eax
0x6BE451: mov     [esi+14h], eax
0x6BE454: mov     [esi+18h], eax
0x6BE457: mov     [esi+1Ch], eax
0x6BE45A: mov     [esi+30h], eax
0x6BE45D: mov     [esi+34h], eax
0x6BE460: mov     [esi+38h], eax
0x6BE463: mov     [esi+20h], eax
0x6BE466: mov     [esi+24h], eax
0x6BE469: mov     [esi+28h], eax
0x6BE46C: mov     [esi+3Ch], eax
0x6BE46F: mov     [esi+40h], eax
0x6BE472: mov     [esi+44h], eax
0x6BE475: mov     [esi+2Ch], al
0x6BE478: mov     [esi+2Dh], al
0x6BE47B: mov     [esi+2Eh], al
0x6BE47E: mov     eax, esi
0x6BE480: pop     esi
0x6BE481: retn
