0x6D62D0: push    ebp
0x6D62D1: mov     ebp, esp
0x6D62D3: and     esp, 0FFFFFFC0h
0x6D62D6: sub     esp, 70h
0x6D62D9: push    ebx
0x6D62DA: push    ebp
0x6D62DB: mov     ebx, ecx
0x6D62DD: push    esi
0x6D62DE: mov     esi, [ebx+2Ch]
0x6D62E1: test    esi, esi
0x6D62E3: push    edi
0x6D62E4: mov     [esp+80h+var_38], ebx
0x6D62E8: jz      loc_6D6627
0x6D62EE: mov     eax, ds:0B24260h
0x6D62F3: fld     dword ptr ds:0A79E10h
0x6D62F9: mov     ecx, ds:0B24264h
0x6D62FF: fstp    [esp+80h+var_4]
0x6D6303: mov     edx, ds:0B24268h
0x6D6309: mov     ebp, [esi+24h]
0x6D630C: mov     [esp+80h+var_20], eax
0x6D6310: mov     eax, ds:0B3CBA4h
0x6D6315: mov     [esp+80h+var_14], eax
0x6D6319: mov     eax, ds:0B3CBB0h
0x6D631E: mov     [esp+80h+var_8], eax
0x6D6322: movzx   eax, word ptr [esi+0Ah]
0x6D6326: test    eax, eax
0x6D6328: mov     [esp+80h+var_1C], ecx
0x6D632C: mov     ecx, ds:0B3CBA8h
0x6D6332: mov     [esp+80h+var_18], edx
0x6D6336: mov     edx, ds:0B3CBACh
0x6D633C: mov     [esp+80h+var_10], ecx
0x6D6340: mov     ecx, [esi+14h]
0x6D6343: mov     [esp+80h+var_C], edx
0x6D6347: jnz     short loc_6D6355
0x6D6349: push    eax
0x6D634A: push    eax
0x6D634B: push    eax
0x6D634C: mov     ecx, esi
0x6D634E: call    sub_6E1F00
0x6D6353: jmp     short loc_6D63B6
0x6D6355: cmp     eax, 1
0x6D6358: mov     edx, [ebp+4]
0x6D635B: mov     [esp+80h+var_30], edx
0x6D635F: mov     edx, [ebp+8]
0x6D6362: mov     [esp+80h+var_2C], edx
0x6D6366: mov     edx, [ebp+0Ch]
0x6D6369: mov     [esp+80h+var_28], edx
0x6D636D: jz      loc_6D6419
0x6D6373: cmp     ecx, 1
0x6D6376: jz      short loc_6D637D
0x6D6378: cmp     ecx, 5
0x6D637B: jnz     short loc_6D63B6
0x6D637D: mov     bl, 1
0x6D637F: mov     edi, 1
0x6D6384: movzx   eax, word ptr [esi+0Ah]
0x6D6388: cmp     edi, eax
0x6D638A: jnb     loc_6D6411
0x6D6390: movzx   ecx, byte ptr [esi+1Dh]
0x6D6394: imul    ecx, edi
0x6D6397: lea     eax, [esp+80h+var_30]
0x6D639B: push    eax
0x6D639C: lea     ecx, [ecx+ebp+4]
0x6D63A0: call    sub_8AA390
0x6D63A5: test    al, al
0x6D63A7: jz      short loc_6D63AB
0x6D63A9: xor     bl, bl
0x6D63AB: add     edi, 1
0x6D63AE: test    bl, bl
0x6D63B0: jnz     short loc_6D6384
0x6D63B2: mov     ebx, [esp+80h+var_38]
0x6D63B6: fld     dword ptr [ebx+0Ch]
0x6D63B9: lea     ecx, [ebx+0Ch]
0x6D63BC: fld     dword ptr ds:0A7DEB4h
0x6D63C2: fchs
0x6D63C4: fucompp
0x6D63C6: fnstsw  ax
0x6D63C8: test    ah, 44h
0x6D63CB: jnp     short loc_6D63D7
0x6D63CD: push    ecx
0x6D63CE: lea     ecx, [esp+84h+var_20]
0x6D63D2: call    sub_471390
0x6D63D7: mov     ecx, [ebx+2Ch]
0x6D63DA: movzx   ebp, word ptr [ecx+8]
0x6D63DE: test    ebp, ebp
0x6D63E0: mov     eax, [ecx+10h]
0x6D63E3: mov     edi, [ecx+20h]
0x6D63E6: jnz     short loc_6D642D
0x6D63E8: push    ebp
0x6D63E9: push    ebp
0x6D63EA: push    ebp
0x6D63EB: call    sub_6E1E90
0x6D63F0: fld     dword ptr [ebx+1Ch]
0x6D63F3: fld     dword ptr ds:0A7DEB4h
0x6D63F9: fchs
0x6D63FB: fucompp
0x6D63FD: fnstsw  ax
0x6D63FF: test    ah, 44h
0x6D6402: jnp     loc_6D64FA
0x6D6408: lea     eax, [ebx+18h]
0x6D640B: push    eax
0x6D640C: jmp     loc_6D64F1
0x6D6411: test    bl, bl
0x6D6413: jz      short loc_6D63B2
0x6D6415: mov     ebx, [esp+80h+var_38]
0x6D6419: push    0
0x6D641B: push    0
0x6D641D: push    0
0x6D641F: mov     ecx, esi
0x6D6421: call    sub_6E1F00
0x6D6426: lea     edx, [esp+80h+var_30]
0x6D642A: push    edx
0x6D642B: jmp     short loc_6D63CE
0x6D642D: cmp     ebp, 1
0x6D6430: mov     edx, [edi+4]
0x6D6433: mov     [esp+80h+var_30], edx
0x6D6437: mov     edx, [edi+8]
0x6D643A: mov     [esp+80h+var_2C], edx
0x6D643E: mov     edx, [edi+0Ch]
0x6D6441: mov     [esp+80h+var_28], edx
0x6D6445: mov     edx, [edi+10h]
0x6D6448: mov     [esp+80h+var_24], edx
0x6D644C: jnz     short loc_6D6457
0x6D644E: cmp     eax, 4
0x6D6451: jnz     loc_6D6525
0x6D6457: cmp     eax, 1
0x6D645A: jz      short loc_6D6461
0x6D645C: cmp     eax, 5
0x6D645F: jnz     short loc_6D64D9
0x6D6461: fld     [esp+80h+var_24]
0x6D6465: mov     bl, 1
0x6D6467: fld     [esp+80h+var_28]
0x6D646B: mov     esi, 1
0x6D6470: fld     [esp+80h+var_2C]
0x6D6474: fld     [esp+80h+var_30]
0x6D6478: cmp     esi, ebp
0x6D647A: jnb     loc_6D6515
0x6D6480: movzx   eax, byte ptr [ecx+1Ch]
0x6D6484: imul    eax, esi
0x6D6487: fld     dword ptr [eax+edi+4]
0x6D648B: fld     st(1)
0x6D648D: fucompp
0x6D648F: lea     edx, [eax+edi+4]
0x6D6493: fnstsw  ax
0x6D6495: test    ah, 44h
0x6D6498: jp      short loc_6D64C4
0x6D649A: fld     dword ptr [edx+4]
0x6D649D: fld     st(2)
0x6D649F: fucompp
0x6D64A1: fnstsw  ax
0x6D64A3: test    ah, 44h
0x6D64A6: jp      short loc_6D64C4
0x6D64A8: fld     dword ptr [edx+8]
0x6D64AB: fld     st(3)
0x6D64AD: fucompp
0x6D64AF: fnstsw  ax
0x6D64B1: test    ah, 44h
0x6D64B4: jp      short loc_6D64C4
0x6D64B6: fld     dword ptr [edx+0Ch]
0x6D64B9: fld     st(4)
0x6D64BB: fucompp
0x6D64BD: fnstsw  ax
0x6D64BF: test    ah, 44h
0x6D64C2: jnp     short loc_6D64C6
0x6D64C4: xor     bl, bl
0x6D64C6: add     esi, 1
0x6D64C9: test    bl, bl
0x6D64CB: jnz     short loc_6D6478
0x6D64CD: fstp    st(3)
0x6D64CF: fstp    st(1)
0x6D64D1: fstp    st
0x6D64D3: fstp    st
0x6D64D5: mov     ebx, [esp+80h+var_38]
0x6D64D9: fld     dword ptr [ebx+1Ch]
0x6D64DC: fld     dword ptr ds:0A7DEB4h
0x6D64E2: fchs
0x6D64E4: fucompp
0x6D64E6: fnstsw  ax
0x6D64E8: test    ah, 44h
0x6D64EB: jnp     short loc_6D64FA
0x6D64ED: lea     edx, [ebx+18h]
0x6D64F0: push    edx
0x6D64F1: lea     ecx, [esp+84h+var_20]
0x6D64F5: call    sub_471430
0x6D64FA: mov     ecx, [ebx+2Ch]
0x6D64FD: movzx   esi, word ptr [ecx+0Ch]
0x6D6501: test    esi, esi
0x6D6503: mov     eax, [ecx+18h]
0x6D6506: mov     edi, [ecx+28h]
0x6D6509: jnz     short loc_6D6537
0x6D650B: push    esi
0x6D650C: push    esi
0x6D650D: push    esi
0x6D650E: call    sub_6E1F60
0x6D6513: jmp     short loc_6D6589
0x6D6515: test    bl, bl
0x6D6517: fstp    st(3)
0x6D6519: fstp    st(1)
0x6D651B: fstp    st
0x6D651D: fstp    st
0x6D651F: jz      short loc_6D64D5
0x6D6521: mov     ebx, [esp+80h+var_38]
0x6D6525: push    0
0x6D6527: push    0
0x6D6529: push    0
0x6D652B: call    sub_6E1E90
0x6D6530: lea     ecx, [esp+80h+var_30]
0x6D6534: push    ecx
0x6D6535: jmp     short loc_6D64F1
0x6D6537: cmp     esi, 1
0x6D653A: fld     dword ptr [edi+4]
0x6D653D: fstp    [esp+80h+var_34]
0x6D6541: fld     [esp+80h+var_34]
0x6D6545: jz      loc_6D664D
0x6D654B: cmp     eax, 1
0x6D654E: jz      short loc_6D6555
0x6D6550: cmp     eax, 5
0x6D6553: jnz     short loc_6D6587
0x6D6555: mov     bl, 1
0x6D6557: mov     edx, 1
0x6D655C: cmp     edx, esi
0x6D655E: jnb     loc_6D662F
0x6D6564: movzx   eax, byte ptr [ecx+1Eh]
0x6D6568: imul    eax, edx
0x6D656B: fld     dword ptr [eax+edi+4]
0x6D656F: fld     st(1)
0x6D6571: fucompp
0x6D6573: fnstsw  ax
0x6D6575: test    ah, 44h
0x6D6578: jnp     short loc_6D657C
0x6D657A: xor     bl, bl
0x6D657C: add     edx, 1
0x6D657F: test    bl, bl
0x6D6581: jnz     short loc_6D655C
0x6D6583: mov     ebx, [esp+80h+var_38]
0x6D6587: fstp    st
0x6D6589: fld     dword ptr [ebx+28h]
0x6D658C: fld     dword ptr ds:0A7DEB4h
0x6D6592: fchs
0x6D6594: fucompp
0x6D6596: fnstsw  ax
0x6D6598: test    ah, 44h
0x6D659B: jnp     short loc_6D65D8
0x6D659D: fld     dword ptr [ebx+28h]
0x6D65A0: fstp    [esp+80h+var_34]
0x6D65A4: fld     [esp+80h+var_34]
0x6D65A8: sub     esp, 8
0x6D65AB: fstp    [esp+88h+X]; X
0x6D65AE: call    __isnan
0x6D65B3: add     esp, 8
0x6D65B6: test    eax, eax
0x6D65B8: jnz     short loc_6D65D8
0x6D65BA: fld     [esp+80h+var_34]
0x6D65BE: sub     esp, 8
0x6D65C1: fstp    [esp+88h+X]; X
0x6D65C4: call    __finite
0x6D65C9: add     esp, 8
0x6D65CC: test    eax, eax
0x6D65CE: jz      short loc_6D65D8
0x6D65D0: fld     [esp+80h+var_34]
0x6D65D4: fstp    [esp+80h+var_4]
0x6D65D8: mov     eax, [ebx+2Ch]
0x6D65DB: cmp     word ptr [eax+0Ah], 0
0x6D65E0: jnz     short loc_6D6619
0x6D65E2: cmp     word ptr [eax+8], 0
0x6D65E7: jnz     short loc_6D6619
0x6D65E9: cmp     word ptr [eax+0Ch], 0
0x6D65EE: jnz     short loc_6D6619
0x6D65F0: mov     esi, eax
0x6D65F2: test    esi, esi
0x6D65F4: jz      short loc_6D6619
0x6D65F6: lea     ecx, [esi+4]
0x6D65F9: push    ecx; lpAddend
0x6D65FA: call    dword ptr ds:0A2807Ch
0x6D6600: test    eax, eax
0x6D6602: jnz     short loc_6D6612
0x6D6604: test    esi, esi
0x6D6606: jz      short loc_6D6612
0x6D6608: mov     edx, [esi]
0x6D660A: mov     eax, [edx]
0x6D660C: push    1
0x6D660E: mov     ecx, esi
0x6D6610: call    eax
0x6D6612: mov     dword ptr [ebx+2Ch], 0
0x6D6619: lea     edi, [ebx+0Ch]
0x6D661C: mov     ecx, 8
0x6D6621: lea     esi, [esp+80h+var_20]
0x6D6625: rep movsd
0x6D6627: pop     edi
0x6D6628: pop     esi
0x6D6629: pop     ebp
0x6D662A: pop     ebx
0x6D662B: mov     esp, ebp
0x6D662D: pop     ebp
0x6D662E: retn
0x6D662F: test    bl, bl
0x6D6631: fstp    st
0x6D6633: mov     ebx, [esp+80h+var_38]
0x6D6637: jz      loc_6D6589
0x6D663D: push    0
0x6D663F: push    0
0x6D6641: push    0
0x6D6643: call    sub_6E1F60
0x6D6648: jmp     loc_6D65A4
0x6D664D: push    0
0x6D664F: fstp    st
0x6D6651: push    0
0x6D6653: push    0
0x6D6655: call    sub_6E1F60
0x6D665A: jmp     loc_6D65A4
