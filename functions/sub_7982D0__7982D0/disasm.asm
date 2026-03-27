0x7982D0: cmp     dword ptr [ecx+2Ch], 0
0x7982D4: jz      short locret_7982F8
0x7982D6: xor     eax, eax
0x7982D8: cmp     [ecx+28h], ax
0x7982DC: jbe     short locret_7982F8
0x7982DE: xor     edx, edx
0x7982E0: push    esi
0x7982E1: mov     esi, [ecx+2Ch]
0x7982E4: mov     byte ptr [edx+esi+3Ch], 0
0x7982E9: movzx   esi, word ptr [ecx+28h]
0x7982ED: add     eax, 1
0x7982F0: add     edx, 44h ; 'D'
0x7982F3: cmp     eax, esi
0x7982F5: jl      short loc_7982E1
0x7982F7: pop     esi
0x7982F8: retn
