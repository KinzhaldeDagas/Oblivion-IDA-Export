0x4BF110: push    ebx
0x4BF111: mov     ebx, dword ptr [esp+4+a2]
0x4BF115: push    esi
0x4BF116: push    ebx; a2
0x4BF117: mov     esi, ecx
0x4BF119: call    TESForm_SetFromActiveFile
0x4BF11E: test    bl, bl
0x4BF120: jz      short loc_4BF13F
0x4BF122: cmp     dword ptr [esi+20h], 0
0x4BF126: jz      short loc_4BF13F
0x4BF128: mov     ecx, [esi+20h]
0x4BF12B: mov     eax, [ecx]
0x4BF12D: pop     esi
0x4BF12E: pop     ebx
0x4BF12F: mov     dword ptr [esp+a2], 1
0x4BF137: mov     edx, [eax+90h]
0x4BF13D: jmp     edx
0x4BF13F: pop     esi
0x4BF140: pop     ebx
0x4BF141: retn    4
