0x6DFAC0: push    ebx
0x6DFAC1: push    edi
0x6DFAC2: mov     edi, [esp+8+arg_0]
0x6DFAC6: push    edi
0x6DFAC7: mov     ebx, ecx
0x6DFAC9: call    sub_89D6F0
0x6DFACE: test    al, al
0x6DFAD0: jnz     short loc_6DFAD9
0x6DFAD2: pop     edi
0x6DFAD3: xor     al, al
0x6DFAD5: pop     ebx
0x6DFAD6: retn    4
0x6DFAD9: mov     ax, [ebx+0Ch]
0x6DFADD: cmp     ax, [edi+0Ch]
0x6DFAE1: jnz     short loc_6DFAD2
0x6DFAE3: mov     eax, [ebx+10h]
0x6DFAE6: test    eax, eax
0x6DFAE8: jz      short loc_6DFAF4
0x6DFAEA: cmp     dword ptr [edi+10h], 0
0x6DFAEE: jz      short loc_6DFAD2
0x6DFAF0: test    eax, eax
0x6DFAF2: jnz     short loc_6DFAFE
0x6DFAF4: cmp     dword ptr [edi+10h], 0
0x6DFAF8: jnz     short loc_6DFAD2
0x6DFAFA: test    eax, eax
0x6DFAFC: jz      short loc_6DFB14
0x6DFAFE: mov     eax, [edi+10h]
0x6DFB01: test    eax, eax
0x6DFB03: jz      short loc_6DFB14
0x6DFB05: mov     ecx, [ebx+10h]
0x6DFB08: mov     edx, [ecx]
0x6DFB0A: push    eax
0x6DFB0B: mov     eax, [edx+2Ch]
0x6DFB0E: call    eax
0x6DFB10: test    al, al
0x6DFB12: jz      short loc_6DFAD2
0x6DFB14: lea     ecx, [edi+18h]
0x6DFB17: push    ecx
0x6DFB18: lea     ecx, [ebx+18h]
0x6DFB1B: call    sub_6CE450
0x6DFB20: test    al, al
0x6DFB22: jz      short loc_6DFAD2
0x6DFB24: push    ebp
0x6DFB25: push    esi
0x6DFB26: xor     ebp, ebp
0x6DFB28: lea     esi, [edi+38h]
0x6DFB2B: sub     ebx, edi
0x6DFB2D: lea     ecx, [ecx+0]
0x6DFB30: mov     ecx, [ebx+esi]
0x6DFB33: test    ecx, ecx
0x6DFB35: mov     eax, [esi]
0x6DFB37: jz      short loc_6DFB5D
0x6DFB39: test    eax, eax
0x6DFB3B: jz      short loc_6DFB61
0x6DFB3D: mov     edx, [ecx]
0x6DFB3F: push    eax
0x6DFB40: mov     eax, [edx+2Ch]
0x6DFB43: call    eax
0x6DFB45: test    al, al
0x6DFB47: jz      short loc_6DFB61
0x6DFB49: add     ebp, 1
0x6DFB4C: add     esi, 4
0x6DFB4F: cmp     ebp, 3
0x6DFB52: jb      short loc_6DFB30
0x6DFB54: pop     esi
0x6DFB55: pop     ebp
0x6DFB56: pop     edi
0x6DFB57: mov     al, 1
0x6DFB59: pop     ebx
0x6DFB5A: retn    4
0x6DFB5D: test    eax, eax
0x6DFB5F: jz      short loc_6DFB49
0x6DFB61: pop     esi
0x6DFB62: pop     ebp
0x6DFB63: pop     edi
0x6DFB64: xor     al, al
0x6DFB66: pop     ebx
0x6DFB67: retn    4
