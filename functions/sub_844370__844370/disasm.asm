0x844370: push    0FFFFFFFFh
0x844372: push    offset SEH_880560
0x844377: mov     eax, large fs:0
0x84437D: push    eax
0x84437E: push    ebx
0x84437F: push    ebp
0x844380: push    esi
0x844381: push    edi
0x844382: mov     eax, ds:0B30AACh
0x844387: xor     eax, esp
0x844389: push    eax
0x84438A: lea     eax, [esp+20h+var_C]
0x84438E: mov     large fs:0, eax
0x844394: mov     esi, ecx
0x844396: mov     eax, [esp+20h+arg_8]
0x84439A: mov     eax, [eax+10h]
0x84439D: mov     edx, [esi]
0x84439F: mov     edx, [edx+0BCh]
0x8443A5: mov     edi, ds:0B45A14h
0x8443AB: push    eax
0x8443AC: mov     eax, [esp+24h+arg_0]
0x8443B0: push    0
0x8443B2: push    eax
0x8443B3: call    edx
0x8443B5: mov     ecx, [esp+20h+arg_C]
0x8443B9: mov     eax, [edi+24h]
0x8443BC: mov     ebp, [eax]
0x8443BE: push    0
0x8443C0: push    ecx
0x8443C1: mov     ecx, esi
0x8443C3: call    sub_848FD0
0x8443C8: mov     ebx, [ebp+4]
0x8443CB: cmp     ebx, eax
0x8443CD: mov     [esp+20h+arg_8], eax
0x8443D1: jz      short loc_844408
0x8443D3: test    ebx, ebx
0x8443D5: jz      short loc_8443F7
0x8443D7: lea     edx, [ebx+4]
0x8443DA: push    edx; lpAddend
0x8443DB: call    dword ptr ds:0A2807Ch
0x8443E1: test    eax, eax
0x8443E3: jnz     short loc_8443F3
0x8443E5: test    ebx, ebx
0x8443E7: jz      short loc_8443F3
0x8443E9: mov     eax, [ebx]
0x8443EB: mov     edx, [eax]
0x8443ED: push    1
0x8443EF: mov     ecx, ebx
0x8443F1: call    edx
0x8443F3: mov     eax, [esp+20h+arg_8]
0x8443F7: test    eax, eax
0x8443F9: mov     [ebp+4], eax
0x8443FC: jz      short loc_844408
0x8443FE: add     eax, 4
0x844401: push    eax; lpAddend
0x844402: call    dword ptr ds:0A28078h
0x844408: mov     eax, [esp+20h+arg_C]
0x84440C: push    eax
0x84440D: push    ebp
0x84440E: mov     ecx, esi
0x844410: call    sub_848FA0
0x844415: mov     ecx, [edi+24h]
0x844418: mov     ebx, [ecx+10h]
0x84441B: mov     eax, ds:0B43108h
0x844420: mov     ebp, [ebx+4]
0x844423: add     ebx, 4
0x844426: cmp     ebp, eax
0x844428: mov     [esp+20h+arg_C], eax
0x84442C: jz      short loc_844463
0x84442E: test    ebp, ebp
0x844430: jz      short loc_844453
0x844432: lea     edx, [ebp+4]
0x844435: push    edx; lpAddend
0x844436: call    dword ptr ds:0A2807Ch
0x84443C: test    eax, eax
0x84443E: jnz     short loc_84444F
0x844440: test    ebp, ebp
0x844442: jz      short loc_84444F
0x844444: mov     eax, [ebp+0]
0x844447: mov     edx, [eax]
0x844449: push    1
0x84444B: mov     ecx, ebp
0x84444D: call    edx
0x84444F: mov     eax, [esp+20h+arg_C]
0x844453: test    eax, eax
0x844455: mov     [ebx], eax
0x844457: jz      short loc_844463
0x844459: add     eax, 4
0x84445C: push    eax; lpAddend
0x84445D: call    dword ptr ds:0A28078h
0x844463: mov     eax, [edi+24h]
0x844466: mov     ebp, [eax+14h]
0x844469: mov     eax, ds:0B4310Ch
0x84446E: mov     ebx, [ebp+4]
0x844471: cmp     ebx, eax
0x844473: mov     ecx, eax
0x844475: mov     [esp+20h+arg_C], ecx
0x844479: jz      short loc_8444B0
0x84447B: test    ebx, ebx
0x84447D: jz      short loc_84449F
0x84447F: lea     ecx, [ebx+4]
0x844482: push    ecx; lpAddend
0x844483: call    dword ptr ds:0A2807Ch
0x844489: test    eax, eax
0x84448B: jnz     short loc_84449B
0x84448D: test    ebx, ebx
0x84448F: jz      short loc_84449B
0x844491: mov     edx, [ebx]
0x844493: mov     eax, [edx]
0x844495: push    1
0x844497: mov     ecx, ebx
0x844499: call    eax
0x84449B: mov     ecx, [esp+20h+arg_C]
0x84449F: test    ecx, ecx
0x8444A1: mov     [ebp+4], ecx
0x8444A4: jz      short loc_8444B0
0x8444A6: add     ecx, 4
0x8444A9: push    ecx; lpAddend
0x8444AA: call    dword ptr ds:0A28078h
0x8444B0: mov     ebx, 1
0x8444B5: add     [edi+60h], ebx
0x8444B8: mov     [esp+20h+arg_C], edi
0x8444BC: mov     edx, [esi+38h]
0x8444BF: lea     ecx, [esp+20h+arg_C]
0x8444C3: push    ecx
0x8444C4: push    edx
0x8444C5: lea     ecx, [esi+40h]
0x8444C8: mov     [esp+28h+var_4], 0
0x8444D0: call    sub_76CE40
0x8444D5: or      eax, 0FFFFFFFFh
0x8444D8: add     [edi+60h], eax
0x8444DB: mov     [esp+20h+var_4], eax
0x8444DF: jnz     short loc_8444E8
0x8444E1: mov     ecx, edi
0x8444E3: call    sub_7604D0
0x8444E8: add     [esi+38h], ebx
0x8444EB: mov     ecx, dword ptr [esp+20h+var_C]
0x8444EF: mov     large fs:0, ecx
0x8444F6: pop     ecx
0x8444F7: pop     edi
0x8444F8: pop     esi
0x8444F9: pop     ebp
0x8444FA: pop     ebx
0x8444FB: add     esp, 0Ch
0x8444FE: retn    10h
