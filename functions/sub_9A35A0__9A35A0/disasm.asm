0x9A35A0: cmp     [esp+arg_8], 0
0x9A35A5: push    ebx
0x9A35A6: mov     ebx, ecx
0x9A35A8: jnz     short loc_9A35B3
0x9A35AA: mov     eax, 1
0x9A35AF: pop     ebx
0x9A35B0: retn    34h ; '4'
0x9A35B3: mov     edx, [esp+4+arg_30]
0x9A35B7: test    edx, edx
0x9A35B9: push    esi
0x9A35BA: mov     esi, [esp+8+arg_4]
0x9A35BE: push    edi
0x9A35BF: jz      short loc_9A35EC
0x9A35C1: mov     ecx, ds:dword_AB2908
0x9A35C7: mov     edi, [edx+18h]
0x9A35CA: mov     eax, [edx+20h]
0x9A35CD: push    ebp
0x9A35CE: mov     ebp, [esp+10h+arg_28]
0x9A35D2: shl     ebp, cl
0x9A35D4: lea     eax, [eax+edi*8]
0x9A35D7: or      ebp, [esi+1Ch]
0x9A35DA: cmp     [eax], ebp
0x9A35DC: pop     ebp
0x9A35DD: jnz     short loc_9A35EC
0x9A35DF: mov     eax, [eax+4]
0x9A35E2: add     edi, 1
0x9A35E5: test    eax, eax
0x9A35E7: mov     [edx+18h], edi
0x9A35EA: jnz     short loc_9A3616
0x9A35EC: mov     eax, [esi+0Ch]
0x9A35EF: mov     ecx, [esp+0Ch+arg_8]
0x9A35F3: push    eax
0x9A35F4: call    NiObjectNET_GetExtraData
0x9A35F9: test    eax, eax
0x9A35FB: jnz     short loc_9A3616
0x9A35FD: push    esi
0x9A35FE: mov     ecx, ebx
0x9A3600: call    sub_9A92E0
0x9A3605: mov     edi, eax
0x9A3607: test    edi, edi
0x9A3609: jnz     short loc_9A3630
0x9A360B: pop     edi
0x9A360C: pop     esi
0x9A360D: mov     eax, 80000010h
0x9A3612: pop     ebx
0x9A3613: retn    34h ; '4'
0x9A3616: push    eax
0x9A3617: push    esi
0x9A3618: mov     ecx, ebx
0x9A361A: call    sub_9A9040
0x9A361F: mov     edi, eax
0x9A3621: test    edi, edi
0x9A3623: jnz     short loc_9A3630
0x9A3625: pop     edi
0x9A3626: pop     esi
0x9A3627: mov     eax, 80000040h
0x9A362C: pop     ebx
0x9A362D: retn    34h ; '4'
0x9A3630: cmp     byte_B4295B, 0
0x9A3637: mov     ebx, [esi+14h]
0x9A363A: jnz     short loc_9A3641
0x9A363C: call    sub_783C70
0x9A3641: and     ebx, 0FFh
0x9A3647: cmp     dword_B428D8[ebx*4], 9
0x9A364F: jnz     short loc_9A3673
0x9A3651: mov     ecx, [esp+0Ch+arg_0]
0x9A3655: mov     edx, [ecx]
0x9A3657: mov     eax, [edx+30h]
0x9A365A: push    4
0x9A365C: push    edi
0x9A365D: push    esi
0x9A365E: call    eax
0x9A3660: test    al, al
0x9A3662: jnz     loc_9A3706
0x9A3668: pop     edi
0x9A3669: pop     esi
0x9A366A: mov     eax, 80000050h
0x9A366F: pop     ebx
0x9A3670: retn    34h ; '4'
0x9A3673: cmp     byte_B4295B, 0
0x9A367A: mov     ebx, [esi+14h]
0x9A367D: jnz     short loc_9A3684
0x9A367F: call    sub_783C70
0x9A3684: and     ebx, 0FFh
0x9A368A: cmp     dword_B428D8[ebx*4], 6
0x9A3692: jz      short loc_9A370E
0x9A3694: mov     ecx, esi
0x9A3696: call    sub_7833A0
0x9A369B: test    al, al
0x9A369D: jnz     short loc_9A370E
0x9A369F: mov     ecx, esi
0x9A36A1: call    sub_783340
0x9A36A6: test    al, al
0x9A36A8: jnz     short loc_9A370E
0x9A36AA: mov     ecx, esi
0x9A36AC: call    sub_783310
0x9A36B1: test    al, al
0x9A36B3: jnz     short loc_9A370E
0x9A36B5: mov     ecx, esi
0x9A36B7: call    sub_7833D0
0x9A36BC: test    al, al
0x9A36BE: jnz     short loc_9A370E
0x9A36C0: mov     ecx, esi
0x9A36C2: call    sub_7832E0
0x9A36C7: test    al, al
0x9A36C9: jnz     short loc_9A370E
0x9A36CB: mov     ecx, esi
0x9A36CD: call    sub_7832B0
0x9A36D2: test    al, al
0x9A36D4: jnz     short loc_9A370E
0x9A36D6: mov     ecx, esi
0x9A36D8: call    sub_782DE0
0x9A36DD: test    al, al
0x9A36DF: jz      short loc_9A36FF
0x9A36E1: mov     ecx, [esp+0Ch+arg_0]
0x9A36E5: mov     edx, [ecx]
0x9A36E7: mov     eax, [edx+30h]
0x9A36EA: push    3
0x9A36EC: push    edi
0x9A36ED: push    esi
0x9A36EE: call    eax
0x9A36F0: test    al, al
0x9A36F2: jnz     short loc_9A3706
0x9A36F4: pop     edi
0x9A36F5: pop     esi
0x9A36F6: mov     eax, 80000050h
0x9A36FB: pop     ebx
0x9A36FC: retn    34h ; '4'
0x9A36FF: mov     ecx, esi
0x9A3701: call    sub_9A32B0
0x9A3706: pop     edi
0x9A3707: pop     esi
0x9A3708: xor     eax, eax
0x9A370A: pop     ebx
0x9A370B: retn    34h ; '4'
0x9A370E: mov     ecx, [esp+0Ch+arg_0]
0x9A3712: mov     edx, [ecx]
0x9A3714: mov     eax, [edx+30h]
0x9A3717: push    0
0x9A3719: push    edi
0x9A371A: push    esi
0x9A371B: call    eax
0x9A371D: test    al, al
0x9A371F: jnz     short loc_9A3706
0x9A3721: pop     edi
0x9A3722: pop     esi
0x9A3723: mov     eax, 80000050h
0x9A3728: pop     ebx
0x9A3729: retn    34h ; '4'
