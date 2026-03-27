0x51AA10: push    esi
0x51AA11: mov     esi, ecx
0x51AA13: mov     ecx, [esp+4+arg_0]
0x51AA17: mov     [esi+8], cx
0x51AA1B: movzx   ecx, cl
0x51AA1E: lea     ecx, [ecx+ecx*8]
0x51AA21: mov     ecx, ds:0B102ECh[ecx*4]
0x51AA28: xor     eax, eax
0x51AA2A: lea     ecx, ds:0B10900h[ecx*4]
0x51AA31: mov     edx, [ecx]
0x51AA33: cmp     byte ptr [edx], 0
0x51AA36: jz      short loc_51AA43
0x51AA38: add     eax, 1
0x51AA3B: add     ecx, 20h ; ' '
0x51AA3E: cmp     eax, 5
0x51AA41: jl      short loc_51AA31
0x51AA43: mov     [esi+0Ch], eax
0x51AA46: mov     eax, [esi+10h]
0x51AA49: test    eax, eax
0x51AA4B: jz      short loc_51AA56
0x51AA4D: push    eax
0x51AA4E: call    FormHeapFree
0x51AA53: add     esp, 4
0x51AA56: mov     eax, [esi+0Ch]
0x51AA59: test    eax, eax
0x51AA5B: jz      short loc_51AA8D
0x51AA5D: xor     ecx, ecx
0x51AA5F: mov     edx, 4
0x51AA64: mul     edx
0x51AA66: seto    cl
0x51AA69: neg     ecx
0x51AA6B: or      ecx, eax
0x51AA6D: push    ecx; Size
0x51AA6E: call    FormHeapAlloc
0x51AA73: mov     ecx, [esi+0Ch]
0x51AA76: add     ecx, ecx
0x51AA78: add     ecx, ecx
0x51AA7A: push    ecx
0x51AA7B: push    0
0x51AA7D: push    eax
0x51AA7E: mov     [esi+10h], eax
0x51AA81: call    __memset
0x51AA86: add     esp, 10h
0x51AA89: pop     esi
0x51AA8A: retn    4
0x51AA8D: mov     dword ptr [esi+10h], 0
0x51AA94: pop     esi
0x51AA95: retn    4
