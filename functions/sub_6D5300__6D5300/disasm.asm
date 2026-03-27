0x6D5300: fld     dword ptr ds:0A32048h
0x6D5306: mov     edx, [ecx+50h]
0x6D5309: test    edx, edx
0x6D530B: fstp    dword ptr [ecx+14h]
0x6D530E: fld     dword ptr ds:0A3B888h
0x6D5314: push    ebx
0x6D5315: push    esi
0x6D5316: fstp    dword ptr [ecx+18h]
0x6D5319: push    edi
0x6D531A: jz      loc_6D5432
0x6D5320: mov     esi, [edx+0Ch]
0x6D5323: test    esi, esi
0x6D5325: mov     edi, [edx+8]
0x6D5328: mov     bl, [edx+48h]
0x6D532B: jz      short loc_6D5361
0x6D532D: fld     dword ptr [esi]
0x6D532F: fcomp   qword ptr ds:0A3A5B0h
0x6D5335: fnstsw  ax
0x6D5337: test    ah, 5
0x6D533A: jp      short loc_6D5341
0x6D533C: fld     dword ptr [esi]
0x6D533E: fstp    dword ptr [ecx+14h]
0x6D5341: movzx   eax, bl
0x6D5344: add     edi, 0FFFFFFFFh
0x6D5347: imul    eax, edi
0x6D534A: fld     dword ptr [esi+eax]
0x6D534D: fcomp   qword ptr ds:0A40398h
0x6D5353: add     esi, eax
0x6D5355: fnstsw  ax
0x6D5357: test    ah, 41h
0x6D535A: jnz     short loc_6D5361
0x6D535C: fld     dword ptr [esi]
0x6D535E: fstp    dword ptr [ecx+18h]
0x6D5361: test    edx, edx
0x6D5363: jz      loc_6D5432
0x6D5369: mov     esi, [edx+18h]
0x6D536C: test    esi, esi
0x6D536E: mov     edi, [edx+14h]
0x6D5371: mov     bl, [edx+49h]
0x6D5374: jz      short loc_6D53A8
0x6D5376: fld     dword ptr [esi]
0x6D5378: fld     dword ptr [ecx+14h]
0x6D537B: fcompp
0x6D537D: fnstsw  ax
0x6D537F: test    ah, 41h
0x6D5382: jnz     short loc_6D5389
0x6D5384: fld     dword ptr [esi]
0x6D5386: fstp    dword ptr [ecx+14h]
0x6D5389: movzx   eax, bl
0x6D538C: add     edi, 0FFFFFFFFh
0x6D538F: imul    eax, edi
0x6D5392: fld     dword ptr [esi+eax]
0x6D5395: fld     dword ptr [ecx+18h]
0x6D5398: fcompp
0x6D539A: add     esi, eax
0x6D539C: fnstsw  ax
0x6D539E: test    ah, 5
0x6D53A1: jp      short loc_6D53A8
0x6D53A3: fld     dword ptr [esi]
0x6D53A5: fstp    dword ptr [ecx+18h]
0x6D53A8: test    edx, edx
0x6D53AA: jz      loc_6D5432
0x6D53B0: mov     esi, [edx+24h]
0x6D53B3: test    esi, esi
0x6D53B5: mov     edi, [edx+20h]
0x6D53B8: mov     bl, [edx+4Ah]
0x6D53BB: jz      short loc_6D53EF
0x6D53BD: fld     dword ptr [esi]
0x6D53BF: fld     dword ptr [ecx+14h]
0x6D53C2: fcompp
0x6D53C4: fnstsw  ax
0x6D53C6: test    ah, 41h
0x6D53C9: jnz     short loc_6D53D0
0x6D53CB: fld     dword ptr [esi]
0x6D53CD: fstp    dword ptr [ecx+14h]
0x6D53D0: movzx   eax, bl
0x6D53D3: add     edi, 0FFFFFFFFh
0x6D53D6: imul    eax, edi
0x6D53D9: fld     dword ptr [esi+eax]
0x6D53DC: fld     dword ptr [ecx+18h]
0x6D53DF: fcompp
0x6D53E1: add     esi, eax
0x6D53E3: fnstsw  ax
0x6D53E5: test    ah, 5
0x6D53E8: jp      short loc_6D53EF
0x6D53EA: fld     dword ptr [esi]
0x6D53EC: fstp    dword ptr [ecx+18h]
0x6D53EF: test    edx, edx
0x6D53F1: jz      short loc_6D5432
0x6D53F3: mov     esi, [edx+2Ch]
0x6D53F6: mov     bl, [edx+4Bh]
0x6D53F9: mov     edx, [edx+30h]
0x6D53FC: test    edx, edx
0x6D53FE: jz      short loc_6D5432
0x6D5400: fld     dword ptr [edx]
0x6D5402: fld     dword ptr [ecx+14h]
0x6D5405: fcompp
0x6D5407: fnstsw  ax
0x6D5409: test    ah, 41h
0x6D540C: jnz     short loc_6D5413
0x6D540E: fld     dword ptr [edx]
0x6D5410: fstp    dword ptr [ecx+14h]
0x6D5413: movzx   eax, bl
0x6D5416: add     esi, 0FFFFFFFFh
0x6D5419: imul    eax, esi
0x6D541C: fld     dword ptr [edx+eax]
0x6D541F: fld     dword ptr [ecx+18h]
0x6D5422: fcompp
0x6D5424: add     edx, eax
0x6D5426: fnstsw  ax
0x6D5428: test    ah, 5
0x6D542B: jp      short loc_6D5432
0x6D542D: fld     dword ptr [edx]
0x6D542F: fstp    dword ptr [ecx+18h]
0x6D5432: pop     edi
0x6D5433: pop     esi
0x6D5434: pop     ebx
0x6D5435: retn
