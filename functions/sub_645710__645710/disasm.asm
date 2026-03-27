0x645710: push    ebp
0x645711: push    esi
0x645712: mov     ebp, ecx
0x645714: xor     esi, esi
0x645716: cmp     [ebp+2Ch], esi
0x645719: push    edi
0x64571A: mov     edi, [esp+0Ch+arg_0]
0x64571E: jnz     short loc_645731
0x645720: mov     eax, [ebp+0]
0x645723: mov     edx, [eax+558h]
0x645729: push    edi
0x64572A: call    edx
0x64572C: cmp     [ebp+2Ch], esi
0x64572F: jz      short loc_645756
0x645731: mov     ecx, [ebp+8]
0x645734: push    edi
0x645735: call    sub_5687D0
0x64573A: test    al, al
0x64573C: jnz     short loc_645756
0x64573E: mov     eax, [ebp+0]
0x645741: mov     edx, [eax+198h]
0x645747: push    esi
0x645748: push    0FFFFFFFFh
0x64574A: push    esi
0x64574B: push    edi
0x64574C: mov     ecx, ebp
0x64574E: call    edx
0x645750: pop     edi
0x645751: pop     esi
0x645752: pop     ebp
0x645753: retn    4
0x645756: mov     ecx, ds:0B333C4h; this
0x64575C: cmp     [ebp+2Ch], ecx
0x64575F: jnz     short loc_64579B
0x645761: call    PlayerCharacter__IsSleeping?
0x645766: test    al, al
0x645768: jz      short loc_64579B
0x64576A: mov     eax, ds:0B333C4h
0x64576F: cmp     byte ptr [eax+12Ch], 0
0x645776: jnz     short loc_64579B
0x645778: mov     [eax+590h], esi
0x64577E: mov     byte ptr [eax+594h], 1
0x645785: mov     eax, [ebp+0]
0x645788: mov     edx, [eax+188h]
0x64578E: push    0FFFFFFFFh
0x645790: push    edi
0x645791: mov     ecx, ebp
0x645793: call    edx
0x645795: pop     edi
0x645796: pop     esi
0x645797: pop     ebp
0x645798: retn    4
0x64579B: fld     dword ptr ds:0B36C68h
0x6457A1: push    ebx
0x6457A2: fmul    qword ptr ds:0A3C800h
0x6457A8: call    Double_To_SInt32
0x6457AD: xor     bl, bl
0x6457AF: test    eax, eax
0x6457B1: mov     [esp+10h+arg_0], eax
0x6457B5: jz      loc_64588A
0x6457BB: jmp     short loc_6457C0
0x6457BD: align 10h
0x6457C0: mov     eax, [edi]
0x6457C2: mov     edx, [eax+198h]
0x6457C8: push    0
0x6457CA: mov     ecx, edi
0x6457CC: call    edx
0x6457CE: test    al, al
0x6457D0: jnz     loc_64587C
0x6457D6: mov     eax, [edi]
0x6457D8: mov     edx, [eax+344h]
0x6457DE: mov     ecx, edi
0x6457E0: call    edx
0x6457E2: mov     eax, [edi]
0x6457E4: mov     edx, [eax+334h]
0x6457EA: push    1
0x6457EC: mov     ecx, edi
0x6457EE: call    edx
0x6457F0: test    al, al
0x6457F2: jz      loc_64587C
0x6457F8: mov     eax, [ebp+2Ch]
0x6457FB: push    0; int
0x6457FD: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x645802: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x645807: push    0; int
0x645809: push    eax; void *
0x64580A: call    OblivionDynamicCast
0x64580F: add     esp, 14h
0x645812: mov     esi, eax
0x645814: push    edi
0x645815: mov     ecx, esi
0x645817: call    sub_5E03C0
0x64581C: test    esi, esi
0x64581E: jz      short loc_645871
0x645820: mov     edx, [esi]
0x645822: mov     eax, [edx+198h]
0x645828: push    0
0x64582A: mov     ecx, esi
0x64582C: call    eax
0x64582E: test    al, al
0x645830: jnz     short loc_645871
0x645832: mov     edx, [esi]
0x645834: mov     eax, [edx+334h]
0x64583A: push    1
0x64583C: mov     ecx, esi
0x64583E: call    eax
0x645840: test    al, al
0x645842: jnz     short loc_645863
0x645844: mov     ecx, [esi+58h]
0x645847: mov     edx, [ecx]
0x645849: mov     eax, [edx+228h]
0x64584F: push    1
0x645851: push    0
0x645853: push    0
0x645855: push    0
0x645857: push    0
0x645859: push    0
0x64585B: push    0
0x64585D: push    0
0x64585F: push    edi
0x645860: push    esi
0x645861: call    eax
0x645863: mov     edx, [esi]
0x645865: mov     eax, [edx+344h]
0x64586B: mov     ecx, esi
0x64586D: call    eax
0x64586F: mov     bl, 1
0x645871: sub     [esp+10h+arg_0], 1
0x645876: jnz     loc_6457C0
0x64587C: test    bl, bl
0x64587E: jz      short loc_64588A
0x645880: mov     ecx, [esi+58h]
0x645883: mov     edx, [ecx]
0x645885: mov     eax, [edx+20h]
0x645888: call    eax
0x64588A: pop     ebx
0x64588B: pop     edi
0x64588C: pop     esi
0x64588D: pop     ebp
0x64588E: retn    4
