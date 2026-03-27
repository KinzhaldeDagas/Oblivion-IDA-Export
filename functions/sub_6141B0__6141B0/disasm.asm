0x6141B0: sub     esp, 8
0x6141B3: push    ebx
0x6141B4: mov     ebx, ecx
0x6141B6: push    edi
0x6141B7: lea     edi, [ebx+15Ch]
0x6141BD: test    edi, edi
0x6141BF: jz      loc_61427A
0x6141C5: cmp     dword ptr [edi+4], 0
0x6141C9: jnz     short loc_6141D4
0x6141CB: cmp     dword ptr [edi], 0
0x6141CE: jz      loc_61427A
0x6141D4: xor     ecx, ecx
0x6141D6: mov     eax, edi
0x6141D8: cmp     dword ptr [eax], 0
0x6141DB: jz      short loc_6141E0
0x6141DD: add     ecx, 1
0x6141E0: mov     eax, [eax+4]
0x6141E3: test    eax, eax
0x6141E5: jnz     short loc_6141D8
0x6141E7: mov     [esp+10h+var_8], ecx
0x6141EB: fild    [esp+10h+var_8]
0x6141EF: fdivr   qword ptr ds:0A56CA0h
0x6141F5: fstp    [esp+10h+var_4]
0x6141F9: fldz
0x6141FB: fcom    dword ptr [ebx+0CCh]
0x614201: fnstsw  ax
0x614203: test    ah, 41h
0x614206: jnz     short loc_614278
0x614208: push    ebp
0x614209: fstp    [esp+14h+var_8]
0x61420D: push    esi
0x61420E: mov     edi, edi
0x614210: mov     ecx, [edi]
0x614212: test    ecx, ecx
0x614214: jz      short loc_61426E
0x614216: mov     eax, [ecx]
0x614218: mov     edx, [eax+330h]
0x61421E: mov     edi, [edi+4]
0x614221: call    edx
0x614223: mov     esi, eax
0x614225: test    esi, esi
0x614227: jz      short loc_61426A
0x614229: mov     ecx, esi
0x61422B: call    sub_6135F0
0x614230: mov     ecx, ebx
0x614232: mov     ebp, eax
0x614234: call    sub_6135F0
0x614239: cmp     ebp, eax
0x61423B: jnz     short loc_61426A
0x61423D: mov     eax, [esi+70h]
0x614240: test    eax, eax
0x614242: jz      short loc_61424E
0x614244: cmp     eax, 1
0x614247: jz      short loc_61424E
0x614249: cmp     eax, 3
0x61424C: jnz     short loc_61426A
0x61424E: fld     [esp+18h+var_8]
0x614252: fadd    [esp+18h+var_4]
0x614256: fstp    [esp+18h+var_8]
0x61425A: fld     [esp+18h+var_8]
0x61425E: fmul    qword ptr ds:0A31C78h
0x614264: fstp    dword ptr [esi+0CCh]
0x61426A: test    edi, edi
0x61426C: jnz     short loc_614210
0x61426E: fldz
0x614270: pop     esi
0x614271: pop     ebp
0x614272: pop     edi
0x614273: pop     ebx
0x614274: add     esp, 8
0x614277: retn
0x614278: fstp    st
0x61427A: fldz
0x61427C: pop     edi
0x61427D: pop     ebx
0x61427E: add     esp, 8
0x614281: retn
