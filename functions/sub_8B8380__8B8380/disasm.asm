0x8B8380: push    ebp
0x8B8381: mov     ebp, esp
0x8B8383: and     esp, 0FFFFFFF0h
0x8B8386: sub     esp, 2Ch
0x8B8389: mov     eax, ds:0B30AACh
0x8B838E: xor     eax, esp
0x8B8390: mov     [esp+2Ch+var_4], eax
0x8B8394: push    esi
0x8B8395: mov     esi, ecx
0x8B8397: mov     eax, [esi+30h]
0x8B839A: test    eax, eax
0x8B839C: jz      short loc_8B83FA
0x8B839E: push    eax
0x8B839F: call    sub_497420
0x8B83A4: mov     ecx, eax
0x8B83A6: add     esp, 4
0x8B83A9: test    ecx, ecx
0x8B83AB: jz      short loc_8B83FA
0x8B83AD: fld1
0x8B83AF: fcomp   dword ptr [ecx+14h]
0x8B83B2: fnstsw  ax
0x8B83B4: test    ah, 41h
0x8B83B7: jnz     short loc_8B83FA
0x8B83B9: mov     ecx, [ecx+10h]
0x8B83BC: test    ecx, ecx
0x8B83BE: jz      short loc_8B83FA
0x8B83C0: mov     ecx, [ecx+8]
0x8B83C3: test    ecx, ecx
0x8B83C5: jz      short loc_8B83FA
0x8B83C7: movss   xmm1, dword ptr ds:0A2FE7Ch
0x8B83CF: fld     dword ptr [esi+50h]
0x8B83D2: xorps   xmm0, xmm0
0x8B83D5: movss   xmm0, xmm1
0x8B83D9: lea     eax, [esp+30h+var_20]
0x8B83DD: movaps  xmm1, xmm0
0x8B83E0: shufps  xmm1, xmm0, 0
0x8B83E4: movaps  xmm0, xmmword ptr [esi+40h]
0x8B83E8: push    eax; int
0x8B83E9: push    ecx
0x8B83EA: mulps   xmm1, xmm0
0x8B83ED: fstp    [esp+38h+var_38]; float
0x8B83F0: movaps  [esp+38h+var_20], xmm1
0x8B83F5: call    sub_5377B0
0x8B83FA: mov     ecx, [esp+30h+var_4]
0x8B83FE: pop     esi
0x8B83FF: xor     ecx, esp
0x8B8401: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B8406: mov     esp, ebp
0x8B8408: pop     ebp
0x8B8409: retn
