0x8F9470: push    ebp
0x8F9471: mov     ebp, esp
0x8F9473: and     esp, 0FFFFFFF0h
0x8F9476: sub     esp, 0B4h
0x8F947C: mov     edx, ds:0BA9DE4h
0x8F9482: push    ebx
0x8F9483: mov     ebx, ecx
0x8F9485: mov     ecx, large fs:2Ch
0x8F948C: mov     eax, [ecx+edx*4]
0x8F948F: push    esi
0x8F9490: mov     esi, [eax+1A4h]
0x8F9496: push    edi
0x8F9497: cmp     esi, [eax+1A8h]
0x8F949D: jnb     short loc_8F94C3
0x8F949F: mov     esi, eax
0x8F94A1: mov     ecx, [esi+1A4h]
0x8F94A7: mov     dword ptr [ecx], offset aTtcapsuletri; "TtCapsuleTri"
0x8F94AD: rdtsc
0x8F94AF: mov     [esp+0C0h+var_B4], eax
0x8F94B3: mov     eax, [esp+0C0h+var_B4]
0x8F94B7: mov     [ecx+4], eax
0x8F94BA: add     ecx, 0Ch
0x8F94BD: mov     [esi+1A4h], ecx
0x8F94C3: mov     eax, [ebp+arg_0]
0x8F94C6: mov     edi, [eax]
0x8F94C8: mov     eax, [eax+8]
0x8F94CB: mov     ecx, [ebp+arg_4]
0x8F94CE: movaps  xmm1, xmmword ptr [eax]
0x8F94D1: movaps  xmm2, xmmword ptr [eax+10h]
0x8F94D5: movaps  xmm3, xmmword ptr [eax+20h]
0x8F94D9: movaps  xmm4, xmmword ptr [eax+30h]
0x8F94DD: mov     esi, [ecx]
0x8F94DF: lea     ecx, [edi+10h]
0x8F94E2: lea     eax, [esp+0C0h+var_B0]
0x8F94E6: sub     eax, ecx
0x8F94E8: mov     edx, 2
0x8F94ED: lea     ecx, [ecx+0]
0x8F94F0: movaps  xmm0, xmmword ptr [ecx]
0x8F94F3: movaps  xmm5, xmm0
0x8F94F6: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F94FA: movaps  xmm6, xmm3
0x8F94FD: mulps   xmm6, xmm5
0x8F9500: movaps  xmm5, xmm0
0x8F9503: shufps  xmm5, xmm0, 55h ; 'U'
0x8F9507: movaps  xmm7, xmm2
0x8F950A: mulps   xmm7, xmm5
0x8F950D: movaps  xmm5, xmm0
0x8F9510: shufps  xmm5, xmm0, 0
0x8F9514: movaps  xmm0, xmm1
0x8F9517: mulps   xmm0, xmm5
0x8F951A: addps   xmm6, xmm4
0x8F951D: addps   xmm0, xmm7
0x8F9520: addps   xmm0, xmm6
0x8F9523: movaps  xmmword ptr [eax+ecx], xmm0
0x8F9527: add     ecx, 10h
0x8F952A: dec     edx
0x8F952B: jnz     short loc_8F94F0
0x8F952D: mov     edx, [ebp+arg_4]
0x8F9530: mov     ecx, [edx+8]
0x8F9533: movaps  xmm1, xmmword ptr [ecx]
0x8F9536: movaps  xmm2, xmmword ptr [ecx+10h]
0x8F953A: movaps  xmm3, xmmword ptr [ecx+20h]
0x8F953E: movaps  xmm4, xmmword ptr [ecx+30h]
0x8F9542: lea     eax, [esi+10h]
0x8F9545: lea     ecx, [esp+0C0h+var_30]
0x8F954C: sub     ecx, eax
0x8F954E: mov     edx, 3
0x8F9553: movaps  xmm0, xmmword ptr [eax]
0x8F9556: movaps  xmm5, xmm0
0x8F9559: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F955D: movaps  xmm6, xmm3
0x8F9560: mulps   xmm6, xmm5
0x8F9563: movaps  xmm5, xmm0
0x8F9566: shufps  xmm5, xmm0, 55h ; 'U'
0x8F956A: movaps  xmm7, xmm2
0x8F956D: mulps   xmm7, xmm5
0x8F9570: movaps  xmm5, xmm0
0x8F9573: shufps  xmm5, xmm0, 0
0x8F9577: movaps  xmm0, xmm1
0x8F957A: mulps   xmm0, xmm5
0x8F957D: addps   xmm6, xmm4
0x8F9580: addps   xmm0, xmm7
0x8F9583: addps   xmm0, xmm6
0x8F9586: movaps  xmmword ptr [ecx+eax], xmm0
0x8F958A: add     eax, 10h
0x8F958D: dec     edx
0x8F958E: jnz     short loc_8F9553
0x8F9590: mov     ecx, [ebp+arg_8]
0x8F9593: mov     edx, [ecx+8]
0x8F9596: mov     ecx, [esi+0Ch]
0x8F9599: lea     eax, [esp+0C0h+var_90]
0x8F959D: push    eax; int
0x8F959E: push    1; int
0x8F95A0: push    edx; float
0x8F95A1: lea     eax, [ebx+14h]
0x8F95A4: push    eax; int
0x8F95A5: mov     eax, [edi+0Ch]
0x8F95A8: push    ecx; float
0x8F95A9: lea     edx, [esp+0D4h+var_30]
0x8F95B0: push    edx; int
0x8F95B1: push    eax; float
0x8F95B2: lea     ecx, [esp+0DCh+var_B0]
0x8F95B6: push    ecx; int
0x8F95B7: call    sub_8D0CA0
0x8F95BC: add     esp, 20h
0x8F95BF: lea     edi, [esp+0C0h+var_90]
0x8F95C3: lea     esi, [ebx+0Ch]
0x8F95C6: mov     [esp+0C0h+var_B4], 3
0x8F95CE: mov     edi, edi
0x8F95D0: fld     dword ptr [edi+1Ch]
0x8F95D3: mov     edx, [ebp+arg_8]
0x8F95D6: fcomp   dword ptr [edx+8]
0x8F95D9: fnstsw  ax
0x8F95DB: test    ah, 5
0x8F95DE: jp      short loc_8F9623
0x8F95E0: cmp     word ptr [esi], 0FFFFh
0x8F95E5: jnz     short loc_8F9602
0x8F95E7: mov     ecx, [ebx+8]
0x8F95EA: mov     eax, [ecx]
0x8F95EC: push    edi
0x8F95ED: push    edx
0x8F95EE: mov     edx, [ebp+arg_4]
0x8F95F1: push    edx
0x8F95F2: mov     edx, [ebp+arg_0]
0x8F95F5: push    edx
0x8F95F6: call    dword ptr [eax+8]
0x8F95F9: cmp     ax, 0FFFFh
0x8F95FD: mov     [esi], ax
0x8F9600: jz      short loc_8F963C
0x8F9602: mov     ecx, [ebp+arg_C]
0x8F9605: mov     eax, [ecx]
0x8F9607: movaps  xmm0, xmmword ptr [edi]
0x8F960A: lea     edx, [eax+30h]
0x8F960D: mov     [ecx], edx
0x8F960F: movaps  xmmword ptr [eax], xmm0
0x8F9612: movaps  xmm0, xmmword ptr [edi+10h]
0x8F9616: movaps  xmmword ptr [eax+10h], xmm0
0x8F961A: mov     cx, [esi]
0x8F961D: mov     [eax+20h], cx
0x8F9621: jmp     short loc_8F963C
0x8F9623: xor     eax, eax
0x8F9625: mov     ax, [esi]
0x8F9628: cmp     ax, 0FFFFh
0x8F962C: jz      short loc_8F963C
0x8F962E: mov     ecx, [ebx+8]
0x8F9631: mov     edx, [ecx]
0x8F9633: push    eax
0x8F9634: call    dword ptr [edx+10h]
0x8F9637: mov     word ptr [esi], 0FFFFh
0x8F963C: mov     eax, [esp+0C0h+var_B4]
0x8F9640: add     esi, 2
0x8F9643: add     edi, 20h ; ' '
0x8F9646: dec     eax
0x8F9647: mov     [esp+0C0h+var_B4], eax
0x8F964B: jnz     short loc_8F95D0
0x8F964D: mov     ecx, large fs:2Ch
0x8F9654: mov     edx, ds:0BA9DE4h
0x8F965A: mov     eax, [ecx+edx*4]
0x8F965D: mov     esi, [eax+1A4h]
0x8F9663: cmp     esi, [eax+1A8h]
0x8F9669: jnb     short loc_8F968F
0x8F966B: mov     esi, eax
0x8F966D: mov     ecx, [esi+1A4h]
0x8F9673: mov     dword ptr [ecx], offset aEt; "Et"
0x8F9679: rdtsc
0x8F967B: mov     [esp+0C0h+var_B4], eax
0x8F967F: mov     eax, [esp+0C0h+var_B4]
0x8F9683: mov     [ecx+4], eax
0x8F9686: add     ecx, 0Ch
0x8F9689: mov     [esi+1A4h], ecx
0x8F968F: pop     edi
0x8F9690: pop     esi
0x8F9691: pop     ebx
0x8F9692: mov     esp, ebp
0x8F9694: pop     ebp
0x8F9695: retn    10h
