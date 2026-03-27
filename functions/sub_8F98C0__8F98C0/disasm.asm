0x8F98C0: push    ebp
0x8F98C1: mov     ebp, esp
0x8F98C3: and     esp, 0FFFFFFF0h
0x8F98C6: sub     esp, 104h
0x8F98CC: mov     ecx, large fs:2Ch
0x8F98D3: mov     edx, ds:0BA9DE4h
0x8F98D9: mov     eax, [ecx+edx*4]
0x8F98DC: push    ebx
0x8F98DD: push    esi
0x8F98DE: mov     esi, [eax+1A4h]
0x8F98E4: push    edi
0x8F98E5: cmp     esi, [eax+1A8h]
0x8F98EB: jnb     short loc_8F9911
0x8F98ED: mov     esi, eax
0x8F98EF: mov     ecx, [esi+1A4h]
0x8F98F5: mov     dword ptr [ecx], offset aTtcapstriangle; "TtCapsTriangle"
0x8F98FB: rdtsc
0x8F98FD: mov     [esp+110h+var_F8], eax
0x8F9901: mov     eax, [esp+110h+var_F8]
0x8F9905: mov     [ecx+4], eax
0x8F9908: add     ecx, 0Ch
0x8F990B: mov     [esi+1A4h], ecx
0x8F9911: mov     esi, [ebp+arg_4]
0x8F9914: mov     edx, [esi]
0x8F9916: lea     ecx, [esp+110h+var_F4]
0x8F991A: push    ecx
0x8F991B: add     edx, 10h
0x8F991E: push    edx
0x8F991F: call    sub_8D1EF0
0x8F9924: mov     eax, [ebp+arg_0]
0x8F9927: mov     edi, [eax]
0x8F9929: mov     ebx, [esi]
0x8F992B: mov     [esp+118h+var_C0], eax
0x8F992F: mov     eax, [eax+8]
0x8F9932: mov     [esp+118h+var_BC], esi
0x8F9936: movaps  xmm1, xmmword ptr [eax]
0x8F9939: movaps  xmm2, xmmword ptr [eax+10h]
0x8F993D: movaps  xmm3, xmmword ptr [eax+20h]
0x8F9941: movaps  xmm4, xmmword ptr [eax+30h]
0x8F9945: lea     ecx, [edi+10h]
0x8F9948: lea     eax, [esp+118h+var_50]
0x8F994F: add     esp, 8
0x8F9952: sub     eax, ecx
0x8F9954: mov     edx, 2
0x8F9959: lea     esp, [esp+0]
0x8F9960: movaps  xmm0, xmmword ptr [ecx]
0x8F9963: movaps  xmm5, xmm0
0x8F9966: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F996A: movaps  xmm6, xmm3
0x8F996D: mulps   xmm6, xmm5
0x8F9970: movaps  xmm5, xmm0
0x8F9973: shufps  xmm5, xmm0, 55h ; 'U'
0x8F9977: movaps  xmm7, xmm2
0x8F997A: mulps   xmm7, xmm5
0x8F997D: movaps  xmm5, xmm0
0x8F9980: shufps  xmm5, xmm0, 0
0x8F9984: movaps  xmm0, xmm1
0x8F9987: mulps   xmm0, xmm5
0x8F998A: addps   xmm6, xmm4
0x8F998D: addps   xmm0, xmm7
0x8F9990: addps   xmm0, xmm6
0x8F9993: movaps  xmmword ptr [eax+ecx], xmm0
0x8F9997: add     ecx, 10h
0x8F999A: dec     edx
0x8F999B: jnz     short loc_8F9960
0x8F999D: mov     ecx, [esi+8]
0x8F99A0: movaps  xmm1, xmmword ptr [ecx]
0x8F99A3: movaps  xmm2, xmmword ptr [ecx+10h]
0x8F99A7: movaps  xmm3, xmmword ptr [ecx+20h]
0x8F99AB: movaps  xmm4, xmmword ptr [ecx+30h]
0x8F99AF: lea     eax, [ebx+10h]
0x8F99B2: lea     ecx, [esp+110h+var_30]
0x8F99B9: sub     ecx, eax
0x8F99BB: mov     edx, 3
0x8F99C0: movaps  xmm0, xmmword ptr [eax]
0x8F99C3: movaps  xmm5, xmm0
0x8F99C6: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F99CA: movaps  xmm6, xmm3
0x8F99CD: mulps   xmm6, xmm5
0x8F99D0: movaps  xmm5, xmm0
0x8F99D3: shufps  xmm5, xmm0, 55h ; 'U'
0x8F99D7: movaps  xmm7, xmm2
0x8F99DA: mulps   xmm7, xmm5
0x8F99DD: movaps  xmm5, xmm0
0x8F99E0: shufps  xmm5, xmm0, 0
0x8F99E4: movaps  xmm0, xmm1
0x8F99E7: mulps   xmm0, xmm5
0x8F99EA: addps   xmm6, xmm4
0x8F99ED: addps   xmm0, xmm7
0x8F99F0: addps   xmm0, xmm6
0x8F99F3: movaps  xmmword ptr [ecx+eax], xmm0
0x8F99F7: add     eax, 10h
0x8F99FA: dec     edx
0x8F99FB: jnz     short loc_8F99C0
0x8F99FD: mov     esi, [ebp+arg_8]
0x8F9A00: mov     ecx, [esi+8]
0x8F9A03: lea     eax, [esp+110h+var_B0]
0x8F9A07: push    eax; int
0x8F9A08: mov     eax, [ebx+0Ch]
0x8F9A0B: push    0; int
0x8F9A0D: push    ecx; float
0x8F9A0E: lea     edx, [esp+11Ch+var_F4]
0x8F9A12: push    edx; int
0x8F9A13: mov     edx, [edi+0Ch]
0x8F9A16: push    eax; float
0x8F9A17: lea     ecx, [esp+124h+var_30]
0x8F9A1E: push    ecx; int
0x8F9A1F: push    edx; float
0x8F9A20: lea     eax, [esp+12Ch+var_50]
0x8F9A27: push    eax; int
0x8F9A28: call    sub_8D0CA0
0x8F9A2D: fld     dword ptr [esp+130h+anonymous_0+0Ch]
0x8F9A34: fcomp   dword ptr [esp+130h+anonymous_1+0Ch]
0x8F9A3B: add     esp, 20h
0x8F9A3E: fnstsw  ax
0x8F9A40: test    ah, 5
0x8F9A43: jp      short loc_8F9A64
0x8F9A45: fld     dword ptr [esp+110h+anonymous_0+0Ch]
0x8F9A49: fcomp   dword ptr [esi+8]
0x8F9A4C: fnstsw  ax
0x8F9A4E: test    ah, 5
0x8F9A51: jp      short loc_8F9A9C
0x8F9A53: movaps  xmm0, [esp+110h+var_B0]
0x8F9A58: movaps  [esp+110h+var_E0], xmm0
0x8F9A5D: movaps  xmm0, [esp+110h+anonymous_0]
0x8F9A62: jmp     short loc_8F9A8A
0x8F9A64: fld     dword ptr [esp+110h+anonymous_1+0Ch]
0x8F9A6B: fcomp   dword ptr [esi+8]
0x8F9A6E: fnstsw  ax
0x8F9A70: test    ah, 5
0x8F9A73: jp      short loc_8F9A9C
0x8F9A75: movaps  xmm0, [esp+110h+var_90]
0x8F9A7D: movaps  [esp+110h+var_E0], xmm0
0x8F9A82: movaps  xmm0, [esp+110h+anonymous_1]
0x8F9A8A: mov     ecx, [ebp+arg_C]
0x8F9A8D: mov     edx, [ecx]
0x8F9A8F: lea     eax, [esp+110h+var_E0]
0x8F9A93: push    eax
0x8F9A94: movaps  [esp+114h+var_D0], xmm0
0x8F9A99: call    dword ptr [edx+4]
0x8F9A9C: mov     ecx, large fs:2Ch
0x8F9AA3: mov     edx, ds:0BA9DE4h
0x8F9AA9: mov     eax, [ecx+edx*4]
0x8F9AAC: mov     esi, [eax+1A4h]
0x8F9AB2: cmp     esi, [eax+1A8h]
0x8F9AB8: jnb     short loc_8F9ADE
0x8F9ABA: mov     esi, eax
0x8F9ABC: mov     ecx, [esi+1A4h]
0x8F9AC2: mov     dword ptr [ecx], offset aEt; "Et"
0x8F9AC8: rdtsc
0x8F9ACA: mov     [esp+110h+var_F8], eax
0x8F9ACE: mov     edx, [esp+110h+var_F8]
0x8F9AD2: mov     [ecx+4], edx
0x8F9AD5: add     ecx, 0Ch
0x8F9AD8: mov     [esi+1A4h], ecx
0x8F9ADE: pop     edi
0x8F9ADF: pop     esi
0x8F9AE0: pop     ebx
0x8F9AE1: mov     esp, ebp
0x8F9AE3: pop     ebp
0x8F9AE4: retn
