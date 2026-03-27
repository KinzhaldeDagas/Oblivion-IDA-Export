0x452670: mov     eax, [esp+arg_0]
0x452674: push    esi
0x452675: mov     esi, ecx
0x452677: mov     ecx, [esp+4+arg_4]
0x45267B: mov     [esi+14h], ecx
0x45267E: xor     ecx, ecx
0x452680: cmp     eax, ecx
0x452682: mov     dword ptr [esi], offset ??_7?$NiTLargeArray@PAUFormAndFlags@@@@6B@; const NiTLargeArray<FormAndFlags *>::`vftable'
0x452688: mov     [esi+8], eax
0x45268B: mov     [esi+0Ch], ecx
0x45268E: mov     [esi+10h], ecx
0x452691: jbe     short loc_4526B3
0x452693: mov     edx, 4
0x452698: mul     edx
0x45269A: seto    cl
0x45269D: neg     ecx
0x45269F: or      ecx, eax
0x4526A1: push    ecx; Size
0x4526A2: call    FormHeapAlloc
0x4526A7: mov     [esi+4], eax
0x4526AA: add     esp, 4
0x4526AD: mov     eax, esi
0x4526AF: pop     esi
0x4526B0: retn    8
0x4526B3: mov     [esi+4], ecx
0x4526B6: mov     eax, esi
0x4526B8: pop     esi
0x4526B9: retn    8
