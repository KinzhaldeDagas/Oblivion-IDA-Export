0x8BE860: push    esi
0x8BE861: push    edi
0x8BE862: mov     edi, [esp+8+arg_0]
0x8BE866: push    edi
0x8BE867: mov     esi, ecx
0x8BE869: call    sub_89E060
0x8BE86E: test    esi, esi
0x8BE870: mov     byte ptr [edi+28h], 1
0x8BE874: jz      short loc_8BE882
0x8BE876: mov     eax, [esi+8]
0x8BE879: test    eax, eax
0x8BE87B: jz      short loc_8BE882
0x8BE87D: add     eax, 20h ; ' '
0x8BE880: jmp     short loc_8BE887
0x8BE882: mov     eax, offset stru_BA7A40
0x8BE887: push    eax
0x8BE888: lea     ecx, [edi+10h]
0x8BE88B: call    sub_47DCD0
0x8BE890: fldz
0x8BE892: test    esi, esi
0x8BE894: jz      short loc_8BE8A6
0x8BE896: mov     eax, [esi+8]
0x8BE899: test    eax, eax
0x8BE89B: jz      short loc_8BE8A6
0x8BE89D: fld     dword ptr [eax+34h]
0x8BE8A0: fstp    [esp+8+arg_0]
0x8BE8A4: jmp     short loc_8BE8AA
0x8BE8A6: fst     [esp+8+arg_0]
0x8BE8AA: test    esi, esi
0x8BE8AC: fld     [esp+8+arg_0]
0x8BE8B0: fstp    dword ptr [edi+24h]
0x8BE8B3: jz      short loc_8BE8C1
0x8BE8B5: mov     esi, [esi+8]
0x8BE8B8: test    esi, esi
0x8BE8BA: jz      short loc_8BE8C1
0x8BE8BC: fstp    st
0x8BE8BE: fld     dword ptr [esi+30h]
0x8BE8C1: fstp    [esp+8+arg_0]
0x8BE8C5: fld     [esp+8+arg_0]
0x8BE8C9: fstp    dword ptr [edi+20h]
0x8BE8CC: pop     edi
0x8BE8CD: pop     esi
0x8BE8CE: retn    4
