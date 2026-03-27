0x6DC2C0: sub     esp, 3Ch
0x6DC2C3: push    esi
0x6DC2C4: mov     esi, ecx
0x6DC2C6: fld     dword ptr [esi+8]
0x6DC2C9: push    edi
0x6DC2CA: fld     [esp+44h+arg_0]
0x6DC2CE: fld     st
0x6DC2D0: fucomp  st(2)
0x6DC2D2: fnstsw  ax
0x6DC2D4: fstp    st(1)
0x6DC2D6: test    ah, 44h
0x6DC2D9: jp      loc_6DC376
0x6DC2DF: fstp    st
0x6DC2E1: lea     ecx, [esi+4Ch]
0x6DC2E4: fld     dword ptr [ecx]
0x6DC2E6: fld     dword ptr ds:0B24FC8h
0x6DC2EC: fucompp
0x6DC2EE: fnstsw  ax
0x6DC2F0: test    ah, 44h
0x6DC2F3: jp      short loc_6DC347
0x6DC2F5: fld     dword ptr [ecx+4]
0x6DC2F8: fld     dword ptr ds:0B24FCCh
0x6DC2FE: fucompp
0x6DC300: fnstsw  ax
0x6DC302: test    ah, 44h
0x6DC305: jp      short loc_6DC347
0x6DC307: fld     dword ptr [ecx+8]
0x6DC30A: fld     dword ptr ds:0B24FD0h
0x6DC310: fucompp
0x6DC312: fnstsw  ax
0x6DC314: test    ah, 44h
0x6DC317: jp      short loc_6DC347
0x6DC319: fld     dword ptr ds:0A7DEB4h
0x6DC31F: mov     eax, [esp+44h+arg_8]
0x6DC323: fchs
0x6DC325: pop     edi
0x6DC326: fstp    dword ptr [eax]
0x6DC328: pop     esi
0x6DC329: fld     dword ptr ds:0A7DEB4h
0x6DC32F: fchs
0x6DC331: fstp    dword ptr [eax+10h]
0x6DC334: fld     dword ptr ds:0A7DEB4h
0x6DC33A: fchs
0x6DC33C: fstp    dword ptr [eax+1Ch]
0x6DC33F: xor     al, al
0x6DC341: add     esp, 3Ch
0x6DC344: retn    0Ch
0x6DC347: mov     edi, [esp+44h+arg_8]
0x6DC34B: push    ecx
0x6DC34C: mov     ecx, edi
0x6DC34E: call    sub_471390
0x6DC353: mov     al, [esi+0Ch]
0x6DC356: shr     al, 5
0x6DC359: test    al, 1
0x6DC35B: jz      loc_6DC46E
0x6DC361: add     esi, 3Ch ; '<'
0x6DC364: push    esi
0x6DC365: mov     ecx, edi
0x6DC367: call    sub_471430
0x6DC36C: pop     edi
0x6DC36D: mov     al, 1
0x6DC36F: pop     esi
0x6DC370: add     esp, 3Ch
0x6DC373: retn    0Ch
0x6DC376: mov     eax, [esi+1Ch]
0x6DC379: test    eax, eax
0x6DC37B: jz      short loc_6DC391
0x6DC37D: mov     cl, [eax+14h]
0x6DC380: mov     edx, [eax+8]
0x6DC383: mov     edi, [eax+10h]
0x6DC386: mov     eax, [eax+0Ch]
0x6DC389: test    eax, eax
0x6DC38B: mov     [esp+44h+var_3C], cl
0x6DC38F: jnz     short loc_6DC39D
0x6DC391: pop     edi
0x6DC392: fstp    st
0x6DC394: xor     al, al
0x6DC396: pop     esi
0x6DC397: add     esp, 3Ch
0x6DC39A: retn    0Ch
0x6DC39D: mov     ecx, [esi+18h]
0x6DC3A0: test    ecx, ecx
0x6DC3A2: jz      short loc_6DC391
0x6DC3A4: cmp     dword ptr [ecx+0Ch], 0
0x6DC3A8: jz      short loc_6DC391
0x6DC3AA: mov     ecx, dword ptr [esp+44h+var_3C]
0x6DC3AE: push    ebx
0x6DC3AF: push    ecx; char
0x6DC3B0: lea     ecx, [esi+14h]
0x6DC3B3: push    ecx; int
0x6DC3B4: push    edx; int
0x6DC3B5: push    edi; int
0x6DC3B6: push    eax; int
0x6DC3B7: push    ecx
0x6DC3B8: fstp    [esp+60h+var_60]; float
0x6DC3BB: call    sub_6BB270
0x6DC3C0: add     esp, 18h
0x6DC3C3: fstp    dword ptr [esp+48h+var_3C]
0x6DC3C7: fld     dword ptr [esp+48h+var_3C]
0x6DC3CB: lea     edx, [esp+48h+var_3C]
0x6DC3CF: push    edx; int
0x6DC3D0: lea     eax, [esp+4Ch+var_38]
0x6DC3D4: push    eax; int
0x6DC3D5: lea     ecx, [esp+50h+var_34]
0x6DC3D9: push    ecx; int
0x6DC3DA: push    ecx
0x6DC3DB: mov     ecx, esi
0x6DC3DD: fstp    [esp+58h+var_58]; float
0x6DC3E0: call    sub_6DBDB0
0x6DC3E5: mov     dl, [esi+0Ch]
0x6DC3E8: mov     edi, [esp+48h+var_38]
0x6DC3EC: mov     ebx, [esp+48h+var_34]
0x6DC3F0: shr     dl, 5
0x6DC3F3: test    dl, 1
0x6DC3F6: jz      short loc_6DC41B
0x6DC3F8: fld     dword ptr [esp+48h+var_3C]
0x6DC3FC: lea     eax, [esp+48h+var_24]
0x6DC400: push    eax; int
0x6DC401: push    ecx
0x6DC402: fstp    [esp+50h+var_50]; float
0x6DC405: push    edi; int
0x6DC406: push    ebx; int
0x6DC407: mov     ecx, esi
0x6DC409: call    sub_6DAEB0
0x6DC40E: lea     ecx, [esp+48h+var_24]
0x6DC412: push    ecx
0x6DC413: lea     ecx, [esi+3Ch]
0x6DC416: call    sub_7150F0
0x6DC41B: fld     dword ptr [esp+48h+var_3C]
0x6DC41F: push    ecx
0x6DC420: fstp    [esp+4Ch+var_4C]; float
0x6DC423: push    edi; int
0x6DC424: push    ebx; int
0x6DC425: lea     edx, [esp+54h+var_30]
0x6DC429: push    edx; int
0x6DC42A: mov     ecx, esi
0x6DC42C: call    sub_6DAE50
0x6DC431: mov     edx, [eax]
0x6DC433: mov     edi, [esp+48h+arg_8]
0x6DC437: lea     ecx, [esi+4Ch]
0x6DC43A: mov     [ecx], edx
0x6DC43C: mov     edx, [eax+4]
0x6DC43F: mov     [ecx+4], edx
0x6DC442: mov     eax, [eax+8]
0x6DC445: mov     [ecx+8], eax
0x6DC448: push    ecx
0x6DC449: mov     ecx, edi
0x6DC44B: call    sub_471390
0x6DC450: mov     cl, [esi+0Ch]
0x6DC453: shr     cl, 5
0x6DC456: test    cl, 1
0x6DC459: pop     ebx
0x6DC45A: jz      short loc_6DC467
0x6DC45C: lea     edx, [esi+3Ch]
0x6DC45F: push    edx
0x6DC460: mov     ecx, edi
0x6DC462: call    sub_471430
0x6DC467: fld     [esp+44h+arg_0]
0x6DC46B: fstp    dword ptr [esi+58h]
0x6DC46E: pop     edi
0x6DC46F: mov     al, 1
0x6DC471: pop     esi
0x6DC472: add     esp, 3Ch
0x6DC475: retn    0Ch
