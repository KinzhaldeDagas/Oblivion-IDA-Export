0x9682F0: sub     esp, 2Ch
0x9682F3: mov     ecx, [esp+2Ch+arg_4]
0x9682F7: push    esi
0x9682F8: push    edi
0x9682F9: mov     edi, [esp+34h+arg_C]
0x9682FD: fld     dword ptr [edi+4]
0x968300: lea     edx, [edi+4]
0x968303: fsub    dword ptr [ecx+4]
0x968306: lea     esi, [ecx+4]
0x968309: fstp    [esp+34h+var_24]
0x96830D: fld     dword ptr [edx+4]
0x968310: fsub    dword ptr [esi+4]
0x968313: fstp    [esp+34h+var_20]
0x968317: fld     dword ptr [edx+8]
0x96831A: fsub    dword ptr [esi+8]
0x96831D: fstp    [esp+34h+var_1C]
0x968321: fld     dword ptr [ecx+14h]
0x968324: fld     [esp+34h+var_20]
0x968328: fld     st
0x96832A: fmulp   st(2), st
0x96832C: fld     dword ptr [ecx+10h]
0x96832F: fld     [esp+34h+var_24]
0x968333: fld     st
0x968335: fmulp   st(2), st
0x968337: fxch    st(3)
0x968339: faddp   st(1), st
0x96833B: fld     dword ptr [ecx+18h]
0x96833E: fld     [esp+34h+var_1C]
0x968342: fld     st
0x968344: fmulp   st(2), st
0x968346: fxch    st(2)
0x968348: faddp   st(1), st
0x96834A: fstp    [esp+34h+arg_4]
0x96834E: fld     [esp+34h+arg_4]
0x968352: fabs
0x968354: fstp    [esp+34h+arg_4]
0x968358: fld     [esp+34h+arg_4]
0x96835C: fld     dword ptr [ecx+34h]
0x96835F: fcompp
0x968361: fnstsw  ax
0x968363: test    ah, 1
0x968366: jnz     short loc_9683D2
0x968368: fld     dword ptr [ecx+20h]
0x96836B: fmul    st, st(2)
0x96836D: fld     dword ptr [ecx+1Ch]
0x968370: fmul    st, st(4)
0x968372: faddp   st(1), st
0x968374: fld     dword ptr [ecx+24h]
0x968377: fmul    st, st(2)
0x968379: faddp   st(1), st
0x96837B: fstp    [esp+34h+arg_4]
0x96837F: fld     [esp+34h+arg_4]
0x968383: fabs
0x968385: fstp    [esp+34h+arg_4]
0x968389: fld     [esp+34h+arg_4]
0x96838D: fld     dword ptr [ecx+38h]
0x968390: fcompp
0x968392: fnstsw  ax
0x968394: test    ah, 1
0x968397: jnz     short loc_9683D2
0x968399: fld     dword ptr [ecx+2Ch]
0x96839C: fmulp   st(2), st
0x96839E: fld     dword ptr [ecx+28h]
0x9683A1: fmulp   st(3), st
0x9683A3: fxch    st(1)
0x9683A5: faddp   st(2), st
0x9683A7: fmul    dword ptr [ecx+30h]
0x9683AA: faddp   st(1), st
0x9683AC: fstp    [esp+34h+arg_4]
0x9683B0: fld     [esp+34h+arg_4]
0x9683B4: fabs
0x9683B6: fstp    [esp+34h+arg_4]
0x9683BA: fld     [esp+34h+arg_4]
0x9683BE: fld     dword ptr [ecx+3Ch]
0x9683C1: fcompp
0x9683C3: fnstsw  ax
0x9683C5: test    ah, 1
0x9683C8: jnz     short loc_9683D8
0x9683CA: pop     edi
0x9683CB: mov     al, 1
0x9683CD: pop     esi
0x9683CE: add     esp, 2Ch
0x9683D1: retn
0x9683D2: fstp    st(1)
0x9683D4: fstp    st(1)
0x9683D6: fstp    st
0x9683D8: mov     eax, [esp+34h+arg_10]
0x9683DC: mov     ecx, [esp+34h+arg_8]
0x9683E0: fld     dword ptr [eax]
0x9683E2: fsub    dword ptr [ecx]
0x9683E4: fstp    [esp+34h+var_24]
0x9683E8: fld     dword ptr [eax+4]
0x9683EB: fsub    dword ptr [ecx+4]
0x9683EE: fstp    [esp+34h+var_20]
0x9683F2: fld     dword ptr [eax+8]
0x9683F5: fsub    dword ptr [ecx+8]
0x9683F8: fstp    [esp+34h+var_1C]
0x9683FC: fld     [esp+34h+var_24]
0x968400: fld     st
0x968402: fld     dword ptr ds:0B3F9A8h
0x968408: fucompp
0x96840A: fnstsw  ax
0x96840C: fld     [esp+34h+var_1C]
0x968410: test    ah, 44h
0x968413: fld     [esp+34h+var_20]
0x968417: jp      short loc_96843B
0x968419: fld     st
0x96841B: fld     dword ptr ds:0B3F9ACh
0x968421: fucompp
0x968423: fnstsw  ax
0x968425: test    ah, 44h
0x968428: jp      short loc_96843B
0x96842A: fld     st(1)
0x96842C: fld     dword ptr ds:0B3F9B0h
0x968432: fucompp
0x968434: fnstsw  ax
0x968436: test    ah, 44h
0x968439: jnp     short loc_9684A5
0x96843B: fld     [esp+34h+arg_0]
0x96843F: mov     eax, [edx]
0x968441: mov     ecx, [edx+4]
0x968444: fld     st
0x968446: mov     edx, [edx+8]
0x968449: fmulp   st(4), st
0x96844B: fxch    st(3)
0x96844D: mov     [esp+34h+var_18], eax
0x968451: mov     [esp+34h+var_14], ecx
0x968455: fstp    [esp+34h+var_24]
0x968459: mov     eax, [esp+34h+var_24]
0x96845D: mov     [esp+34h+var_C], eax
0x968461: fmul    st, st(2)
0x968463: mov     [esp+34h+var_10], edx
0x968467: lea     eax, [esp+34h+arg_4]
0x96846B: push    eax
0x96846C: fstp    [esp+38h+var_20]
0x968470: mov     ecx, [esp+38h+var_20]
0x968474: mov     [esp+38h+var_8], ecx
0x968478: fmulp   st(1), st
0x96847A: lea     ecx, [esp+38h+arg_C]
0x96847E: push    ecx
0x96847F: lea     eax, [esp+3Ch+var_28]
0x968483: fstp    [esp+3Ch+var_1C]
0x968487: mov     edx, [esp+3Ch+var_1C]
0x96848B: mov     [esp+3Ch+var_4], edx
0x96848F: lea     edx, [esp+3Ch+var_2C]
0x968493: push    edx
0x968494: push    eax
0x968495: lea     ecx, [esp+44h+var_18]
0x968499: push    esi
0x96849A: push    ecx
0x96849B: call    sub_975AA0
0x9684A0: add     esp, 18h
0x9684A3: jmp     short loc_9684C4
0x9684A5: lea     eax, [esp+34h+arg_4]
0x9684A9: fstp    st(2)
0x9684AB: push    eax
0x9684AC: fstp    st
0x9684AE: lea     ecx, [esp+38h+arg_C]
0x9684B2: fstp    st
0x9684B4: push    ecx
0x9684B5: lea     eax, [esp+3Ch+var_2C]
0x9684B9: push    eax
0x9684BA: push    esi
0x9684BB: push    edx
0x9684BC: call    sub_974C80
0x9684C1: add     esp, 14h
0x9684C4: fstp    [esp+34h+arg_4]
0x9684C8: fld     dword ptr [edi+10h]
0x9684CB: fld     [esp+34h+arg_4]
0x9684CF: fld     st(1)
0x9684D1: fmulp   st(2), st
0x9684D3: fcompp
0x9684D5: fnstsw  ax
0x9684D7: test    ah, 41h
0x9684DA: jp      short loc_9684E7
0x9684DC: pop     edi
0x9684DD: mov     eax, 1
0x9684E2: pop     esi
0x9684E3: add     esp, 2Ch
0x9684E6: retn
0x9684E7: pop     edi
0x9684E8: xor     eax, eax
0x9684EA: pop     esi
0x9684EB: add     esp, 2Ch
0x9684EE: retn
