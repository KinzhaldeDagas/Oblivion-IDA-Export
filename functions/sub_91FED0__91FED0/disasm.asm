0x91FED0: mov     eax, [ecx+8]
0x91FED3: mov     edx, large fs:2Ch
0x91FEDA: mov     ecx, ds:0BA9DE4h
0x91FEE0: mov     ecx, [edx+ecx*4]
0x91FEE3: push    ebx
0x91FEE4: push    esi
0x91FEE5: mov     esi, [esp+8+arg_8]
0x91FEE9: mov     [esi+1Ch], eax
0x91FEEC: mov     ecx, [ecx+19Ch]
0x91FEF2: mov     edx, [ecx+20h]
0x91FEF5: mov     ebx, [ecx+2Ch]
0x91FEF8: add     eax, 10h
0x91FEFB: and     eax, 0FFFFFFF0h
0x91FEFE: push    edi
0x91FEFF: lea     edi, [edx+eax]
0x91FF02: cmp     edi, ebx
0x91FF04: ja      short loc_91FF0D
0x91FF06: mov     [ecx+20h], edi
0x91FF09: mov     eax, edx
0x91FF0B: jmp     short loc_91FF13
0x91FF0D: mov     edx, [ecx]
0x91FF0F: push    eax
0x91FF10: call    dword ptr [edx+0Ch]
0x91FF13: mov     [esi+18h], eax
0x91FF16: mov     eax, 3E8h
0x91FF1B: pop     edi
0x91FF1C: mov     [esi+8], eax
0x91FF1F: mov     [esi+0Ch], eax
0x91FF22: mov     [esi+4], eax
0x91FF25: mov     dword ptr [esi+10h], 3
0x91FF2C: mov     dword ptr [esi+14h], 4
0x91FF33: mov     dword ptr [esi], 2
0x91FF39: pop     esi
0x91FF3A: xor     eax, eax
0x91FF3C: pop     ebx
0x91FF3D: retn    0Ch
