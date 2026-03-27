0x5B0260: sub     esp, 8
0x5B0263: push    esi
0x5B0264: mov     esi, ecx
0x5B0266: xor     ecx, ecx
0x5B0268: lea     eax, [esi+95h]
0x5B026E: mov     edx, 5
0x5B0273: cmp     byte ptr [eax], 0
0x5B0276: jnz     short loc_5B027B
0x5B0278: add     ecx, 1
0x5B027B: add     eax, 28h ; '('
0x5B027E: sub     edx, 1
0x5B0281: jnz     short loc_5B0273
0x5B0283: push    ecx
0x5B0284: mov     ecx, ds:0B333C4h
0x5B028A: mov     eax, [ecx]
0x5B028C: mov     edx, [eax+284h]
0x5B0292: push    1Eh; int
0x5B0294: call    edx
0x5B0296: fld     dword ptr ds:0B394A0h
0x5B029C: push    eax; int
0x5B029D: sub     esp, 0Ch
0x5B02A0: fstp    [esp+24h+var_1C]; float
0x5B02A4: fld     dword ptr ds:0B39490h
0x5B02AA: fstp    [esp+24h+var_24+4]; float
0x5B02AE: fld     dword ptr ds:0B39498h
0x5B02B4: fstp    [esp+24h+var_24]; float
0x5B02B7: call    sub_548A60
0x5B02BC: mov     eax, [esi+48h]
0x5B02BF: fstp    [esp+24h+var_8]
0x5B02C3: mov     ecx, ds:0B333C4h
0x5B02C9: mov     edx, [ecx]
0x5B02CB: add     esp, 14h
0x5B02CE: push    eax
0x5B02CF: mov     eax, [edx+284h]
0x5B02D5: push    1Eh
0x5B02D7: call    eax
0x5B02D9: fld     dword ptr ds:0B39490h
0x5B02DF: push    eax
0x5B02E0: sub     esp, 18h
0x5B02E3: fstp    qword ptr [esp+34h+var_24]
0x5B02E7: fld     dword ptr ds:0B39498h
0x5B02ED: fstp    [esp+34h+var_2C]
0x5B02F1: fld     [esp+34h+var_C]
0x5B02F5: fstp    qword ptr [esp+34h+ArgList]; ArgList
0x5B02F8: push    offset aOddsFBaseFDiff; "odds %f, base %f, diff %f, player %i, l"...
0x5B02FD: call    sub_40FEC0
0x5B0302: push    0; Seed
0x5B0304: call    GetRandomLargeInteger?
0x5B0309: mov     ecx, ds:0B33EA0h
0x5B030F: push    ecx; Seed
0x5B0310: mov     esi, eax
0x5B0312: call    GetRandomLargeInteger?
0x5B0317: push    esi; Seed
0x5B0318: mov     ds:0B3B3FCh, eax
0x5B031D: call    GetRandomLargeInteger?
0x5B0322: mov     ecx, ds:0B3B3FCh
0x5B0328: mov     eax, 0D1B71759h
0x5B032D: mul     ecx
0x5B032F: shr     edx, 0Dh
0x5B0332: imul    edx, 2710h
0x5B0338: sub     ecx, edx
0x5B033A: test    ecx, ecx
0x5B033C: mov     [esp+44h+var_10], ecx
0x5B0340: fild    [esp+44h+var_10]
0x5B0344: jge     short loc_5B034C
0x5B0346: fadd    dword ptr ds:0A2FC78h
0x5B034C: fdiv    qword ptr ds:0A309F0h
0x5B0352: add     esp, 28h
0x5B0355: fstp    [esp+1Ch+var_10]
0x5B0359: fld     [esp+1Ch+var_10]
0x5B035D: fstp    qword ptr [esp+1Ch+var_1C]; ArgList
0x5B0360: push    offset asc_A40540; "%f"
0x5B0365: call    sub_40FEC0
0x5B036A: fldz
0x5B036C: mov     ecx, ds:0B333C4h
0x5B0372: fstp    [esp+20h+var_1C+4]
0x5B0376: mov     edx, [ecx]
0x5B0378: mov     eax, [edx+39Ch]
0x5B037E: add     esp, 8
0x5B0381: push    0
0x5B0383: push    1Eh
0x5B0385: call    eax
0x5B0387: fld     [esp+20h+var_1C]
0x5B038B: fld     [esp+20h+var_1C+4]
0x5B038F: pop     esi
0x5B0390: fcompp
0x5B0392: fnstsw  ax
0x5B0394: test    ah, 41h
0x5B0397: jnz     short loc_5B03A2
0x5B0399: mov     eax, 1
0x5B039E: add     esp, 8
0x5B03A1: retn
0x5B03A2: xor     eax, eax
0x5B03A4: add     esp, 8
0x5B03A7: retn
