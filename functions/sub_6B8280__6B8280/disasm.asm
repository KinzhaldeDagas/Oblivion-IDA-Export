0x6B8280: sub     esp, 10Ch
0x6B8286: mov     eax, ds:0B30AACh
0x6B828B: xor     eax, esp
0x6B828D: mov     [esp+10Ch+var_4], eax
0x6B8294: push    ebx
0x6B8295: push    esi
0x6B8296: push    1; Size
0x6B8298: lea     eax, [esp+118h+Dst]
0x6B829C: mov     esi, ecx
0x6B829E: mov     ecx, ds:0B33B00h
0x6B82A4: push    eax; Dst
0x6B82A5: call    SaveLoad_LoadData
0x6B82AA: mov     bl, [esp+114h+Dst]
0x6B82AE: test    bl, bl
0x6B82B0: jz      short loc_6B82E3
0x6B82B2: push    104h
0x6B82B7: lea     ecx, [esp+118h+var_108]
0x6B82BB: push    0
0x6B82BD: push    ecx
0x6B82BE: call    __memset
0x6B82C3: mov     ecx, ds:0B33B00h
0x6B82C9: movzx   edx, bl
0x6B82CC: add     esp, 0Ch
0x6B82CF: push    edx; Size
0x6B82D0: lea     eax, [esp+118h+var_108]
0x6B82D4: push    eax; Dst
0x6B82D5: call    SaveLoad_LoadData
0x6B82DA: push    0
0x6B82DC: lea     ecx, [esp+118h+var_108]
0x6B82E0: push    ecx
0x6B82E1: jmp     short loc_6B82EA
0x6B82E3: push    0; a3
0x6B82E5: push    offset EmptyString; a2
0x6B82EA: mov     ecx, esi; this
0x6B82EC: call    BSStringT_Set
0x6B82F1: mov     ecx, ds:0B33B00h
0x6B82F7: push    1; Size
0x6B82F9: lea     edx, [esp+118h+var_10A]
0x6B82FD: push    edx; Dst
0x6B82FE: call    SaveLoad_LoadData
0x6B8303: mov     bl, [esp+114h+var_10A]
0x6B8307: test    bl, bl
0x6B8309: jz      short loc_6B833C
0x6B830B: push    104h
0x6B8310: lea     eax, [esp+118h+var_108]
0x6B8314: push    0
0x6B8316: push    eax
0x6B8317: call    __memset
0x6B831C: movzx   ecx, bl
0x6B831F: add     esp, 0Ch
0x6B8322: push    ecx; Size
0x6B8323: mov     ecx, ds:0B33B00h
0x6B8329: lea     edx, [esp+118h+var_108]
0x6B832D: push    edx; Dst
0x6B832E: call    SaveLoad_LoadData
0x6B8333: push    0
0x6B8335: lea     eax, [esp+118h+var_108]
0x6B8339: push    eax
0x6B833A: jmp     short loc_6B8343
0x6B833C: push    0; a3
0x6B833E: push    offset EmptyString; a2
0x6B8343: lea     ecx, [esi+10h]; this
0x6B8346: call    BSStringT_Set
0x6B834B: push    4; Size
0x6B834D: lea     ecx, [esi+8]
0x6B8350: push    ecx; Dst
0x6B8351: mov     ecx, ds:0B33B00h
0x6B8357: call    SaveLoad_LoadData
0x6B835C: mov     ecx, ds:0B33B00h
0x6B8362: push    4; Size
0x6B8364: add     esi, 0Ch
0x6B8367: push    esi; Dst
0x6B8368: call    SaveLoad_LoadData
0x6B836D: mov     ecx, [esp+114h+var_4]
0x6B8374: pop     esi
0x6B8375: pop     ebx
0x6B8376: xor     ecx, esp
0x6B8378: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6B837D: add     esp, 10Ch
0x6B8383: retn
