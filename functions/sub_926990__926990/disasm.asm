0x926990: push    ebp
0x926991: mov     ebp, esp
0x926993: and     esp, 0FFFFFFF0h
0x926996: sub     esp, 0B4h
0x92699C: mov     eax, ds:0B30AACh
0x9269A1: xor     eax, esp
0x9269A3: mov     [esp+0B4h+var_4], eax
0x9269AA: push    ebx
0x9269AB: push    esi
0x9269AC: mov     esi, [ebp+arg_4]
0x9269AF: mov     ebx, ecx
0x9269B1: xor     ecx, ecx
0x9269B3: cmp     esi, ecx
0x9269B5: push    edi
0x9269B6: mov     edi, [ebp+arg_0]
0x9269B9: mov     [esp+0C0h+var_B0], ecx
0x9269BD: mov     [esp+0C0h+var_AC], ecx
0x9269C1: mov     [esp+0C0h+var_A8], ecx
0x9269C5: jnz     short loc_9269E4
0x9269C7: mov     eax, [edi+21Ch]
0x9269CD: mov     edx, [eax+4]
0x9269D0: push    ecx
0x9269D1: push    ecx
0x9269D2: lea     esi, [esp+0C8h+var_B0]
0x9269D6: push    0A0h ; ' '
0x9269DB: mov     ecx, esi
0x9269DD: push    ecx
0x9269DE: push    eax
0x9269DF: call    edx
0x9269E1: add     esp, 14h
0x9269E4: push    esi
0x9269E5: push    edi
0x9269E6: mov     ecx, ebx
0x9269E8: call    sub_8A01F0
0x9269ED: fld     dword ptr [esi+14h]
0x9269F0: mov     eax, [ebx+4]
0x9269F3: fstp    dword ptr [eax+10h]
0x9269F6: mov     cl, [esi+0Ch]
0x9269F9: mov     [eax+14h], cl
0x9269FC: movaps  xmm0, xmmword ptr [esi+20h]
0x926A00: mov     ecx, [esp+0C0h+var_4]
0x926A07: movaps  xmmword ptr [eax+20h], xmm0
0x926A0B: movaps  xmm0, xmmword ptr [esi+30h]
0x926A0F: movaps  xmmword ptr [eax+30h], xmm0
0x926A13: movaps  xmm0, xmmword ptr [esi+40h]
0x926A17: movaps  xmmword ptr [eax+40h], xmm0
0x926A1B: movaps  xmm0, xmmword ptr [esi+50h]
0x926A1F: movaps  xmmword ptr [eax+50h], xmm0
0x926A23: movaps  xmm0, xmmword ptr [esi+60h]
0x926A27: movaps  xmmword ptr [eax+60h], xmm0
0x926A2B: movaps  xmm0, xmmword ptr [esi+70h]
0x926A2F: movaps  xmmword ptr [eax+70h], xmm0
0x926A33: movaps  xmm0, xmmword ptr [esi+80h]
0x926A3A: pop     edi
0x926A3B: movaps  xmmword ptr [eax+80h], xmm0
0x926A42: movaps  xmm0, xmmword ptr [esi+90h]
0x926A49: pop     esi
0x926A4A: pop     ebx
0x926A4B: xor     ecx, esp
0x926A4D: movaps  xmmword ptr [eax+90h], xmm0
0x926A54: call    @__security_check_cookie@4; __security_check_cookie(x)
0x926A59: mov     esp, ebp
0x926A5B: pop     ebp
0x926A5C: retn    8
