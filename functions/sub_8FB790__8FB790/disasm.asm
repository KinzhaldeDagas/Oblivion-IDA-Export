0x8FB790: push    ebp
0x8FB791: mov     ebp, esp
0x8FB793: and     esp, 0FFFFFFF0h
0x8FB796: sub     esp, 64h
0x8FB799: mov     edx, ds:0BA9DE4h
0x8FB79F: push    ebx
0x8FB7A0: mov     [esp+68h+var_5C], ecx
0x8FB7A4: mov     ecx, large fs:2Ch
0x8FB7AB: mov     eax, [ecx+edx*4]
0x8FB7AE: push    esi
0x8FB7AF: mov     esi, [eax+1A4h]
0x8FB7B5: push    edi
0x8FB7B6: cmp     esi, [eax+1A8h]
0x8FB7BC: jnb     short loc_8FB7E2
0x8FB7BE: mov     esi, eax
0x8FB7C0: mov     ecx, [esi+1A4h]
0x8FB7C6: mov     dword ptr [ecx], offset aTtspheretri; "TtSphereTri"
0x8FB7CC: rdtsc
0x8FB7CE: mov     [esp+70h+var_58], eax
0x8FB7D2: mov     eax, [esp+70h+var_58]
0x8FB7D6: mov     [ecx+4], eax
0x8FB7D9: add     ecx, 0Ch
0x8FB7DC: mov     [esi+1A4h], ecx
0x8FB7E2: mov     ecx, [ebp+arg_C]
0x8FB7E5: mov     eax, [ebp+arg_0]
0x8FB7E8: mov     edx, [eax]
0x8FB7EA: mov     ebx, [ecx]
0x8FB7EC: mov     ecx, [ebp+arg_4]
0x8FB7EF: mov     esi, [eax+8]
0x8FB7F2: mov     eax, [ecx+8]
0x8FB7F5: mov     edi, [ecx]
0x8FB7F7: movaps  xmm1, xmmword ptr [eax]
0x8FB7FA: movaps  xmm2, xmmword ptr [eax+10h]
0x8FB7FE: movaps  xmm3, xmmword ptr [eax+20h]
0x8FB802: movaps  xmm4, xmmword ptr [eax+30h]
0x8FB806: lea     ecx, [edi+10h]
0x8FB809: lea     eax, [esp+70h+var_30]
0x8FB80D: mov     [esp+70h+var_58], edx
0x8FB811: add     esi, 30h ; '0'
0x8FB814: sub     eax, ecx
0x8FB816: mov     edx, 3
0x8FB81B: jmp     short loc_8FB820
0x8FB81D: align 10h
0x8FB820: movaps  xmm0, xmmword ptr [ecx]
0x8FB823: movaps  xmm5, xmm0
0x8FB826: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FB82A: movaps  xmm6, xmm3
0x8FB82D: mulps   xmm6, xmm5
0x8FB830: movaps  xmm5, xmm0
0x8FB833: shufps  xmm5, xmm0, 55h ; 'U'
0x8FB837: movaps  xmm7, xmm2
0x8FB83A: mulps   xmm7, xmm5
0x8FB83D: movaps  xmm5, xmm0
0x8FB840: shufps  xmm5, xmm0, 0
0x8FB844: movaps  xmm0, xmm1
0x8FB847: mulps   xmm0, xmm5
0x8FB84A: addps   xmm6, xmm4
0x8FB84D: addps   xmm0, xmm7
0x8FB850: addps   xmm0, xmm6
0x8FB853: movaps  xmmword ptr [eax+ecx], xmm0
0x8FB857: add     ecx, 10h
0x8FB85A: dec     edx
0x8FB85B: jnz     short loc_8FB820
0x8FB85D: mov     ecx, [esp+70h+var_5C]
0x8FB861: lea     eax, [esp+70h+var_50]
0x8FB865: push    eax
0x8FB866: add     ecx, 10h
0x8FB869: push    ecx
0x8FB86A: lea     edx, [esp+78h+var_30]
0x8FB86E: push    edx
0x8FB86F: push    esi
0x8FB870: call    sub_8D20C0
0x8FB875: mov     edx, [ebp+arg_8]
0x8FB878: mov     [esp+80h+var_54], eax
0x8FB87C: mov     eax, [esp+80h+var_58]
0x8FB880: fld     dword ptr [eax+0Ch]
0x8FB883: add     esp, 10h
0x8FB886: fadd    dword ptr [edi+0Ch]
0x8FB889: fld     st
0x8FB88B: fadd    dword ptr [edx+8]
0x8FB88E: fcomp   [esp+70h+var_40]
0x8FB892: fnstsw  ax
0x8FB894: test    ah, 41h
0x8FB897: jnz     short loc_8FB90A
0x8FB899: fld     dword ptr [edi+0Ch]
0x8FB89C: movaps  xmm1, [esp+70h+var_50]
0x8FB8A1: fsub    [esp+70h+var_40]
0x8FB8A5: fstp    [esp+70h+var_58]
0x8FB8A9: movss   xmm0, [esp+70h+var_58]
0x8FB8AF: fld     [esp+70h+var_40]
0x8FB8B3: movaps  xmm2, xmm0
0x8FB8B6: shufps  xmm2, xmm0, 0
0x8FB8BA: fsub    st, st(1)
0x8FB8BC: movaps  xmm0, xmmword ptr [esi]
0x8FB8BF: mov     esi, [esp+70h+var_5C]
0x8FB8C3: mulps   xmm2, xmm1
0x8FB8C6: addps   xmm0, xmm2
0x8FB8C9: movaps  xmmword ptr [ebx], xmm0
0x8FB8CC: movaps  xmmword ptr [ebx+10h], xmm1
0x8FB8D0: fstp    dword ptr [ebx+1Ch]
0x8FB8D3: cmp     word ptr [esi+0Ch], 0FFFFh
0x8FB8D9: fstp    st
0x8FB8DB: jnz     short loc_8FB8F3
0x8FB8DD: mov     ecx, [esi+8]
0x8FB8E0: mov     eax, [ecx]
0x8FB8E2: push    ebx
0x8FB8E3: push    edx
0x8FB8E4: mov     edx, [ebp+arg_4]
0x8FB8E7: push    edx
0x8FB8E8: mov     edx, [ebp+arg_0]
0x8FB8EB: push    edx
0x8FB8EC: call    dword ptr [eax+8]
0x8FB8EF: mov     [esi+0Ch], ax
0x8FB8F3: mov     si, [esi+0Ch]
0x8FB8F7: cmp     si, 0FFFFh
0x8FB8FC: jz      short loc_8FB92B
0x8FB8FE: mov     eax, [ebp+arg_C]
0x8FB901: mov     [ebx+20h], si
0x8FB905: add     dword ptr [eax], 30h ; '0'
0x8FB908: jmp     short loc_8FB92B
0x8FB90A: mov     esi, [esp+70h+var_5C]
0x8FB90E: fstp    st
0x8FB910: xor     eax, eax
0x8FB912: mov     ax, [esi+0Ch]
0x8FB916: cmp     ax, 0FFFFh
0x8FB91A: jz      short loc_8FB92B
0x8FB91C: mov     ecx, [esi+8]
0x8FB91F: mov     edx, [ecx]
0x8FB921: push    eax
0x8FB922: call    dword ptr [edx+10h]
0x8FB925: mov     word ptr [esi+0Ch], 0FFFFh
0x8FB92B: mov     ecx, large fs:2Ch
0x8FB932: mov     edx, ds:0BA9DE4h
0x8FB938: mov     eax, [ecx+edx*4]
0x8FB93B: mov     esi, [eax+1A4h]
0x8FB941: cmp     esi, [eax+1A8h]
0x8FB947: jnb     short loc_8FB96D
0x8FB949: mov     esi, eax
0x8FB94B: mov     ecx, [esi+1A4h]
0x8FB951: mov     dword ptr [ecx], offset aEt; "Et"
0x8FB957: rdtsc
0x8FB959: mov     [esp+70h+var_58], eax
0x8FB95D: mov     eax, [esp+70h+var_58]
0x8FB961: mov     [ecx+4], eax
0x8FB964: add     ecx, 0Ch
0x8FB967: mov     [esi+1A4h], ecx
0x8FB96D: pop     edi
0x8FB96E: pop     esi
0x8FB96F: pop     ebx
0x8FB970: mov     esp, ebp
0x8FB972: pop     ebp
0x8FB973: retn    10h
