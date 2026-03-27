0x955150: sub     esp, 18h
0x955153: mov     eax, [esp+18h+arg_0]
0x955157: push    ebx
0x955158: mov     ebx, ecx
0x95515A: mov     ecx, [esp+1Ch+arg_4]
0x95515E: lea     edx, [ebx+50h]
0x955161: push    ebp
0x955162: mov     [esp+20h+var_18], edx
0x955166: push    esi
0x955167: mov     edx, ecx
0x955169: sub     edx, eax
0x95516B: push    edi
0x95516C: lea     esi, [eax+50h]
0x95516F: lea     ebp, [ecx+10h]
0x955172: lea     edi, [eax+0Ch]
0x955175: mov     [esp+28h+var_4], edx
0x955179: mov     [esp+28h+var_10], 3
0x955181: jmp     short loc_955187
0x955183: mov     ecx, [esp+28h+arg_4]
0x955187: mov     ecx, [ecx+24h]
0x95518A: fld     dword ptr [edi+4]
0x95518D: fsub    dword ptr [edi]
0x95518F: mov     eax, 1
0x955194: shl     eax, cl
0x955196: mov     ecx, [ebx+48h]
0x955199: fstp    [esp+28h+var_8]
0x95519D: mov     [esp+28h+var_14], ecx
0x9551A1: mov     [esp+28h+var_C], eax
0x9551A5: fild    [esp+28h+var_C]
0x9551A9: fdiv    dword ptr [ebx+3Ch]
0x9551AC: fcom    [esp+28h+var_14]
0x9551B0: fnstsw  ax
0x9551B2: test    ah, 41h
0x9551B5: jz      short loc_9551BD
0x9551B7: fstp    st
0x9551B9: fld     [esp+28h+var_14]
0x9551BD: mov     edx, [esp+28h+var_18]
0x9551C1: fld     [esp+28h+var_8]
0x9551C5: mov     eax, [edx]
0x9551C7: mov     [esp+28h+arg_0], eax
0x9551CB: fcomp   [esp+28h+arg_0]
0x9551CF: fnstsw  ax
0x9551D1: test    ah, 5
0x9551D4: jp      short loc_9551E7
0x9551D6: fcom    [esp+28h+arg_0]
0x9551DA: fnstsw  ax
0x9551DC: test    ah, 5
0x9551DF: jnp     short loc_9551E7
0x9551E1: fstp    st
0x9551E3: fld     [esp+28h+arg_0]
0x9551E7: fld     dword ptr [ebx+3Ch]
0x9551EA: push    ecx
0x9551EB: fmul    st, st(1)
0x9551ED: fstp    [esp+2Ch+var_2C]
0x9551F0: fstp    st
0x9551F2: call    sub_8ECB30
0x9551F7: mov     ecx, [ebp+0]
0x9551FA: mov     edx, [esp+2Ch+var_4]
0x9551FE: mov     edx, [edx+edi]
0x955201: sub     edx, eax
0x955203: lea     eax, [ecx+eax+1]
0x955207: mov     ecx, [esp+2Ch+var_18]
0x95520B: mov     [esi], eax
0x95520D: mov     eax, [esp+2Ch+var_10]
0x955211: mov     [esi-0Ch], edx
0x955214: add     ecx, 4
0x955217: add     esp, 4
0x95521A: add     esi, 4
0x95521D: add     edi, 8
0x955220: add     ebp, 8
0x955223: dec     eax
0x955224: mov     [esp+28h+var_18], ecx
0x955228: mov     [esp+28h+var_10], eax
0x95522C: jnz     loc_955183
0x955232: pop     edi
0x955233: pop     esi
0x955234: pop     ebp
0x955235: pop     ebx
0x955236: add     esp, 18h
0x955239: retn    8
