0x6DD270: sub     esp, 0Ch
0x6DD273: push    ebp
0x6DD274: mov     ebp, [esp+10h+arg_0]
0x6DD278: push    edi
0x6DD279: push    ebp
0x6DD27A: mov     edi, ecx
0x6DD27C: call    sub_715820
0x6DD281: test    al, al
0x6DD283: jnz     short loc_6DD28F
0x6DD285: pop     edi
0x6DD286: xor     al, al
0x6DD288: pop     ebp
0x6DD289: add     esp, 0Ch
0x6DD28C: retn    4
0x6DD28F: mov     ecx, [edi+48h]
0x6DD292: mov     eax, [ebp+48h]
0x6DD295: mov     edx, [ecx]
0x6DD297: push    eax
0x6DD298: mov     eax, [edx+2Ch]
0x6DD29B: call    eax
0x6DD29D: test    al, al
0x6DD29F: jz      short loc_6DD285
0x6DD2A1: mov     ecx, [edi+4Ch]
0x6DD2A4: mov     eax, [ebp+4Ch]
0x6DD2A7: mov     edx, [ecx]
0x6DD2A9: push    eax
0x6DD2AA: mov     eax, [edx+2Ch]
0x6DD2AD: call    eax
0x6DD2AF: test    al, al
0x6DD2B1: jz      short loc_6DD285
0x6DD2B3: push    esi
0x6DD2B4: mov     esi, [edi+50h]
0x6DD2B7: test    esi, esi
0x6DD2B9: jz      short loc_6DD2C5
0x6DD2BB: cmp     dword ptr [ebp+50h], 0
0x6DD2BF: jz      short loc_6DD2CB
0x6DD2C1: test    esi, esi
0x6DD2C3: jnz     short loc_6DD2D6
0x6DD2C5: cmp     dword ptr [ebp+50h], 0
0x6DD2C9: jz      short loc_6DD2D6
0x6DD2CB: pop     esi
0x6DD2CC: pop     edi
0x6DD2CD: xor     al, al
0x6DD2CF: pop     ebp
0x6DD2D0: add     esp, 0Ch
0x6DD2D3: retn    4
0x6DD2D6: test    esi, esi
0x6DD2D8: push    ebx
0x6DD2D9: jz      loc_6DD38F
0x6DD2DF: lea     ecx, [esp+1Ch+arg_0]
0x6DD2E3: push    ecx
0x6DD2E4: lea     edx, [esp+20h+var_8]
0x6DD2E8: push    edx
0x6DD2E9: lea     eax, [esp+24h+var_C]
0x6DD2ED: push    eax
0x6DD2EE: lea     ecx, [esp+28h+var_4]
0x6DD2F2: push    ecx
0x6DD2F3: mov     ecx, edi
0x6DD2F5: call    sub_6DC770
0x6DD2FA: mov     eax, dword ptr [esp+1Ch+var_C]
0x6DD2FE: mov     ecx, [ebp+50h]
0x6DD301: add     eax, eax
0x6DD303: add     eax, eax
0x6DD305: cmp     eax, 4
0x6DD308: mov     edx, esi
0x6DD30A: jb      short loc_6DD324
0x6DD30C: lea     esp, [esp+0]
0x6DD310: mov     esi, [edx]
0x6DD312: cmp     esi, [ecx]
0x6DD314: jnz     short loc_6DD328
0x6DD316: sub     eax, 4
0x6DD319: add     ecx, 4
0x6DD31C: add     edx, 4
0x6DD31F: cmp     eax, 4
0x6DD322: jnb     short loc_6DD310
0x6DD324: test    eax, eax
0x6DD326: jz      short loc_6DD385
0x6DD328: movzx   esi, byte ptr [edx]
0x6DD32B: movzx   ebx, byte ptr [ecx]
0x6DD32E: sub     esi, ebx
0x6DD330: jnz     short loc_6DD377
0x6DD332: sub     eax, 1
0x6DD335: add     ecx, 1
0x6DD338: add     edx, 1
0x6DD33B: test    eax, eax
0x6DD33D: jz      short loc_6DD385
0x6DD33F: movzx   esi, byte ptr [edx]
0x6DD342: movzx   ebx, byte ptr [ecx]
0x6DD345: sub     esi, ebx
0x6DD347: jnz     short loc_6DD377
0x6DD349: sub     eax, 1
0x6DD34C: add     ecx, 1
0x6DD34F: add     edx, 1
0x6DD352: test    eax, eax
0x6DD354: jz      short loc_6DD385
0x6DD356: movzx   esi, byte ptr [edx]
0x6DD359: movzx   ebx, byte ptr [ecx]
0x6DD35C: sub     esi, ebx
0x6DD35E: jnz     short loc_6DD377
0x6DD360: sub     eax, 1
0x6DD363: add     ecx, 1
0x6DD366: add     edx, 1
0x6DD369: test    eax, eax
0x6DD36B: jz      short loc_6DD385
0x6DD36D: movzx   esi, byte ptr [edx]
0x6DD370: movzx   edx, byte ptr [ecx]
0x6DD373: sub     esi, edx
0x6DD375: jz      short loc_6DD385
0x6DD377: test    esi, esi
0x6DD379: mov     eax, 1
0x6DD37E: jg      short loc_6DD387
0x6DD380: or      eax, 0FFFFFFFFh
0x6DD383: jmp     short loc_6DD387
0x6DD385: xor     eax, eax
0x6DD387: test    eax, eax
0x6DD389: jnz     loc_6DD457
0x6DD38F: fld     dword ptr [edi+54h]
0x6DD392: fld     dword ptr [ebp+54h]
0x6DD395: fucompp
0x6DD397: fnstsw  ax
0x6DD399: test    ah, 44h
0x6DD39C: jp      loc_6DD457
0x6DD3A2: mov     al, [ebp+3Ch]
0x6DD3A5: xor     al, [edi+3Ch]
0x6DD3A8: test    al, 1
0x6DD3AA: jnz     loc_6DD457
0x6DD3B0: movzx   ecx, word ptr [ebp+3Ch]
0x6DD3B4: movzx   edx, word ptr [edi+3Ch]
0x6DD3B8: mov     al, cl
0x6DD3BA: mov     bl, dl
0x6DD3BC: shr     al, 1
0x6DD3BE: shr     bl, 1
0x6DD3C0: xor     al, bl
0x6DD3C2: test    al, 1
0x6DD3C4: jnz     loc_6DD457
0x6DD3CA: mov     eax, [edi+68h]
0x6DD3CD: cmp     eax, [ebp+68h]
0x6DD3D0: jnz     loc_6DD457
0x6DD3D6: mov     al, cl
0x6DD3D8: mov     bl, dl
0x6DD3DA: shr     al, 2
0x6DD3DD: shr     bl, 2
0x6DD3E0: xor     al, bl
0x6DD3E2: test    al, 1
0x6DD3E4: jnz     short loc_6DD457
0x6DD3E6: mov     al, cl
0x6DD3E8: mov     bl, dl
0x6DD3EA: shr     al, 3
0x6DD3ED: shr     bl, 3
0x6DD3F0: xor     al, bl
0x6DD3F2: test    al, 1
0x6DD3F4: jnz     short loc_6DD457
0x6DD3F6: mov     al, cl
0x6DD3F8: mov     bl, dl
0x6DD3FA: shr     al, 4
0x6DD3FD: shr     bl, 4
0x6DD400: xor     al, bl
0x6DD402: test    al, 1
0x6DD404: jnz     short loc_6DD457
0x6DD406: mov     al, cl
0x6DD408: mov     bl, dl
0x6DD40A: shr     al, 5
0x6DD40D: shr     bl, 5
0x6DD410: xor     al, bl
0x6DD412: test    al, 1
0x6DD414: jnz     short loc_6DD457
0x6DD416: fld     dword ptr [edi+58h]
0x6DD419: fld     dword ptr [ebp+58h]
0x6DD41C: fucompp
0x6DD41E: fnstsw  ax
0x6DD420: test    ah, 44h
0x6DD423: jp      short loc_6DD457
0x6DD425: fld     dword ptr [edi+5Ch]
0x6DD428: fld     dword ptr [ebp+5Ch]
0x6DD42B: fucompp
0x6DD42D: fnstsw  ax
0x6DD42F: test    ah, 44h
0x6DD432: jp      short loc_6DD457
0x6DD434: mov     ax, [edi+60h]
0x6DD438: cmp     ax, [ebp+60h]
0x6DD43C: jnz     short loc_6DD457
0x6DD43E: shr     cl, 6
0x6DD441: shr     dl, 6
0x6DD444: xor     cl, dl
0x6DD446: test    cl, 1
0x6DD449: jnz     short loc_6DD457
0x6DD44B: pop     ebx
0x6DD44C: pop     esi
0x6DD44D: pop     edi
0x6DD44E: mov     al, 1
0x6DD450: pop     ebp
0x6DD451: add     esp, 0Ch
0x6DD454: retn    4
0x6DD457: pop     ebx
0x6DD458: pop     esi
0x6DD459: pop     edi
0x6DD45A: xor     al, al
0x6DD45C: pop     ebp
0x6DD45D: add     esp, 0Ch
0x6DD460: retn    4
