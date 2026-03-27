0x75A650: push    esi
0x75A651: push    1Ch; Size
0x75A653: call    FormHeapAlloc
0x75A658: mov     esi, eax
0x75A65A: add     esp, 4
0x75A65D: test    esi, esi
0x75A65F: jz      short loc_75A679
0x75A661: mov     ecx, esi
0x75A663: call    sub_752BF0
0x75A668: mov     dword ptr [esi], offset ??_7NiPSysColliderManager@@6B@; const NiPSysColliderManager::`vftable'
0x75A66E: mov     dword ptr [esi+18h], 0
0x75A675: mov     eax, esi
0x75A677: pop     esi
0x75A678: retn
0x75A679: xor     eax, eax
0x75A67B: pop     esi
0x75A67C: retn
