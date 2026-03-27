0x5B1430: sub     esp, 104h
0x5B1436: mov     eax, ds:0B30AACh
0x5B143B: xor     eax, esp
0x5B143D: mov     [esp+104h+var_4], eax
0x5B1444: mov     eax, [esp+104h+arg_4]
0x5B144B: test    eax, eax
0x5B144D: push    esi
0x5B144E: mov     esi, [esp+108h+arg_0]
0x5B1455: jl      short loc_5B1471
0x5B1457: push    eax
0x5B1458: lea     eax, [esp+10Ch+var_104]
0x5B145C: push    offset aI; "%i"
0x5B1461: push    eax
0x5B1462: call    __sprintf
0x5B1467: add     esp, 0Ch
0x5B146A: lea     ecx, [esp+108h+var_104]
0x5B146E: push    ecx
0x5B146F: jmp     short loc_5B1476
0x5B1471: push    offset word_A36430
0x5B1476: push    0FB1h
0x5B147B: mov     ecx, esi
0x5B147D: call    Tile_SetString
0x5B1482: mov     eax, [esp+108h+arg_8]
0x5B1489: test    eax, eax
0x5B148B: jl      short loc_5B14A7
0x5B148D: push    eax
0x5B148E: lea     edx, [esp+10Ch+var_104]
0x5B1492: push    offset aI; "%i"
0x5B1497: push    edx
0x5B1498: call    __sprintf
0x5B149D: add     esp, 0Ch
0x5B14A0: lea     eax, [esp+108h+var_104]
0x5B14A4: push    eax
0x5B14A5: jmp     short loc_5B14AC
0x5B14A7: push    offset word_A36430
0x5B14AC: push    0FB2h
0x5B14B1: mov     ecx, esi
0x5B14B3: call    Tile_SetString
0x5B14B8: mov     eax, [esp+108h+arg_C]
0x5B14BF: test    eax, eax
0x5B14C1: jl      short loc_5B14DD
0x5B14C3: push    eax
0x5B14C4: lea     ecx, [esp+10Ch+var_104]
0x5B14C8: push    offset aI; "%i"
0x5B14CD: push    ecx
0x5B14CE: call    __sprintf
0x5B14D3: add     esp, 0Ch
0x5B14D6: lea     edx, [esp+108h+var_104]
0x5B14DA: push    edx
0x5B14DB: jmp     short loc_5B14E2
0x5B14DD: push    offset word_A36430
0x5B14E2: push    0FB3h
0x5B14E7: mov     ecx, esi
0x5B14E9: call    Tile_SetString
0x5B14EE: mov     ecx, [esp+108h+var_4]
0x5B14F5: pop     esi
0x5B14F6: xor     ecx, esp
0x5B14F8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5B14FD: add     esp, 104h
0x5B1503: retn    10h
