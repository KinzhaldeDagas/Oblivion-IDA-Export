0x6F23C0: push    ebx
0x6F23C1: mov     ebx, [esp+4+arg_0]
0x6F23C5: mov     eax, [ebx+4]
0x6F23C8: push    esi
0x6F23C9: push    edi
0x6F23CA: mov     edi, ecx
0x6F23CC: xor     ecx, ecx
0x6F23CE: cmp     eax, ecx
0x6F23D0: jnz     short loc_6F23D6
0x6F23D2: xor     esi, esi
0x6F23D4: jmp     short loc_6F23DE
0x6F23D6: mov     esi, [ebx+8]
0x6F23D9: sub     esi, eax
0x6F23DB: sar     esi, 2
0x6F23DE: cmp     esi, ecx
0x6F23E0: mov     [edi+4], ecx
0x6F23E3: mov     [edi+8], ecx
0x6F23E6: mov     [edi+0Ch], ecx
0x6F23E9: jz      short loc_6F244D
0x6F23EB: cmp     esi, 3FFFFFFFh
0x6F23F1: jbe     short loc_6F23F8
0x6F23F3: call    sub_6F1780
0x6F23F8: push    ecx
0x6F23F9: push    esi; char *
0x6F23FA: call    sub_78FB60
0x6F23FF: mov     [edi+4], eax
0x6F2402: mov     [edi+8], eax
0x6F2405: lea     eax, [eax+esi*4]
0x6F2408: mov     [edi+0Ch], eax
0x6F240B: mov     esi, [ebx+8]
0x6F240E: add     esp, 8
0x6F2411: cmp     [ebx+4], esi
0x6F2414: jbe     short loc_6F241B
0x6F2416: call    __invalid_parameter_noinfo
0x6F241B: push    ebp; MaxCount
0x6F241C: mov     ebp, [ebx+4]
0x6F241F: cmp     ebp, [ebx+8]
0x6F2422: jbe     short loc_6F2429
0x6F2424: call    __invalid_parameter_noinfo
0x6F2429: mov     ecx, [edi+4]
0x6F242C: sub     esi, ebp
0x6F242E: sar     esi, 2
0x6F2431: lea     eax, ds:0[esi*4]
0x6F2438: lea     esi, [eax+ecx]
0x6F243B: jz      short loc_6F2449
0x6F243D: push    eax; Src
0x6F243E: push    ebp; Src
0x6F243F: push    eax; DstSize
0x6F2440: push    ecx; Dst
0x6F2441: call    _memmove_s
0x6F2446: add     esp, 10h
0x6F2449: mov     [edi+8], esi
0x6F244C: pop     ebp
0x6F244D: mov     eax, edi
0x6F244F: pop     edi
0x6F2450: pop     esi
0x6F2451: pop     ebx
0x6F2452: retn    4
