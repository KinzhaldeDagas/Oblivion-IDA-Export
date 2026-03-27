0x63CFB0: sub     esp, 8
0x63CFB3: push    ebx
0x63CFB4: push    esi
0x63CFB5: mov     esi, [esp+10h+a2]
0x63CFB9: mov     eax, [esi+3Ch]
0x63CFBC: push    edi
0x63CFBD: push    0
0x63CFBF: push    1
0x63CFC1: push    eax
0x63CFC2: mov     edi, ecx
0x63CFC4: call    sub_88D150
0x63CFC9: mov     bl, al
0x63CFCB: add     esp, 0Ch
0x63CFCE: test    bl, bl
0x63CFD0: jz      short loc_63D037
0x63CFD2: mov     eax, [edi]
0x63CFD4: mov     edx, [eax+28h]
0x63CFD7: mov     ecx, edi
0x63CFD9: call    edx
0x63CFDB: fstp    dword ptr [esp+14h+var_8]
0x63CFDF: mov     ecx, offset TimeGlobals
0x63CFE4: call    TimeGlobals_GetGameHour
0x63CFE9: fstp    [esp+14h+a2]
0x63CFED: fld     [esp+14h+a2]
0x63CFF1: fld     dword ptr [esp+14h+var_8]
0x63CFF5: fcom    st(1)
0x63CFF7: fnstsw  ax
0x63CFF9: test    ah, 41h
0x63CFFC: jnz     short loc_63D008
0x63CFFE: fadd    qword ptr ds:0A492B8h
0x63D004: fsubrp  st(1), st
0x63D006: jmp     short loc_63D00A
0x63D008: fsubp   st(1), st
0x63D00A: fstp    [esp+14h+a2]
0x63D00E: mov     ecx, offset TimeGlobals
0x63D013: fld     [esp+14h+a2]
0x63D017: fstp    [esp+14h+var_8]
0x63D01B: call    sub_4029D0
0x63D020: fmul    qword ptr ds:0A59B38h
0x63D026: fcomp   [esp+14h+var_8]
0x63D02A: fnstsw  ax
0x63D02C: test    ah, 41h
0x63D02F: jnz     short loc_63D035
0x63D031: mov     bl, 1
0x63D033: jmp     short loc_63D037
0x63D035: xor     bl, bl
0x63D037: mov     edi, [edi+17Ch]
0x63D03D: test    edi, edi
0x63D03F: jz      short loc_63D082
0x63D041: push    ebp
0x63D042: push    0
0x63D044: mov     ecx, edi
0x63D046: call    sub_4706E0
0x63D04B: mov     ebp, eax
0x63D04D: test    ebp, ebp
0x63D04F: jz      short loc_63D081
0x63D051: mov     ecx, [ebp+68h]
0x63D054: call    TESAnimGroup_GetAnimationGroup
0x63D059: cmp     eax, 20h ; ' '
0x63D05C: jnz     short loc_63D081
0x63D05E: fld     dword ptr ds:0A30634h
0x63D064: push    ecx
0x63D065: fstp    [esp+1Ch+var_1C]; float
0x63D068: push    ebp
0x63D069: call    sub_470CE0
0x63D06E: fstp    [esp+20h+var_20]; float
0x63D071: push    esi; int
0x63D072: mov     ecx, edi; this
0x63D074: call    sub_476D10
0x63D079: push    esi; a2
0x63D07A: mov     ecx, edi; this
0x63D07C: call    sub_474510
0x63D081: pop     ebp
0x63D082: test    bl, bl
0x63D084: jnz     short loc_63D0B7
0x63D086: mov     ecx, esi
0x63D088: call    sub_5E9E70
0x63D08D: mov     eax, [esi]
0x63D08F: mov     edx, [eax+144h]
0x63D095: mov     ecx, esi
0x63D097: call    edx
0x63D099: mov     eax, [esi]
0x63D09B: mov     edx, [eax+9Ch]
0x63D0A1: push    1
0x63D0A3: mov     ecx, esi
0x63D0A5: call    edx
0x63D0A7: mov     ecx, esi
0x63D0A9: call    sub_4DC550
0x63D0AE: push    esi
0x63D0AF: lea     ecx, [esi+44h]
0x63D0B2: call    sub_424870
0x63D0B7: pop     edi
0x63D0B8: pop     esi
0x63D0B9: pop     ebx
0x63D0BA: add     esp, 8
0x63D0BD: retn    4
