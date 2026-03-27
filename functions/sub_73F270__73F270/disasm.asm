0x73F270: push    ebx
0x73F271: mov     ebx, [esp+4+arg_0]
0x73F275: push    ebp
0x73F276: push    ebx
0x73F277: mov     ebp, ecx
0x73F279: call    sub_728F90
0x73F27E: test    al, al
0x73F280: jnz     short loc_73F289
0x73F282: pop     ebp
0x73F283: xor     al, al
0x73F285: pop     ebx
0x73F286: retn    4
0x73F289: mov     edx, [ebp+44h]
0x73F28C: test    edx, edx
0x73F28E: jz      short loc_73F29A
0x73F290: cmp     dword ptr [ebx+44h], 0
0x73F294: jz      short loc_73F282
0x73F296: test    edx, edx
0x73F298: jnz     short loc_73F2A0
0x73F29A: cmp     dword ptr [ebx+44h], 0
0x73F29E: jnz     short loc_73F282
0x73F2A0: test    edx, edx
0x73F2A2: push    esi
0x73F2A3: push    edi
0x73F2A4: jz      short loc_73F2D6
0x73F2A6: movzx   esi, word ptr [ebp+8]
0x73F2AA: xor     ecx, ecx
0x73F2AC: test    si, si
0x73F2AF: jbe     short loc_73F2D6
0x73F2B1: mov     edi, [ebx+44h]
0x73F2B4: movzx   eax, cx
0x73F2B7: add     eax, eax
0x73F2B9: add     eax, eax
0x73F2BB: fld     dword ptr [eax+edx]
0x73F2BE: fld     dword ptr [edi+eax]
0x73F2C1: fucompp
0x73F2C3: fnstsw  ax
0x73F2C5: test    ah, 44h
0x73F2C8: jp      loc_73F457
0x73F2CE: add     ecx, 1
0x73F2D1: cmp     cx, si
0x73F2D4: jb      short loc_73F2B4
0x73F2D6: mov     ax, [ebp+48h]
0x73F2DA: cmp     ax, [ebx+48h]
0x73F2DE: jnz     loc_73F457
0x73F2E4: mov     edx, [ebp+4Ch]
0x73F2E7: test    edx, edx
0x73F2E9: jz      short loc_73F2F9
0x73F2EB: cmp     dword ptr [ebx+4Ch], 0
0x73F2EF: jz      loc_73F457
0x73F2F5: test    edx, edx
0x73F2F7: jnz     short loc_73F307
0x73F2F9: cmp     dword ptr [ebx+4Ch], 0
0x73F2FD: jnz     loc_73F457
0x73F303: test    edx, edx
0x73F305: jz      short loc_73F337
0x73F307: movzx   esi, word ptr [ebp+8]
0x73F30B: xor     ecx, ecx
0x73F30D: test    si, si
0x73F310: jbe     short loc_73F337
0x73F312: mov     edi, [ebx+4Ch]
0x73F315: movzx   eax, cx
0x73F318: add     eax, eax
0x73F31A: add     eax, eax
0x73F31C: fld     dword ptr [eax+edx]
0x73F31F: fld     dword ptr [edi+eax]
0x73F322: fucompp
0x73F324: fnstsw  ax
0x73F326: test    ah, 44h
0x73F329: jp      loc_73F457
0x73F32F: add     ecx, 1
0x73F332: cmp     cx, si
0x73F335: jb      short loc_73F315
0x73F337: mov     ecx, [ebp+50h]
0x73F33A: test    ecx, ecx
0x73F33C: jz      short loc_73F34C
0x73F33E: cmp     dword ptr [ebx+50h], 0
0x73F342: jz      loc_73F457
0x73F348: test    ecx, ecx
0x73F34A: jnz     short loc_73F35A
0x73F34C: cmp     dword ptr [ebx+50h], 0
0x73F350: jnz     loc_73F457
0x73F356: test    ecx, ecx
0x73F358: jz      short loc_73F3CB
0x73F35A: movzx   edi, word ptr [ebp+8]
0x73F35E: xor     esi, esi
0x73F360: test    edi, edi
0x73F362: jbe     short loc_73F3CB
0x73F364: mov     eax, [ebx+50h]
0x73F367: mov     ebx, eax
0x73F369: lea     edx, [eax+8]
0x73F36C: sub     ebx, ecx
0x73F36E: mov     edi, edi
0x73F370: fld     dword ptr [ecx]
0x73F372: fld     dword ptr [ebx+ecx]
0x73F375: fucompp
0x73F377: fnstsw  ax
0x73F379: test    ah, 44h
0x73F37C: jp      loc_73F457
0x73F382: fld     dword ptr [ecx+4]
0x73F385: fld     dword ptr [edx-4]
0x73F388: fucompp
0x73F38A: fnstsw  ax
0x73F38C: test    ah, 44h
0x73F38F: jp      loc_73F457
0x73F395: fld     dword ptr [ecx+8]
0x73F398: fld     dword ptr [edx]
0x73F39A: fucompp
0x73F39C: fnstsw  ax
0x73F39E: test    ah, 44h
0x73F3A1: jp      loc_73F457
0x73F3A7: fld     dword ptr [ecx+0Ch]
0x73F3AA: fld     dword ptr [edx+4]
0x73F3AD: fucompp
0x73F3AF: fnstsw  ax
0x73F3B1: test    ah, 44h
0x73F3B4: jp      loc_73F457
0x73F3BA: add     esi, 1
0x73F3BD: add     edx, 10h
0x73F3C0: add     ecx, 10h
0x73F3C3: cmp     esi, edi
0x73F3C5: jb      short loc_73F370
0x73F3C7: mov     ebx, [esp+10h+arg_0]
0x73F3CB: mov     eax, [ebp+54h]
0x73F3CE: test    eax, eax
0x73F3D0: jz      short loc_73F3FB
0x73F3D2: movzx   esi, word ptr [ebp+8]
0x73F3D6: xor     edx, edx
0x73F3D8: test    esi, esi
0x73F3DA: jbe     short loc_73F3FB
0x73F3DC: mov     ecx, [ebx+54h]
0x73F3DF: mov     edi, eax
0x73F3E1: sub     edi, ecx
0x73F3E3: fld     dword ptr [edi+ecx]
0x73F3E6: fld     dword ptr [ecx]
0x73F3E8: fucompp
0x73F3EA: fnstsw  ax
0x73F3EC: test    ah, 44h
0x73F3EF: jp      short loc_73F457
0x73F3F1: add     edx, 1
0x73F3F4: add     ecx, 4
0x73F3F7: cmp     edx, esi
0x73F3F9: jb      short loc_73F3E3
0x73F3FB: mov     ecx, [ebp+58h]
0x73F3FE: test    ecx, ecx
0x73F400: jz      short loc_73F44E
0x73F402: movzx   edi, word ptr [ebp+8]
0x73F406: xor     esi, esi
0x73F408: test    edi, edi
0x73F40A: jbe     short loc_73F44E
0x73F40C: mov     eax, [ebx+58h]
0x73F40F: mov     ebx, eax
0x73F411: lea     edx, [eax+8]
0x73F414: sub     ebx, ecx
0x73F416: fld     dword ptr [ecx]
0x73F418: fld     dword ptr [ecx+ebx]
0x73F41B: fucompp
0x73F41D: fnstsw  ax
0x73F41F: test    ah, 44h
0x73F422: jp      short loc_73F457
0x73F424: fld     dword ptr [ecx+4]
0x73F427: fld     dword ptr [edx-4]
0x73F42A: fucompp
0x73F42C: fnstsw  ax
0x73F42E: test    ah, 44h
0x73F431: jp      short loc_73F457
0x73F433: fld     dword ptr [ecx+8]
0x73F436: fld     dword ptr [edx]
0x73F438: fucompp
0x73F43A: fnstsw  ax
0x73F43C: test    ah, 44h
0x73F43F: jp      short loc_73F457
0x73F441: add     esi, 1
0x73F444: add     edx, 0Ch
0x73F447: add     ecx, 0Ch
0x73F44A: cmp     esi, edi
0x73F44C: jb      short loc_73F416
0x73F44E: pop     edi
0x73F44F: pop     esi
0x73F450: pop     ebp
0x73F451: mov     al, 1
0x73F453: pop     ebx
0x73F454: retn    4
0x73F457: pop     edi
0x73F458: pop     esi
0x73F459: pop     ebp
0x73F45A: xor     al, al
0x73F45C: pop     ebx
0x73F45D: retn    4
