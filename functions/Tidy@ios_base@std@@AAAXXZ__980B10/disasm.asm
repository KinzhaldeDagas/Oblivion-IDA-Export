0x980B10: push    esi
0x980B11: mov     esi, [esp+4+this]
0x980B15: push    edi
0x980B16: push    0
0x980B18: mov     ecx, esi
0x980B1A: call    ?_Callfns@ios_base@std@@AAEXW4event@12@@Z
0x980B1F: mov     eax, [esi+1Ch]
0x980B22: test    eax, eax
0x980B24: jz      short loc_980B35
0x980B26: mov     edi, [eax]
0x980B28: push    eax
0x980B29: call    FormHeapFree
0x980B2E: test    edi, edi
0x980B30: pop     ecx
0x980B31: mov     eax, edi
0x980B33: jnz     short loc_980B26
0x980B35: mov     eax, [esi+20h]
0x980B38: and     dword ptr [esi+1Ch], 0
0x980B3C: test    eax, eax
0x980B3E: jz      short loc_980B4F
0x980B40: mov     edi, [eax]
0x980B42: push    eax
0x980B43: call    FormHeapFree
0x980B48: test    edi, edi
0x980B4A: pop     ecx
0x980B4B: mov     eax, edi
0x980B4D: jnz     short loc_980B40
0x980B4F: and     dword ptr [esi+20h], 0
0x980B53: pop     edi
0x980B54: pop     esi
0x980B55: retn
