0x92D400: push    ebp
0x92D401: mov     ebp, esp
0x92D403: and     esp, 0FFFFFFF0h
0x92D406: sub     esp, 30h
0x92D409: mov     eax, [ebp+arg_0]
0x92D40C: mov     ecx, [ebp+arg_4]
0x92D40F: fld     dword ptr [eax]
0x92D411: fsub    dword ptr [ecx]
0x92D413: fst     dword ptr [esp+30h+var_20]
0x92D417: fld     dword ptr [eax+4]
0x92D41A: fsub    dword ptr [ecx+4]
0x92D41D: fst     [esp+30h+var_24]
0x92D421: fstp    dword ptr [esp+30h+var_20+4]
0x92D425: fld     dword ptr [eax+8]
0x92D428: fsub    dword ptr [ecx+8]
0x92D42B: fstp    dword ptr [esp+30h+var_20+8]
0x92D42F: fld     dword ptr [eax+0Ch]
0x92D432: fsub    dword ptr [ecx+0Ch]
0x92D435: fstp    dword ptr [esp+30h+var_20+0Ch]
0x92D439: fabs
0x92D43B: fcomp   dword ptr ds:0A372CCh
0x92D441: fnstsw  ax
0x92D443: test    ah, 5
0x92D446: jp      loc_92D52F
0x92D44C: fld     [esp+30h+var_24]
0x92D450: fabs
0x92D452: fcomp   dword ptr ds:0A372CCh
0x92D458: fnstsw  ax
0x92D45A: test    ah, 5
0x92D45D: jp      loc_92D52F
0x92D463: mov     dword ptr [esp+30h+var_10], 3F800000h
0x92D46B: mov     dword ptr [esp+30h+var_10+4], 0
0x92D473: mov     dword ptr [esp+30h+var_10+8], 0
0x92D47B: mov     dword ptr [esp+30h+var_10+0Ch], 0
0x92D483: movaps  xmm0, [esp+30h+var_10]
0x92D488: movaps  xmm1, xmm0
0x92D48B: shufps  xmm1, xmm0, 0C9h ; 'É'
0x92D48F: movaps  xmm2, xmm1
0x92D492: movaps  xmm1, [esp+30h+var_20]
0x92D497: mov     eax, [ebp+arg_8]
0x92D49A: movaps  xmm3, xmm1
0x92D49D: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x92D4A1: mulps   xmm3, xmm2
0x92D4A4: movaps  xmm2, xmm0
0x92D4A7: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x92D4AB: movaps  xmm0, xmm1
0x92D4AE: shufps  xmm0, xmm1, 0C9h ; 'É'
0x92D4B2: movaps  xmm1, xmm0
0x92D4B5: mulps   xmm1, xmm2
0x92D4B8: subps   xmm1, xmm3
0x92D4BB: movaps  xmm0, xmm1
0x92D4BE: mulps   xmm0, xmm1
0x92D4C1: movaps  xmm2, xmm0
0x92D4C4: shufps  xmm2, xmm0, 55h ; 'U'
0x92D4C8: addss   xmm2, xmm0
0x92D4CC: movaps  xmm3, xmm0
0x92D4CF: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x92D4D3: movaps  xmm0, xmm3
0x92D4D6: addss   xmm0, xmm2
0x92D4DA: movaps  [esp+30h+var_10], xmm0
0x92D4DF: rsqrtss xmm2, xmm0
0x92D4E3: movss   dword ptr [esp+30h+var_10], xmm2
0x92D4E9: movaps  xmm2, [esp+30h+var_10]
0x92D4EE: mulss   xmm0, xmm2
0x92D4F2: mulss   xmm0, xmm2
0x92D4F6: mov     [esp+30h+var_24], 40400000h
0x92D4FE: movss   xmm3, [esp+30h+var_24]
0x92D504: subss   xmm3, xmm0
0x92D508: mov     [esp+30h+var_24], 3F000000h
0x92D510: movss   xmm0, [esp+30h+var_24]
0x92D516: mulss   xmm0, xmm2
0x92D51A: mulss   xmm0, xmm3
0x92D51E: movaps  xmm2, xmm0
0x92D521: shufps  xmm2, xmm0, 0
0x92D525: mulps   xmm2, xmm1
0x92D528: movaps  xmmword ptr [eax], xmm2
0x92D52B: mov     esp, ebp
0x92D52D: pop     ebp
0x92D52E: retn
0x92D52F: movaps  xmm2, [esp+30h+var_20]
0x92D534: mov     ecx, [ebp+arg_8]
0x92D537: movaps  xmm0, xmm2
0x92D53A: mulps   xmm0, xmm2
0x92D53D: movaps  xmm1, xmm0
0x92D540: shufps  xmm1, xmm0, 55h ; 'U'
0x92D544: addss   xmm1, xmm0
0x92D548: movaps  xmm3, xmm0
0x92D54B: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x92D54F: movaps  xmm0, xmm3
0x92D552: addss   xmm0, xmm1
0x92D556: movaps  [esp+30h+var_10], xmm0
0x92D55B: rsqrtss xmm1, xmm0
0x92D55F: movss   dword ptr [esp+30h+var_10], xmm1
0x92D565: movaps  xmm1, [esp+30h+var_10]
0x92D56A: mulss   xmm0, xmm1
0x92D56E: mulss   xmm0, xmm1
0x92D572: mov     [esp+30h+var_24], 40400000h
0x92D57A: movss   xmm3, [esp+30h+var_24]
0x92D580: mov     [esp+30h+var_24], 3F000000h
0x92D588: movss   xmm4, [esp+30h+var_24]
0x92D58E: movaps  xmm5, xmm3
0x92D591: subss   xmm5, xmm0
0x92D595: movaps  xmm0, xmm4
0x92D598: mulss   xmm0, xmm1
0x92D59C: mulss   xmm0, xmm5
0x92D5A0: movaps  xmm1, xmm0
0x92D5A3: shufps  xmm1, xmm0, 0
0x92D5A7: movaps  xmm0, xmm1
0x92D5AA: mulps   xmm0, xmm2
0x92D5AD: movaps  xmm1, xmm0
0x92D5B0: movaps  xmm2, xmm0
0x92D5B3: shufps  xmm1, xmm0, 0D2h ; 'Ò'
0x92D5B7: shufps  xmm2, xmm0, 0C9h ; 'É'
0x92D5BB: mov     dword ptr [esp+30h+var_10], 0
0x92D5C3: mov     dword ptr [esp+30h+var_10+4], 3F800000h
0x92D5CB: mov     dword ptr [esp+30h+var_10+8], 0
0x92D5D3: mov     dword ptr [esp+30h+var_10+0Ch], 0
0x92D5DB: movaps  xmm0, [esp+30h+var_10]
0x92D5E0: movaps  xmm5, xmm0
0x92D5E3: shufps  xmm5, xmm0, 0C9h ; 'É'
0x92D5E7: movaps  xmm6, xmm1
0x92D5EA: mulps   xmm6, xmm5
0x92D5ED: movaps  xmm5, xmm0
0x92D5F0: shufps  xmm5, xmm0, 0D2h ; 'Ò'
0x92D5F4: movaps  xmm0, xmm2
0x92D5F7: mulps   xmm0, xmm5
0x92D5FA: subps   xmm0, xmm6
0x92D5FD: movaps  xmmword ptr [ecx], xmm0
0x92D600: mulps   xmm0, xmm0
0x92D603: movaps  xmm5, xmm0
0x92D606: shufps  xmm5, xmm0, 55h ; 'U'
0x92D60A: movaps  xmm6, xmm0
0x92D60D: addss   xmm5, xmm0
0x92D611: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x92D615: lea     edx, [esp+30h+var_24]
0x92D619: addss   xmm6, xmm5
0x92D61D: movss   dword ptr [edx], xmm6
0x92D621: fld     [esp+30h+var_24]
0x92D625: fcomp   dword ptr ds:0AA1C3Ch
0x92D62B: fnstsw  ax
0x92D62D: test    ah, 5
0x92D630: jp      short loc_92D671
0x92D632: mov     dword ptr [esp+30h+var_10], 0
0x92D63A: mov     dword ptr [esp+30h+var_10+4], 0
0x92D642: mov     dword ptr [esp+30h+var_10+8], 3F800000h
0x92D64A: mov     dword ptr [esp+30h+var_10+0Ch], 0
0x92D652: movaps  xmm0, [esp+30h+var_10]
0x92D657: movaps  xmm5, xmm0
0x92D65A: shufps  xmm5, xmm0, 0C9h ; 'É'
0x92D65E: mulps   xmm1, xmm5
0x92D661: movaps  xmm5, xmm0
0x92D664: shufps  xmm5, xmm0, 0D2h ; 'Ò'
0x92D668: mulps   xmm2, xmm5
0x92D66B: subps   xmm2, xmm1
0x92D66E: movaps  xmmword ptr [ecx], xmm2
0x92D671: movaps  xmm1, xmmword ptr [ecx]
0x92D674: movaps  xmm0, xmm1
0x92D677: mulps   xmm0, xmm1
0x92D67A: movaps  xmm2, xmm0
0x92D67D: shufps  xmm2, xmm0, 55h ; 'U'
0x92D681: addss   xmm2, xmm0
0x92D685: movaps  xmm5, xmm0
0x92D688: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x92D68C: movaps  xmm0, xmm5
0x92D68F: addss   xmm0, xmm2
0x92D693: movaps  [esp+30h+var_10], xmm0
0x92D698: rsqrtss xmm2, xmm0
0x92D69C: movss   dword ptr [esp+30h+var_10], xmm2
0x92D6A2: movaps  xmm2, [esp+30h+var_10]
0x92D6A7: mulss   xmm0, xmm2
0x92D6AB: mulss   xmm0, xmm2
0x92D6AF: subss   xmm3, xmm0
0x92D6B3: mulss   xmm4, xmm2
0x92D6B7: mulss   xmm4, xmm3
0x92D6BB: movaps  xmm0, xmm4
0x92D6BE: shufps  xmm0, xmm4, 0
0x92D6C2: mulps   xmm0, xmm1
0x92D6C5: movaps  xmmword ptr [ecx], xmm0
0x92D6C8: mov     esp, ebp
0x92D6CA: pop     ebp
0x92D6CB: retn
