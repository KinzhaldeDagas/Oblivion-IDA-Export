0x75BE50: push    esi
0x75BE51: push    edi
0x75BE52: push    20h ; ' '; Size
0x75BE54: mov     edi, ecx
0x75BE56: call    FormHeapAlloc
0x75BE5B: mov     esi, eax
0x75BE5D: add     esp, 4
0x75BE60: test    esi, esi
0x75BE62: jz      short loc_75BE7E
0x75BE64: mov     ecx, esi
0x75BE66: call    sub_752BF0
0x75BE6B: mov     dword ptr [esi], offset ??_7NiPSysAgeDeathModifier@@6B@; const NiPSysAgeDeathModifier::`vftable'
0x75BE71: mov     byte ptr [esi+18h], 0
0x75BE75: mov     dword ptr [esi+1Ch], 0
0x75BE7C: jmp     short loc_75BE80
0x75BE7E: xor     esi, esi
0x75BE80: mov     eax, [esp+8+arg_0]
0x75BE84: push    eax
0x75BE85: push    esi
0x75BE86: mov     ecx, edi
0x75BE88: call    sub_752C40
0x75BE8D: mov     cl, [edi+18h]
0x75BE90: pop     edi
0x75BE91: mov     [esi+18h], cl
0x75BE94: mov     eax, esi
0x75BE96: pop     esi
0x75BE97: retn    4
