0x747F40: push    ecx
0x747F41: push    esi
0x747F42: mov     esi, ecx
0x747F44: cmp     byte ptr [esi+24h], 0
0x747F48: jz      loc_747FE8
0x747F4E: mov     eax, [esi+14h]
0x747F51: push    ebx
0x747F52: mov     ebx, [esp+0Ch+Count]
0x747F56: push    ebp; File
0x747F57: mov     ebp, [esp+10h+Src]
0x747F5B: push    edi
0x747F5C: mov     edi, [esi+0Ch]
0x747F5F: sub     edi, eax
0x747F61: cmp     ebx, edi
0x747F63: mov     [esp+14h+var_4], 0
0x747F6B: jbe     short loc_747FC5
0x747F6D: test    edi, edi
0x747F6F: jbe     short loc_747F8F
0x747F71: mov     ecx, [esi+18h]
0x747F74: push    edi; Size
0x747F75: add     ecx, eax
0x747F77: push    ebp; Src
0x747F78: push    ecx; Dst
0x747F79: call    _memcpy
0x747F7E: mov     edx, [esi+0Ch]
0x747F81: add     esp, 0Ch
0x747F84: add     ebp, edi
0x747F86: sub     ebx, edi
0x747F88: mov     [esp+14h+var_4], edi
0x747F8C: mov     [esi+14h], edx
0x747F8F: mov     ecx, esi
0x747F91: call    NiFile_Flush
0x747F96: test    al, al
0x747F98: jnz     short loc_747FA4
0x747F9A: pop     edi
0x747F9B: pop     ebp
0x747F9C: pop     ebx
0x747F9D: xor     eax, eax
0x747F9F: pop     esi
0x747FA0: pop     ecx
0x747FA1: retn    8
0x747FA4: cmp     ebx, [esi+0Ch]
0x747FA7: jb      short loc_747FC5
0x747FA9: mov     eax, [esi+1Ch]
0x747FAC: push    eax; Count
0x747FAD: push    ebx; Count
0x747FAE: push    1; Size
0x747FB0: push    ebp; Str
0x747FB1: call    _fwrite
0x747FB6: add     esp, 10h
0x747FB9: add     eax, [esp+14h+var_4]
0x747FBD: pop     edi
0x747FBE: pop     ebp
0x747FBF: pop     ebx
0x747FC0: pop     esi
0x747FC1: pop     ecx
0x747FC2: retn    8
0x747FC5: mov     ecx, [esi+18h]
0x747FC8: add     ecx, [esi+14h]
0x747FCB: push    ebx; Size
0x747FCC: push    ebp; Src
0x747FCD: push    ecx; Dst
0x747FCE: call    _memcpy
0x747FD3: mov     edx, [esp+20h+var_4]
0x747FD7: add     esp, 0Ch
0x747FDA: add     [esi+14h], ebx
0x747FDD: pop     edi
0x747FDE: pop     ebp
0x747FDF: lea     eax, [edx+ebx]
0x747FE2: pop     ebx
0x747FE3: pop     esi
0x747FE4: pop     ecx
0x747FE5: retn    8
0x747FE8: xor     eax, eax
0x747FEA: pop     esi
0x747FEB: pop     ecx
0x747FEC: retn    8
