0x437D40: sub     esp, 10Ch
0x437D46: mov     eax, ___security_cookie
0x437D4B: xor     eax, esp
0x437D4D: mov     [esp+10Ch+var_4], eax
0x437D54: push    ebx
0x437D55: mov     ebx, ecx
0x437D57: mov     ecx, [ebx+20h]
0x437D5A: mov     eax, [ecx]
0x437D5C: mov     edx, [eax+170h]
0x437D62: call    edx
0x437D64: push    eax; int
0x437D65: lea     eax, [esp+114h+Str]
0x437D69: push    eax; Str
0x437D6A: call    sub_46D540
0x437D6F: mov     ecx, ModelLoaderPtr
0x437D75: mov     ecx, [ecx]
0x437D77: add     esp, 8
0x437D7A: lea     eax, [esp+110h+var_10C]
0x437D7E: push    eax
0x437D7F: mov     [esp+114h+var_10C], 0
0x437D87: mov     edx, [ecx]
0x437D89: mov     edx, [edx+4]
0x437D8C: lea     eax, [esp+114h+Str]
0x437D90: push    eax
0x437D91: call    edx
0x437D93: test    al, al
0x437D95: jz      short loc_437E04
0x437D97: mov     eax, [esp+110h+var_10C]
0x437D9B: test    eax, eax
0x437D9D: jz      short loc_437E04
0x437D9F: mov     ecx, [eax+8]
0x437DA2: test    ecx, ecx
0x437DA4: jz      short loc_437E04
0x437DA6: push    esi
0x437DA7: call    sub_700900
0x437DAC: mov     esi, eax
0x437DAE: test    esi, esi
0x437DB0: jz      short loc_437E03
0x437DB2: mov     eax, [esi]
0x437DB4: mov     edx, [eax+8]
0x437DB7: push    edi
0x437DB8: mov     ecx, esi
0x437DBA: call    edx
0x437DBC: mov     edi, eax
0x437DBE: test    edi, edi
0x437DC0: jnz     short loc_437DDB
0x437DC2: mov     [esp+118h+var_10C], esi
0x437DC6: add     esi, 4
0x437DC9: push    esi; lpAddend
0x437DCA: call    ds:InterlockedIncrement
0x437DD0: lea     ecx, [esp+118h+var_10C]; this
0x437DD4: call    sub_7016A0
0x437DD9: jmp     short loc_437DF4
0x437DDB: mov     eax, [edi]
0x437DDD: mov     edx, [eax+98h]
0x437DE3: mov     ecx, edi
0x437DE5: call    edx
0x437DE7: test    al, al
0x437DE9: jz      short loc_437DF4
0x437DEB: push    6
0x437DED: mov     ecx, edi
0x437DEF: call    sub_4A01B0
0x437DF4: test    edi, edi
0x437DF6: jz      short loc_437E02
0x437DF8: mov     eax, [ebx]
0x437DFA: mov     edx, [eax+34h]
0x437DFD: push    edi
0x437DFE: mov     ecx, ebx
0x437E00: call    edx
0x437E02: pop     edi
0x437E03: pop     esi
0x437E04: mov     ecx, [esp+110h+var_4]
0x437E0B: pop     ebx
0x437E0C: xor     ecx, esp
0x437E0E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x437E13: add     esp, 10Ch
0x437E19: retn
