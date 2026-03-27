0x899130: mov     eax, [edi+0BCh]
0x899136: push    ebx
0x899137: push    ebp
0x899138: mov     ebp, [esp+8+arg_0]
0x89913C: push    esi
0x89913D: mov     esi, [edi+154h]
0x899143: test    esi, esi
0x899145: jz      short loc_89918E
0x899147: xor     ebx, ebx
0x899149: test    eax, eax
0x89914B: jle     short loc_8991B0
0x89914D: lea     ecx, [ecx+0]
0x899150: mov     eax, [edi+0B8h]
0x899156: mov     eax, [eax+ebx*4]
0x899159: cmp     eax, [esi+14h]
0x89915C: jz      short loc_89917F
0x89915E: cmp     eax, [esi+18h]
0x899161: jz      short loc_89917F
0x899163: cmp     eax, [esi+1Ch]
0x899166: jz      short loc_89917F
0x899168: cmp     eax, [esi+20h]
0x89916B: jz      short loc_89917F
0x89916D: cmp     eax, [esi+24h]
0x899170: jz      short loc_89917F
0x899172: cmp     eax, [esi+28h]
0x899175: jz      short loc_89917F
0x899177: push    eax
0x899178: mov     ecx, ebp
0x89917A: call    sub_8DA0C0
0x89917F: mov     eax, [edi+0BCh]
0x899185: inc     ebx
0x899186: cmp     ebx, eax
0x899188: jl      short loc_899150
0x89918A: pop     esi
0x89918B: pop     ebp
0x89918C: pop     ebx
0x89918D: retn
0x89918E: xor     esi, esi
0x899190: test    eax, eax
0x899192: jle     short loc_8991B0
0x899194: mov     ecx, [edi+0B8h]
0x89919A: mov     edx, [ecx+esi*4]
0x89919D: push    edx
0x89919E: mov     ecx, ebp
0x8991A0: call    sub_8DA0C0
0x8991A5: mov     eax, [edi+0BCh]
0x8991AB: inc     esi
0x8991AC: cmp     esi, eax
0x8991AE: jl      short loc_899194
0x8991B0: pop     esi
0x8991B1: pop     ebp
0x8991B2: pop     ebx
0x8991B3: retn
