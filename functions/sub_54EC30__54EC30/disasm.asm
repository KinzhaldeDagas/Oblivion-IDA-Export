0x54EC30: push    ebp
0x54EC31: mov     ebp, esp
0x54EC33: and     esp, 0FFFFFFF8h
0x54EC36: sub     esp, 1Ch
0x54EC39: push    ebx
0x54EC3A: mov     ebx, [ebp+arg_0]
0x54EC3D: test    ebx, ebx
0x54EC3F: push    esi
0x54EC40: push    edi
0x54EC41: mov     edi, ecx
0x54EC43: jz      short loc_54EC52
0x54EC45: mov     eax, [ebx]
0x54EC47: mov     edx, [eax+40h]
0x54EC4A: mov     ecx, ebx
0x54EC4C: call    edx
0x54EC4E: test    al, al
0x54EC50: jnz     short loc_54EC54
0x54EC52: xor     ebx, ebx
0x54EC54: test    ebx, ebx
0x54EC56: mov     [esp+28h+var_15], 0
0x54EC5B: jz      loc_54EE1C
0x54EC61: cmp     ebx, edi
0x54EC63: jz      loc_54EE1C
0x54EC69: mov     eax, [ebx]
0x54EC6B: mov     edx, [eax+4]
0x54EC6E: mov     ecx, ebx
0x54EC70: call    edx
0x54EC72: mov     esi, eax
0x54EC74: mov     eax, [edi]
0x54EC76: mov     edx, [eax+4]
0x54EC79: mov     ecx, edi
0x54EC7B: call    edx
0x54EC7D: cmp     eax, esi
0x54EC7F: jnz     loc_54EE1C
0x54EC85: mov     eax, [ebx]
0x54EC87: mov     edx, [eax+50h]
0x54EC8A: mov     ecx, ebx
0x54EC8C: call    edx
0x54EC8E: mov     esi, eax
0x54EC90: mov     eax, [edi]
0x54EC92: mov     edx, [eax+50h]
0x54EC95: mov     ecx, edi
0x54EC97: call    edx
0x54EC99: cmp     eax, esi
0x54EC9B: jnz     loc_54EE1C
0x54ECA1: fldz
0x54ECA3: fld     [ebp+arg_4]
0x54ECA6: fcom    st(1)
0x54ECA8: fnstsw  ax
0x54ECAA: fld1
0x54ECAC: test    ah, 5
0x54ECAF: jp      short loc_54ECBB
0x54ECB1: fstp    st(1)
0x54ECB3: fstp    st
0x54ECB5: fst     [esp+28h+var_14]
0x54ECB9: jmp     short loc_54ECCE
0x54ECBB: fcom    st(1)
0x54ECBD: fnstsw  ax
0x54ECBF: test    ah, 5
0x54ECC2: jp      short loc_54ECC8
0x54ECC4: fstp    st(1)
0x54ECC6: jmp     short loc_54ECCA
0x54ECC8: fstp    st
0x54ECCA: fstp    [esp+28h+var_14]
0x54ECCE: xor     esi, esi
0x54ECD0: cmp     [edi+10h], esi
0x54ECD3: ja      short loc_54ECE6
0x54ECD5: fstp    st
0x54ECD7: mov     al, [esp+28h+var_15]
0x54ECDB: pop     edi
0x54ECDC: pop     esi
0x54ECDD: pop     ebx
0x54ECDE: mov     esp, ebp
0x54ECE0: pop     ebp
0x54ECE1: retn    10h
0x54ECE4: fldz
0x54ECE6: cmp     byte ptr [ebp+arg_8], 0
0x54ECEA: jnz     short loc_54ED1C
0x54ECEC: fld     dword ptr ds:0A37080h
0x54ECF2: mov     eax, [ebx]
0x54ECF4: mov     edx, [eax+48h]
0x54ECF7: sub     esp, 8
0x54ECFA: fstp    [esp+30h+var_2C]; float
0x54ECFE: mov     ecx, ebx
0x54ED00: fstp    [esp+30h+var_30]; float
0x54ED03: push    esi
0x54ED04: call    edx
0x54ED06: push    ecx
0x54ED07: fstp    [esp+34h+var_34]; float
0x54ED0A: call    sub_47DF40
0x54ED0F: add     esp, 0Ch
0x54ED12: test    al, al
0x54ED14: jnz     loc_54EE03
0x54ED1A: jmp     short loc_54ED1E
0x54ED1C: fstp    st
0x54ED1E: mov     eax, [ebx]
0x54ED20: mov     edx, [eax+48h]
0x54ED23: push    esi
0x54ED24: mov     ecx, ebx
0x54ED26: call    edx
0x54ED28: fcomp   dword ptr ds:0A2FAA8h
0x54ED2E: fnstsw  ax
0x54ED30: test    ah, 1
0x54ED33: jnz     loc_54EDE5
0x54ED39: mov     eax, [ebx]
0x54ED3B: mov     edx, [eax+48h]
0x54ED3E: push    esi
0x54ED3F: mov     ecx, ebx
0x54ED41: call    edx
0x54ED43: fld1
0x54ED45: fcom    st(1)
0x54ED47: fnstsw  ax
0x54ED49: fstp    st(1)
0x54ED4B: test    ah, 1
0x54ED4E: jnz     loc_54EDE3
0x54ED54: fcomp   [ebp+arg_4]
0x54ED57: fnstsw  ax
0x54ED59: test    ah, 41h
0x54ED5C: jnz     short loc_54EDC8
0x54ED5E: mov     eax, [edi]
0x54ED60: mov     edx, [eax+48h]
0x54ED63: push    esi
0x54ED64: mov     ecx, edi
0x54ED66: call    edx
0x54ED68: fcomp   dword ptr ds:0A2FAA8h
0x54ED6E: fnstsw  ax
0x54ED70: test    ah, 1
0x54ED73: jnz     short loc_54EDC8
0x54ED75: mov     eax, [edi]
0x54ED77: mov     edx, [eax+48h]
0x54ED7A: push    esi
0x54ED7B: mov     ecx, edi
0x54ED7D: call    edx
0x54ED7F: fcomp   dword ptr ds:0A2F948h
0x54ED85: fnstsw  ax
0x54ED87: test    ah, 41h
0x54ED8A: jp      short loc_54EDC8
0x54ED8C: mov     eax, [edi]
0x54ED8E: mov     [esp+28h+var_4], eax
0x54ED92: mov     eax, [eax+48h]
0x54ED95: push    esi
0x54ED96: mov     ecx, edi
0x54ED98: call    eax
0x54ED9A: fld     [esp+28h+var_14]
0x54ED9E: fld1
0x54EDA0: mov     edx, [ebx]
0x54EDA2: mov     eax, [edx+48h]
0x54EDA5: fsubrp  st(1), st
0x54EDA7: push    esi
0x54EDA8: mov     ecx, ebx
0x54EDAA: fmulp   st(1), st
0x54EDAC: fstp    [esp+2Ch+var_10]
0x54EDB0: call    eax
0x54EDB2: fmul    [esp+28h+var_14]
0x54EDB6: mov     edx, [esp+28h+var_4]
0x54EDBA: fadd    [esp+28h+var_10]
0x54EDBE: fstp    dword ptr [esp+28h+var_10]
0x54EDC2: fld     dword ptr [esp+28h+var_10]
0x54EDC6: jmp     short loc_54EDF3
0x54EDC8: mov     eax, [edi]
0x54EDCA: mov     edx, [ebx]
0x54EDCC: add     eax, 4Ch ; 'L'
0x54EDCF: mov     [esp+28h+var_4], eax
0x54EDD3: mov     eax, [edx+48h]
0x54EDD6: push    esi
0x54EDD7: mov     ecx, ebx
0x54EDD9: call    eax
0x54EDDB: mov     edx, [esp+28h+var_4]
0x54EDDF: mov     eax, [edx]
0x54EDE1: jmp     short loc_54EDF6
0x54EDE3: fstp    st
0x54EDE5: cmp     [ebp+arg_C], 0
0x54EDE9: jz      short loc_54EE03
0x54EDEB: mov     edx, [edi]
0x54EDED: fld     dword ptr ds:0A32048h
0x54EDF3: mov     eax, [edx+4Ch]
0x54EDF6: push    ecx
0x54EDF7: fstp    [esp+2Ch+var_2C]
0x54EDFA: push    esi
0x54EDFB: mov     ecx, edi
0x54EDFD: call    eax
0x54EDFF: or      [esp+28h+var_15], al
0x54EE03: add     esi, 1
0x54EE06: cmp     esi, [edi+10h]
0x54EE09: jb      loc_54ECE4
0x54EE0F: mov     al, [esp+28h+var_15]
0x54EE13: pop     edi
0x54EE14: pop     esi
0x54EE15: pop     ebx
0x54EE16: mov     esp, ebp
0x54EE18: pop     ebp
0x54EE19: retn    10h
0x54EE1C: pop     edi
0x54EE1D: pop     esi
0x54EE1E: xor     al, al
0x54EE20: pop     ebx
0x54EE21: mov     esp, ebp
0x54EE23: pop     ebp
0x54EE24: retn    10h
