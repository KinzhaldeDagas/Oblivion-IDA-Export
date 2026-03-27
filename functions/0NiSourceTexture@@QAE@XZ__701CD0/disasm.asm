0x701CD0: push    ebx
0x701CD1: push    esi
0x701CD2: mov     esi, ecx
0x701CD4: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x701CD9: mov     dword ptr [esi], offset ??_7NiTexture@@6B@; const NiTexture::`vftable'
0x701CDF: mov     dword ptr [esi+18h], 6
0x701CE6: mov     dword ptr [esi+1Ch], 3
0x701CED: mov     dword ptr [esi+20h], 2
0x701CF4: xor     ebx, ebx
0x701CF6: mov     ecx, esi
0x701CF8: mov     [esi+24h], ebx
0x701CFB: call    sub_701B00
0x701D00: mov     [esi+30h], bl
0x701D03: mov     [esi+34h], ebx
0x701D06: mov     [esi+38h], ebx
0x701D09: mov     al, 1
0x701D0B: mov     dword ptr [esi], offset ??_7NiSourceTexture@@6B@; const NiSourceTexture::`vftable'
0x701D11: mov     [esi+3Ch], ebx
0x701D14: mov     [esi+40h], al
0x701D17: mov     [esi+41h], al
0x701D1A: mov     [esi+44h], ebx
0x701D1D: mov     eax, esi
0x701D1F: pop     esi
0x701D20: pop     ebx
0x701D21: retn
