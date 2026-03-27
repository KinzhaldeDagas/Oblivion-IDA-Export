0x60E4F0: push    esi
0x60E4F1: mov     esi, ecx
0x60E4F3: call    Actor_constr
0x60E4F8: fld     dword ptr ds:0A30634h
0x60E4FE: fstp    dword ptr [esi+108h]
0x60E504: mov     dword ptr [esi], offset ??_7Character@@6BCharacter@@@; const Character::`vftable'{for `Character'}
0x60E50A: mov     dword ptr [esi+18h], offset ??_7Character@@6BTESChildCell@@@; const Character::`vftable'{for `TESChildCell'}
0x60E511: mov     dword ptr [esi+5Ch], offset ??_7Character@@6BMagicCaster@@@; const Character::`vftable'{for `MagicCaster'}
0x60E518: mov     dword ptr [esi+68h], offset ??_7Character@@6BMagicTarget@@@; const Character::`vftable'{for `MagicTarget'}
0x60E51F: mov     byte ptr [esi+4], 32h ; '2'
0x60E523: mov     dword ptr [esi+104h], 0
0x60E52D: mov     eax, esi
0x60E52F: pop     esi
0x60E530: retn
