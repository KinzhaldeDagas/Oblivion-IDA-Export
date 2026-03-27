0x748530: mov     eax, [esp+arg_4]
0x748534: test    eax, eax
0x748536: push    esi
0x748537: mov     esi, [esp+4+arg_0]
0x74853B: mov     [esi], eax
0x74853D: jl      short loc_7485AF
0x74853F: cmp     eax, 20h ; ' '
0x748542: jge     short loc_7485AF
0x748544: lea     eax, [eax+eax*2]
0x748547: add     eax, eax
0x748549: add     eax, eax
0x74854B: cmp     ds:byte_B40610[eax], 0
0x748552: jnz     short loc_74855D
0x748554: cmp     ds:dword_B40614[eax], 0FFFFFFFFh
0x74855B: jz      short loc_7485AF
0x74855D: cmp     [esp+4+Format], 0
0x748562: jz      short loc_7485AF
0x748564: push    offset stru_B40790; lpCriticalSection
0x748569: call    dword ptr ds:0A2806Ch
0x74856F: mov     ecx, [esp+4+Format]
0x748573: lea     eax, [esp+4+ArgList]
0x748577: push    eax; ArgList
0x748578: push    ecx; Format
0x748579: mov     ecx, esi
0x74857B: call    sub_748410
0x748580: mov     eax, [esi]
0x748582: lea     edx, [eax+eax*2]
0x748585: cmp     byte ptr ds:0B40610h[edx*4], 0
0x74858D: jz      short loc_7485A4
0x74858F: mov     ecx, ds:0B40608h
0x748595: test    ecx, ecx
0x748597: jz      short loc_7485A4
0x748599: push    offset DstBuf
0x74859E: push    eax
0x74859F: call    ecx ; dword_B40608
0x7485A1: add     esp, 8
0x7485A4: push    offset stru_B40790; lpCriticalSection
0x7485A9: call    dword ptr ds:0A28074h
0x7485AF: mov     eax, esi
0x7485B1: pop     esi
0x7485B2: retn
