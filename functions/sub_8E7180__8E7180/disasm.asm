0x8E7180: push    ebp
0x8E7181: mov     ebp, esp
0x8E7183: and     esp, 0FFFFFFF0h
0x8E7186: mov     eax, 3254h
0x8E718B: call    __alloca_probe
0x8E7190: mov     ecx, [ebp+arg_0]
0x8E7193: mov     eax, [ecx+4]
0x8E7196: push    ebx
0x8E7197: xor     edx, edx
0x8E7199: cmp     eax, edx
0x8E719B: push    esi
0x8E719C: push    edi
0x8E719D: mov     [esp+3260h+var_3244], edx
0x8E71A1: mov     [esp+3260h+var_1C], 7F7FFFFFh
0x8E71AC: jle     loc_8E76F2
0x8E71B2: mov     edi, [ebp+arg_4]
0x8E71B5: mov     esi, [ecx]
0x8E71B7: mov     esi, [esi+edx*4]
0x8E71BA: inc     edx
0x8E71BB: cmp     edx, eax
0x8E71BD: mov     [esp+3260h+var_3234], edx
0x8E71C1: jnz     short loc_8E71C8
0x8E71C3: mov     eax, [ecx+10h]
0x8E71C6: jmp     short loc_8E71CC
0x8E71C8: movzx   eax, word ptr [ecx+16h]
0x8E71CC: add     eax, esi
0x8E71CE: cmp     esi, eax
0x8E71D0: mov     [esp+3260h+var_3240], eax
0x8E71D4: jnb     loc_8E76E7
0x8E71DA: lea     ebx, [ebx+0]
0x8E71E0: mov     ecx, [esi+18h]
0x8E71E3: mov     eax, [esi+14h]
0x8E71E6: mov     [esp+3260h+var_1C], 7F7FFFFFh
0x8E71F1: mov     [esp+3260h+var_10], 0
0x8E71FC: lea     edx, [esp+3260h+var_3020]
0x8E7203: mov     [esp+3260h+var_3050], edx
0x8E720A: prefetchnta byte ptr [esi+80h]
0x8E7211: mov     [esp+3260h+var_3238], ecx
0x8E7215: movzx   ecx, byte ptr [esi]
0x8E7218: sub     ecx, 2
0x8E721B: mov     [esp+3260h+var_3230], eax
0x8E721F: mov     eax, [esi+10h]
0x8E7222: prefetchnta byte ptr [eax]
0x8E7225: jz      loc_8E758E
0x8E722B: sub     ecx, 2
0x8E722E: jz      short loc_8E7257
0x8E7230: sub     ecx, 2
0x8E7233: jnz     loc_8E766F
0x8E7239: mov     ecx, [esi+4]
0x8E723C: mov     eax, [ecx]
0x8E723E: lea     edx, [esp+3260h+var_3050]
0x8E7245: push    edx
0x8E7246: mov     edx, [esi+18h]
0x8E7249: push    edi
0x8E724A: push    edx
0x8E724B: mov     edx, [esi+14h]
0x8E724E: push    edx
0x8E724F: call    dword ptr [eax+14h]
0x8E7252: jmp     loc_8E766F
0x8E7257: mov     edx, [esi+14h]
0x8E725A: mov     ebx, [edx+8]
0x8E725D: mov     ecx, [esi+18h]
0x8E7260: mov     ecx, [ecx+8]
0x8E7263: mov     [esp+3260h+var_3220], edx
0x8E7267: mov     edx, [esi+18h]
0x8E726A: mov     [esp+3260h+var_3214], eax
0x8E726E: mov     [esp+3260h+var_321C], edx
0x8E7272: mov     [esp+3260h+var_3218], edi
0x8E7276: fld     dword ptr [edi+18h]
0x8E7279: movaps  xmm2, xmmword ptr [ecx+40h]
0x8E727D: fld     st
0x8E727F: fmul    dword ptr [ebx+5Ch]
0x8E7282: movaps  xmm3, xmmword ptr [ecx+50h]
0x8E7286: fxch    st(1)
0x8E7288: subps   xmm3, xmm2
0x8E728B: fmul    dword ptr [ecx+5Ch]
0x8E728E: mov     [esp+3260h+var_323C], ecx
0x8E7292: fld     st(1)
0x8E7294: fstp    [esp+3260h+var_3248]
0x8E7298: movss   xmm0, [esp+3260h+var_3248]
0x8E729E: fst     [esp+3260h+var_3248]
0x8E72A2: movss   xmm1, [esp+3260h+var_3248]
0x8E72A8: movaps  xmm2, xmm1
0x8E72AB: shufps  xmm2, xmm1, 0
0x8E72AF: movaps  xmm1, xmmword ptr [ebx+50h]
0x8E72B3: mulps   xmm2, xmm3
0x8E72B6: movaps  xmm3, xmmword ptr [ebx+40h]
0x8E72BA: subps   xmm3, xmm1
0x8E72BD: movaps  xmm1, xmm0
0x8E72C0: shufps  xmm1, xmm0, 0
0x8E72C4: mulps   xmm1, xmm3
0x8E72C7: addps   xmm1, xmm2
0x8E72CA: movaps  [esp+3260h+var_31C0], xmm1
0x8E72D2: fld     dword ptr [ecx+0A0h]
0x8E72D8: fmul    dword ptr [ecx+9Ch]
0x8E72DE: fmul    st, st(1)
0x8E72E0: fld     dword ptr [ebx+0A0h]
0x8E72E6: fmul    dword ptr [ebx+9Ch]
0x8E72EC: fmul    st, st(3)
0x8E72EE: faddp   st(1), st
0x8E72F0: fstp    dword ptr [esp+3260h+var_31C0+0Ch]
0x8E72F7: fstp    st
0x8E72F9: fstp    st
0x8E72FB: fld     dword ptr [edi+10h]
0x8E72FE: fld     dword ptr [esi+1Ch]
0x8E7301: fucompp
0x8E7303: fnstsw  ax
0x8E7305: test    ah, 44h
0x8E7308: jnp     loc_8E750A
0x8E730E: mov     eax, [edi+28h]
0x8E7311: mov     dl, [eax+10h]
0x8E7314: test    dl, dl
0x8E7316: jnz     short loc_8E735D
0x8E7318: mov     edx, [edi+14h]
0x8E731B: fld     dword ptr ds:0A3B888h
0x8E7321: xorps   xmm0, xmm0
0x8E7324: mov     [esi+1Ch], edx
0x8E7327: movaps  xmmword ptr [esi+20h], xmm0
0x8E732B: mov     dword ptr [esi+2Ch], 0FF7FFFFFh
0x8E7332: push    ecx
0x8E7333: fstp    [esp+3264h+var_31D0]
0x8E733A: push    ebx
0x8E733B: lea     ecx, [esp+3268h+var_3210]
0x8E733F: call    sub_8B1FF0
0x8E7344: lea     eax, [esp+3260h+var_3050]
0x8E734B: push    eax
0x8E734C: lea     eax, [esi+20h]
0x8E734F: push    eax
0x8E7350: lea     eax, [esi+30h]
0x8E7353: push    eax
0x8E7354: lea     eax, [esp+326Ch+var_3220]
0x8E7358: jmp     loc_8E765A
0x8E735D: mov     ecx, ds:0BA9DE4h
0x8E7363: mov     eax, large fs:2Ch
0x8E7369: mov     eax, [eax+ecx*4]
0x8E736C: mov     edx, [eax+1A4h]
0x8E7372: cmp     edx, [eax+1A8h]
0x8E7378: jnb     short loc_8E73AD
0x8E737A: mov     eax, large fs:2Ch
0x8E7380: mov     eax, [eax+ecx*4]
0x8E7383: mov     ecx, [eax+1A4h]
0x8E7389: mov     [esp+3260h+var_3248], eax
0x8E738D: mov     dword ptr [ecx], offset aTtrecalct0; "TtrecalcT0"
0x8E7393: rdtsc
0x8E7395: mov     [esp+3260h+var_322C], eax
0x8E7399: mov     edx, [esp+3260h+var_322C]
0x8E739D: mov     eax, [esp+3260h+var_3248]
0x8E73A1: mov     [ecx+4], edx
0x8E73A4: add     ecx, 0Ch
0x8E73A7: mov     [eax+1A4h], ecx
0x8E73AD: mov     edx, [esp+3260h+var_3218]
0x8E73B1: mov     eax, [edx+10h]
0x8E73B4: lea     ecx, [esp+3260h+var_3140]
0x8E73BB: push    ecx; int
0x8E73BC: mov     ecx, [esp+3264h+var_3220]
0x8E73C0: mov     edx, [ecx+8]
0x8E73C3: push    eax; float
0x8E73C4: add     edx, 40h ; '@'
0x8E73C7: push    edx; int
0x8E73C8: call    sub_8DD150
0x8E73CD: mov     ecx, [esp+326Ch+var_3218]
0x8E73D1: mov     edx, [ecx+10h]
0x8E73D4: lea     eax, [esp+326Ch+var_3100]
0x8E73DB: push    eax; int
0x8E73DC: mov     eax, [esp+3270h+var_321C]
0x8E73E0: mov     ecx, [eax+8]
0x8E73E3: push    edx; float
0x8E73E4: add     ecx, 40h ; '@'
0x8E73E7: push    ecx; int
0x8E73E8: call    sub_8DD150
0x8E73ED: mov     ecx, [esp+3278h+var_3214]
0x8E73F1: mov     [esp+3278h+var_31A4], ecx
0x8E73F8: lea     edx, [esp+3278h+var_3160]
0x8E73FF: mov     [esp+3278h+var_31B0], edx
0x8E7406: mov     edx, [esp+3278h+var_3218]
0x8E740A: mov     [esp+3278h+var_31A8], edx
0x8E7411: lea     eax, [esp+3278h+var_3150]
0x8E7418: mov     [esp+3278h+var_31AC], eax
0x8E741F: mov     eax, [esp+3278h+var_3220]
0x8E7423: mov     ecx, [eax+4]
0x8E7426: mov     edx, [eax]
0x8E7428: mov     [esp+3278h+var_315C], ecx
0x8E742F: mov     ecx, [esp+3278h+var_321C]
0x8E7433: mov     [esp+3278h+var_3160], edx
0x8E743A: mov     edx, [ecx+4]
0x8E743D: mov     [esp+3278h+var_3248], edx
0x8E7441: mov     edx, [ecx]
0x8E7443: mov     [esp+3278h+var_3150], edx
0x8E744A: mov     edx, [esp+3278h+var_3248]
0x8E744E: mov     [esp+3278h+var_3144], ecx
0x8E7455: lea     ecx, [esp+3278h+var_3100]
0x8E745C: add     esp, 18h
0x8E745F: mov     [esp+3260h+var_314C], edx
0x8E7466: mov     edx, ecx
0x8E7468: mov     [esp+3260h+var_3154], eax
0x8E746F: lea     eax, [esp+3260h+var_3140]
0x8E7476: push    edx
0x8E7477: mov     [esp+3264h+var_3148], ecx
0x8E747E: push    eax
0x8E747F: lea     ecx, [esp+3268h+var_31A0]
0x8E7486: mov     [esp+3268h+var_3158], eax
0x8E748D: call    sub_8B1FF0
0x8E7492: movzx   ecx, byte ptr [esi+1]
0x8E7496: mov     edx, [edi]
0x8E7498: imul    ecx, 34h ; '4'
0x8E749B: lea     eax, [esi+20h]
0x8E749E: push    eax
0x8E749F: lea     eax, [esi+30h]
0x8E74A2: push    eax
0x8E74A3: lea     eax, [esp+3268h+var_31B0]
0x8E74AA: push    eax
0x8E74AB: call    dword ptr [ecx+edx+16B8h]
0x8E74B2: mov     edx, large fs:2Ch
0x8E74B9: mov     ecx, ds:0BA9DE4h
0x8E74BF: mov     eax, [edx+ecx*4]
0x8E74C2: mov     edx, [eax+1A4h]
0x8E74C8: add     esp, 0Ch
0x8E74CB: cmp     edx, [eax+1A8h]
0x8E74D1: jnb     short loc_8E7506
0x8E74D3: mov     eax, large fs:2Ch
0x8E74D9: mov     ecx, [eax+ecx*4]
0x8E74DC: mov     [esp+3260h+var_3248], ecx
0x8E74E0: mov     ecx, [ecx+1A4h]
0x8E74E6: mov     dword ptr [ecx], offset aEt; "Et"
0x8E74EC: rdtsc
0x8E74EE: mov     [esp+3260h+var_3224], eax
0x8E74F2: mov     edx, [esp+3260h+var_3224]
0x8E74F6: mov     eax, [esp+3260h+var_3248]
0x8E74FA: mov     [ecx+4], edx
0x8E74FD: add     ecx, 0Ch
0x8E7500: mov     [eax+1A4h], ecx
0x8E7506: mov     ecx, [esp+3260h+var_323C]
0x8E750A: movaps  xmm1, [esp+3260h+var_31C0]
0x8E7512: movaps  xmm2, xmmword ptr [esi+20h]
0x8E7516: mov     edx, [edi+14h]
0x8E7519: movaps  xmm0, xmm1
0x8E751C: mulps   xmm0, xmm2
0x8E751F: movaps  xmm2, xmm1
0x8E7522: shufps  xmm2, xmm1, 0FFh
0x8E7526: movaps  xmm1, xmm0
0x8E7529: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8E752D: addss   xmm1, xmm2
0x8E7531: movaps  xmm2, xmm0
0x8E7534: shufps  xmm2, xmm0, 55h ; 'U'
0x8E7538: mov     [esi+1Ch], edx
0x8E753B: fld     dword ptr [esi+2Ch]
0x8E753E: lea     eax, [esp+3260h+var_3228]
0x8E7542: addss   xmm2, xmm0
0x8E7546: addps   xmm2, xmm1
0x8E7549: movss   dword ptr [eax], xmm2
0x8E754D: fsub    [esp+3260h+var_3228]
0x8E7551: fcom    dword ptr [edi+8]
0x8E7554: fnstsw  ax
0x8E7556: test    ah, 1
0x8E7559: jnz     loc_8E7332
0x8E755F: fstp    dword ptr [esi+2Ch]
0x8E7562: mov     al, [esi+2]
0x8E7565: test    al, al
0x8E7567: jz      short loc_8E7585
0x8E7569: movzx   ecx, byte ptr [esi+1]
0x8E756D: mov     eax, [esi+10h]
0x8E7570: imul    ecx, 34h ; '4'
0x8E7573: mov     edx, [edi]
0x8E7575: push    eax
0x8E7576: lea     eax, [esi+30h]
0x8E7579: push    eax
0x8E757A: push    esi
0x8E757B: call    dword ptr [ecx+edx+169Ch]
0x8E7582: add     esp, 0Ch
0x8E7585: inc     [esp+3260h+var_3244]
0x8E7589: jmp     loc_8E766F
0x8E758E: mov     ecx, [esi+14h]
0x8E7591: mov     edx, [esi+18h]
0x8E7594: mov     [esp+3260h+var_30C0], ecx
0x8E759B: mov     [esp+3260h+var_30BC], edx
0x8E75A2: mov     [esp+3260h+var_30B4], eax
0x8E75A9: mov     [esp+3260h+var_30B8], edi
0x8E75B0: fld     dword ptr [edi+18h]
0x8E75B3: mov     eax, [ecx+8]
0x8E75B6: fld     st
0x8E75B8: fmul    dword ptr [eax+5Ch]
0x8E75BB: mov     ecx, [edx+8]
0x8E75BE: movaps  xmm2, xmmword ptr [ecx+40h]
0x8E75C2: fxch    st(1)
0x8E75C4: fmul    dword ptr [ecx+5Ch]
0x8E75C7: movaps  xmm3, xmmword ptr [ecx+50h]
0x8E75CB: fld     st(1)
0x8E75CD: subps   xmm3, xmm2
0x8E75D0: fstp    [esp+3260h+var_3248]
0x8E75D4: push    ecx
0x8E75D5: movss   xmm0, [esp+3264h+var_3248]
0x8E75DB: fst     [esp+3264h+var_3248]
0x8E75DF: push    eax
0x8E75E0: movss   xmm1, [esp+3268h+var_3248]
0x8E75E6: movaps  xmm2, xmm1
0x8E75E9: shufps  xmm2, xmm1, 0
0x8E75ED: movaps  xmm1, xmmword ptr [eax+50h]
0x8E75F1: mulps   xmm2, xmm3
0x8E75F4: movaps  xmm3, xmmword ptr [eax+40h]
0x8E75F8: subps   xmm3, xmm1
0x8E75FB: movaps  xmm1, xmm0
0x8E75FE: shufps  xmm1, xmm0, 0
0x8E7602: mulps   xmm1, xmm3
0x8E7605: addps   xmm1, xmm2
0x8E7608: movaps  [esp+3268h+var_3060], xmm1
0x8E7610: fld     dword ptr [ecx+0A0h]
0x8E7616: fmul    dword ptr [ecx+9Ch]
0x8E761C: lea     ecx, [esp+3268h+var_30B0]
0x8E7623: fmul    st, st(1)
0x8E7625: fld     dword ptr [eax+0A0h]
0x8E762B: fmul    dword ptr [eax+9Ch]
0x8E7631: fmul    st, st(3)
0x8E7633: faddp   st(1), st
0x8E7635: fstp    dword ptr [esp+3268h+var_3060+0Ch]
0x8E763C: fstp    st
0x8E763E: fstp    st
0x8E7640: call    sub_8B1FF0
0x8E7645: lea     eax, [esp+3260h+var_3050]
0x8E764C: push    eax
0x8E764D: lea     eax, [esi+20h]
0x8E7650: push    0
0x8E7652: push    eax
0x8E7653: lea     eax, [esp+326Ch+var_30C0]
0x8E765A: movzx   ecx, byte ptr [esi+1]
0x8E765E: mov     edx, [edi]
0x8E7660: imul    ecx, 34h ; '4'
0x8E7663: push    esi
0x8E7664: push    eax
0x8E7665: call    dword ptr [ecx+edx+16BCh]
0x8E766C: add     esp, 14h
0x8E766F: mov     edx, ds:0BA7D98h
0x8E7675: mov     ecx, [edx+14h]
0x8E7678: mov     eax, [edx+28h]
0x8E767B: add     eax, ecx
0x8E767D: mov     ecx, [edx+8]
0x8E7680: cmp     ecx, eax
0x8E7682: jle     short loc_8E768C
0x8E7684: sub     ecx, eax
0x8E7686: mov     [esp+3260h+var_3248], ecx
0x8E768A: jnz     short loc_8E7693
0x8E768C: mov     dword ptr [edx+4], 1
0x8E7693: mov     ecx, ds:0BA7D98h
0x8E7699: cmp     dword ptr [ecx+4], 1
0x8E769D: jz      loc_8E772E
0x8E76A3: mov     eax, [esp+3260h+var_3050]
0x8E76AA: lea     edx, [esp+3260h+var_3020]
0x8E76B1: cmp     eax, edx
0x8E76B3: jz      short loc_8E76D0
0x8E76B5: mov     ecx, [esi+10h]
0x8E76B8: mov     eax, [ecx]
0x8E76BA: lea     edx, [esp+3260h+var_3050]
0x8E76C1: push    edx
0x8E76C2: mov     edx, [esp+3264h+var_3238]
0x8E76C6: push    edi
0x8E76C7: push    edx
0x8E76C8: mov     edx, [esp+326Ch+var_3230]
0x8E76CC: push    edx
0x8E76CD: call    dword ptr [eax+14h]
0x8E76D0: movzx   eax, byte ptr [esi+3]
0x8E76D4: add     esi, eax
0x8E76D6: cmp     esi, [esp+3260h+var_3240]
0x8E76DA: jb      loc_8E71E0
0x8E76E0: mov     edx, [esp+3260h+var_3234]
0x8E76E4: mov     ecx, [ebp+arg_0]
0x8E76E7: mov     eax, [ecx+4]
0x8E76EA: cmp     edx, eax
0x8E76EC: jl      loc_8E71B5
0x8E76F2: mov     edx, large fs:2Ch
0x8E76F9: mov     ecx, ds:0BA9DE4h
0x8E76FF: mov     eax, [edx+ecx*4]
0x8E7702: mov     esi, [eax+1A4h]
0x8E7708: cmp     esi, [eax+1A8h]
0x8E770E: jnb     short loc_8E772E
0x8E7710: fild    [esp+3260h+var_3244]
0x8E7714: mov     ecx, eax
0x8E7716: mov     eax, [ecx+1A4h]
0x8E771C: mov     dword ptr [eax], offset aMinumtim; "MinumTim"
0x8E7722: fstp    dword ptr [eax+4]
0x8E7725: add     eax, 8
0x8E7728: mov     [ecx+1A4h], eax
0x8E772E: pop     edi
0x8E772F: pop     esi
0x8E7730: pop     ebx
0x8E7731: mov     esp, ebp
0x8E7733: pop     ebp
0x8E7734: retn
