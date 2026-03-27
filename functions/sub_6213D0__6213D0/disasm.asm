0x6213D0: push    esi
0x6213D1: mov     esi, ecx
0x6213D3: mov     eax, [esi+74h]
0x6213D6: cmp     eax, 3; switch 4 cases
0x6213D9: ja      def_6213DF
0x6213DF: jmp     ds:jpt_6213DF[eax*4]; switch jump
0x6213E6: pop     esi; jumptable 006213DF case 0
0x6213E7: jmp     loc_620C30
0x6213EC: pop     esi; jumptable 006213DF case 1
0x6213ED: jmp     loc_61C550
0x6213F2: pop     esi; jumptable 006213DF case 2
0x6213F3: jmp     loc_612C30
0x6213F8: call    sub_6135F0; jumptable 006213DF case 3
0x6213FD: test    eax, eax
0x6213FF: jz      short loc_621424
0x621401: mov     ecx, esi
0x621403: call    sub_6135F0
0x621408: cmp     dword ptr [eax+58h], 0
0x62140C: jz      short loc_621424
0x62140E: mov     ecx, esi
0x621410: call    sub_6135F0
0x621415: mov     ecx, [eax+58h]
0x621418: mov     eax, [ecx]
0x62141A: mov     edx, [eax+47Ch]
0x621420: call    edx
0x621422: jmp     short loc_621426
0x621424: xor     eax, eax
0x621426: mov     ecx, [esi+1A8h]
0x62142C: cmp     ecx, ds:0B372F0h
0x621432: jl      short def_6213DF
0x621434: test    eax, eax
0x621436: jnz     short def_6213DF
0x621438: mov     edx, [esi+70h]
0x62143B: push    edx
0x62143C: call    sub_612670
0x621441: add     esp, 4
0x621444: test    al, al
0x621446: jz      short loc_62144C
0x621448: push    0
0x62144A: jmp     short loc_621454
0x62144C: cmp     dword ptr [esi+7Ch], 0
0x621450: jz      short loc_62145B
0x621452: push    1
0x621454: mov     ecx, esi
0x621456: call    sub_620290
0x62145B: cmp     dword ptr [esi+6Ch], 4
0x62145F: jz      short loc_62147A
0x621461: mov     eax, [esi+70h]
0x621464: push    eax
0x621465: call    sub_612690
0x62146A: add     esp, 4
0x62146D: test    al, al
0x62146F: jz      short loc_62147A
0x621471: push    0
0x621473: mov     ecx, esi
0x621475: call    sub_6189E0
0x62147A: cmp     dword ptr [esi+80h], 0
0x621481: jz      short def_6213DF
0x621483: mov     ecx, [esi+70h]
0x621486: push    ecx
0x621487: call    sub_612690
0x62148C: add     esp, 4
0x62148F: test    al, al
0x621491: jnz     short def_6213DF
0x621493: push    1
0x621495: mov     ecx, esi
0x621497: call    sub_6189E0
