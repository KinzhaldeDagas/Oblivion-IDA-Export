0x42A8C0: mov     eax, ecx
0x42A8C2: xor     ecx, ecx
0x42A8C4: mov     byte ptr [eax+4], 4Bh ; 'K'
0x42A8C8: mov     [eax+8], ecx
0x42A8CB: mov     dword ptr [eax], offset ??_7ExtraSavedMovementData@@6B@; const ExtraSavedMovementData::`vftable'
0x42A8D1: mov     edx, SaveLoad_CurrentSavegame
0x42A8D7: mov     dl, [edx+7Ch]
0x42A8DA: mov     [eax+0Ch], dl
0x42A8DD: mov     [eax+10h], ecx
0x42A8E0: mov     [eax+14h], ecx
0x42A8E3: mov     [eax+18h], ecx
0x42A8E6: retn
