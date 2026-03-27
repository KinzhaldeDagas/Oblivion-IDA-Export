0x46D850: push    ebx
0x46D851: push    esi
0x46D852: mov     esi, ecx
0x46D854: mov     dword ptr [esi], offset ??_7TESModel@@6B@; const TESModel::`vftable'
0x46D85A: mov     eax, [esi+14h]
0x46D85D: xor     ebx, ebx
0x46D85F: cmp     eax, ebx
0x46D861: jz      short loc_46D86F
0x46D863: push    eax
0x46D864: call    FormHeapFree
0x46D869: add     esp, 4
0x46D86C: mov     [esi+14h], ebx
0x46D86F: mov     [esi+10h], bl
0x46D872: mov     eax, [esi+14h]
0x46D875: cmp     eax, ebx
0x46D877: jz      short loc_46D885
0x46D879: push    eax
0x46D87A: call    FormHeapFree
0x46D87F: add     esp, 4
0x46D882: mov     [esi+14h], ebx
0x46D885: mov     [esi+10h], bl
0x46D888: mov     eax, [esi+4]
0x46D88B: push    eax
0x46D88C: call    FormHeapFree
0x46D891: add     esp, 4
0x46D894: mov     [esi+4], ebx
0x46D897: mov     [esi+0Ah], bx
0x46D89B: mov     [esi+8], bx
0x46D89F: pop     esi
0x46D8A0: pop     ebx
0x46D8A1: retn
