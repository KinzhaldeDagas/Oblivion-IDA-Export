0x6623D0: push    ebp
0x6623D1: mov     ebp, esp
0x6623D3: sub     esp, 20h
0x6623D6: mov     eax, ds:0B30AACh
0x6623DB: xor     eax, ebp
0x6623DD: mov     [ebp+var_4], eax
0x6623E0: push    ebx
0x6623E1: push    esi
0x6623E2: mov     esi, ecx
0x6623E4: mov     eax, [esi]
0x6623E6: mov     edx, [eax+284h]
0x6623EC: push    edi
0x6623ED: xor     ebx, ebx
0x6623EF: push    13h
0x6623F1: mov     [ebp+var_18], esi
0x6623F4: mov     [ebp+var_8], ebx
0x6623F7: call    edx
0x6623F9: push    eax
0x6623FA: call    Calc_AlchemyMaxPotions
0x6623FF: mov     esi, [esi+1F8h]
0x662405: add     esp, 4
0x662408: test    esi, esi
0x66240A: mov     edi, eax
0x66240C: mov     [ebp+var_14], edi
0x66240F: jz      short loc_66243C
0x662411: cmp     dword ptr [esi+4], 0
0x662415: mov     ecx, [esi]
0x662417: jnz     short loc_66241F
0x662419: test    ecx, ecx
0x66241B: jz      short loc_662439
0x66241D: jmp     short loc_662423
0x66241F: test    ecx, ecx
0x662421: jz      short loc_662432
0x662423: mov     eax, [ecx]
0x662425: mov     edx, [eax+18h]
0x662428: call    edx
0x66242A: cmp     eax, 7
0x66242D: jnz     short loc_662432
0x66242F: add     ebx, 1
0x662432: mov     esi, [esi+4]
0x662435: test    esi, esi
0x662437: jnz     short loc_662411
0x662439: mov     [ebp+var_8], ebx
0x66243C: lea     esi, ds:0[edi*4]
0x662443: mov     eax, esi
0x662445: call    __alloca?
0x66244A: mov     ebx, esp
0x66244C: mov     eax, esi
0x66244E: mov     [ebp+var_20], ebx
0x662451: call    __alloca?
0x662456: test    ebx, ebx
0x662458: mov     esi, esp
0x66245A: mov     [ebp+var_1C], esi
0x66245D: jz      loc_662576
0x662463: test    esi, esi
0x662465: jz      loc_662576
0x66246B: test    edi, edi
0x66246D: jle     short loc_66248A
0x66246F: lea     edx, ds:0[edi*4]
0x662476: mov     ecx, edx
0x662478: shr     ecx, 2
0x66247B: xor     eax, eax
0x66247D: mov     edi, esi
0x66247F: rep stosd
0x662481: mov     ecx, edx
0x662483: shr     ecx, 2
0x662486: mov     edi, ebx
0x662488: rep stosd
0x66248A: mov     ecx, [ebp+var_18]
0x66248D: mov     eax, [ecx+68h]
0x662490: mov     edx, [eax+8]
0x662493: add     ecx, 68h ; 'h'
0x662496: call    edx
0x662498: mov     edi, eax
0x66249A: test    edi, edi
0x66249C: mov     [ebp+var_C], edi
0x66249F: jz      loc_662576
0x6624A5: jmp     short loc_6624AA
0x6624A7: mov     edi, [ebp+var_C]
0x6624AA: cmp     dword ptr [edi+4], 0
0x6624AE: mov     eax, [edi]
0x6624B0: jnz     short loc_6624BF
0x6624B2: test    eax, eax
0x6624B4: jz      loc_662576
0x6624BA: mov     esi, [eax+8]
0x6624BD: jmp     short loc_6624CA
0x6624BF: test    eax, eax
0x6624C1: jz      short loc_6624C8
0x6624C3: mov     esi, [eax+8]
0x6624C6: jmp     short loc_6624CA
0x6624C8: xor     esi, esi
0x6624CA: test    esi, esi
0x6624CC: jz      loc_662568
0x6624D2: mov     eax, [esi]
0x6624D4: mov     edx, [eax+18h]
0x6624D7: mov     ecx, esi
0x6624D9: call    edx
0x6624DB: cmp     eax, 7
0x6624DE: jnz     loc_662568
0x6624E4: mov     eax, [ebp+var_18]
0x6624E7: mov     eax, [eax+1F8h]
0x6624ED: test    eax, eax
0x6624EF: jz      short loc_6624FC
0x6624F1: cmp     [eax], esi
0x6624F3: jz      short loc_662568
0x6624F5: mov     eax, [eax+4]
0x6624F8: test    eax, eax
0x6624FA: jnz     short loc_6624F1
0x6624FC: xor     bl, bl
0x6624FE: cmp     [ebp+var_14], 0
0x662502: mov     [ebp+var_10], 0
0x662509: jle     short loc_662568
0x66250B: mov     ecx, [ebp+var_1C]
0x66250E: mov     edi, [ebp+var_20]
0x662511: sub     edi, ecx
0x662513: test    bl, bl
0x662515: jnz     short loc_662565
0x662517: mov     eax, [ecx+edi]
0x66251A: test    eax, eax
0x66251C: jnz     short loc_66252D
0x66251E: add     [ebp+var_8], 1
0x662522: mov     [ecx+edi], esi
0x662525: mov     dword ptr [ecx], 1
0x66252B: jmp     short loc_662552
0x66252D: cmp     eax, esi
0x66252F: jnz     short loc_662554
0x662531: xor     edx, edx
0x662533: add     eax, 10h
0x662536: jz      short loc_662554
0x662538: cmp     dword ptr [eax], 0
0x66253B: jz      short loc_662540
0x66253D: add     edx, 1
0x662540: mov     eax, [eax+4]
0x662543: test    eax, eax
0x662545: jnz     short loc_662538
0x662547: mov     eax, [ecx]
0x662549: cmp     eax, edx
0x66254B: jnb     short loc_662554
0x66254D: add     eax, 1
0x662550: mov     [ecx], eax
0x662552: mov     bl, 1
0x662554: mov     eax, [ebp+var_10]
0x662557: add     eax, 1
0x66255A: add     ecx, 4
0x66255D: cmp     eax, [ebp+var_14]
0x662560: mov     [ebp+var_10], eax
0x662563: jl      short loc_662513
0x662565: mov     edi, [ebp+var_C]
0x662568: mov     eax, [edi+4]
0x66256B: test    eax, eax
0x66256D: mov     [ebp+var_C], eax
0x662570: jnz     loc_6624A7
0x662576: mov     eax, [ebp+var_8]
0x662579: lea     esp, [ebp-2Ch]
0x66257C: pop     edi
0x66257D: pop     esi
0x66257E: pop     ebx
0x66257F: mov     ecx, [ebp+var_4]
0x662582: xor     ecx, ebp
0x662584: call    @__security_check_cookie@4; __security_check_cookie(x)
0x662589: mov     esp, ebp
0x66258B: pop     ebp
0x66258C: retn
