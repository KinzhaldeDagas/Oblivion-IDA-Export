0x961680: sub     esp, 18h
0x961683: push    ebx
0x961684: mov     ebx, [esp+1Ch+arg_0]
0x961688: push    esi
0x961689: push    edi
0x96168A: mov     edi, [esp+24h+arg_4]
0x96168E: mov     esi, ecx
0x961690: lea     eax, [ebx+4]
0x961693: push    eax
0x961694: lea     ecx, [esp+28h+var_C]
0x961698: push    ecx
0x961699: mov     ecx, edi
0x96169B: call    sub_7101F0
0x9616A0: fld     dword ptr [edi+30h]
0x9616A3: fstp    [esp+24h+arg_0]
0x9616A7: fld     dword ptr [eax]
0x9616A9: fld     [esp+24h+arg_0]
0x9616AD: fld     st
0x9616AF: fmulp   st(2), st
0x9616B1: fxch    st(1)
0x9616B3: fstp    [esp+24h+var_18]
0x9616B7: fld     dword ptr [eax+4]
0x9616BA: fmul    st, st(1)
0x9616BC: fstp    [esp+24h+var_14]
0x9616C0: fmul    dword ptr [eax+8]
0x9616C3: fstp    [esp+24h+var_10]
0x9616C7: fld     dword ptr [edi+24h]
0x9616CA: fadd    [esp+24h+var_18]
0x9616CE: fstp    [esp+24h+var_C]
0x9616D2: mov     edx, [esp+24h+var_C]
0x9616D6: fld     dword ptr [edi+28h]
0x9616D9: fadd    [esp+24h+var_14]
0x9616DD: fstp    [esp+24h+var_8]
0x9616E1: mov     eax, [esp+24h+var_8]
0x9616E5: fld     dword ptr [edi+2Ch]
0x9616E8: mov     [esi+4], edx
0x9616EB: fadd    [esp+24h+var_10]
0x9616EF: mov     [esi+8], eax
0x9616F2: lea     edx, [ebx+10h]
0x9616F5: push    edx
0x9616F6: fstp    [esp+28h+var_4]
0x9616FA: mov     ecx, [esp+28h+var_4]
0x9616FE: lea     eax, [esp+28h+var_C]
0x961702: mov     [esi+0Ch], ecx
0x961705: push    eax
0x961706: mov     ecx, edi
0x961708: call    sub_7101F0
0x96170D: mov     ecx, [eax]
0x96170F: mov     [esi+10h], ecx
0x961712: mov     edx, [eax+4]
0x961715: mov     [esi+14h], edx
0x961718: mov     eax, [eax+8]
0x96171B: mov     [esi+18h], eax
0x96171E: fld     dword ptr [ebx+34h]
0x961721: fmul    dword ptr [edi+30h]
0x961724: lea     ecx, [ebx+1Ch]
0x961727: push    ecx
0x961728: lea     edx, [esp+28h+var_C]
0x96172C: push    edx
0x96172D: fstp    dword ptr [esi+34h]
0x961730: mov     ecx, edi
0x961732: call    sub_7101F0
0x961737: mov     ecx, [eax]
0x961739: mov     [esi+1Ch], ecx
0x96173C: mov     edx, [eax+4]
0x96173F: mov     [esi+20h], edx
0x961742: mov     eax, [eax+8]
0x961745: mov     [esi+24h], eax
0x961748: fld     dword ptr [ebx+38h]
0x96174B: fmul    dword ptr [edi+30h]
0x96174E: lea     ecx, [ebx+28h]
0x961751: push    ecx
0x961752: lea     edx, [esp+28h+var_C]
0x961756: push    edx
0x961757: fstp    dword ptr [esi+38h]
0x96175A: mov     ecx, edi
0x96175C: call    sub_7101F0
0x961761: mov     ecx, [eax]
0x961763: mov     [esi+28h], ecx
0x961766: mov     edx, [eax+4]
0x961769: mov     [esi+2Ch], edx
0x96176C: mov     eax, [eax+8]
0x96176F: mov     [esi+30h], eax
0x961772: fld     dword ptr [ebx+3Ch]
0x961775: fmul    dword ptr [edi+30h]
0x961778: pop     edi
0x961779: fstp    dword ptr [esi+3Ch]
0x96177C: pop     esi
0x96177D: pop     ebx
0x96177E: add     esp, 18h
0x961781: retn    8
