0x8FA180: push    ebp
0x8FA181: mov     ebp, esp
0x8FA183: and     esp, 0FFFFFFF0h
0x8FA186: sub     esp, 0A4h
0x8FA18C: mov     edx, ds:0BA9DE4h
0x8FA192: push    ebx
0x8FA193: mov     ebx, ecx
0x8FA195: mov     ecx, large fs:2Ch
0x8FA19C: mov     eax, [ecx+edx*4]
0x8FA19F: push    esi
0x8FA1A0: mov     esi, [eax+1A4h]
0x8FA1A6: push    edi
0x8FA1A7: cmp     esi, [eax+1A8h]
0x8FA1AD: jnb     short loc_8FA1D3
0x8FA1AF: mov     esi, eax
0x8FA1B1: mov     ecx, [esi+1A4h]
0x8FA1B7: mov     dword ptr [ecx], offset aTtcapscaps; "TtCapsCaps"
0x8FA1BD: rdtsc
0x8FA1BF: mov     [esp+0B0h+var_A4], eax
0x8FA1C3: mov     eax, [esp+0B0h+var_A4]
0x8FA1C7: mov     [ecx+4], eax
0x8FA1CA: add     ecx, 0Ch
0x8FA1CD: mov     [esi+1A4h], ecx
0x8FA1D3: mov     ecx, [ebp+arg_8]
0x8FA1D6: fld     dword ptr [ecx+8]
0x8FA1D9: mov     eax, [ebp+arg_0]
0x8FA1DC: mov     edi, [eax]
0x8FA1DE: fst     [esp+0B0h+var_84]
0x8FA1E2: mov     eax, [eax+8]
0x8FA1E5: fst     [esp+0B0h+var_64]
0x8FA1E9: mov     edx, [ebp+arg_4]
0x8FA1EC: fstp    [esp+0B0h+var_44]
0x8FA1F0: movaps  xmm1, xmmword ptr [eax]
0x8FA1F3: movaps  xmm2, xmmword ptr [eax+10h]
0x8FA1F7: movaps  xmm3, xmmword ptr [eax+20h]
0x8FA1FB: movaps  xmm4, xmmword ptr [eax+30h]
0x8FA1FF: mov     esi, [edx]
0x8FA201: lea     ecx, [edi+10h]
0x8FA204: lea     eax, [esp+0B0h+var_20]
0x8FA20B: sub     eax, ecx
0x8FA20D: mov     edx, 2
0x8FA212: movaps  xmm0, xmmword ptr [ecx]
0x8FA215: movaps  xmm5, xmm0
0x8FA218: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FA21C: movaps  xmm6, xmm3
0x8FA21F: mulps   xmm6, xmm5
0x8FA222: movaps  xmm5, xmm0
0x8FA225: shufps  xmm5, xmm0, 55h ; 'U'
0x8FA229: movaps  xmm7, xmm2
0x8FA22C: mulps   xmm7, xmm5
0x8FA22F: movaps  xmm5, xmm0
0x8FA232: shufps  xmm5, xmm0, 0
0x8FA236: movaps  xmm0, xmm1
0x8FA239: mulps   xmm0, xmm5
0x8FA23C: addps   xmm6, xmm4
0x8FA23F: addps   xmm0, xmm7
0x8FA242: addps   xmm0, xmm6
0x8FA245: movaps  xmmword ptr [eax+ecx], xmm0
0x8FA249: add     ecx, 10h
0x8FA24C: dec     edx
0x8FA24D: jnz     short loc_8FA212
0x8FA24F: mov     eax, [ebp+arg_4]
0x8FA252: mov     ecx, [eax+8]
0x8FA255: movaps  xmm1, xmmword ptr [ecx]
0x8FA258: movaps  xmm2, xmmword ptr [ecx+10h]
0x8FA25C: movaps  xmm3, xmmword ptr [ecx+20h]
0x8FA260: movaps  xmm4, xmmword ptr [ecx+30h]
0x8FA264: lea     eax, [esi+10h]
0x8FA267: lea     ecx, [esp+0B0h+var_40]
0x8FA26B: sub     ecx, eax
0x8FA26D: mov     edx, 2
0x8FA272: movaps  xmm0, xmmword ptr [eax]
0x8FA275: movaps  xmm5, xmm0
0x8FA278: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FA27C: movaps  xmm6, xmm3
0x8FA27F: mulps   xmm6, xmm5
0x8FA282: movaps  xmm5, xmm0
0x8FA285: shufps  xmm5, xmm0, 55h ; 'U'
0x8FA289: movaps  xmm7, xmm2
0x8FA28C: mulps   xmm7, xmm5
0x8FA28F: movaps  xmm5, xmm0
0x8FA292: shufps  xmm5, xmm0, 0
0x8FA296: movaps  xmm0, xmm1
0x8FA299: mulps   xmm0, xmm5
0x8FA29C: addps   xmm6, xmm4
0x8FA29F: addps   xmm0, xmm7
0x8FA2A2: addps   xmm0, xmm6
0x8FA2A5: movaps  xmmword ptr [ecx+eax], xmm0
0x8FA2A9: add     eax, 10h
0x8FA2AC: dec     edx
0x8FA2AD: jnz     short loc_8FA272
0x8FA2AF: mov     edx, [esi+0Ch]
0x8FA2B2: lea     ecx, [esp+0B0h+var_A0]
0x8FA2B6: push    ecx; int
0x8FA2B7: mov     ecx, [edi+0Ch]
0x8FA2BA: push    edx; float
0x8FA2BB: lea     eax, [esp+0B8h+var_40]
0x8FA2BF: push    eax; int
0x8FA2C0: push    ecx; float
0x8FA2C1: lea     edx, [esp+0C0h+var_20]
0x8FA2C8: push    edx; int
0x8FA2C9: call    sub_8D0290
0x8FA2CE: add     esp, 14h
0x8FA2D1: lea     edi, [esp+0B0h+var_A0]
0x8FA2D5: lea     esi, [ebx+0Ch]
0x8FA2D8: mov     [esp+0B0h+var_A4], 3
0x8FA2E0: fld     dword ptr [edi+1Ch]
0x8FA2E3: mov     edx, [ebp+arg_8]
0x8FA2E6: fcomp   dword ptr [edx+8]
0x8FA2E9: fnstsw  ax
0x8FA2EB: test    ah, 5
0x8FA2EE: jp      short loc_8FA333
0x8FA2F0: cmp     word ptr [esi], 0FFFFh
0x8FA2F5: jnz     short loc_8FA312
0x8FA2F7: mov     ecx, [ebx+8]
0x8FA2FA: mov     eax, [ecx]
0x8FA2FC: push    edi
0x8FA2FD: push    edx
0x8FA2FE: mov     edx, [ebp+arg_4]
0x8FA301: push    edx
0x8FA302: mov     edx, [ebp+arg_0]
0x8FA305: push    edx
0x8FA306: call    dword ptr [eax+8]
0x8FA309: cmp     ax, 0FFFFh
0x8FA30D: mov     [esi], ax
0x8FA310: jz      short loc_8FA34C
0x8FA312: mov     ecx, [ebp+arg_C]
0x8FA315: mov     eax, [ecx]
0x8FA317: movaps  xmm0, xmmword ptr [edi]
0x8FA31A: lea     edx, [eax+30h]
0x8FA31D: mov     [ecx], edx
0x8FA31F: movaps  xmmword ptr [eax], xmm0
0x8FA322: movaps  xmm0, xmmword ptr [edi+10h]
0x8FA326: movaps  xmmword ptr [eax+10h], xmm0
0x8FA32A: mov     cx, [esi]
0x8FA32D: mov     [eax+20h], cx
0x8FA331: jmp     short loc_8FA34C
0x8FA333: xor     eax, eax
0x8FA335: mov     ax, [esi]
0x8FA338: cmp     ax, 0FFFFh
0x8FA33C: jz      short loc_8FA34C
0x8FA33E: mov     ecx, [ebx+8]
0x8FA341: mov     edx, [ecx]
0x8FA343: push    eax
0x8FA344: call    dword ptr [edx+10h]
0x8FA347: mov     word ptr [esi], 0FFFFh
0x8FA34C: mov     eax, [esp+0B0h+var_A4]
0x8FA350: add     esi, 2
0x8FA353: add     edi, 20h ; ' '
0x8FA356: dec     eax
0x8FA357: mov     [esp+0B0h+var_A4], eax
0x8FA35B: jnz     short loc_8FA2E0
0x8FA35D: mov     ecx, large fs:2Ch
0x8FA364: mov     edx, ds:0BA9DE4h
0x8FA36A: mov     eax, [ecx+edx*4]
0x8FA36D: mov     esi, [eax+1A4h]
0x8FA373: cmp     esi, [eax+1A8h]
0x8FA379: jnb     short loc_8FA39F
0x8FA37B: mov     esi, eax
0x8FA37D: mov     ecx, [esi+1A4h]
0x8FA383: mov     dword ptr [ecx], offset aEt; "Et"
0x8FA389: rdtsc
0x8FA38B: mov     [esp+0B0h+var_A4], eax
0x8FA38F: mov     eax, [esp+0B0h+var_A4]
0x8FA393: mov     [ecx+4], eax
0x8FA396: add     ecx, 0Ch
0x8FA399: mov     [esi+1A4h], ecx
0x8FA39F: pop     edi
0x8FA3A0: pop     esi
0x8FA3A1: pop     ebx
0x8FA3A2: mov     esp, ebp
0x8FA3A4: pop     ebp
0x8FA3A5: retn    10h
