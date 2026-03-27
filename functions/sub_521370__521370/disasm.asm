0x521370: sub     esp, 108h
0x521376: mov     eax, ds:0B30AACh
0x52137B: xor     eax, esp
0x52137D: mov     [esp+108h+var_4], eax
0x521384: push    ebx
0x521385: push    esi
0x521386: mov     esi, [esp+110h+arg_4]
0x52138D: mov     eax, [esi]
0x52138F: push    eax
0x521390: call    FormHeapFree
0x521395: mov     eax, [esp+114h+arg_0]
0x52139C: xor     ebx, ebx
0x52139E: add     esp, 4
0x5213A1: cmp     eax, ebx
0x5213A3: mov     [esi], ebx
0x5213A5: mov     [esi+6], bx
0x5213A9: mov     [esi+4], bx
0x5213AD: jz      loc_521439
0x5213B3: cmp     [eax], bl
0x5213B5: jz      loc_521439
0x5213BB: lea     edx, [esp+110h+Str]
0x5213BF: sub     edx, eax
0x5213C1: mov     cl, [eax]
0x5213C3: mov     [edx+eax], cl
0x5213C6: add     eax, 1
0x5213C9: cmp     cl, bl
0x5213CB: jnz     short loc_5213C1
0x5213CD: lea     ecx, [esp+110h+Str]
0x5213D1: push    offset aIdleanims; SubStr
0x5213D6: push    ecx; Str
0x5213D7: call    _strstr
0x5213DC: add     esp, 8
0x5213DF: cmp     eax, ebx
0x5213E1: jz      short loc_52140A
0x5213E3: push    ebx; a3
0x5213E4: lea     edx, [esp+114h+Str]
0x5213E8: push    edx; a2
0x5213E9: mov     ecx, esi; this
0x5213EB: mov     [eax+9], bl
0x5213EE: call    BSStringT_Set
0x5213F3: pop     esi
0x5213F4: pop     ebx
0x5213F5: mov     ecx, [esp+108h+var_4]
0x5213FC: xor     ecx, esp
0x5213FE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x521403: add     esp, 108h
0x521409: retn
0x52140A: lea     eax, [esp+110h+Str]
0x52140E: push    5Ch ; '\'; Ch
0x521410: push    eax; Str
0x521411: call    _strrchr
0x521416: add     esp, 8
0x521419: cmp     eax, ebx
0x52141B: jz      short loc_521439
0x52141D: push    ebx; a3
0x52141E: lea     ecx, [esp+114h+Str]
0x521422: push    ecx; a2
0x521423: mov     ecx, esi; this
0x521425: mov     [eax+1], bl
0x521428: call    BSStringT_Set
0x52142D: push    offset aIdleanims
0x521432: mov     ecx, esi
0x521434: call    BSStringT_Append
0x521439: mov     ecx, [esp+110h+var_4]
0x521440: pop     esi
0x521441: pop     ebx
0x521442: xor     ecx, esp
0x521444: call    @__security_check_cookie@4; __security_check_cookie(x)
0x521449: add     esp, 108h
0x52144F: retn
