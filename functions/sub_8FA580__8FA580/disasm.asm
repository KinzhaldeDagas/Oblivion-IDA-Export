0x8FA580: push    ebp
0x8FA581: mov     ebp, esp
0x8FA583: and     esp, 0FFFFFFF0h
0x8FA586: sub     esp, 84h
0x8FA58C: mov     ecx, large fs:2Ch
0x8FA593: mov     edx, ds:0BA9DE4h
0x8FA599: mov     eax, [ecx+edx*4]
0x8FA59C: push    ebx
0x8FA59D: push    esi
0x8FA59E: mov     esi, [eax+1A4h]
0x8FA5A4: push    edi
0x8FA5A5: cmp     esi, [eax+1A8h]
0x8FA5AB: jnb     short loc_8FA5D1
0x8FA5AD: mov     esi, eax
0x8FA5AF: mov     ecx, [esi+1A4h]
0x8FA5B5: mov     dword ptr [ecx], offset aTtcapscaps; "TtCapsCaps"
0x8FA5BB: rdtsc
0x8FA5BD: mov     [esp+90h+var_7C], eax
0x8FA5C1: mov     eax, [esp+90h+var_7C]
0x8FA5C5: mov     [ecx+4], eax
0x8FA5C8: add     ecx, 0Ch
0x8FA5CB: mov     [esi+1A4h], ecx
0x8FA5D1: mov     eax, [ebp+arg_0]
0x8FA5D4: mov     ebx, [eax]
0x8FA5D6: mov     edx, [ebp+arg_4]
0x8FA5D9: mov     edi, [edx]
0x8FA5DB: mov     [esp+90h+var_10], eax
0x8FA5E2: mov     eax, [eax+8]
0x8FA5E5: mov     [esp+90h+var_C], edx
0x8FA5EC: movaps  xmm1, xmmword ptr [eax]
0x8FA5EF: movaps  xmm2, xmmword ptr [eax+10h]
0x8FA5F3: movaps  xmm3, xmmword ptr [eax+20h]
0x8FA5F7: movaps  xmm4, xmmword ptr [eax+30h]
0x8FA5FB: lea     ecx, [ebx+10h]
0x8FA5FE: lea     eax, [esp+90h+var_50]
0x8FA602: sub     eax, ecx
0x8FA604: mov     esi, 2
0x8FA609: lea     esp, [esp+0]
0x8FA610: movaps  xmm0, xmmword ptr [ecx]
0x8FA613: movaps  xmm5, xmm0
0x8FA616: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FA61A: movaps  xmm6, xmm3
0x8FA61D: mulps   xmm6, xmm5
0x8FA620: movaps  xmm5, xmm0
0x8FA623: shufps  xmm5, xmm0, 55h ; 'U'
0x8FA627: movaps  xmm7, xmm2
0x8FA62A: mulps   xmm7, xmm5
0x8FA62D: movaps  xmm5, xmm0
0x8FA630: shufps  xmm5, xmm0, 0
0x8FA634: movaps  xmm0, xmm1
0x8FA637: mulps   xmm0, xmm5
0x8FA63A: addps   xmm6, xmm4
0x8FA63D: addps   xmm0, xmm7
0x8FA640: addps   xmm0, xmm6
0x8FA643: movaps  xmmword ptr [eax+ecx], xmm0
0x8FA647: add     ecx, 10h
0x8FA64A: dec     esi
0x8FA64B: jnz     short loc_8FA610
0x8FA64D: mov     ecx, [edx+8]
0x8FA650: movaps  xmm1, xmmword ptr [ecx]
0x8FA653: movaps  xmm2, xmmword ptr [ecx+10h]
0x8FA657: movaps  xmm3, xmmword ptr [ecx+20h]
0x8FA65B: movaps  xmm4, xmmword ptr [ecx+30h]
0x8FA65F: lea     eax, [edi+10h]
0x8FA662: lea     ecx, [esp+90h+var_70]
0x8FA666: sub     ecx, eax
0x8FA668: mov     edx, 2
0x8FA66D: lea     ecx, [ecx+0]
0x8FA670: movaps  xmm0, xmmword ptr [eax]
0x8FA673: movaps  xmm5, xmm0
0x8FA676: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FA67A: movaps  xmm6, xmm3
0x8FA67D: mulps   xmm6, xmm5
0x8FA680: movaps  xmm5, xmm0
0x8FA683: shufps  xmm5, xmm0, 55h ; 'U'
0x8FA687: movaps  xmm7, xmm2
0x8FA68A: mulps   xmm7, xmm5
0x8FA68D: movaps  xmm5, xmm0
0x8FA690: shufps  xmm5, xmm0, 0
0x8FA694: movaps  xmm0, xmm1
0x8FA697: mulps   xmm0, xmm5
0x8FA69A: addps   xmm6, xmm4
0x8FA69D: addps   xmm0, xmm7
0x8FA6A0: addps   xmm0, xmm6
0x8FA6A3: movaps  xmmword ptr [ecx+eax], xmm0
0x8FA6A7: add     eax, 10h
0x8FA6AA: dec     edx
0x8FA6AB: jnz     short loc_8FA670
0x8FA6AD: mov     ecx, [ebp+arg_8]
0x8FA6B0: mov     edx, [ecx+8]
0x8FA6B3: mov     eax, [edi+0Ch]
0x8FA6B6: mov     ecx, [ebx+0Ch]
0x8FA6B9: mov     [esp+90h+var_7C], edx
0x8FA6BD: mov     [esp+90h+var_78], eax
0x8FA6C1: mov     eax, [esp+90h+var_7C]
0x8FA6C5: lea     edx, [esp+90h+var_30]
0x8FA6C9: push    edx; int
0x8FA6CA: push    eax; float
0x8FA6CB: mov     [esp+98h+var_74], ecx
0x8FA6CF: mov     ecx, [esp+98h+var_78]
0x8FA6D3: mov     eax, [esp+98h+var_74]
0x8FA6D7: push    ecx; float
0x8FA6D8: lea     edx, [esp+9Ch+var_70]
0x8FA6DC: push    edx; int
0x8FA6DD: push    eax; float
0x8FA6DE: lea     ecx, [esp+0A4h+var_50]
0x8FA6E2: push    ecx; int
0x8FA6E3: call    sub_8D0A10
0x8FA6E8: add     esp, 18h
0x8FA6EB: test    eax, eax
0x8FA6ED: jnz     short loc_8FA6FC
0x8FA6EF: mov     ecx, [ebp+arg_C]
0x8FA6F2: mov     edx, [ecx]
0x8FA6F4: lea     eax, [esp+90h+var_30]
0x8FA6F8: push    eax
0x8FA6F9: call    dword ptr [edx+4]
0x8FA6FC: mov     ecx, large fs:2Ch
0x8FA703: mov     edx, ds:0BA9DE4h
0x8FA709: mov     eax, [ecx+edx*4]
0x8FA70C: mov     esi, [eax+1A4h]
0x8FA712: cmp     esi, [eax+1A8h]
0x8FA718: jnb     short loc_8FA73E
0x8FA71A: mov     esi, eax
0x8FA71C: mov     ecx, [esi+1A4h]
0x8FA722: mov     dword ptr [ecx], offset aEt; "Et"
0x8FA728: rdtsc
0x8FA72A: mov     [esp+90h+var_74], eax
0x8FA72E: mov     edx, [esp+90h+var_74]
0x8FA732: mov     [ecx+4], edx
0x8FA735: add     ecx, 0Ch
0x8FA738: mov     [esi+1A4h], ecx
0x8FA73E: pop     edi
0x8FA73F: pop     esi
0x8FA740: pop     ebx
0x8FA741: mov     esp, ebp
0x8FA743: pop     ebp
0x8FA744: retn
