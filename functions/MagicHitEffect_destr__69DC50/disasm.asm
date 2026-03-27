0x69DC50: push    esi
0x69DC51: mov     esi, ecx
0x69DC53: mov     eax, [esi+18h]
0x69DC56: test    eax, eax
0x69DC58: mov     dword ptr [esi], offset ??_7MagicHitEffect@@6B@; const MagicHitEffect::`vftable'
0x69DC5E: mov     dword ptr [esi+1Ch], 0
0x69DC65: jz      short loc_69DC76
0x69DC67: mov     eax, [eax+34h]
0x69DC6A: test    eax, eax
0x69DC6C: jz      short loc_69DC76
0x69DC6E: push    esi
0x69DC6F: mov     ecx, eax
0x69DC71: call    BSSimpleList_Remove
0x69DC76: mov     dword ptr [esi+18h], 0
0x69DC7D: mov     ecx, esi
0x69DC7F: pop     esi
0x69DC80: jmp     BSTempEffect_destr
