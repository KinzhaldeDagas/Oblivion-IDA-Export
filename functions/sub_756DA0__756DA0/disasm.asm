0x756DA0: push    esi
0x756DA1: push    28h ; '('; Size
0x756DA3: call    FormHeapAlloc
0x756DA8: mov     esi, eax
0x756DAA: add     esp, 4
0x756DAD: test    esi, esi
0x756DAF: jz      short loc_756DD6
0x756DB1: mov     ecx, esi
0x756DB3: call    sub_752BF0
0x756DB8: fldz
0x756DBA: fst     dword ptr [esi+18h]
0x756DBD: mov     dword ptr [esi], offset ??_7NiPSysGrowFadeModifier@@6B@; const NiPSysGrowFadeModifier::`vftable'
0x756DC3: fstp    dword ptr [esi+20h]
0x756DC6: mov     word ptr [esi+1Ch], 0
0x756DCC: mov     word ptr [esi+24h], 0
0x756DD2: mov     eax, esi
0x756DD4: pop     esi
0x756DD5: retn
0x756DD6: xor     eax, eax
0x756DD8: pop     esi
0x756DD9: retn
