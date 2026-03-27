0x91DF60: push    ebx
0x91DF61: mov     ebx, ecx
0x91DF63: mov     eax, [ebx+1Ch]
0x91DF66: test    eax, eax
0x91DF68: jz      short loc_91DF92
0x91DF6A: mov     ecx, [eax+60h]
0x91DF6D: push    esi
0x91DF6E: xor     esi, esi
0x91DF70: test    ecx, ecx
0x91DF72: jle     short loc_91DF91
0x91DF74: push    edi
0x91DF75: lea     edi, [ebx+18h]
0x91DF78: mov     eax, [eax+5Ch]
0x91DF7B: mov     ecx, [eax+esi*4]
0x91DF7E: mov     edx, [edi]
0x91DF80: push    ecx
0x91DF81: mov     ecx, edi
0x91DF83: call    dword ptr [edx]
0x91DF85: mov     eax, [ebx+1Ch]
0x91DF88: mov     ecx, [eax+60h]
0x91DF8B: inc     esi
0x91DF8C: cmp     esi, ecx
0x91DF8E: jl      short loc_91DF78
0x91DF90: pop     edi
0x91DF91: pop     esi
0x91DF92: pop     ebx
0x91DF93: retn
