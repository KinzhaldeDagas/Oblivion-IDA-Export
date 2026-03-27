0x8FA3B0: push    ebp
0x8FA3B1: mov     ebp, esp
0x8FA3B3: and     esp, 0FFFFFFF0h
0x8FA3B6: sub     esp, 84h
0x8FA3BC: mov     ecx, large fs:2Ch
0x8FA3C3: mov     edx, ds:0BA9DE4h
0x8FA3C9: mov     eax, [ecx+edx*4]
0x8FA3CC: push    ebx
0x8FA3CD: push    esi
0x8FA3CE: mov     esi, [eax+1A4h]
0x8FA3D4: push    edi
0x8FA3D5: cmp     esi, [eax+1A8h]
0x8FA3DB: jnb     short loc_8FA401
0x8FA3DD: mov     esi, eax
0x8FA3DF: mov     ecx, [esi+1A4h]
0x8FA3E5: mov     dword ptr [ecx], offset aTtcapscaps; "TtCapsCaps"
0x8FA3EB: rdtsc
0x8FA3ED: mov     [esp+90h+var_7C], eax
0x8FA3F1: mov     eax, [esp+90h+var_7C]
0x8FA3F5: mov     [ecx+4], eax
0x8FA3F8: add     ecx, 0Ch
0x8FA3FB: mov     [esi+1A4h], ecx
0x8FA401: mov     eax, [ebp+arg_0]
0x8FA404: mov     ebx, [eax]
0x8FA406: mov     edx, [ebp+arg_4]
0x8FA409: mov     edi, [edx]
0x8FA40B: mov     [esp+90h+var_10], eax
0x8FA412: mov     eax, [eax+8]
0x8FA415: mov     [esp+90h+var_C], edx
0x8FA41C: movaps  xmm1, xmmword ptr [eax]
0x8FA41F: movaps  xmm2, xmmword ptr [eax+10h]
0x8FA423: movaps  xmm3, xmmword ptr [eax+20h]
0x8FA427: movaps  xmm4, xmmword ptr [eax+30h]
0x8FA42B: lea     ecx, [ebx+10h]
0x8FA42E: lea     eax, [esp+90h+var_50]
0x8FA432: sub     eax, ecx
0x8FA434: mov     esi, 2
0x8FA439: lea     esp, [esp+0]
0x8FA440: movaps  xmm0, xmmword ptr [ecx]
0x8FA443: movaps  xmm5, xmm0
0x8FA446: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FA44A: movaps  xmm6, xmm3
0x8FA44D: mulps   xmm6, xmm5
0x8FA450: movaps  xmm5, xmm0
0x8FA453: shufps  xmm5, xmm0, 55h ; 'U'
0x8FA457: movaps  xmm7, xmm2
0x8FA45A: mulps   xmm7, xmm5
0x8FA45D: movaps  xmm5, xmm0
0x8FA460: shufps  xmm5, xmm0, 0
0x8FA464: movaps  xmm0, xmm1
0x8FA467: mulps   xmm0, xmm5
0x8FA46A: addps   xmm6, xmm4
0x8FA46D: addps   xmm0, xmm7
0x8FA470: addps   xmm0, xmm6
0x8FA473: movaps  xmmword ptr [eax+ecx], xmm0
0x8FA477: add     ecx, 10h
0x8FA47A: dec     esi
0x8FA47B: jnz     short loc_8FA440
0x8FA47D: mov     ecx, [edx+8]
0x8FA480: movaps  xmm1, xmmword ptr [ecx]
0x8FA483: movaps  xmm2, xmmword ptr [ecx+10h]
0x8FA487: movaps  xmm3, xmmword ptr [ecx+20h]
0x8FA48B: movaps  xmm4, xmmword ptr [ecx+30h]
0x8FA48F: lea     eax, [edi+10h]
0x8FA492: lea     ecx, [esp+90h+var_70]
0x8FA496: sub     ecx, eax
0x8FA498: mov     edx, 2
0x8FA49D: lea     ecx, [ecx+0]
0x8FA4A0: movaps  xmm0, xmmword ptr [eax]
0x8FA4A3: movaps  xmm5, xmm0
0x8FA4A6: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FA4AA: movaps  xmm6, xmm3
0x8FA4AD: mulps   xmm6, xmm5
0x8FA4B0: movaps  xmm5, xmm0
0x8FA4B3: shufps  xmm5, xmm0, 55h ; 'U'
0x8FA4B7: movaps  xmm7, xmm2
0x8FA4BA: mulps   xmm7, xmm5
0x8FA4BD: movaps  xmm5, xmm0
0x8FA4C0: shufps  xmm5, xmm0, 0
0x8FA4C4: movaps  xmm0, xmm1
0x8FA4C7: mulps   xmm0, xmm5
0x8FA4CA: addps   xmm6, xmm4
0x8FA4CD: addps   xmm0, xmm7
0x8FA4D0: addps   xmm0, xmm6
0x8FA4D3: movaps  xmmword ptr [ecx+eax], xmm0
0x8FA4D7: add     eax, 10h
0x8FA4DA: dec     edx
0x8FA4DB: jnz     short loc_8FA4A0
0x8FA4DD: mov     ecx, [ebp+arg_8]
0x8FA4E0: mov     edx, [ecx+8]
0x8FA4E3: mov     eax, [edi+0Ch]
0x8FA4E6: mov     ecx, [ebx+0Ch]
0x8FA4E9: mov     [esp+90h+var_7C], edx
0x8FA4ED: mov     [esp+90h+var_78], eax
0x8FA4F1: mov     eax, [esp+90h+var_7C]
0x8FA4F5: lea     edx, [esp+90h+var_30]
0x8FA4F9: push    edx; int
0x8FA4FA: push    eax; float
0x8FA4FB: mov     [esp+98h+var_74], ecx
0x8FA4FF: mov     ecx, [esp+98h+var_78]
0x8FA503: mov     eax, [esp+98h+var_74]
0x8FA507: push    ecx; float
0x8FA508: lea     edx, [esp+9Ch+var_70]
0x8FA50C: push    edx; int
0x8FA50D: push    eax; float
0x8FA50E: lea     ecx, [esp+0A4h+var_50]
0x8FA512: push    ecx; int
0x8FA513: call    sub_8D0A10
0x8FA518: add     esp, 18h
0x8FA51B: test    eax, eax
0x8FA51D: jnz     short loc_8FA52C
0x8FA51F: mov     ecx, [ebp+arg_C]
0x8FA522: mov     edx, [ecx]
0x8FA524: lea     eax, [esp+90h+var_30]
0x8FA528: push    eax
0x8FA529: call    dword ptr [edx+4]
0x8FA52C: mov     ecx, large fs:2Ch
0x8FA533: mov     edx, ds:0BA9DE4h
0x8FA539: mov     eax, [ecx+edx*4]
0x8FA53C: mov     esi, [eax+1A4h]
0x8FA542: cmp     esi, [eax+1A8h]
0x8FA548: jnb     short loc_8FA56E
0x8FA54A: mov     esi, eax
0x8FA54C: mov     ecx, [esi+1A4h]
0x8FA552: mov     dword ptr [ecx], offset aEt; "Et"
0x8FA558: rdtsc
0x8FA55A: mov     [esp+90h+var_74], eax
0x8FA55E: mov     edx, [esp+90h+var_74]
0x8FA562: mov     [ecx+4], edx
0x8FA565: add     ecx, 0Ch
0x8FA568: mov     [esi+1A4h], ecx
0x8FA56E: pop     edi
0x8FA56F: pop     esi
0x8FA570: pop     ebx
0x8FA571: mov     esp, ebp
0x8FA573: pop     ebp
0x8FA574: retn    10h
