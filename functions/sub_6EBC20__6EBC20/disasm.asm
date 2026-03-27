0x6EBC20: push    ebx
0x6EBC21: mov     ebx, [esp+4+arg_0]
0x6EBC25: push    ebp
0x6EBC26: mov     ebp, ds:0A2807Ch
0x6EBC2C: push    esi
0x6EBC2D: push    edi
0x6EBC2E: mov     edi, ecx
0x6EBC30: mov     esi, [edi+0Ch]
0x6EBC33: cmp     esi, ebx
0x6EBC35: jz      short loc_6EBC64
0x6EBC37: test    esi, esi
0x6EBC39: jz      short loc_6EBC53
0x6EBC3B: lea     eax, [esi+4]
0x6EBC3E: push    eax; lpAddend
0x6EBC3F: call    ebp ; InterlockedDecrement
0x6EBC41: test    eax, eax
0x6EBC43: jnz     short loc_6EBC53
0x6EBC45: test    esi, esi
0x6EBC47: jz      short loc_6EBC53
0x6EBC49: mov     edx, [esi]
0x6EBC4B: mov     eax, [edx]
0x6EBC4D: push    1
0x6EBC4F: mov     ecx, esi
0x6EBC51: call    eax
0x6EBC53: test    ebx, ebx
0x6EBC55: mov     [edi+0Ch], ebx
0x6EBC58: jz      short loc_6EBC64
0x6EBC5A: add     ebx, 4
0x6EBC5D: push    ebx; lpAddend
0x6EBC5E: call    dword ptr ds:0A28078h
0x6EBC64: mov     esi, [edi+10h]
0x6EBC67: mov     ebx, [esp+10h+arg_4]
0x6EBC6B: cmp     esi, ebx
0x6EBC6D: jz      short loc_6EBC9C
0x6EBC6F: test    esi, esi
0x6EBC71: jz      short loc_6EBC8B
0x6EBC73: lea     ecx, [esi+4]
0x6EBC76: push    ecx; lpAddend
0x6EBC77: call    ebp ; InterlockedDecrement
0x6EBC79: test    eax, eax
0x6EBC7B: jnz     short loc_6EBC8B
0x6EBC7D: test    esi, esi
0x6EBC7F: jz      short loc_6EBC8B
0x6EBC81: mov     edx, [esi]
0x6EBC83: mov     eax, [edx]
0x6EBC85: push    1
0x6EBC87: mov     ecx, esi
0x6EBC89: call    eax
0x6EBC8B: test    ebx, ebx
0x6EBC8D: mov     [edi+10h], ebx
0x6EBC90: jz      short loc_6EBC9C
0x6EBC92: add     ebx, 4
0x6EBC95: push    ebx; lpAddend
0x6EBC96: call    dword ptr ds:0A28078h
0x6EBC9C: pop     edi
0x6EBC9D: pop     esi
0x6EBC9E: pop     ebp
0x6EBC9F: pop     ebx
0x6EBCA0: retn    8
