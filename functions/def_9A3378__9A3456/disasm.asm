0x9A3456: mov     ebx, 80000010h; jumptable 009A3378 default case
0x9A345B: jmp     loc_9A352A
0x9A3460: mov     eax, [esp+arg_34]; jumptable 009A332B case 8
0x9A3464: mov     eax, [eax+10h]
0x9A3467: test    eax, eax
0x9A3469: jz      def_9A332B
0x9A346F: fld     dword ptr [eax+28h]
0x9A3472: fstp    [esp+arg_8]
0x9A3476: fld     dword ptr [eax+2Ch]
0x9A3479: fstp    [esp+arg_C]
0x9A347D: fld     dword ptr [eax+30h]
0x9A3480: fstp    [esp+arg_10]
0x9A3484: fld     dword ptr [eax+50h]
0x9A3487: jmp     loc_9A3526
0x9A348C: mov     eax, [esp+arg_34]; jumptable 009A332B case 9
0x9A3490: mov     eax, [eax+10h]
0x9A3493: test    eax, eax
0x9A3495: jz      def_9A332B
0x9A349B: fld     dword ptr [eax+1Ch]
0x9A349E: fstp    [esp+arg_8]
0x9A34A2: fld     dword ptr [eax+20h]
0x9A34A5: fstp    [esp+arg_C]
0x9A34A9: fld     dword ptr [eax+24h]
0x9A34AC: fstp    [esp+arg_10]
0x9A34B0: fld     dword ptr [eax+50h]
0x9A34B3: jmp     short loc_9A3526
0x9A34B5: mov     eax, [esp+arg_34]; jumptable 009A332B case 10
0x9A34B9: mov     eax, [eax+10h]
0x9A34BC: test    eax, eax
0x9A34BE: jz      def_9A332B
0x9A34C4: fld     dword ptr [eax+34h]
0x9A34C7: fstp    [esp+arg_8]
0x9A34CB: fld     dword ptr [eax+38h]
0x9A34CE: fstp    [esp+arg_C]
0x9A34D2: fld     dword ptr [eax+3Ch]
0x9A34D5: fstp    [esp+arg_10]
0x9A34D9: fld     dword ptr [eax+50h]
0x9A34DC: jmp     short loc_9A3526
0x9A34DE: mov     eax, [esp+arg_34]; jumptable 009A332B case 11
0x9A34E2: mov     eax, [eax+10h]
0x9A34E5: test    eax, eax
0x9A34E7: jz      short def_9A332B
0x9A34E9: fld     dword ptr [eax+40h]
0x9A34EC: fstp    [esp+arg_8]
0x9A34F0: fld     dword ptr [eax+44h]
0x9A34F3: fstp    [esp+arg_C]
0x9A34F7: fld     dword ptr [eax+48h]
0x9A34FA: fstp    [esp+arg_10]
0x9A34FE: fld     dword ptr [eax+50h]
0x9A3501: jmp     short loc_9A3526
0x9A3503: mov     eax, [esp+arg_34]; jumptable 009A332B case 12
0x9A3507: mov     eax, [eax+10h]
0x9A350A: test    eax, eax
0x9A350C: jz      short def_9A332B
0x9A350E: fld     dword ptr [eax+4Ch]
0x9A3511: fstp    [esp+arg_8]
0x9A3515: fld     dword ptr [eax+4Ch]
0x9A3518: fstp    [esp+arg_C]
0x9A351C: fld     dword ptr [eax+4Ch]
0x9A351F: fstp    [esp+arg_10]
0x9A3523: fld     dword ptr [eax+4Ch]
0x9A3526: fstp    [esp+arg_14]
0x9A352A: mov     ecx, [esp+arg_1C]
0x9A352E: mov     edx, [ecx]
0x9A3530: mov     edx, [edx+30h]
0x9A3533: push    0
0x9A3535: lea     eax, [esp+4+arg_8]
0x9A3539: push    eax
0x9A353A: push    esi
0x9A353B: call    edx
0x9A353D: test    al, al
0x9A353F: jnz     short def_9A332B
0x9A3541: mov     ebx, 80000050h
