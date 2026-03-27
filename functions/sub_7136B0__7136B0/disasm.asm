0x7136B0: sub     esp, 8
0x7136B3: push    esi
0x7136B4: push    edi
0x7136B5: mov     esi, ecx
0x7136B7: mov     eax, [esi+21Ch]
0x7136BD: push    1
0x7136BF: lea     ecx, [esp+14h+var_4]
0x7136C3: push    ecx
0x7136C4: push    4
0x7136C6: lea     edx, [esp+1Ch+var_8]
0x7136CA: push    edx
0x7136CB: push    eax
0x7136CC: mov     eax, [eax+4]
0x7136CF: mov     [esp+24h+var_4], 4
0x7136D7: call    eax
0x7136D9: mov     edx, [esp+24h+var_8]
0x7136DD: mov     esi, [esi+21Ch]
0x7136E3: mov     edi, [esp+24h+arg_0]
0x7136E7: mov     eax, [esi+4]
0x7136EA: push    1
0x7136EC: lea     ecx, [esp+28h+var_4]
0x7136F0: push    ecx
0x7136F1: push    edx
0x7136F2: push    edi
0x7136F3: push    esi
0x7136F4: mov     [esp+38h+var_4], 1
0x7136FC: call    eax
0x7136FE: mov     ecx, [esp+38h+var_8]
0x713702: add     esp, 28h
0x713705: mov     byte ptr [ecx+edi], 0
0x713709: pop     edi
0x71370A: pop     esi
0x71370B: add     esp, 8
0x71370E: retn    4
