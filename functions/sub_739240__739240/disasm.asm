0x739240: push    ecx
0x739241: push    esi
0x739242: push    edi
0x739243: mov     edi, [esp+0Ch+a2]
0x739247: mov     esi, ecx
0x739249: push    edi; a2
0x73924A: mov     [esp+10h+var_4], esi
0x73924E: call    sub_700670
0x739253: test    al, al
0x739255: jnz     short loc_73925D
0x739257: pop     edi
0x739258: pop     esi
0x739259: pop     ecx
0x73925A: retn    4
0x73925D: push    ebp
0x73925E: movzx   ebp, word ptr [esi+0Ch]
0x739262: cmp     bp, [edi+0Ch]
0x739266: jz      short loc_739271
0x739268: pop     ebp
0x739269: pop     edi
0x73926A: xor     al, al
0x73926C: pop     esi
0x73926D: pop     ecx
0x73926E: retn    4
0x739271: push    ebx
0x739272: movzx   ebx, bp
0x739275: xor     edi, edi
0x739277: test    bx, bx
0x73927A: jbe     short loc_7392D9
0x73927C: mov     eax, [esp+14h+a2]
0x739280: mov     edx, [eax+10h]
0x739283: mov     esi, [esi+10h]
0x739286: movzx   eax, di
0x739289: lea     ecx, [eax+eax*2]
0x73928C: add     ecx, ecx
0x73928E: add     ecx, ecx
0x739290: fld     dword ptr [esi+ecx]
0x739293: fld     dword ptr [edx+ecx]
0x739296: fucompp
0x739298: fnstsw  ax
0x73929A: test    ah, 44h
0x73929D: jp      loc_739408
0x7392A3: fld     dword ptr [esi+ecx+4]
0x7392A7: fld     dword ptr [edx+ecx+4]
0x7392AB: fucompp
0x7392AD: fnstsw  ax
0x7392AF: test    ah, 44h
0x7392B2: jp      loc_739408
0x7392B8: fld     dword ptr [esi+ecx+8]
0x7392BC: fld     dword ptr [edx+ecx+8]
0x7392C0: fucompp
0x7392C2: fnstsw  ax
0x7392C4: test    ah, 44h
0x7392C7: jp      loc_739408
0x7392CD: add     edi, 1
0x7392D0: cmp     di, bx
0x7392D3: jb      short loc_739286
0x7392D5: mov     esi, [esp+14h+var_4]
0x7392D9: mov     esi, [esi+14h]
0x7392DC: test    esi, esi
0x7392DE: mov     ecx, [esp+14h+a2]
0x7392E2: jz      short loc_7392F2
0x7392E4: cmp     dword ptr [ecx+14h], 0
0x7392E8: jz      loc_739408
0x7392EE: test    esi, esi
0x7392F0: jnz     short loc_739300
0x7392F2: cmp     dword ptr [ecx+14h], 0
0x7392F6: jnz     loc_739408
0x7392FC: test    esi, esi
0x7392FE: jz      short loc_73934D
0x739300: movzx   ebx, bp
0x739303: xor     edx, edx
0x739305: test    bx, bx
0x739308: jbe     short loc_73934D
0x73930A: mov     edi, [ecx+14h]
0x73930D: lea     ecx, [ecx+0]
0x739310: movzx   ecx, dx
0x739313: add     ecx, ecx
0x739315: add     ecx, ecx
0x739317: add     ecx, ecx
0x739319: fld     dword ptr [ecx+esi]
0x73931C: fld     dword ptr [edi+ecx]
0x73931F: fucompp
0x739321: fnstsw  ax
0x739323: test    ah, 44h
0x739326: jp      loc_739408
0x73932C: fld     dword ptr [ecx+esi+4]
0x739330: fld     dword ptr [edi+ecx+4]
0x739334: fucompp
0x739336: fnstsw  ax
0x739338: test    ah, 44h
0x73933B: jp      loc_739408
0x739341: add     edx, 1
0x739344: cmp     dx, bx
0x739347: jb      short loc_739310
0x739349: mov     ecx, [esp+14h+a2]
0x73934D: mov     edx, [esp+14h+var_4]
0x739351: mov     edx, [edx+18h]
0x739354: test    edx, edx
0x739356: jz      short loc_739366
0x739358: cmp     dword ptr [ecx+18h], 0
0x73935C: jz      loc_739408
0x739362: test    edx, edx
0x739364: jnz     short loc_739374
0x739366: cmp     dword ptr [ecx+18h], 0
0x73936A: jnz     loc_739408
0x739370: test    edx, edx
0x739372: jz      short loc_7393D5
0x739374: movzx   ebx, bp
0x739377: xor     edi, edi
0x739379: test    bx, bx
0x73937C: jbe     short loc_7393D5
0x73937E: mov     esi, [ecx+18h]
0x739381: movzx   ecx, di
0x739384: shl     ecx, 4
0x739387: fld     dword ptr [ecx+edx]
0x73938A: fld     dword ptr [esi+ecx]
0x73938D: fucompp
0x73938F: fnstsw  ax
0x739391: test    ah, 44h
0x739394: jp      short loc_739408
0x739396: fld     dword ptr [ecx+edx+4]
0x73939A: fld     dword ptr [esi+ecx+4]
0x73939E: fucompp
0x7393A0: fnstsw  ax
0x7393A2: test    ah, 44h
0x7393A5: jp      short loc_739408
0x7393A7: fld     dword ptr [ecx+edx+8]
0x7393AB: fld     dword ptr [esi+ecx+8]
0x7393AF: fucompp
0x7393B1: fnstsw  ax
0x7393B3: test    ah, 44h
0x7393B6: jp      short loc_739408
0x7393B8: fld     dword ptr [ecx+edx+0Ch]
0x7393BC: fld     dword ptr [esi+ecx+0Ch]
0x7393C0: fucompp
0x7393C2: fnstsw  ax
0x7393C4: test    ah, 44h
0x7393C7: jp      short loc_739408
0x7393C9: add     edi, 1
0x7393CC: cmp     di, bx
0x7393CF: jb      short loc_739381
0x7393D1: mov     ecx, [esp+14h+a2]
0x7393D5: mov     edx, [ecx+8]
0x7393D8: mov     ecx, [esp+14h+var_4]
0x7393DC: mov     esi, [ecx+8]
0x7393DF: xor     eax, eax
0x7393E1: movzx   ecx, ax
0x7393E4: mov     edi, [esi+ecx*4+8]
0x7393E8: cmp     edi, [edx+ecx*4+8]
0x7393EC: lea     ecx, ds:8[ecx*4]
0x7393F3: jnz     short loc_739408
0x7393F5: add     eax, 1
0x7393F8: cmp     ax, 0Ah
0x7393FC: jb      short loc_7393E1
0x7393FE: pop     ebx
0x7393FF: pop     ebp
0x739400: pop     edi
0x739401: mov     al, 1
0x739403: pop     esi
0x739404: pop     ecx
0x739405: retn    4
0x739408: pop     ebx
0x739409: pop     ebp
0x73940A: pop     edi
0x73940B: xor     al, al
0x73940D: pop     esi
0x73940E: pop     ecx
0x73940F: retn    4
