0x6218D0: sub     esp, 10h
0x6218D3: push    esi
0x6218D4: mov     esi, ecx
0x6218D6: cmp     dword ptr [esi+6Ch], 3
0x6218DA: jnz     loc_621B36
0x6218E0: mov     eax, [esi+3Ch]
0x6218E3: mov     ecx, [eax+58h]
0x6218E6: mov     edx, [ecx]
0x6218E8: mov     eax, [edx+2C0h]
0x6218EE: call    eax
0x6218F0: movzx   ecx, ax
0x6218F3: mov     [esp+14h+var_8], ecx
0x6218F7: mov     ecx, [esi+3Ch]
0x6218FA: call    sub_5E05B0
0x6218FF: test    al, al
0x621901: jnz     short loc_62191E
0x621903: push    0
0x621905: mov     ecx, esi
0x621907: call    sub_619920
0x62190C: fld     dword ptr ds:0A30634h
0x621912: fstp    dword ptr [esi+54h]
0x621915: mov     byte ptr [esi+58h], 0
0x621919: pop     esi
0x62191A: add     esp, 10h
0x62191D: retn
0x62191E: fldz
0x621920: fcomp   dword ptr [esi+184h]
0x621926: fnstsw  ax
0x621928: test    ah, 41h
0x62192B: jnz     short loc_62194B
0x62192D: push    edi; a5
0x62192E: mov     edi, [esi+3Ch]; a1
0x621931: push    0; a4
0x621933: mov     ecx, esi
0x621935: call    sub_6135F0
0x62193A: push    eax; a3
0x62193B: push    edi; a2
0x62193C: call    TESObjectREFR_GetDistanceBetween?
0x621941: fstp    dword ptr [esi+184h]
0x621947: add     esp, 0Ch
0x62194A: pop     edi
0x62194B: fld     dword ptr [esi+184h]
0x621951: mov     ecx, esi
0x621953: fstp    [esp+14h+var_10]
0x621957: call    sub_615520
0x62195C: fstp    [esp+14h+var_4]
0x621960: fldz
0x621962: fcomp   dword ptr [esi+54h]
0x621965: fnstsw  ax
0x621967: fld     [esp+14h+var_10]
0x62196B: test    ah, 5
0x62196E: jp      short loc_621998
0x621970: fld     st
0x621972: fsub    dword ptr [esi+54h]
0x621975: fstp    [esp+14h+var_C]
0x621979: fld     [esp+14h+var_C]
0x62197D: fabs
0x62197F: fstp    [esp+14h+var_C]
0x621983: fld     [esp+14h+var_C]
0x621987: fcomp   dword ptr ds:0A46C30h
0x62198D: fnstsw  ax
0x62198F: test    ah, 41h
0x621992: jz      short loc_621998
0x621994: xor     al, al
0x621996: jmp     short loc_62199A
0x621998: mov     al, 1
0x62199A: push    ebx
0x62199B: xor     bl, bl
0x62199D: test    al, al
0x62199F: jnz     short loc_6219F5
0x6219A1: mov     ecx, [esi+3Ch]
0x6219A4: fstp    st
0x6219A6: call    sub_5E05B0
0x6219AB: test    al, al
0x6219AD: jz      short loc_6219F1
0x6219AF: cmp     [esi+58h], bl
0x6219B2: jnz     short loc_6219D7
0x6219B4: fld     dword ptr [esi+44h]
0x6219B7: mov     byte ptr [esi+58h], 1
0x6219BB: fstp    dword ptr [esi+0F8h]
0x6219C1: fld1
0x6219C3: fstp    dword ptr [esi+0FCh]
0x6219C9: fld     dword ptr ds:0A30634h
0x6219CF: fstp    dword ptr [esi+100h]
0x6219D5: jmp     short loc_6219F1
0x6219D7: fld     dword ptr [esi+44h]
0x6219DA: fsub    dword ptr [esi+0F8h]
0x6219E0: fld     dword ptr [esi+0FCh]
0x6219E6: fcompp
0x6219E8: fnstsw  ax
0x6219EA: test    ah, 5
0x6219ED: jp      short loc_6219F1
0x6219EF: mov     bl, 1
0x6219F1: fld     [esp+18h+var_10]
0x6219F5: test    byte ptr [esp+18h+var_8], 2
0x6219FA: jz      short loc_621A36
0x6219FC: fld     dword ptr ds:0B36F18h
0x621A02: fcomp   st(1)
0x621A04: fnstsw  ax
0x621A06: test    ah, 41h
0x621A09: jnz     short loc_621A1A
0x621A0B: pop     ebx
0x621A0C: fstp    dword ptr [esi+54h]
0x621A0F: mov     ecx, esi
0x621A11: pop     esi
0x621A12: add     esp, 10h
0x621A15: jmp     sub_6213D0
0x621A1A: mov     edx, [esi+3Ch]
0x621A1D: fstp    st
0x621A1F: mov     ecx, [edx+58h]
0x621A22: mov     eax, [ecx]
0x621A24: mov     edx, [eax+2C4h]
0x621A2A: push    0
0x621A2C: push    2
0x621A2E: call    edx
0x621A30: push    0
0x621A32: mov     ecx, esi
0x621A34: jmp     short loc_621A6D
0x621A36: cmp     byte ptr [esi+58h], 0
0x621A3A: jnz     short loc_621A58
0x621A3C: fld     dword ptr [esi+44h]
0x621A3F: fsub    dword ptr [esi+0F8h]
0x621A45: fld     dword ptr [esi+0FCh]
0x621A4B: fcompp
0x621A4D: fnstsw  ax
0x621A4F: test    ah, 5
0x621A52: jp      loc_621B33
0x621A58: fld     [esp+18h+var_4]
0x621A5C: push    0; int
0x621A5E: fcom    st(1)
0x621A60: mov     ecx, esi
0x621A62: fnstsw  ax
0x621A64: test    ah, 1
0x621A67: jnz     short loc_621A85
0x621A69: fstp    st
0x621A6B: fstp    st
0x621A6D: call    sub_619920
0x621A72: fld     dword ptr ds:0A30634h
0x621A78: pop     ebx
0x621A79: fstp    dword ptr [esi+54h]
0x621A7C: mov     byte ptr [esi+58h], 0
0x621A80: pop     esi
0x621A81: add     esp, 10h
0x621A84: retn
0x621A85: sub     esp, 8
0x621A88: fstp    [esp+24h+var_20]; float
0x621A8C: fstp    [esp+24h+var_24]; float
0x621A8F: call    sub_613440
0x621A94: test    al, al
0x621A96: jz      short loc_621A9C
0x621A98: test    bl, bl
0x621A9A: jz      short loc_621AB2
0x621A9C: mov     eax, [esi+70h]
0x621A9F: push    eax
0x621AA0: call    sub_612690
0x621AA5: add     esp, 4
0x621AA8: test    al, al
0x621AAA: jz      short loc_621ABF
0x621AAC: cmp     dword ptr [esi+74h], 0
0x621AB0: jnz     short loc_621ABF
0x621AB2: fld     [esp+18h+var_10]
0x621AB6: pop     ebx
0x621AB7: fstp    dword ptr [esi+54h]
0x621ABA: pop     esi
0x621ABB: add     esp, 10h
0x621ABE: retn
0x621ABF: test    al, al
0x621AC1: fld     dword ptr ds:0A30634h
0x621AC7: fstp    dword ptr [esi+54h]
0x621ACA: mov     byte ptr [esi+58h], 0
0x621ACE: mov     ecx, esi
0x621AD0: jz      short loc_621AEE
0x621AD2: call    sub_614290
0x621AD7: test    al, al
0x621AD9: mov     ecx, esi
0x621ADB: jnz     short loc_621B29
0x621ADD: call    sub_6160B0
0x621AE2: pop     ebx
0x621AE3: mov     ecx, esi
0x621AE5: pop     esi
0x621AE6: add     esp, 10h
0x621AE9: jmp     sub_61FE90
0x621AEE: call    sub_614290
0x621AF3: test    al, al
0x621AF5: jnz     short loc_621B27
0x621AF7: mov     ecx, [esi+3Ch]
0x621AFA: call    sub_5E0F50
0x621AFF: mov     edx, [eax]
0x621B01: mov     ecx, eax
0x621B03: mov     eax, [edx+16Ch]
0x621B09: push    80h ; '€'
0x621B0E: call    eax
0x621B10: test    al, al
0x621B12: jz      short loc_621B27
0x621B14: mov     ecx, esi
0x621B16: call    sub_6160B0
0x621B1B: pop     ebx
0x621B1C: mov     ecx, esi
0x621B1E: pop     esi
0x621B1F: add     esp, 10h
0x621B22: jmp     sub_61FEF0
0x621B27: mov     ecx, esi
0x621B29: pop     ebx
0x621B2A: pop     esi
0x621B2B: add     esp, 10h
0x621B2E: jmp     sub_61D320
0x621B33: fstp    st
0x621B35: pop     ebx
0x621B36: pop     esi
0x621B37: add     esp, 10h
0x621B3A: retn
