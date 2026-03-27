0x77BA10: mov     eax, ecx
0x77BA12: mov     ecx, [eax+103Ch]
0x77BA18: test    ecx, 100h
0x77BA1E: jz      short loc_77BA2E
0x77BA20: test    ecx, 100000h
0x77BA26: jz      short loc_77BA2E
0x77BA28: or      dword ptr [eax+8], 1
0x77BA2C: jmp     short loc_77BA32
0x77BA2E: and     dword ptr [eax+8], 0FFFFFFFEh
0x77BA32: push    ebp
0x77BA33: push    esi
0x77BA34: mov     esi, [eax+1044h]
0x77BA3A: push    edi
0x77BA3B: mov     edi, [eax+1048h]
0x77BA41: mov     dword ptr [eax+70h], 0
0x77BA48: mov     dword ptr [eax+6Ch], 0
0x77BA4F: xor     ecx, ecx
0x77BA51: lea     edx, [eax+20h]
0x77BA54: test    [edx], esi
0x77BA56: jz      short loc_77BA62
0x77BA58: mov     ebp, 1
0x77BA5D: shl     ebp, cl
0x77BA5F: or      [eax+6Ch], ebp
0x77BA62: test    [edx], edi
0x77BA64: jz      short loc_77BA70
0x77BA66: mov     ebp, 1
0x77BA6B: shl     ebp, cl
0x77BA6D: or      [eax+70h], ebp
0x77BA70: add     ecx, 1
0x77BA73: add     edx, 4
0x77BA76: cmp     ecx, 0Bh
0x77BA79: jb      short loc_77BA54
0x77BA7B: test    byte ptr [eax+1064h], 10h
0x77BA82: pop     edi
0x77BA83: pop     esi
0x77BA84: pop     ebp
0x77BA85: jz      short loc_77BA8D
0x77BA87: or      dword ptr [eax+8], 4
0x77BA8B: jmp     short loc_77BA91
0x77BA8D: and     dword ptr [eax+8], 0FFFFFFFBh
0x77BA91: mov     ecx, [eax+0FFCh]
0x77BA97: cmp     byte ptr [ecx+5C8h], 0
0x77BA9E: jz      short loc_77BAB5
0x77BAA0: cmp     byte ptr [ecx+5C9h], 0
0x77BAA7: jnz     short loc_77BAB5
0x77BAA9: mov     ecx, 1
0x77BAAE: mov     [eax+1014h], cl
0x77BAB4: retn
0x77BAB5: xor     ecx, ecx
0x77BAB7: mov     [eax+1014h], cl
0x77BABD: retn
