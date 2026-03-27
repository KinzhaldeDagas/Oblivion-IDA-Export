0x949350: push    esi
0x949351: push    edi
0x949352: mov     edi, [esp+8+arg_0]
0x949356: mov     eax, [edi+8]
0x949359: and     eax, 3FFFFFFFh
0x94935E: cmp     eax, 18h
0x949361: mov     esi, ecx
0x949363: jge     short loc_94937D
0x949365: add     eax, eax
0x949367: cmp     eax, 18h
0x94936A: jg      short loc_949371
0x94936C: mov     eax, 18h
0x949371: push    10h
0x949373: push    eax
0x949374: push    edi
0x949375: call    sub_8A6E40
0x94937A: add     esp, 0Ch
0x94937D: mov     ecx, [edi]
0x94937F: mov     dword ptr [edi+4], 18h
0x949386: fld     dword ptr [esi+68h]
0x949389: mov     eax, [esi+60h]
0x94938C: fld     dword ptr [esi+64h]
0x94938F: mov     [ecx], eax
0x949391: fstp    dword ptr [ecx+4]
0x949394: xor     eax, eax
0x949396: fstp    dword ptr [ecx+8]
0x949399: mov     [ecx+0Ch], eax
0x94939C: mov     ecx, [edi]
0x94939E: fld     dword ptr [esi+68h]
0x9493A1: mov     edx, [esi+60h]
0x9493A4: fld     dword ptr [esi+74h]
0x9493A7: mov     [ecx+10h], edx
0x9493AA: fstp    dword ptr [ecx+14h]
0x9493AD: add     ecx, 10h
0x9493B0: fstp    dword ptr [ecx+8]
0x9493B3: mov     [ecx+0Ch], eax
0x9493B6: mov     ecx, [edi]
0x9493B8: fld     dword ptr [esi+68h]
0x9493BB: mov     edx, [esi+60h]
0x9493BE: fld     dword ptr [esi+64h]
0x9493C1: mov     [ecx+20h], edx
0x9493C4: fstp    dword ptr [ecx+24h]
0x9493C7: add     ecx, 20h ; ' '
0x9493CA: fstp    dword ptr [ecx+8]
0x9493CD: mov     [ecx+0Ch], eax
0x9493D0: mov     ecx, [edi]
0x9493D2: fld     dword ptr [esi+78h]
0x9493D5: mov     edx, [esi+60h]
0x9493D8: fld     dword ptr [esi+64h]
0x9493DB: mov     [ecx+30h], edx
0x9493DE: fstp    dword ptr [ecx+34h]
0x9493E1: add     ecx, 30h ; '0'
0x9493E4: fstp    dword ptr [ecx+8]
0x9493E7: mov     [ecx+0Ch], eax
0x9493EA: mov     ecx, [edi]
0x9493EC: fld     dword ptr [esi+68h]
0x9493EF: mov     edx, [esi+60h]
0x9493F2: fld     dword ptr [esi+64h]
0x9493F5: mov     [ecx+40h], edx
0x9493F8: fstp    dword ptr [ecx+44h]
0x9493FB: add     ecx, 40h ; '@'
0x9493FE: fstp    dword ptr [ecx+8]
0x949401: mov     [ecx+0Ch], eax
0x949404: mov     ecx, [edi]
0x949406: fld     dword ptr [esi+68h]
0x949409: mov     edx, [esi+70h]
0x94940C: fld     dword ptr [esi+64h]
0x94940F: mov     [ecx+50h], edx
0x949412: fstp    dword ptr [ecx+54h]
0x949415: add     ecx, 50h ; 'P'
0x949418: fstp    dword ptr [ecx+8]
0x94941B: mov     [ecx+0Ch], eax
0x94941E: mov     ecx, [edi]
0x949420: fld     dword ptr [esi+78h]
0x949423: mov     edx, [esi+70h]
0x949426: fld     dword ptr [esi+74h]
0x949429: mov     [ecx+60h], edx
0x94942C: fstp    dword ptr [ecx+64h]
0x94942F: add     ecx, 60h ; '`'
0x949432: fstp    dword ptr [ecx+8]
0x949435: mov     [ecx+0Ch], eax
0x949438: mov     ecx, [edi]
0x94943A: fld     dword ptr [esi+68h]
0x94943D: mov     edx, [esi+70h]
0x949440: fld     dword ptr [esi+74h]
0x949443: mov     [ecx+70h], edx
0x949446: fstp    dword ptr [ecx+74h]
0x949449: add     ecx, 70h ; 'p'
0x94944C: fstp    dword ptr [ecx+8]
0x94944F: mov     [ecx+0Ch], eax
0x949452: mov     ecx, [edi]
0x949454: fld     dword ptr [esi+78h]
0x949457: mov     edx, [esi+70h]
0x94945A: fld     dword ptr [esi+74h]
0x94945D: add     ecx, 80h ; '€'
0x949463: mov     [ecx], edx
0x949465: fstp    dword ptr [ecx+4]
0x949468: fstp    dword ptr [ecx+8]
0x94946B: mov     [ecx+0Ch], eax
0x94946E: fld     dword ptr [esi+78h]
0x949471: mov     ecx, [edi]
0x949473: fld     dword ptr [esi+74h]
0x949476: mov     edx, [esi+60h]
0x949479: mov     [ecx+90h], edx
0x94947F: fstp    dword ptr [ecx+94h]
0x949485: add     ecx, 90h
0x94948B: fstp    dword ptr [ecx+8]
0x94948E: mov     [ecx+0Ch], eax
0x949491: mov     ecx, [edi]
0x949493: fld     dword ptr [esi+78h]
0x949496: mov     edx, [esi+70h]
0x949499: fld     dword ptr [esi+74h]
0x94949C: mov     [ecx+0A0h], edx
0x9494A2: fstp    dword ptr [ecx+0A4h]
0x9494A8: add     ecx, 0A0h ; ' '
0x9494AE: fstp    dword ptr [ecx+8]
0x9494B1: mov     [ecx+0Ch], eax
0x9494B4: mov     ecx, [edi]
0x9494B6: fld     dword ptr [esi+78h]
0x9494B9: mov     edx, [esi+70h]
0x9494BC: fld     dword ptr [esi+64h]
0x9494BF: mov     [ecx+0B0h], edx
0x9494C5: fstp    dword ptr [ecx+0B4h]
0x9494CB: add     ecx, 0B0h ; '°'
0x9494D1: fstp    dword ptr [ecx+8]
0x9494D4: mov     [ecx+0Ch], eax
0x9494D7: mov     ecx, [edi]
0x9494D9: fld     dword ptr [esi+68h]
0x9494DC: mov     edx, [esi+60h]
0x9494DF: fld     dword ptr [esi+74h]
0x9494E2: mov     [ecx+0C0h], edx
0x9494E8: fstp    dword ptr [ecx+0C4h]
0x9494EE: add     ecx, 0C0h ; 'À'
0x9494F4: fstp    dword ptr [ecx+8]
0x9494F7: mov     [ecx+0Ch], eax
0x9494FA: mov     ecx, [edi]
0x9494FC: fld     dword ptr [esi+68h]
0x9494FF: mov     edx, [esi+70h]
0x949502: fld     dword ptr [esi+74h]
0x949505: mov     [ecx+0D0h], edx
0x94950B: fstp    dword ptr [ecx+0D4h]
0x949511: add     ecx, 0D0h ; 'Ð'
0x949517: fstp    dword ptr [ecx+8]
0x94951A: mov     [ecx+0Ch], eax
0x94951D: mov     ecx, [edi]
0x94951F: fld     dword ptr [esi+68h]
0x949522: mov     edx, [esi+60h]
0x949525: fld     dword ptr [esi+74h]
0x949528: mov     [ecx+0E0h], edx
0x94952E: fstp    dword ptr [ecx+0E4h]
0x949534: add     ecx, 0E0h ; 'à'
0x94953A: fstp    dword ptr [ecx+8]
0x94953D: mov     [ecx+0Ch], eax
0x949540: mov     ecx, [edi]
0x949542: fld     dword ptr [esi+78h]
0x949545: mov     edx, [esi+60h]
0x949548: fld     dword ptr [esi+74h]
0x94954B: mov     [ecx+0F0h], edx
0x949551: fstp    dword ptr [ecx+0F4h]
0x949557: add     ecx, 0F0h ; 'ð'
0x94955D: fstp    dword ptr [ecx+8]
0x949560: mov     [ecx+0Ch], eax
0x949563: mov     ecx, [edi]
0x949565: fld     dword ptr [esi+68h]
0x949568: mov     edx, [esi+70h]
0x94956B: fld     dword ptr [esi+74h]
0x94956E: mov     [ecx+100h], edx
0x949574: fstp    dword ptr [ecx+104h]
0x94957A: add     ecx, 100h
0x949580: fstp    dword ptr [ecx+8]
0x949583: mov     [ecx+0Ch], eax
0x949586: mov     ecx, [edi]
0x949588: fld     dword ptr [esi+68h]
0x94958B: mov     edx, [esi+70h]
0x94958E: fld     dword ptr [esi+64h]
0x949591: add     ecx, 110h
0x949597: mov     [ecx], edx
0x949599: fstp    dword ptr [ecx+4]
0x94959C: fstp    dword ptr [ecx+8]
0x94959F: mov     [ecx+0Ch], eax
0x9495A2: fld     dword ptr [esi+78h]
0x9495A5: mov     ecx, [edi]
0x9495A7: fld     dword ptr [esi+74h]
0x9495AA: mov     edx, [esi+60h]
0x9495AD: mov     [ecx+120h], edx
0x9495B3: fstp    dword ptr [ecx+124h]
0x9495B9: add     ecx, 120h
0x9495BF: fstp    dword ptr [ecx+8]
0x9495C2: mov     [ecx+0Ch], eax
0x9495C5: mov     ecx, [edi]
0x9495C7: fld     dword ptr [esi+78h]
0x9495CA: mov     edx, [esi+60h]
0x9495CD: fld     dword ptr [esi+64h]
0x9495D0: mov     [ecx+130h], edx
0x9495D6: fstp    dword ptr [ecx+134h]
0x9495DC: add     ecx, 130h
0x9495E2: fstp    dword ptr [ecx+8]
0x9495E5: mov     [ecx+0Ch], eax
0x9495E8: mov     ecx, [edi]
0x9495EA: fld     dword ptr [esi+78h]
0x9495ED: mov     edx, [esi+60h]
0x9495F0: fld     dword ptr [esi+64h]
0x9495F3: mov     [ecx+140h], edx
0x9495F9: fstp    dword ptr [ecx+144h]
0x9495FF: add     ecx, 140h
0x949605: fstp    dword ptr [ecx+8]
0x949608: mov     [ecx+0Ch], eax
0x94960B: mov     ecx, [edi]
0x94960D: fld     dword ptr [esi+78h]
0x949610: mov     edx, [esi+70h]
0x949613: fld     dword ptr [esi+64h]
0x949616: mov     [ecx+150h], edx
0x94961C: fstp    dword ptr [ecx+154h]
0x949622: add     ecx, 150h
0x949628: fstp    dword ptr [ecx+8]
0x94962B: mov     [ecx+0Ch], eax
0x94962E: mov     ecx, [edi]
0x949630: fld     dword ptr [esi+78h]
0x949633: mov     edx, [esi+70h]
0x949636: fld     dword ptr [esi+64h]
0x949639: mov     [ecx+160h], edx
0x94963F: fstp    dword ptr [ecx+164h]
0x949645: add     ecx, 160h
0x94964B: fstp    dword ptr [ecx+8]
0x94964E: mov     [ecx+0Ch], eax
0x949651: mov     edi, [edi]
0x949653: fld     dword ptr [esi+68h]
0x949656: mov     ecx, [esi+70h]
0x949659: fld     dword ptr [esi+64h]
0x94965C: add     edi, 170h
0x949662: mov     [edi], ecx
0x949664: fstp    dword ptr [edi+4]
0x949667: fstp    dword ptr [edi+8]
0x94966A: mov     [edi+0Ch], eax
0x94966D: pop     edi
0x94966E: pop     esi
0x94966F: retn    4
