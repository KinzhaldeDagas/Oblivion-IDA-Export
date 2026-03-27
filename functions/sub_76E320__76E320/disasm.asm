0x76E320: mov     eax, [esp+a2]
0x76E324: push    ebx
0x76E325: push    ebp
0x76E326: push    esi
0x76E327: mov     esi, ecx
0x76E329: mov     [esi+8], eax
0x76E32C: mov     ecx, [eax+8B0h]
0x76E332: mov     [esi+0Ch], ecx
0x76E335: mov     eax, [eax+280h]
0x76E33B: mov     [esi+10h], eax
0x76E33E: mov     edx, [eax]
0x76E340: push    edi
0x76E341: push    eax
0x76E342: mov     eax, [edx+4]
0x76E345: call    eax
0x76E347: mov     ecx, [esp+10h+a3]
0x76E34B: mov     ebp, [esp+10h+StreamCount]
0x76E34F: mov     [esi+1Ch], ecx
0x76E352: xor     ecx, ecx
0x76E354: mov     eax, ebp
0x76E356: mov     edx, 10h
0x76E35B: mul     edx
0x76E35D: seto    cl
0x76E360: mov     [esi+20h], ebp
0x76E363: neg     ecx
0x76E365: or      ecx, eax
0x76E367: push    ecx; Size
0x76E368: call    FormHeapAlloc
0x76E36D: mov     edi, eax
0x76E36F: xor     ebx, ebx
0x76E371: add     esp, 4
0x76E374: cmp     edi, ebx
0x76E376: jz      short loc_76E388
0x76E378: push    offset sub_76E260
0x76E37D: push    ebp
0x76E37E: push    10h
0x76E380: push    edi
0x76E381: call    sub_401080
0x76E386: jmp     short loc_76E38A
0x76E388: xor     edi, edi
0x76E38A: cmp     [esi+20h], ebx
0x76E38D: mov     [esi+24h], edi
0x76E390: mov     [esp+10h+a2], ebx
0x76E394: jbe     short loc_76E409
0x76E396: mov     [esp+10h+a3], ebx
0x76E39A: lea     ebx, [ebx+0]
0x76E3A0: mov     ebp, [esi+1Ch]
0x76E3A3: xor     ecx, ecx
0x76E3A5: mov     eax, ebp
0x76E3A7: mov     edx, 1Ch
0x76E3AC: mul     edx
0x76E3AE: seto    cl
0x76E3B1: neg     ecx
0x76E3B3: or      ecx, eax
0x76E3B5: push    ecx; Size
0x76E3B6: call    FormHeapAlloc
0x76E3BB: add     esp, 4
0x76E3BE: test    eax, eax
0x76E3C0: mov     [esp+10h+StreamCount], eax
0x76E3C4: jz      short loc_76E3E5
0x76E3C6: lea     ebx, [ebp-1]
0x76E3C9: test    ebx, ebx
0x76E3CB: mov     edi, eax
0x76E3CD: jl      short loc_76E3E7
0x76E3CF: nop
0x76E3D0: mov     ecx, edi
0x76E3D2: call    sub_76FB00
0x76E3D7: add     edi, 1Ch
0x76E3DA: sub     ebx, 1
0x76E3DD: jns     short loc_76E3D0
0x76E3DF: mov     eax, [esp+10h+StreamCount]
0x76E3E3: jmp     short loc_76E3E7
0x76E3E5: xor     eax, eax
0x76E3E7: mov     ecx, [esp+10h+a3]
0x76E3EB: mov     edx, [esi+24h]
0x76E3EE: mov     [ecx+edx+8], eax
0x76E3F2: mov     eax, [esp+10h+a2]
0x76E3F6: add     eax, 1
0x76E3F9: add     ecx, 10h
0x76E3FC: cmp     eax, [esi+20h]
0x76E3FF: mov     [esp+10h+a2], eax
0x76E403: mov     [esp+10h+a3], ecx
0x76E407: jb      short loc_76E3A0
0x76E409: pop     edi
0x76E40A: pop     esi
0x76E40B: pop     ebp
0x76E40C: mov     al, 1
0x76E40E: pop     ebx
0x76E40F: retn    0Ch
