0x8D24E0: push    0FFFFFFFFh
0x8D24E2: push    offset ??1hkCharControllerShape@@UAE@XZ_SEH
0x8D24E7: mov     eax, large fs:0
0x8D24ED: push    eax
0x8D24EE: push    ecx
0x8D24EF: push    ebx
0x8D24F0: push    esi
0x8D24F1: push    edi
0x8D24F2: mov     eax, ds:0B30AACh
0x8D24F7: xor     eax, esp
0x8D24F9: push    eax
0x8D24FA: lea     eax, [esp+20h+var_C]
0x8D24FE: mov     large fs:0, eax
0x8D2504: mov     esi, ecx
0x8D2506: mov     [esp+20h+var_10], esi
0x8D250A: mov     eax, [esi+48h]
0x8D250D: test    eax, eax
0x8D250F: mov     edi, ds:0BA9DE4h
0x8D2515: mov     ebx, large fs:2Ch
0x8D251C: mov     [esp+20h+var_4], 1
0x8D2524: js      short loc_8D254D
0x8D2526: mov     ecx, [ebx+edi*4]
0x8D2529: mov     ecx, [ecx+19Ch]
0x8D252F: test    ecx, ecx
0x8D2531: jnz     short loc_8D2539
0x8D2533: mov     ecx, ds:0BA7D9Ch
0x8D2539: mov     edx, [esi+40h]
0x8D253C: and     eax, 3FFFFFFFh
0x8D2541: push    14h
0x8D2543: shl     eax, 4
0x8D2546: push    eax
0x8D2547: push    edx
0x8D2548: call    sub_8A75D0
0x8D254D: mov     eax, [esi+38h]
0x8D2550: test    eax, eax
0x8D2552: mov     byte ptr [esp+20h+var_4], 0
0x8D2557: js      short loc_8D2583
0x8D2559: mov     ecx, [ebx+edi*4]
0x8D255C: mov     ecx, [ecx+19Ch]
0x8D2562: test    ecx, ecx
0x8D2564: jnz     short loc_8D256C
0x8D2566: mov     ecx, ds:0BA7D9Ch
0x8D256C: and     eax, 3FFFFFFFh
0x8D2571: lea     edx, [eax+eax*2]
0x8D2574: mov     eax, [esi+30h]
0x8D2577: push    14h
0x8D2579: shl     edx, 4
0x8D257C: push    edx
0x8D257D: push    eax
0x8D257E: call    sub_8A75D0
0x8D2583: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8D2589: mov     ecx, [esp+20h+var_C]
0x8D258D: mov     large fs:0, ecx
0x8D2594: pop     ecx
0x8D2595: pop     edi
0x8D2596: pop     esi
0x8D2597: pop     ebx
0x8D2598: add     esp, 10h
0x8D259B: retn
0x8D2490: mov     edx, ecx
0x8D2492: mov     eax, [edx+8]
0x8D2495: test    eax, eax
0x8D2497: js      short locret_8D24D1
0x8D2499: mov     ecx, ds:0BA9DE4h
0x8D249F: push    esi
0x8D24A0: mov     esi, large fs:2Ch
0x8D24A7: mov     ecx, [esi+ecx*4]
0x8D24AA: mov     ecx, [ecx+19Ch]
0x8D24B0: test    ecx, ecx
0x8D24B2: pop     esi
0x8D24B3: jnz     short loc_8D24BB
0x8D24B5: mov     ecx, ds:0BA7D9Ch
0x8D24BB: mov     edx, [edx]
0x8D24BD: and     eax, 3FFFFFFFh
0x8D24C2: lea     eax, [eax+eax*2]
0x8D24C5: push    14h
0x8D24C7: shl     eax, 4
0x8D24CA: push    eax
0x8D24CB: push    edx
0x8D24CC: call    sub_8A75D0
0x8D24D1: retn
0x9D7AC0: mov     ecx, [ebp-10h]
0x9D7AC3: jmp     sub_8B3540
0x9D7AC8: mov     ecx, [ebp-10h]
0x9D7ACB: add     ecx, 30h ; '0'
0x9D7ACE: jmp     loc_8D2490
0x9D7AD3: mov     edx, [esp+arg_4]
0x9D7AD7: lea     eax, [edx-10h]
0x9D7ADA: mov     ecx, [edx-14h]
0x9D7ADD: xor     ecx, eax
0x9D7ADF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D7AE4: mov     eax, offset stru_AFF610
0x9D7AE9: jmp     ___CxxFrameHandler3
