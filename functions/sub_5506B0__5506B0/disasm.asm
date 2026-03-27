0x5506B0: push    ebx
0x5506B1: push    ebp
0x5506B2: push    esi
0x5506B3: push    edi
0x5506B4: push    offset stru_B39C00; lpCriticalSection
0x5506B9: mov     edi, ecx
0x5506BB: xor     ebp, ebp
0x5506BD: call    dword ptr ds:0A2806Ch
0x5506C3: call    dword ptr ds:0A2808Ch
0x5506C9: add     dword ptr ds:0B39C7Ch, 1
0x5506D0: mov     ds:0B39C78h, eax
0x5506D5: xor     esi, esi
0x5506D7: mov     ebx, [esp+10h+arg_0]
0x5506DB: test    ebx, ebx
0x5506DD: jz      short loc_55071B
0x5506DF: mov     eax, esi
0x5506E1: sub     eax, 0
0x5506E4: jz      short loc_550705
0x5506E6: sub     eax, 1
0x5506E9: jz      short loc_5506EF
0x5506EB: xor     ebp, ebp
0x5506ED: jmp     short loc_55071B
0x5506EF: mov     ecx, [ebx+8]
0x5506F2: call    sub_556650
0x5506F7: test    eax, eax
0x5506F9: ja      short loc_550754
0x5506FB: mov     ecx, [ebx+8]
0x5506FE: call    sub_556720
0x550703: jmp     short loc_550719
0x550705: mov     ecx, [ebx+8]
0x550708: call    sub_5564E0
0x55070D: test    eax, eax
0x55070F: ja      short loc_550754
0x550711: mov     ecx, [ebx+8]
0x550714: call    sub_5565F0
0x550719: mov     ebp, eax
0x55071B: push    esi
0x55071C: mov     ecx, edi
0x55071E: call    sub_54F890
0x550723: lea     ecx, [eax+ebp]
0x550726: cmp     ecx, [edi+esi*4+18h]
0x55072A: jbe     short loc_550754
0x55072C: lea     esp, [esp+0]
0x550730: mov     edx, [esp+10h+arg_0]
0x550734: push    edx
0x550735: push    esi
0x550736: mov     ecx, edi
0x550738: mov     ebx, eax
0x55073A: call    sub_54FC30
0x55073F: push    esi
0x550740: mov     ecx, edi
0x550742: call    sub_54F890
0x550747: cmp     eax, ebx
0x550749: jz      short loc_550754
0x55074B: lea     ecx, [eax+ebp]
0x55074E: cmp     ecx, [edi+esi*4+18h]
0x550752: ja      short loc_550730
0x550754: add     esi, 1
0x550757: cmp     esi, 2
0x55075A: jb      loc_5506D7
0x550760: sub     dword ptr ds:0B39C7Ch, 1
0x550767: pop     edi
0x550768: pop     esi
0x550769: pop     ebp
0x55076A: pop     ebx
0x55076B: jnz     short loc_550777
0x55076D: mov     dword ptr ds:0B39C78h, 0
0x550777: mov     [esp+arg_0], offset stru_B39C00
0x55077F: jmp     dword ptr ds:0A28074h
