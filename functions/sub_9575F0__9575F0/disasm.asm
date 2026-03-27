0x9575F0: sub     esp, 20h
0x9575F3: fld     dword ptr ds:0A2FAA8h
0x9575F9: push    ebx
0x9575FA: push    ebp
0x9575FB: push    esi
0x9575FC: push    edi
0x9575FD: mov     edi, [esp+30h+arg_18]
0x957601: mov     eax, [edi+0B8h]
0x957607: mov     esi, [eax+14h]
0x95760A: xor     edx, edx
0x95760C: test    esi, esi
0x95760E: mov     [esp+30h+var_20], ecx
0x957612: jz      short loc_957631
0x957614: fld     dword ptr [edi+10h]
0x957617: fsub    dword ptr [edi+0Ch]
0x95761A: fst     [esp+30h+arg_18]
0x95761E: fcomp   dword ptr ds:0A2FAA8h
0x957624: fnstsw  ax
0x957626: test    ah, 41h
0x957629: jnz     short loc_957631
0x95762B: fstp    st
0x95762D: fld     [esp+30h+arg_18]
0x957631: cmp     esi, 1
0x957634: jz      short loc_957654
0x957636: fld     dword ptr [edi+18h]
0x957639: fsub    dword ptr [edi+14h]
0x95763C: fst     [esp+30h+arg_18]
0x957640: fcomp   st(1)
0x957642: fnstsw  ax
0x957644: test    ah, 41h
0x957647: jnz     short loc_957654
0x957649: fstp    st
0x95764B: mov     edx, 1
0x957650: fld     [esp+30h+arg_18]
0x957654: cmp     esi, 2
0x957657: jz      short loc_957671
0x957659: fld     dword ptr [edi+20h]
0x95765C: fsub    dword ptr [edi+1Ch]
0x95765F: fcomp   st(1)
0x957661: fnstsw  ax
0x957663: fstp    st
0x957665: test    ah, 41h
0x957668: jnz     short loc_957673
0x95766A: mov     edx, 2
0x95766F: jmp     short loc_957673
0x957671: fstp    st
0x957673: mov     ebx, [ecx+28h]
0x957676: mov     esi, [esp+30h+arg_10]
0x95767A: mov     eax, [esi]
0x95767C: mov     edi, [esp+30h+arg_14]
0x957680: mov     edi, [edi]
0x957682: mov     ebp, [ebx]
0x957684: lea     ecx, [esp+30h+var_1C]
0x957688: push    ecx
0x957689: sub     edi, eax
0x95768B: lea     ecx, [esp+34h+var_20]
0x95768F: push    ecx
0x957690: sar     edi, 4
0x957693: push    edi
0x957694: push    eax
0x957695: mov     eax, [esp+40h+var_20]
0x957699: mov     ecx, [eax+34h]
0x95769C: shl     edx, 5
0x95769F: add     edx, ecx
0x9576A1: push    edx
0x9576A2: mov     ecx, ebx
0x9576A4: call    dword ptr [ebp+10h]
0x9576A7: cmp     edi, 1
0x9576AA: mov     byte ptr [esp+30h+arg_18], 0
0x9576AF: jle     short loc_9576C5
0x9576B1: mov     ecx, [esp+30h+arg_18]
0x9576B5: mov     edx, [esi]
0x9576B7: push    ecx
0x9576B8: dec     edi
0x9576B9: push    edi
0x9576BA: push    0
0x9576BC: push    edx
0x9576BD: call    sub_957460
0x9576C2: add     esp, 10h
0x9576C5: mov     edx, [esp+30h+arg_0]
0x9576C9: mov     ecx, [esp+30h+arg_4]
0x9576CD: mov     edi, [edx]
0x9576CF: mov     eax, [ecx]
0x9576D1: mov     edx, [esp+30h+arg_8]
0x9576D5: mov     ebp, [edx]
0x9576D7: sub     eax, edi
0x9576D9: mov     edi, [esp+30h+arg_C]
0x9576DD: mov     ebx, [edi]
0x9576DF: sub     ebx, ebp
0x9576E1: mov     ebp, [esi]
0x9576E3: and     eax, 0FFFFFFF0h
0x9576E6: and     ebx, 0FFFFFFF0h
0x9576E9: cmp     eax, ebx
0x9576EB: mov     eax, [esp+30h+arg_14]
0x9576EF: mov     eax, [eax]
0x9576F1: setl    bl
0x9576F4: cmp     ebp, eax
0x9576F6: mov     [esp+30h+arg_18], eax
0x9576FA: jnb     loc_9577DF
0x957700: mov     eax, [esp+30h+arg_0]
0x957704: mov     ebp, [ecx]
0x957706: sub     ebp, [eax]
0x957708: mov     eax, [edi]
0x95770A: sub     eax, [edx]
0x95770C: sar     ebp, 4
0x95770F: sar     eax, 4
0x957712: test    bl, bl
0x957714: jz      short loc_95771B
0x957716: shl     eax, 2
0x957719: jmp     short loc_95771E
0x95771B: shl     ebp, 2
0x95771E: cmp     ebp, eax
0x957720: jge     loc_9577C1
0x957726: mov     eax, [esp+30h+arg_18]
0x95772A: add     eax, 0FFFFFFF0h
0x95772D: mov     ebx, eax
0x95772F: mov     ebp, [ebx]
0x957731: mov     [esp+30h+var_20], ebp
0x957735: mov     ebp, [ebx+4]
0x957738: mov     [esp+30h+var_1C], ebp
0x95773C: mov     ebp, [ebx+8]
0x95773F: mov     ebx, [ebx+0Ch]
0x957742: mov     [esp+30h+var_14], ebx
0x957746: mov     ebx, [esi]
0x957748: mov     [esp+30h+var_18], ebp
0x95774C: mov     ebp, [ebx]
0x95774E: mov     [eax], ebp
0x957750: mov     ebp, [ebx+4]
0x957753: mov     [eax+4], ebp
0x957756: mov     ebp, [ebx+8]
0x957759: mov     [eax+8], ebp
0x95775C: mov     ebx, [ebx+0Ch]
0x95775F: mov     [eax+0Ch], ebx
0x957762: mov     ebx, [edx]
0x957764: mov     eax, [ebx]
0x957766: mov     ebp, [ebx+4]
0x957769: mov     [esp+30h+var_C], ebp
0x95776D: mov     ebp, [ebx+8]
0x957770: mov     ebx, [ebx+0Ch]
0x957773: mov     [esp+30h+var_4], ebx
0x957777: mov     ebx, [ecx]
0x957779: mov     [esp+30h+var_8], ebp
0x95777D: mov     ebp, [esp+30h+var_20]
0x957781: mov     [ebx], ebp
0x957783: mov     ebp, [esp+30h+var_1C]
0x957787: mov     [ebx+4], ebp
0x95778A: mov     ebp, [esp+30h+var_18]
0x95778E: mov     [ebx+8], ebp
0x957791: mov     ebp, [esp+30h+var_14]
0x957795: mov     [ebx+0Ch], ebp
0x957798: mov     ebx, [esi]
0x95779A: mov     [ebx], eax
0x95779C: mov     eax, [esp+30h+var_C]
0x9577A0: mov     [ebx+4], eax
0x9577A3: mov     eax, [esp+30h+var_8]
0x9577A7: mov     [ebx+8], eax
0x9577AA: mov     eax, [esp+30h+var_4]
0x9577AE: mov     [ebx+0Ch], eax
0x9577B1: add     dword ptr [ecx], 10h
0x9577B4: add     dword ptr [edx], 10h
0x9577B7: add     dword ptr [esi], 10h
0x9577BA: add     dword ptr [edi], 10h
0x9577BD: mov     bl, 1
0x9577BF: jmp     short loc_9577CD
0x9577C1: mov     eax, [edi]
0x9577C3: add     eax, 10h
0x9577C6: mov     [edi], eax
0x9577C8: add     dword ptr [esi], 10h
0x9577CB: xor     bl, bl
0x9577CD: mov     eax, [esp+30h+arg_14]
0x9577D1: mov     eax, [eax]
0x9577D3: cmp     [esi], eax
0x9577D5: mov     [esp+30h+arg_18], eax
0x9577D9: jb      loc_957700
0x9577DF: pop     edi
0x9577E0: pop     esi
0x9577E1: pop     ebp
0x9577E2: pop     ebx
0x9577E3: add     esp, 20h
0x9577E6: retn    1Ch
