0x938190: push    ebp
0x938191: mov     ebp, esp
0x938193: and     esp, 0FFFFFFF0h
0x938196: sub     esp, 44h
0x938199: push    ebx
0x93819A: push    esi
0x93819B: mov     esi, [ebp+arg_8]
0x93819E: push    edi
0x93819F: mov     edi, ecx
0x9381A1: mov     [esp+50h+var_30], 8
0x9381A9: lea     esp, [esp+0]
0x9381B0: fld     dword ptr [edi+0E0h]
0x9381B6: xor     ecx, ecx
0x9381B8: fcom    dword ptr [edi+0E0h]
0x9381BE: mov     [esp+50h+var_34], ecx
0x9381C2: fnstsw  ax
0x9381C4: test    ah, 5
0x9381C7: jp      short loc_9381D5
0x9381C9: fstp    st
0x9381CB: mov     [esp+50h+var_34], ecx
0x9381CF: fld     dword ptr [edi+0E0h]
0x9381D5: fcom    dword ptr [edi+0E4h]
0x9381DB: fnstsw  ax
0x9381DD: test    ah, 5
0x9381E0: jp      short loc_9381F2
0x9381E2: fstp    st
0x9381E4: mov     [esp+50h+var_34], 1
0x9381EC: fld     dword ptr [edi+0E4h]
0x9381F2: fcom    dword ptr [edi+0E8h]
0x9381F8: fnstsw  ax
0x9381FA: test    ah, 5
0x9381FD: jp      short loc_93820F
0x9381FF: fstp    st
0x938201: mov     [esp+50h+var_34], 2
0x938209: fld     dword ptr [edi+0E8h]
0x93820F: fcom    dword ptr [edi+0F0h]
0x938215: fnstsw  ax
0x938217: test    ah, 5
0x93821A: jp      short loc_93822C
0x93821C: fstp    st
0x93821E: mov     [esp+50h+var_34], 4
0x938226: fld     dword ptr [edi+0F0h]
0x93822C: fcom    dword ptr [edi+0F4h]
0x938232: fnstsw  ax
0x938234: test    ah, 5
0x938237: jp      short loc_938249
0x938239: fstp    st
0x93823B: mov     [esp+50h+var_34], 5
0x938243: fld     dword ptr [edi+0F4h]
0x938249: fcom    dword ptr [edi+0F8h]
0x93824F: fnstsw  ax
0x938251: test    ah, 5
0x938254: jp      short loc_938266
0x938256: fstp    st
0x938258: mov     [esp+50h+var_34], 6
0x938260: fld     dword ptr [edi+0F8h]
0x938266: fcom    dword ptr [edi+100h]
0x93826C: fnstsw  ax
0x93826E: test    ah, 5
0x938271: jp      short loc_938283
0x938273: fstp    st
0x938275: mov     [esp+50h+var_34], 8
0x93827D: fld     dword ptr [edi+100h]
0x938283: fcom    dword ptr [edi+104h]
0x938289: fnstsw  ax
0x93828B: test    ah, 5
0x93828E: jp      short loc_9382A0
0x938290: fstp    st
0x938292: mov     [esp+50h+var_34], 9
0x93829A: fld     dword ptr [edi+104h]
0x9382A0: fcom    dword ptr [edi+108h]
0x9382A6: fnstsw  ax
0x9382A8: test    ah, 5
0x9382AB: jp      short loc_9382BD
0x9382AD: fstp    st
0x9382AF: mov     [esp+50h+var_34], 0Ah
0x9382B7: fld     dword ptr [edi+108h]
0x9382BD: fcom    dword ptr [edi+110h]
0x9382C3: fnstsw  ax
0x9382C5: test    ah, 5
0x9382C8: jp      short loc_9382DA
0x9382CA: fstp    st
0x9382CC: mov     [esp+50h+var_34], 0Ch
0x9382D4: fld     dword ptr [edi+110h]
0x9382DA: fcom    dword ptr [edi+114h]
0x9382E0: fnstsw  ax
0x9382E2: test    ah, 5
0x9382E5: jp      short loc_9382F7
0x9382E7: fstp    st
0x9382E9: mov     [esp+50h+var_34], 0Dh
0x9382F1: fld     dword ptr [edi+114h]
0x9382F7: fcom    dword ptr [edi+118h]
0x9382FD: fnstsw  ax
0x9382FF: test    ah, 5
0x938302: jp      short loc_938314
0x938304: fstp    st
0x938306: mov     [esp+50h+var_34], 0Eh
0x93830E: fld     dword ptr [edi+118h]
0x938314: fcom    dword ptr [edi+120h]
0x93831A: fnstsw  ax
0x93831C: test    ah, 5
0x93831F: jp      short loc_938331
0x938321: fstp    st
0x938323: mov     [esp+50h+var_34], 10h
0x93832B: fld     dword ptr [edi+120h]
0x938331: fcom    dword ptr [edi+124h]
0x938337: fnstsw  ax
0x938339: test    ah, 5
0x93833C: jp      short loc_93834E
0x93833E: fstp    st
0x938340: mov     [esp+50h+var_34], 11h
0x938348: fld     dword ptr [edi+124h]
0x93834E: fcomp   dword ptr [edi+128h]
0x938354: fnstsw  ax
0x938356: test    ah, 5
0x938359: jp      loc_938425
0x93835F: mov     [esp+50h+var_34], 12h
0x938367: mov     eax, [esp+50h+var_34]
0x93836B: add     eax, 0FFFFFFF8h
0x93836E: mov     ecx, eax
0x938370: shr     ecx, 2
0x938373: mov     [esi+38h], ecx
0x938376: and     eax, 3
0x938379: push    esi
0x93837A: mov     ecx, edi
0x93837C: mov     [esi+3Ch], eax
0x93837F: call    sub_938060
0x938384: mov     edx, [esi+38h]
0x938387: mov     ebx, [esi+3Ch]
0x93838A: push    edx
0x93838B: mov     edx, [ebp+arg_4]
0x93838E: lea     eax, [esi+10h]
0x938391: push    esi
0x938392: call    sub_936790
0x938397: mov     ecx, edx
0x938399: movzx   eax, byte ptr [ecx]
0x93839C: mov     [esi+38h], eax
0x93839F: movzx   edx, byte ptr [ecx+1]
0x9383A3: mov     [esi+3Ch], edx
0x9383A6: mov     edx, [ebp+arg_0]
0x9383A9: movzx   eax, byte ptr [edx+21h]
0x9383AD: add     esp, 8
0x9383B0: dec     eax
0x9383B1: js      short loc_9383D9
0x9383B3: mov     bl, [ecx]
0x9383B5: mov     [esp+50h+var_35], bl
0x9383B9: lea     esp, [esp+0]
0x9383C0: mov     bl, [esp+50h+var_35]
0x9383C4: cmp     [edx+eax*4], bl
0x9383C7: jnz     short loc_9383D6
0x9383C9: mov     bl, [edx+eax*4+1]
0x9383CD: cmp     bl, [ecx+1]
0x9383D0: jz      loc_9385A9
0x9383D6: dec     eax
0x9383D7: jns     short loc_9383C0
0x9383D9: push    esi
0x9383DA: lea     eax, [esp+54h+var_24]
0x9383DE: push    eax
0x9383DF: mov     ecx, edi
0x9383E1: call    sub_936810
0x9383E6: mov     al, [esp+50h+var_24]
0x9383EA: test    al, al
0x9383EC: jnz     loc_9384D7
0x9383F2: mov     eax, [esp+50h+var_34]
0x9383F6: mov     ecx, eax
0x9383F8: and     eax, 3
0x9383FB: shr     ecx, 2
0x9383FE: lea     edx, [eax+ecx*4+38h]
0x938402: mov     eax, [esp+50h+var_30]
0x938406: dec     eax
0x938407: test    eax, eax
0x938409: mov     dword ptr [edi+edx*4], 0FF7FFFFFh
0x938410: mov     [esp+50h+var_30], eax
0x938414: jg      loc_9381B0
0x93841A: xor     eax, eax
0x93841C: pop     edi
0x93841D: pop     esi
0x93841E: pop     ebx
0x93841F: mov     esp, ebp
0x938421: pop     ebp
0x938422: retn    0Ch
0x938425: mov     eax, [esp+50h+var_34]
0x938429: cmp     eax, 2
0x93842C: ja      loc_9384E5
0x938432: mov     ebx, [ebp+arg_4]
0x938435: push    eax
0x938436: push    esi
0x938437: mov     ecx, edi
0x938439: mov     [ebx], al
0x93843B: call    sub_937DB0
0x938440: mov     eax, [esi+30h]
0x938443: movaps  xmm0, xmmword ptr [esi+10h]
0x938447: mov     edx, [ebp+arg_0]
0x93844A: mov     [esp+50h+var_2C], eax
0x93844E: mov     ecx, [esp+50h+var_2C]
0x938452: shr     ecx, 1Ch
0x938455: movmskps eax, xmm0
0x938458: and     al, 7
0x93845A: and     cl, 8
0x93845D: shl     al, 4
0x938460: or      al, cl
0x938462: mov     [ebx+1], al
0x938465: movzx   ecx, byte ptr [edx+21h]
0x938469: dec     ecx
0x93846A: js      short loc_938482
0x93846C: mov     bl, [ebx]
0x93846E: mov     edi, edi
0x938470: cmp     [edx+ecx*4], bl
0x938473: jnz     short loc_93847F
0x938475: cmp     [edx+ecx*4+1], al
0x938479: jz      loc_9385A9
0x93847F: dec     ecx
0x938480: jns     short loc_938470
0x938482: movaps  xmm1, xmmword ptr ds:0A372D0h
0x938489: movaps  xmm0, xmmword ptr [edi+90h]
0x938490: mov     eax, esi
0x938492: mov     ecx, [eax]
0x938494: mov     edx, [eax+4]
0x938497: mov     dword ptr [esp+50h+var_20], ecx
0x93849B: mov     ecx, [eax+8]
0x93849E: mov     dword ptr [esp+50h+var_20+4], edx
0x9384A2: mov     edx, [eax+0Ch]
0x9384A5: mov     dword ptr [esp+50h+var_20+8], ecx
0x9384A9: mov     dword ptr [esp+50h+var_20+0Ch], edx
0x9384AD: movaps  xmm2, [esp+50h+var_20]
0x9384B2: andps   xmm2, xmm1
0x9384B5: cmpltps xmm2, xmm0
0x9384B9: movmskps eax, xmm2
0x9384BC: and     eax, 7
0x9384BF: cmp     al, 7
0x9384C1: jnz     loc_9383F2
0x9384C7: mov     eax, [esi+38h]
0x9384CA: fld     dword ptr [esi+eax*4]
0x9384CD: fmul    dword ptr [esi+30h]
0x9384D0: fsub    dword ptr [edi+eax*4+60h]
0x9384D4: fstp    dword ptr [esi+34h]
0x9384D7: mov     eax, 2
0x9384DC: pop     edi
0x9384DD: pop     esi
0x9384DE: pop     ebx
0x9384DF: mov     esp, ebp
0x9384E1: pop     ebp
0x9384E2: retn    0Ch
0x9384E5: cmp     eax, 6
0x9384E8: ja      loc_938367
0x9384EE: mov     eax, [esp+50h+var_34]
0x9384F2: mov     ebx, [ebp+arg_4]
0x9384F5: mov     [ebx], al
0x9384F7: add     eax, 0FFFFFFFCh
0x9384FA: push    eax
0x9384FB: push    esi
0x9384FC: mov     ecx, edi
0x9384FE: call    sub_937EF0
0x938503: mov     ecx, [esi+30h]
0x938506: movaps  xmm0, xmmword ptr [esi]
0x938509: mov     edx, ecx
0x93850B: movmskps eax, xmm0
0x93850E: and     al, 7
0x938510: shr     edx, 1Ch
0x938513: shl     al, 4
0x938516: and     dl, 8
0x938519: mov     [esp+50h+var_28], ecx
0x93851D: mov     ecx, [ebp+arg_0]
0x938520: or      al, dl
0x938522: mov     [ebx+1], al
0x938525: movzx   ecx, byte ptr [ecx+21h]
0x938529: dec     ecx
0x93852A: js      short loc_93853F
0x93852C: mov     bl, [ebx]
0x93852E: mov     edx, [ebp+arg_0]
0x938531: cmp     [edx+ecx*4], bl
0x938534: jnz     short loc_93853C
0x938536: cmp     [edx+ecx*4+1], al
0x93853A: jz      short loc_9385A9
0x93853C: dec     ecx
0x93853D: jns     short loc_938531
0x93853F: movaps  xmm1, xmmword ptr ds:0A372D0h
0x938546: movaps  xmm0, xmmword ptr [edi+0A0h]
0x93854D: lea     edx, [esi+10h]
0x938550: mov     eax, [edx]
0x938552: mov     ecx, [edx+4]
0x938555: mov     dword ptr [esp+50h+var_10], eax
0x938559: mov     eax, [edx+8]
0x93855C: mov     dword ptr [esp+50h+var_10+4], ecx
0x938560: mov     ecx, [edx+0Ch]
0x938563: mov     dword ptr [esp+50h+var_10+8], eax
0x938567: mov     dword ptr [esp+50h+var_10+0Ch], ecx
0x93856B: movaps  xmm2, [esp+50h+var_10]
0x938570: andps   xmm2, xmm1
0x938573: cmpltps xmm2, xmm0
0x938577: movmskps edx, xmm2
0x93857A: and     edx, 7
0x93857D: cmp     dl, 7
0x938580: jnz     loc_9383F2
0x938586: mov     eax, [esi+38h]
0x938589: fld     dword ptr [esi+eax*4]
0x93858C: sub     eax, 4
0x93858F: fmul    dword ptr [esi+30h]
0x938592: fchs
0x938594: fsub    dword ptr [edi+eax*4+70h]
0x938598: mov     eax, 2
0x93859D: fstp    dword ptr [esi+34h]
0x9385A0: pop     edi
0x9385A1: pop     esi
0x9385A2: pop     ebx
0x9385A3: mov     esp, ebp
0x9385A5: pop     ebp
0x9385A6: retn    0Ch
0x9385A9: pop     edi
0x9385AA: pop     esi
0x9385AB: mov     eax, 1
0x9385B0: pop     ebx
0x9385B1: mov     esp, ebp
0x9385B3: pop     ebp
0x9385B4: retn    0Ch
