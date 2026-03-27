0x747D30: push    esi
0x747D31: mov     esi, ecx
0x747D33: cmp     dword ptr [esi+20h], 0
0x747D37: jnz     short loc_747D4B
0x747D39: mov     dword ptr [esi+10h], 0
0x747D40: mov     dword ptr [esi+14h], 0
0x747D47: mov     al, 1
0x747D49: pop     esi
0x747D4A: retn
0x747D4B: mov     eax, [esi+14h]
0x747D4E: test    eax, eax
0x747D50: jbe     short loc_747D40
0x747D52: mov     edx, [esi+1Ch]
0x747D55: mov     ecx, [esi+18h]
0x747D58: push    edx; Count
0x747D59: push    eax; Count
0x747D5A: push    1; Size
0x747D5C: push    ecx; Str
0x747D5D: call    _fwrite
0x747D62: add     esp, 10h
0x747D65: cmp     eax, [esi+14h]
0x747D68: jz      short loc_747D40
0x747D6A: mov     byte ptr [esi+24h], 0
0x747D6E: xor     al, al
0x747D70: pop     esi
0x747D71: retn
