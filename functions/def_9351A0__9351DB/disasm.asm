0x9351DB: mov     edx, [esp+arg_20]; jumptable 009351A0 default case
0x9351DF: cmp     edx, [esp+arg_58]
0x9351E3: jnz     loc_935943
0x9351E9: mov     edx, [esp+arg_10]
0x9351ED: mov     eax, [edx+19Ch]
0x9351F3: mov     ecx, [eax+0A8h]
0x9351F9: cmp     ecx, [eax+30h]
0x9351FC: jge     loc_935900
0x935202: mov     edx, [eax+64h]
0x935205: inc     ecx
0x935206: mov     [eax+0A8h], ecx
0x93520C: mov     ecx, [esp+arg_50]
0x935210: mov     [ecx], edx
0x935212: mov     [eax+64h], ecx
0x935215: jmp     loc_935914
0x93521A: mov     ecx, [ebp+10h]; jumptable 009351A0 case 2
0x93521D: mov     eax, [ecx]
0x93521F: lea     edx, [esp-8+arg_3B4]
0x935226: push    edx; int
0x935227: push    esi
0x935228: mov     [esp+arg_20], ebx; int
0x93522C: call    dword ptr [eax+28h]
0x93522F: mov     edx, [ebp+1Ch]
0x935232: mov     ecx, [esp+arg_14]
0x935236: mov     [esp+arg_2C], eax; int
0x93523A: mov     [esp+arg_30], esi; int
0x93523E: movzx   eax, byte ptr [ebx+1]
0x935242: imul    eax, 34h ; '4'
0x935245: mov     eax, [eax+ecx+16BCh]
0x93524C: push    edx
0x93524D: push    0
0x93524F: lea     ecx, [ebx+10h]
0x935252: push    ecx
0x935253: push    ebx
0x935254: push    edi
0x935255: call    eax
0x935257: mov     ebx, eax
0x935259: mov     eax, [esp+14h+arg_18]
0x93525D: mov     dl, bl
0x93525F: add     esp, 14h
0x935262: sub     dl, al
0x935264: mov     [eax+3], dl
0x935267: jmp     def_9351A0
0x93526C: mov     ecx, [edi]; jumptable 009351A0 case 3
0x93526E: mov     eax, [edi+4]
0x935271: mov     edx, [edi+8]
0x935274: movaps  xmm0, xmmword ptr [edi+60h]
0x935278: movaps  xmm1, xmmword ptr ds:0A9B570h
0x93527F: mov     [esp-8+arg_2D8], ecx; int
0x935286: lea     ecx, [edi+10h]
0x935289: mov     dword ptr [esp-8+arg_2D4], eax; char
0x935290: mov     eax, [edi+0Ch]
0x935293: push    ecx
0x935294: xorps   xmm0, xmm1
0x935297: lea     ecx, [esp-4+arg_2E4]
0x93529E: mov     [esp-4+arg_2DC], edx; int
0x9352A5: mov     [esp-4+arg_2E0], eax; int
0x9352AC: movaps  [esp-4+arg_334], xmm0; __int128
0x9352B4: call    sub_8B1F10
0x9352B9: mov     ecx, [ebp+10h]
0x9352BC: mov     edx, [ecx]
0x9352BE: lea     eax, [esp-8+arg_3B4]
0x9352C5: push    eax; int
0x9352C6: push    esi
0x9352C7: mov     [esp+arg_20], ebx; int
0x9352CB: call    dword ptr [edx+28h]
0x9352CE: mov     [esp+arg_2C], eax; int
0x9352D2: mov     eax, [ebp+1Ch]
0x9352D5: mov     ecx, [eax+3034h]
0x9352DB: mov     [esp+arg_30], esi; int
0x9352DF: movzx   edx, byte ptr [ebx+1]
0x9352E3: mov     esi, [eax]
0x9352E5: imul    edx, 34h ; '4'
0x9352E8: push    eax
0x9352E9: mov     [esp+4+arg_5C], ecx; float
0x9352ED: mov     ecx, [esp+4+arg_14]
0x9352F1: mov     ecx, [edx+ecx+16BCh]
0x9352F8: push    0
0x9352FA: lea     edx, [ebx+10h]
0x9352FD: push    edx
0x9352FE: lea     eax, [esp+0Ch+arg_2CC]
0x935305: push    ebx
0x935306: push    eax
0x935307: call    ecx
0x935309: mov     edx, [ebp+1Ch]
0x93530C: mov     ebx, eax
0x93530E: mov     eax, [esp+14h+arg_18]
0x935312: mov     cl, bl
0x935314: sub     cl, al
0x935316: mov     [eax+3], cl
0x935319: mov     eax, [edx]
0x93531B: add     esp, 14h
0x93531E: cmp     esi, eax
0x935320: mov     eax, edx
0x935322: jnb     short loc_93535E
0x935324: movaps  xmm0, xmmword ptr [esi+10h]
0x935328: movaps  xmm1, xmmword ptr [esi+10h]
0x93532C: shufps  xmm0, xmm0, 0FFh
0x935330: movaps  xmm2, xmm0
0x935333: shufps  xmm2, xmm0, 0
0x935337: movaps  xmm0, xmmword ptr [esi]
0x93533A: mulps   xmm2, xmm1
0x93533D: addps   xmm0, xmm2
0x935340: movaps  xmmword ptr [esi], xmm0
0x935343: movaps  xmm1, xmmword ptr [esi+10h]
0x935347: movaps  xmm0, xmmword ptr ds:0A9B570h
0x93534E: xorps   xmm1, xmm0
0x935351: movaps  xmmword ptr [esi+10h], xmm1
0x935355: mov     ecx, [eax]
0x935357: add     esi, 30h ; '0'
0x93535A: cmp     esi, ecx
0x93535C: jb      short loc_935324
0x93535E: fld     dword ptr [eax+3034h]
0x935364: fld     [esp+arg_5C]
0x935368: fucompp
0x93536A: fnstsw  ax
0x93536C: test    ah, 44h
0x93536F: jnp     def_9351A0
0x935375: mov     eax, [ebp+1Ch]
0x935378: movaps  xmm0, xmmword ptr ds:0A9B570h
0x93537F: movaps  xmm1, xmmword ptr [eax+20h]
0x935383: xorps   xmm1, xmm0
0x935386: movaps  xmmword ptr [eax+20h], xmm1
0x93538A: jmp     def_9351A0
0x93538F: mov     ecx, [edi]; jumptable 009351A0 case 5
0x935391: mov     eax, [edi+4]
0x935394: mov     edx, [edi+8]
0x935397: movaps  xmm0, xmmword ptr [edi+60h]
0x93539B: movaps  xmm1, xmmword ptr ds:0A9B570h
0x9353A2: mov     [esp-8+arg_128], ecx; int
0x9353A9: lea     ecx, [edi+10h]
0x9353AC: mov     [esp-8+arg_124], eax; int
0x9353B3: mov     eax, [edi+0Ch]
0x9353B6: push    ecx
0x9353B7: xorps   xmm0, xmm1
0x9353BA: lea     ecx, [esp-4+arg_134]
0x9353C1: mov     [esp-4+arg_12C], edx; int
0x9353C8: mov     [esp-4+arg_130], eax; int
0x9353CF: movaps  [esp-4+arg_184], xmm0; __int128
0x9353D7: call    sub_8B1F10
0x9353DC: mov     ecx, [esp-8+arg_12C]
0x9353E3: fld     dword ptr [ecx+10h]
0x9353E6: mov     [esp-8+arg_14], ebx; int
0x9353EA: fld     dword ptr [ebx+0Ch]
0x9353ED: fucompp
0x9353EF: fnstsw  ax
0x9353F1: test    ah, 44h
0x9353F4: jnp     loc_935607
0x9353FA: mov     eax, [ecx+28h]
0x9353FD: mov     dl, [eax+10h]
0x935400: test    dl, dl
0x935402: jnz     loc_9354F9
0x935408: mov     edx, [ecx+14h]
0x93540B: mov     [ebx+0Ch], edx
0x93540E: fld     dword ptr [eax+14h]
0x935411: fmul    dword ptr ds:0A3D65Ch
0x935417: xorps   xmm0, xmm0
0x93541A: movaps  xmmword ptr [ebx+10h], xmm0
0x93541E: fst     dword ptr [ebx+1Ch]
0x935421: mov     ecx, [ebp+10h]
0x935424: fstp    dword ptr [esp-8+arg_16C+8]
0x93542B: mov     edx, [ecx]
0x93542D: lea     eax, [esp-8+arg_3B4]
0x935434: push    eax; int
0x935435: push    esi
0x935436: call    dword ptr [edx+28h]
0x935439: mov     [esp+arg_2C], eax; int
0x93543D: mov     eax, [ebp+1Ch]
0x935440: mov     ecx, [eax+3034h]
0x935446: mov     [esp+arg_30], esi; int
0x93544A: movzx   edx, byte ptr [ebx+1]
0x93544E: mov     esi, [eax]
0x935450: imul    edx, 34h ; '4'
0x935453: push    eax
0x935454: mov     [esp+4+arg_6C], ecx; int
0x935458: mov     ecx, [esp+4+arg_14]
0x93545C: mov     ecx, [edx+ecx+16BCh]
0x935463: lea     eax, [ebx+10h]
0x935466: push    eax
0x935467: lea     edx, [ebx+20h]
0x93546A: push    edx
0x93546B: lea     eax, [esp+0Ch+arg_11C]
0x935472: push    ebx
0x935473: push    eax
0x935474: call    ecx
0x935476: mov     edx, [ebp+1Ch]
0x935479: mov     ebx, eax
0x93547B: mov     eax, [esp+14h+arg_C]
0x93547F: mov     cl, bl
0x935481: sub     cl, al
0x935483: mov     [eax+3], cl
0x935486: mov     eax, [edx]
0x935488: add     esp, 14h
0x93548B: cmp     esi, eax
0x93548D: mov     ecx, edx
0x93548F: jnb     short loc_9354CB
0x935491: movaps  xmm0, xmmword ptr [esi+10h]
0x935495: movaps  xmm1, xmmword ptr [esi+10h]
0x935499: shufps  xmm0, xmm0, 0FFh
0x93549D: movaps  xmm2, xmm0
0x9354A0: shufps  xmm2, xmm0, 0
0x9354A4: movaps  xmm0, xmmword ptr [esi]
0x9354A7: mulps   xmm2, xmm1
0x9354AA: addps   xmm0, xmm2
0x9354AD: movaps  xmmword ptr [esi], xmm0
0x9354B0: movaps  xmm1, xmmword ptr [esi+10h]
0x9354B4: movaps  xmm0, xmmword ptr ds:0A9B570h
0x9354BB: xorps   xmm1, xmm0
0x9354BE: movaps  xmmword ptr [esi+10h], xmm1
0x9354C2: mov     eax, [ecx]
0x9354C4: add     esi, 30h ; '0'
0x9354C7: cmp     esi, eax
0x9354C9: jb      short loc_935491
0x9354CB: fld     dword ptr [ecx+3034h]
0x9354D1: fld     [esp+arg_6C]
0x9354D5: fucompp
0x9354D7: fnstsw  ax
0x9354D9: test    ah, 44h
0x9354DC: jnp     def_9351A0
0x9354E2: movaps  xmm0, xmmword ptr ds:0A9B570h
0x9354E9: movaps  xmm1, xmmword ptr [ecx+20h]
0x9354ED: xorps   xmm1, xmm0
0x9354F0: movaps  xmmword ptr [ecx+20h], xmm1
0x9354F4: jmp     def_9351A0
0x9354F9: mov     ecx, ds:0BA9DE4h
0x9354FF: mov     eax, large fs:2Ch
0x935505: mov     eax, [eax+ecx*4]
0x935508: mov     edx, [eax+1A4h]
0x93550E: cmp     edx, [eax+1A8h]
0x935514: jnb     short loc_935540
0x935516: mov     eax, [esp-8+arg_18]
0x93551A: mov     ecx, [eax+1A4h]
0x935520: mov     dword ptr [ecx], offset aTtrecalct0; "TtrecalcT0"
0x935526: rdtsc
0x935528: mov     [esp-8+arg_80], eax; int
0x93552C: mov     edx, [esp-8+arg_80]
0x935530: mov     eax, [esp-8+arg_18]
0x935534: mov     [ecx+4], edx
0x935537: add     ecx, 0Ch
0x93553A: mov     [eax+1A4h], ecx
0x935540: mov     al, byte ptr [esp-8+arg_24+3]
0x935544: test    al, al
0x935546: jnz     short loc_935572
0x935548: lea     ecx, [esp-8+arg_D4]
0x93554F: push    ecx
0x935550: lea     edi, [esp-4+arg_194]
0x935557: lea     esi, [esp-4+arg_124]
0x93555E: mov     byte ptr [esp-4+arg_24+3], 1
0x935563: call    sub_933FC0
0x935568: mov     esi, [esp-4+arg_20]
0x93556C: mov     edi, [ebp+0Ch]
0x93556F: add     esp, 4
0x935572: mov     ecx, [ebp+10h]
0x935575: mov     edx, [ecx]
0x935577: lea     eax, [esp-8+arg_3B4]
0x93557E: push    eax; int
0x93557F: push    esi
0x935580: call    dword ptr [edx+28h]
0x935583: mov     dword ptr [esp+arg_184+8], eax
0x93558A: mov     dword ptr [esp+arg_184+0Ch], esi
0x935591: movzx   ecx, byte ptr [ebx+1]
0x935595: imul    ecx, 34h ; '4'
0x935598: lea     edx, [ebx+10h]
0x93559B: push    edx
0x93559C: lea     eax, [ebx+20h]
0x93559F: push    eax
0x9355A0: mov     eax, [esp+8+arg_14]
0x9355A4: lea     edx, [esp+8+arg_CC]
0x9355AB: push    edx
0x9355AC: call    dword ptr [ecx+eax+16B8h]
0x9355B3: mov     ecx, large fs:2Ch
0x9355BA: mov     edx, ds:0BA9DE4h
0x9355C0: mov     eax, [ecx+edx*4]
0x9355C3: mov     ecx, [eax+1A4h]
0x9355C9: mov     edx, [eax+1A8h]
0x9355CF: add     esp, 0Ch
0x9355D2: cmp     ecx, edx
0x9355D4: jnb     short loc_935600
0x9355D6: mov     edx, [esp+arg_10]
0x9355DA: mov     ecx, [edx+1A4h]
0x9355E0: mov     dword ptr [ecx], offset aEt; "Et"
0x9355E6: rdtsc
0x9355E8: mov     dword ptr [esp+arg_64], eax; char
0x9355EC: mov     eax, dword ptr [esp+arg_64]
0x9355F0: mov     edx, [esp+arg_10]
0x9355F4: mov     [ecx+4], eax
0x9355F7: add     ecx, 0Ch
0x9355FA: mov     [edx+1A4h], ecx
0x935600: mov     ecx, [esp+arg_124]
0x935607: mov     eax, [ecx+14h]
0x93560A: movaps  xmm2, xmmword ptr [ebx+10h]
0x93560E: mov     [ebx+0Ch], eax
0x935611: fld     dword ptr [ebx+1Ch]
0x935614: movaps  xmm1, [esp-8+arg_184]
0x93561C: mov     edx, [esp-8+arg_12C]
0x935623: movaps  xmm0, xmm1
0x935626: mulps   xmm0, xmm2
0x935629: movaps  xmm2, xmm1
0x93562C: shufps  xmm2, xmm1, 0FFh
0x935630: movaps  xmm1, xmm0
0x935633: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x935637: addss   xmm1, xmm2
0x93563B: movaps  xmm2, xmm0
0x93563E: shufps  xmm2, xmm0, 55h ; 'U'
0x935642: addss   xmm2, xmm0
0x935646: lea     ecx, [esp-8+arg_7C]
0x93564A: addps   xmm2, xmm1
0x93564D: movss   dword ptr [ecx], xmm2
0x935651: fsub    [esp-8+arg_7C]
0x935655: fld     st
0x935657: fcomp   dword ptr [edx+8]
0x93565A: fnstsw  ax
0x93565C: test    ah, 1
0x93565F: jnz     loc_935421
0x935665: fstp    dword ptr [ebx+1Ch]
0x935668: mov     al, [ebx+2]
0x93566B: test    al, al
0x93566D: jnz     short loc_93567E
0x93566F: movzx   eax, byte ptr [ebx+3]
0x935673: add     ebx, eax
0x935675: inc     [esp+arg_44]
0x935679: jmp     def_9351A0
0x93567E: movzx   ecx, byte ptr [ebx+1]
0x935682: mov     edx, [esp+arg_14]
0x935686: imul    ecx, 34h ; '4'
0x935689: mov     eax, [ecx+edx+169Ch]
0x935690: mov     ecx, [esp+arg_128]
0x935697: push    ecx
0x935698: lea     edx, [ebx+20h]
0x93569B: push    edx
0x93569C: push    ebx
0x93569D: call    eax
0x93569F: mov     ebx, eax
0x9356A1: mov     eax, [esp+0Ch+arg_C]
0x9356A5: mov     cl, bl
0x9356A7: sub     cl, al
0x9356A9: mov     [eax+3], cl
0x9356AC: mov     eax, [esp+0Ch+arg_44]
0x9356B0: add     esp, 0Ch
0x9356B3: inc     eax
0x9356B4: mov     [esp+arg_44], eax; int
0x9356B8: jmp     def_9351A0
0x9356BD: mov     ecx, [edi+8]; jumptable 009351A0 case 4
0x9356C0: fld     dword ptr [ecx+10h]
0x9356C3: mov     [esp-8+arg_14], ebx; int
0x9356C7: fld     dword ptr [ebx+0Ch]
0x9356CA: fucompp
0x9356CC: fnstsw  ax
0x9356CE: test    ah, 44h
0x9356D1: jnp     loc_935850
0x9356D7: mov     eax, [ecx+28h]
0x9356DA: mov     dl, [eax+10h]
0x9356DD: test    dl, dl
0x9356DF: jnz     short loc_93574D
0x9356E1: mov     ecx, [ecx+14h]
0x9356E4: mov     [ebx+0Ch], ecx
0x9356E7: fld     dword ptr [eax+14h]
0x9356EA: fmul    dword ptr ds:0A2FAACh
0x9356F0: xorps   xmm0, xmm0
0x9356F3: movaps  xmmword ptr [ebx+10h], xmm0
0x9356F7: fst     dword ptr [ebx+1Ch]
0x9356FA: mov     ecx, [ebp+10h]
0x9356FD: fstp    dword ptr [edi+50h]
0x935700: mov     edx, [ecx]
0x935702: lea     eax, [esp-8+arg_3B4]
0x935709: push    eax; int
0x93570A: push    esi
0x93570B: call    dword ptr [edx+28h]
0x93570E: mov     edx, [esp+arg_14]
0x935712: mov     [esp+arg_2C], eax; int
0x935716: mov     [esp+arg_30], esi; int
0x93571A: movzx   ecx, byte ptr [ebx+1]
0x93571E: imul    ecx, 34h ; '4'
0x935721: mov     eax, [ecx+edx+16BCh]
0x935728: mov     ecx, [ebp+1Ch]
0x93572B: push    ecx
0x93572C: lea     ecx, [ebx+10h]
0x93572F: push    ecx
0x935730: lea     edx, [ebx+20h]
0x935733: push    edx
0x935734: push    ebx
0x935735: push    edi
0x935736: call    eax
0x935738: mov     ebx, eax
0x93573A: mov     eax, [esp+14h+arg_C]
0x93573E: mov     cl, bl
0x935740: add     esp, 14h
0x935743: sub     cl, al
0x935745: mov     [eax+3], cl
0x935748: jmp     def_9351A0
0x93574D: mov     edx, large fs:2Ch
0x935754: mov     eax, ds:0BA9DE4h
0x935759: mov     eax, [edx+eax*4]
0x93575C: mov     ecx, [eax+1A4h]
0x935762: cmp     ecx, [eax+1A8h]
0x935768: jnb     short loc_935794
0x93576A: mov     edx, [esp-8+arg_18]
0x93576E: mov     ecx, [edx+1A4h]
0x935774: mov     dword ptr [ecx], offset aTtrecalct0; "TtrecalcT0"
0x93577A: rdtsc
0x93577C: mov     [esp-8+arg_68], eax
0x935780: mov     eax, [esp-8+arg_68]
0x935784: mov     edx, [esp-8+arg_18]
0x935788: mov     [ecx+4], eax
0x93578B: add     ecx, 0Ch
0x93578E: mov     [edx+1A4h], ecx
0x935794: mov     al, byte ptr [esp-8+arg_24+2]
0x935798: test    al, al
0x93579A: jnz     short loc_9357C2
0x93579C: mov     esi, [ebp+0Ch]
0x93579F: lea     eax, [esp-8+arg_84]
0x9357A6: push    eax
0x9357A7: lea     edi, [esp-4+arg_234]
0x9357AE: mov     byte ptr [esp-4+arg_24+2], 1
0x9357B3: call    sub_933FC0
0x9357B8: mov     esi, [esp-4+arg_20]
0x9357BC: mov     edi, [ebp+0Ch]
0x9357BF: add     esp, 4
0x9357C2: mov     ecx, [ebp+10h]
0x9357C5: mov     edx, [ecx]
0x9357C7: lea     eax, [esp-8+arg_3B4]
0x9357CE: push    eax; int
0x9357CF: push    esi
0x9357D0: call    dword ptr [edx+28h]
0x9357D3: mov     [esp+arg_23C], eax; int
0x9357DA: mov     [esp+arg_240], esi; int
0x9357E1: movzx   ecx, byte ptr [ebx+1]
0x9357E5: imul    ecx, 34h ; '4'
0x9357E8: lea     edx, [ebx+10h]
0x9357EB: push    edx
0x9357EC: lea     eax, [ebx+20h]
0x9357EF: push    eax
0x9357F0: mov     eax, [esp+8+arg_14]
0x9357F4: lea     edx, [esp+8+arg_7C]
0x9357FB: push    edx
0x9357FC: call    dword ptr [ecx+eax+16B8h]
0x935803: mov     ecx, large fs:2Ch
0x93580A: mov     edx, ds:0BA9DE4h
0x935810: mov     eax, [ecx+edx*4]
0x935813: mov     ecx, [eax+1A4h]
0x935819: mov     edx, [eax+1A8h]
0x93581F: add     esp, 0Ch
0x935822: cmp     ecx, edx
0x935824: jnb     short loc_935850
0x935826: mov     edx, [esp+arg_10]
0x93582A: mov     ecx, [edx+1A4h]
0x935830: mov     dword ptr [ecx], offset aEt; "Et"
0x935836: rdtsc
0x935838: mov     [esp+arg_68], eax; int
0x93583C: mov     eax, [esp+arg_68]
0x935840: mov     edx, [esp+arg_10]
0x935844: mov     [ecx+4], eax
0x935847: add     ecx, 0Ch
0x93584A: mov     [edx+1A4h], ecx
0x935850: mov     eax, [edi+8]
0x935853: mov     ecx, [eax+14h]
0x935856: movaps  xmm2, xmmword ptr [ebx+10h]
0x93585A: mov     [ebx+0Ch], ecx
0x93585D: fld     dword ptr [ebx+1Ch]
0x935860: movaps  xmm1, xmmword ptr [edi+60h]
0x935864: mov     eax, [edi+8]
0x935867: movaps  xmm0, xmm1
0x93586A: mulps   xmm0, xmm2
0x93586D: movaps  xmm2, xmm1
0x935870: shufps  xmm2, xmm1, 0FFh
0x935874: movaps  xmm1, xmm0
0x935877: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x93587B: addss   xmm1, xmm2
0x93587F: movaps  xmm2, xmm0
0x935882: shufps  xmm2, xmm0, 55h ; 'U'
0x935886: addss   xmm2, xmm0
0x93588A: lea     edx, [esp-8+arg_50]
0x93588E: addps   xmm2, xmm1
0x935891: movss   dword ptr [edx], xmm2
0x935895: fsub    [esp-8+arg_50]
0x935899: fcom    dword ptr [eax+8]
0x93589C: fnstsw  ax
0x93589E: test    ah, 1
0x9358A1: jnz     loc_9356FA
0x9358A7: fstp    dword ptr [ebx+1Ch]
0x9358AA: mov     al, [ebx+2]
0x9358AD: test    al, al
0x9358AF: jnz     short loc_9358C5
0x9358B1: movzx   ecx, byte ptr [ebx+3]
0x9358B5: mov     eax, [esp+arg_44]
0x9358B9: add     ebx, ecx
0x9358BB: inc     eax
0x9358BC: mov     [esp+arg_44], eax; int
0x9358C0: jmp     def_9351A0
0x9358C5: movzx   edx, byte ptr [ebx+1]
0x9358C9: mov     eax, [esp+arg_14]
0x9358CD: imul    edx, 34h ; '4'
0x9358D0: mov     ecx, [edi+0Ch]
0x9358D3: mov     eax, [edx+eax+169Ch]
0x9358DA: push    ecx
0x9358DB: lea     edx, [ebx+20h]
0x9358DE: push    edx
0x9358DF: push    ebx
0x9358E0: call    eax
0x9358E2: mov     ebx, eax
0x9358E4: mov     eax, [esp+0Ch+arg_C]
0x9358E8: mov     cl, bl
0x9358EA: sub     cl, al
0x9358EC: mov     [eax+3], cl
0x9358EF: mov     eax, [esp+0Ch+arg_44]
0x9358F3: add     esp, 0Ch
0x9358F6: inc     eax
0x9358F7: mov     [esp+arg_44], eax; int
0x9358FB: jmp     def_9351A0
0x935900: mov     ecx, ds:0BA7D98h
0x935906: mov     edx, [esp+arg_50]
0x93590A: mov     eax, [ecx]
0x93590C: push    1Ch
0x93590E: push    0Ch
0x935910: push    edx
0x935911: call    dword ptr [eax+1Ch]
0x935914: mov     esi, [ebp+8]
0x935917: mov     ecx, [esp+arg_3C]
0x93591B: cmp     ecx, [esi+4]
0x93591E: jge     loc_935A32
0x935924: mov     eax, [esi]
0x935926: mov     eax, [eax+ecx*4]
0x935929: mov     esi, [eax]
0x93592B: lea     edx, [eax+10h]
0x93592E: mov     [esp+arg_50], eax
0x935932: lea     eax, [esi+eax+10h]
0x935936: inc     ecx
0x935937: mov     [esp+arg_20], edx
0x93593B: mov     [esp+arg_58], eax
0x93593F: mov     [esp+arg_3C], ecx
0x935943: mov     esi, [esp+arg_28]
0x935947: movzx   ecx, byte ptr [edx+3]
0x93594B: mov     eax, ebx
0x93594D: sub     eax, esi
0x93594F: sub     eax, 10h
0x935952: add     ecx, eax
0x935954: cmp     ecx, 1A0h
0x93595A: jle     loc_934ED0
0x935960: mov     ebx, [ebp+8]
0x935963: mov     edx, esi
0x935965: mov     [edx], eax
0x935967: mov     edx, [esp+arg_3C]
0x93596B: cmp     [esp+arg_40], edx
0x93596F: jl      short loc_9359DB
0x935971: mov     eax, [ebx+4]
0x935974: lea     ecx, [eax+1]
0x935977: sub     eax, edx
0x935979: mov     [esp+arg_18], eax
0x93597D: mov     eax, [ebx+8]
0x935980: and     eax, 3FFFFFFFh
0x935985: cmp     eax, ecx
0x935987: mov     [esp+arg_C], ecx
0x93598B: jge     short loc_9359A1
0x93598D: add     eax, eax
0x93598F: cmp     ecx, eax
0x935991: jl      short loc_935995
0x935993: mov     eax, ecx
0x935995: push    4
0x935997: push    eax
0x935998: push    ebx
0x935999: call    sub_8A6E40
0x93599E: add     esp, 0Ch
0x9359A1: mov     ecx, [esp+arg_3C]
0x9359A5: mov     eax, [ebx]
0x9359A7: lea     edx, [eax+ecx*4]
0x9359AA: mov     ecx, [esp+arg_18]
0x9359AE: dec     ecx
0x9359AF: lea     esi, [edx+4]
0x9359B2: js      short loc_9359CB
0x9359B4: lea     eax, [esi+ecx*4]
0x9359B7: sub     edx, esi
0x9359B9: inc     ecx
0x9359BA: lea     ebx, [ebx+0]
0x9359C0: mov     esi, [edx+eax]
0x9359C3: mov     [eax], esi
0x9359C5: sub     eax, 4
0x9359C8: dec     ecx
0x9359C9: jnz     short loc_9359C0
0x9359CB: mov     eax, [esp+arg_3C]
0x9359CF: mov     edx, [esp+arg_C]
0x9359D3: inc     eax
0x9359D4: mov     [ebx+4], edx
0x9359D7: mov     [esp+arg_3C], eax
0x9359DB: mov     eax, [esp+arg_40]
0x9359DF: mov     ecx, [ebx]
0x9359E1: mov     edx, [esp+arg_28]
0x9359E5: mov     [ecx+eax*4], edx
0x9359E8: inc     eax
0x9359E9: mov     [esp+arg_40], eax
0x9359ED: mov     eax, [esp+arg_10]
0x9359F1: mov     eax, [eax+19Ch]
0x9359F7: mov     ecx, [eax+64h]
0x9359FA: test    ecx, ecx
0x9359FC: jz      short loc_935A0D
0x9359FE: dec     dword ptr [eax+0A8h]
0x935A04: mov     edx, [ecx]
0x935A06: mov     [eax+64h], edx
0x935A09: mov     eax, ecx
0x935A0B: jmp     short loc_935A1C
0x935A0D: mov     ecx, ds:0BA7D98h
0x935A13: mov     eax, [ecx]
0x935A15: push    1Ch
0x935A17: push    0Ch
0x935A19: call    dword ptr [eax+18h]
0x935A1C: test    eax, eax
0x935A1E: jz      short loc_935A2B
0x935A20: mov     dword ptr [eax], 0
0x935A26: jmp     loc_934EC1
0x935A2B: xor     eax, eax
0x935A2D: jmp     loc_934EC1
0x935A32: mov     ecx, [esp+arg_28]
0x935A36: sub     ebx, ecx
0x935A38: sub     ebx, 10h
0x935A3B: mov     [ecx], ebx
0x935A3D: mov     ebx, [esp+arg_40]
0x935A41: mov     eax, [esi+8]
0x935A44: inc     ebx
0x935A45: and     eax, 3FFFFFFFh
0x935A4A: cmp     eax, ebx
0x935A4C: jge     short loc_935A66
0x935A4E: add     eax, eax
0x935A50: cmp     ebx, eax
0x935A52: jl      short loc_935A56
0x935A54: mov     eax, ebx
0x935A56: push    4
0x935A58: push    eax
0x935A59: push    esi
0x935A5A: call    sub_8A6E40
0x935A5F: mov     ecx, [esp+0Ch+arg_28]
0x935A63: add     esp, 0Ch
0x935A66: mov     edx, [esi]
0x935A68: mov     eax, [esp+arg_40]
0x935A6C: mov     [esi+4], ebx
0x935A6F: mov     esi, large fs:2Ch
0x935A76: mov     ebx, ds:0BA9DE4h
0x935A7C: mov     [edx+eax*4], ecx
0x935A7F: mov     eax, [esi+ebx*4]
0x935A82: mov     ecx, [eax+1A4h]
0x935A88: cmp     ecx, [eax+1A8h]
0x935A8E: jnb     short loc_935AAE
0x935A90: fild    [esp+arg_44]
0x935A94: mov     ecx, eax
0x935A96: mov     eax, [ecx+1A4h]
0x935A9C: mov     dword ptr [eax], offset aMinumtim; "MinumTim"
0x935AA2: fstp    dword ptr [eax+4]
0x935AA5: add     eax, 8
0x935AA8: mov     [ecx+1A4h], eax
0x935AAE: mov     edx, [esp+arg_38]
0x935AB2: mov     ecx, [ebp+1Ch]
0x935AB5: mov     [edi+4], edx
0x935AB8: mov     eax, [ecx+3040h]
0x935ABE: test    eax, eax
0x935AC0: jz      loc_935B70
0x935AC6: lea     edx, [eax+408h]
0x935ACC: cmp     [eax], edx
0x935ACE: jbe     loc_935B81
0x935AD4: mov     eax, [esi+ebx*4]
0x935AD7: mov     edx, [eax+1A4h]
0x935ADD: cmp     edx, [eax+1A8h]
0x935AE3: jnb     short loc_935B12
0x935AE5: mov     eax, [esp+arg_10]
0x935AE9: mov     ecx, [eax+1A4h]
0x935AEF: mov     dword ptr [ecx], offset aTtwelding; "TtWelding"
0x935AF5: rdtsc
0x935AF7: mov     [esp+arg_48], eax
0x935AFB: mov     edx, [esp+arg_48]
0x935AFF: mov     eax, [esp+arg_10]
0x935B03: mov     [ecx+4], edx
0x935B06: add     ecx, 0Ch
0x935B09: mov     [eax+1A4h], ecx
0x935B0F: mov     ecx, [ebp+1Ch]
0x935B12: push    ecx
0x935B13: mov     ecx, [ebp+10h]
0x935B16: push    ecx
0x935B17: push    edi
0x935B18: call    sub_934300
0x935B1D: mov     eax, [esi+ebx*4]
0x935B20: mov     edx, [eax+1A4h]
0x935B26: mov     ecx, [eax+1A8h]
0x935B2C: add     esp, 0Ch
0x935B2F: cmp     edx, ecx
0x935B31: jnb     short loc_935B6D
0x935B33: mov     esi, [esp+arg_10]
0x935B37: mov     ecx, [esi+1A4h]
0x935B3D: mov     dword ptr [ecx], offset aEt; "Et"
0x935B43: rdtsc
0x935B45: mov     [esp+arg_48], eax
0x935B49: mov     eax, [esp+arg_48]
0x935B4D: mov     edx, [ebp+1Ch]
0x935B50: mov     [ecx+4], eax
0x935B53: add     ecx, 0Ch
0x935B56: mov     [esi+1A4h], ecx
0x935B5C: mov     ecx, [esp+arg_4C]
0x935B60: mov     [edx+3040h], ecx
0x935B66: pop     edi
0x935B67: pop     esi
0x935B68: pop     ebx
0x935B69: mov     esp, ebp
0x935B6B: pop     ebp
0x935B6C: retn
0x935B6D: mov     ecx, [ebp+1Ch]
0x935B70: mov     eax, [esp+arg_4C]
0x935B74: mov     [ecx+3040h], eax
0x935B7A: pop     edi
0x935B7B: pop     esi
0x935B7C: pop     ebx
0x935B7D: mov     esp, ebp
0x935B7F: pop     ebp
0x935B80: retn
0x935B81: mov     edx, [esp+arg_4C]
0x935B85: pop     edi
0x935B86: pop     esi
0x935B87: mov     [ecx+3040h], edx
0x935B8D: pop     ebx
0x935B8E: mov     esp, ebp
0x935B90: pop     ebp
0x935B91: retn
