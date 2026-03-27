0x5350F0: push    0FFFFFFFFh
0x5350F2: push    offset SEH_5350F0
0x5350F7: mov     eax, large fs:0
0x5350FD: push    eax
0x5350FE: sub     esp, 10Ch
0x535104: mov     eax, ds:0B30AACh
0x535109: xor     eax, esp
0x53510B: mov     [esp+118h+var_10], eax
0x535112: push    esi
0x535113: push    edi
0x535114: mov     eax, ds:0B30AACh
0x535119: xor     eax, esp
0x53511B: push    eax
0x53511C: lea     eax, [esp+124h+var_C]
0x535123: mov     large fs:0, eax
0x535129: call    sub_88B070
0x53512E: mov     ecx, ds:0BA7D98h
0x535134: mov     eax, [ecx]
0x535136: mov     edx, [eax+10h]
0x535139: push    15h
0x53513B: push    124h
0x535140: call    edx
0x535142: mov     word ptr [eax+4], 124h
0x535148: mov     [esp+124h+var_118], eax
0x53514C: mov     ecx, eax; this
0x53514E: mov     [esp+124h+var_4], 0
0x535159: call    ??0HavokError@@QAE@XZ; HavokError::HavokError(void)
0x53515E: mov     edi, eax
0x535160: mov     eax, ds:0BA7FB0h
0x535165: test    eax, eax
0x535167: mov     [esp+124h+var_4], 0FFFFFFFFh
0x535172: jz      short loc_535193
0x535174: cmp     word ptr [eax+4], 0
0x535179: mov     ecx, eax
0x53517B: jz      short loc_535193
0x53517D: add     word ptr [eax+6], 0FFFFh
0x535182: add     eax, 6
0x535185: cmp     word ptr [eax], 0
0x535189: jnz     short loc_535193
0x53518B: mov     eax, [ecx]
0x53518D: mov     edx, [eax]
0x53518F: push    1
0x535191: call    edx
0x535193: mov     ecx, ds:0BA7D98h
0x535199: mov     ds:0BA7FB0h, edi
0x53519F: mov     eax, [ecx]
0x5351A1: mov     edx, [eax+10h]
0x5351A4: push    15h
0x5351A6: push    8
0x5351A8: call    edx
0x5351AA: mov     esi, eax
0x5351AC: mov     word ptr [esi+4], 8
0x5351B2: mov     word ptr [esi+6], 1
0x5351B8: mov     dword ptr [esi], offset ??_7HavokStreambufFactory@@6B@; const HavokStreambufFactory::`vftable'
0x5351BE: mov     eax, ds:0BA7FB4h
0x5351C3: test    eax, eax
0x5351C5: jz      short loc_5351E6
0x5351C7: cmp     word ptr [eax+4], 0
0x5351CC: mov     ecx, eax
0x5351CE: jz      short loc_5351E6
0x5351D0: add     word ptr [eax+6], 0FFFFh
0x5351D5: add     eax, 6
0x5351D8: cmp     word ptr [eax], 0
0x5351DC: jnz     short loc_5351E6
0x5351DE: mov     eax, [ecx]
0x5351E0: mov     edx, [eax]
0x5351E2: push    1
0x5351E4: call    edx
0x5351E6: lea     eax, [esp+124h+Buffer]
0x5351EA: push    eax; lpBuffer
0x5351EB: push    104h; nBufferLength
0x5351F0: mov     ds:0BA7FB4h, esi
0x5351F6: call    dword ptr ds:0A28100h
0x5351FC: lea     ecx, [esp+124h+Buffer]
0x535200: push    offset aTes4; "TES4"
0x535205: push    ecx; Str
0x535206: call    _strstr
0x53520B: add     esp, 8
0x53520E: test    eax, eax
0x535210: jnz     short loc_535228
0x535212: lea     edx, [esp+124h+Buffer]
0x535216: push    offset aTes4_0; "tes4"
0x53521B: push    edx; Str
0x53521C: call    _strstr
0x535221: add     esp, 8
0x535224: test    eax, eax
0x535226: jz      short loc_535245
0x535228: lea     ecx, [esp+124h+Buffer]
0x53522C: sub     eax, ecx
0x53522E: mov     esi, eax
0x535230: push    esi; Count
0x535231: mov     edx, ecx
0x535233: push    edx; Source
0x535234: lea     eax, [edi+20h]
0x535237: push    eax; Dest
0x535238: call    _strncpy
0x53523D: add     esp, 0Ch
0x535240: mov     byte ptr [esi+edi+20h], 0
0x535245: fld     dword ptr ds:0B376F8h
0x53524B: push    3
0x53524D: fstp    dword ptr ds:0B2E8A8h
0x535253: fld     dword ptr ds:0B374B0h
0x535259: fstp    dword ptr ds:0BA7A60h
0x53525F: fld     dword ptr ds:0B374B8h
0x535265: fstp    dword ptr ds:0B2E76Ch
0x53526B: call    ActorValue_GetMasterySkill
0x535270: mov     ecx, ds:0B11638h
0x535276: mov     [esp+128h+var_118], eax
0x53527A: fild    [esp+128h+var_118]
0x53527E: push    ecx
0x53527F: fmul    qword ptr ds:0A3B150h
0x535285: fstp    dword ptr ds:0B2E774h
0x53528B: fld     dword ptr ds:0B374A8h
0x535291: fstp    dword ptr ds:0B2E770h
0x535297: fld     dword ptr ds:0B37470h
0x53529D: fmul    qword ptr ds:0A39088h
0x5352A3: fstp    dword ptr ds:0B2E778h
0x5352A9: call    SetFromiSimType
0x5352AE: add     esp, 8
0x5352B1: mov     ecx, [esp+124h+var_C]
0x5352B8: mov     large fs:0, ecx
0x5352BF: pop     ecx
0x5352C0: pop     edi
0x5352C1: pop     esi
0x5352C2: mov     ecx, [esp+118h+var_10]
0x5352C9: xor     ecx, esp
0x5352CB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5352D0: add     esp, 118h
0x5352D6: retn
