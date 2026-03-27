0x936050: push    ebp
0x936051: mov     ebp, esp
0x936053: and     esp, 0FFFFFFF0h
0x936056: sub     esp, 184h
0x93605C: push    ebx
0x93605D: mov     ebx, [ebp+arg_8]
0x936060: push    esi
0x936061: mov     esi, [ebp+arg_0]
0x936064: push    edi
0x936065: mov     edi, ecx
0x936067: mov     eax, ebx
0x936069: mov     ecx, [eax]
0x93606B: mov     edx, [eax+4]
0x93606E: mov     [esp+190h+var_170], ecx
0x936072: mov     ecx, [eax+8]
0x936075: mov     [esp+190h+var_168], ecx
0x936079: fld     [esp+190h+var_168]
0x93607D: fadd    dword ptr [ebx+24h]
0x936080: mov     [esp+190h+var_16C], edx
0x936084: mov     edx, [eax+0Ch]
0x936087: mov     eax, [edi]
0x936089: lea     ecx, [esp+190h+var_160]
0x93608D: fstp    [esp+190h+var_168]
0x936091: push    ecx
0x936092: mov     ecx, [ebp+arg_4]
0x936095: mov     [esp+194h+var_164], edx
0x936099: lea     edx, [esp+194h+var_170]
0x93609D: push    edx
0x93609E: push    ecx
0x93609F: push    esi
0x9360A0: mov     ecx, edi
0x9360A2: mov     dword ptr [esp+1A0h+var_160], offset off_A9BB8C
0x9360AA: mov     byte ptr [esp+1A0h+var_160+8], 0
0x9360AF: mov     dword ptr [esp+1A0h+anonymous_1+0Ch], 7F7FFFFFh
0x9360B7: mov     dword ptr [esp+1A0h+var_160+4], 7F7FFFFFh
0x9360BF: call    dword ptr [eax+0Ch]
0x9360C2: mov     al, byte ptr [esp+190h+var_160+8]
0x9360C6: test    al, al
0x9360C8: jz      loc_9363AB
0x9360CE: fld     dword ptr [esp+190h+anonymous_1+0Ch]
0x9360D2: movaps  xmm0, [esp+190h+anonymous_0]
0x9360D7: fcomp   dword ptr [ebx+8]
0x9360DA: mov     edx, [ebp+arg_4]
0x9360DD: movaps  [esp+190h+var_130], xmm0
0x9360E2: movaps  xmm0, [esp+190h+anonymous_1]
0x9360E7: mov     [esp+190h+var_110], esi
0x9360EE: fnstsw  ax
0x9360F0: mov     [esp+190h+var_10C], edx
0x9360F7: movaps  [esp+190h+var_120], xmm0
0x9360FC: test    ah, 5
0x9360FF: jp      short loc_936117
0x936101: mov     ecx, [ebp+arg_10]
0x936104: test    ecx, ecx
0x936106: jz      short loc_936117
0x936108: mov     eax, [ecx]
0x93610A: lea     edx, [esp+190h+var_130]
0x93610E: push    edx
0x93610F: call    dword ptr [eax+4]
0x936112: movaps  xmm0, [esp+190h+anonymous_1]
0x936117: movaps  xmm1, xmmword ptr [ebx+10h]
0x93611B: fld     dword ptr [esp+190h+anonymous_1+0Ch]
0x93611F: mulps   xmm0, xmm1
0x936122: movaps  [esp+190h+var_C0], xmm1
0x93612A: movaps  xmm1, xmm0
0x93612D: shufps  xmm1, xmm0, 55h ; 'U'
0x936131: movaps  xmm2, xmm0
0x936134: lea     eax, [esp+190h+var_178]
0x936138: addss   xmm1, xmm0
0x93613C: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x936140: addss   xmm2, xmm1
0x936144: movss   dword ptr [eax], xmm2
0x936148: fadd    [esp+190h+var_178]
0x93614C: fst     [esp+190h+var_17C]
0x936150: fcomp   dword ptr ds:0A2FAA8h
0x936156: fnstsw  ax
0x936158: test    ah, 41h
0x93615B: jz      loc_9363AB
0x936161: fld     [esp+190h+var_178]
0x936165: fadd    dword ptr [ebx+20h]
0x936168: fcomp   dword ptr ds:0A2FAA8h
0x93616E: fnstsw  ax
0x936170: test    ah, 1
0x936173: jz      loc_9363AB
0x936179: mov     eax, [ebx+28h]
0x93617C: fld     dword ptr [esp+190h+anonymous_1+0Ch]
0x936180: fcomp   dword ptr [eax]
0x936182: fld     dword ptr [esp+190h+anonymous_1+0Ch]
0x936186: fnstsw  ax
0x936188: test    ah, 41h
0x93618B: jp      short loc_9361EC
0x93618D: fcomp   dword ptr ds:0A2FAA8h
0x936193: mov     ecx, [ebp+arg_C]
0x936196: fnstsw  ax
0x936198: test    ah, 41h
0x93619B: jnz     short loc_9361CE
0x93619D: fld     dword ptr [esp+190h+anonymous_1+0Ch]
0x9361A1: fsub    [esp+190h+var_17C]
0x9361A5: fdivr   dword ptr [esp+190h+anonymous_1+0Ch]
0x9361A9: fcom    dword ptr [ecx+4]
0x9361AC: fnstsw  ax
0x9361AE: test    ah, 41h
0x9361B1: jz      loc_9363A9
0x9361B7: mov     edx, [ecx]
0x9361B9: fstp    dword ptr [esp+190h+var_120+0Ch]
0x9361BD: lea     eax, [esp+190h+var_130]
0x9361C1: push    eax
0x9361C2: call    dword ptr [edx+4]
0x9361C5: pop     edi
0x9361C6: pop     esi
0x9361C7: pop     ebx
0x9361C8: mov     esp, ebp
0x9361CA: pop     ebp
0x9361CB: retn    14h
0x9361CE: mov     edx, [ecx]
0x9361D0: lea     eax, [esp+190h+var_130]
0x9361D4: push    eax
0x9361D5: mov     dword ptr [esp+194h+var_120+0Ch], 0
0x9361E0: call    dword ptr [edx+4]
0x9361E3: pop     edi
0x9361E4: pop     esi
0x9361E5: pop     ebx
0x9361E6: mov     esp, ebp
0x9361E8: pop     ebp
0x9361E9: retn    14h
0x9361EC: fsub    [esp+190h+var_17C]
0x9361F0: mov     ecx, [esi+8]
0x9361F3: push    ecx
0x9361F4: lea     ecx, [esp+194h+var_B0]
0x9361FB: fdivr   dword ptr [esp+194h+anonymous_1+0Ch]
0x9361FF: mov     dword ptr [esp+194h+var_F4+4], offset off_A9BB8C
0x93620A: mov     byte ptr [esp+194h+var_F4+0Ch], 0
0x936212: mov     dword ptr [esp+194h+anonymous_3+0Ch], 7F7FFFFFh
0x93621D: mov     dword ptr [esp+194h+var_F4+8], 7F7FFFFFh
0x936228: fstp    dword ptr [esp+194h+var_120+0Ch]
0x93622F: call    sub_903FA0
0x936234: mov     ecx, [esi]
0x936236: lea     edx, [esp+190h+var_B0]
0x93623D: mov     dword ptr [esp+190h+var_F4], esi
0x936244: mov     dword ptr [esp+190h+var_104+0Ch], edx
0x93624B: mov     eax, [esi+4]
0x93624E: mov     dword ptr [esp+190h+var_104+8], eax
0x936255: mov     eax, [ebx+28h]
0x936258: mov     dword ptr [esp+190h+var_104+4], ecx
0x93625F: mov     eax, [eax+4]
0x936262: dec     eax
0x936263: mov     [esp+190h+var_17C], eax
0x936267: js      loc_936393
0x93626D: lea     ecx, [ecx+0]
0x936270: mov     edx, dword ptr [esp+190h+var_120+0Ch]
0x936274: mov     eax, [esi+8]
0x936277: mov     [esp+190h+var_174], edx
0x93627B: movss   xmm0, [esp+190h+var_174]
0x936281: mov     edx, [edi]
0x936283: movaps  xmm1, xmm0
0x936286: shufps  xmm1, xmm0, 0
0x93628A: mulps   xmm1, [esp+190h+var_C0]
0x936292: mov     byte ptr [esp+190h+var_F4+0Ch], 0
0x93629A: mov     dword ptr [esp+190h+anonymous_3+0Ch], 7F7FFFFFh
0x9362A5: mov     dword ptr [esp+190h+var_F4+8], 7F7FFFFFh
0x9362B0: movaps  xmm0, xmmword ptr [eax+30h]
0x9362B4: lea     eax, [esp+190h+var_F4+4]
0x9362BB: push    eax
0x9362BC: mov     eax, [ebp+arg_4]
0x9362BF: lea     ecx, [esp+194h+var_170]
0x9362C3: push    ecx
0x9362C4: push    eax
0x9362C5: lea     ecx, [esp+19Ch+var_104+4]
0x9362CC: push    ecx
0x9362CD: addps   xmm0, xmm1
0x9362D0: mov     ecx, edi
0x9362D2: movaps  [esp+1A0h+var_80], xmm0
0x9362DA: call    dword ptr [edx+0Ch]
0x9362DD: movaps  xmm1, xmmword ptr [ebx+10h]
0x9362E1: movaps  xmm2, [esp+190h+anonymous_3]
0x9362E9: movaps  [esp+190h+var_C0], xmm1
0x9362F1: movaps  xmm0, xmm2
0x9362F4: mulps   xmm0, xmm1
0x9362F7: movaps  xmm1, xmm0
0x9362FA: shufps  xmm1, xmm0, 55h ; 'U'
0x9362FE: movaps  xmm3, xmm0
0x936301: addss   xmm1, xmm0
0x936305: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x936309: lea     edx, [esp+190h+var_178]
0x93630D: addss   xmm3, xmm1
0x936311: movss   dword ptr [edx], xmm3
0x936315: fld     [esp+190h+var_178]
0x936319: fcomp   dword ptr ds:0A2FAA8h
0x93631F: fnstsw  ax
0x936321: test    ah, 1
0x936324: jz      loc_9363AB
0x93632A: fld     [esp+190h+var_178]
0x93632E: fchs
0x936330: fld     dword ptr [esp+190h+var_120+0Ch]
0x936334: fmul    st, st(1)
0x936336: fadd    dword ptr [esp+190h+anonymous_3+0Ch]
0x93633D: fcomp   st(1)
0x93633F: fnstsw  ax
0x936341: test    ah, 41h
0x936344: jz      short loc_9363A9
0x936346: fdivr   dword ptr [esp+190h+anonymous_3+0Ch]
0x93634D: mov     ecx, [ebp+arg_C]
0x936350: fadd    dword ptr [esp+190h+var_120+0Ch]
0x936354: fld     st
0x936356: fcomp   dword ptr [ecx+4]
0x936359: fnstsw  ax
0x93635B: test    ah, 41h
0x93635E: jz      short loc_9363A9
0x936360: mov     eax, [ebx+28h]
0x936363: movaps  xmm0, [esp+190h+anonymous_2]
0x93636B: movaps  [esp+190h+var_120], xmm2
0x936370: fstp    dword ptr [esp+190h+var_120+0Ch]
0x936374: fld     dword ptr [esp+190h+anonymous_3+0Ch]
0x93637B: movaps  [esp+190h+var_130], xmm0
0x936380: fcomp   dword ptr [eax]
0x936382: fnstsw  ax
0x936384: test    ah, 41h
0x936387: jnp     short loc_936396
0x936389: dec     [esp+190h+var_17C]
0x93638D: jns     loc_936270
0x936393: mov     ecx, [ebp+arg_C]
0x936396: mov     edx, [ecx]
0x936398: lea     eax, [esp+190h+var_130]
0x93639C: push    eax
0x93639D: call    dword ptr [edx+4]
0x9363A0: pop     edi
0x9363A1: pop     esi
0x9363A2: pop     ebx
0x9363A3: mov     esp, ebp
0x9363A5: pop     ebp
0x9363A6: retn    14h
0x9363A9: fstp    st
0x9363AB: pop     edi
0x9363AC: pop     esi
0x9363AD: pop     ebx
0x9363AE: mov     esp, ebp
0x9363B0: pop     ebp
0x9363B1: retn    14h
