0x8BF880: sub     esp, 20h
0x8BF883: fld     dword ptr ds:0A2FE7Ch
0x8BF889: xor     eax, eax
0x8BF88B: push    esi
0x8BF88C: fstp    [esp+24h+var_10]
0x8BF890: mov     esi, [esp+24h+arg_4]
0x8BF894: cmp     esi, eax
0x8BF896: push    edi
0x8BF897: mov     edi, ecx
0x8BF899: mov     [esp+28h+var_20], eax
0x8BF89D: mov     [esp+28h+var_1C], eax
0x8BF8A1: mov     [esp+28h+var_18], eax
0x8BF8A5: mov     [esp+28h+var_14], al
0x8BF8A9: mov     [esp+28h+var_C], al
0x8BF8AD: mov     [esp+28h+var_8], eax
0x8BF8B1: mov     [esp+28h+var_4], eax
0x8BF8B5: jnz     short loc_8BF8D5
0x8BF8B7: mov     ecx, [esp+28h+arg_0]
0x8BF8BB: mov     ecx, [ecx+21Ch]
0x8BF8C1: push    eax
0x8BF8C2: push    eax
0x8BF8C3: mov     eax, [ecx+4]
0x8BF8C6: lea     esi, [esp+30h+var_20]
0x8BF8CA: push    20h ; ' '
0x8BF8CC: mov     edx, esi
0x8BF8CE: push    edx
0x8BF8CF: push    ecx
0x8BF8D0: call    eax
0x8BF8D2: add     esp, 14h
0x8BF8D5: mov     edx, [edi]
0x8BF8D7: mov     eax, [edx+10h]
0x8BF8DA: mov     ecx, edi
0x8BF8DC: call    eax
0x8BF8DE: mov     al, [esi+0Ch]
0x8BF8E1: mov     edi, [edi+4]
0x8BF8E4: mov     [edi+18h], al
0x8BF8E7: mov     al, [esi+14h]
0x8BF8EA: mov     [edi+19h], al
0x8BF8ED: fld     dword ptr [esi+10h]
0x8BF8F0: call    __CIsqrt
0x8BF8F5: fstp    [esp+28h+arg_4]
0x8BF8F9: fld     [esp+28h+arg_4]
0x8BF8FD: fstp    dword ptr [edi+14h]
0x8BF900: pop     edi
0x8BF901: pop     esi
0x8BF902: add     esp, 20h
0x8BF905: retn    8
